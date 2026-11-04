// rea decompile_all
// name: _AMAuthInstallBasebandGetTagForKeyHashName
// address: 0x1a36cc
// body: available
// range: 0x1a36cc-0x1a37f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandGetTagForKeyHashName(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    _AMAuthInstallBasebandGetTagForKeyHashName_cold_3();
  }
  else if (param_2 == 0) {
    _AMAuthInstallBasebandGetTagForKeyHashName_cold_2();
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      lVar1 = _CFStringCompare(&cf_BbProvisioningManifestKeyHash,param_2,0);
      if (lVar1 == 0) {
        if ((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0x50)) {
          puVar2 = &_kAMAuthInstallTagBbSKeyId;
        }
        else {
          puVar2 = &_kAMAuthInstallTagBbProvisioningKeyHash;
        }
LAB_001a37b1:
        *param_3 = *puVar2;
        return 0;
      }
      lVar1 = _CFStringCompare(&cf_BbActivationManifestKeyHash,param_2,0);
      if (lVar1 == 0) {
        puVar2 = &_kAMAuthInstallTagBbActivationKeyHash;
      }
      else {
        lVar1 = _CFStringCompare(&cf_BbCalibrationManifestKeyHash,param_2,0);
        if (lVar1 == 0) {
          puVar2 = &_kAMAuthInstallTagBbCalibrationKeyHash;
        }
        else {
          lVar1 = _CFStringCompare(&cf_BbFactoryActivationManifestKeyHash,param_2,0);
          if (lVar1 != 0) {
            lVar1 = _CFStringCompare(&cf_BbFDRSecurityKeyHash,param_2,0);
            if (lVar1 != 0) {
              return 8;
            }
            puVar2 = &_kAMAuthInstallTagBbFDRSecurityKeyHash;
            goto LAB_001a37b1;
          }
          puVar2 = &_kAMAuthInstallTagBbFactoryActivationKeyHash;
        }
      }
      *param_3 = *puVar2;
      return 0;
    }
    _AMAuthInstallBasebandGetTagForKeyHashName_cold_1();
  }
  return 1;
}

