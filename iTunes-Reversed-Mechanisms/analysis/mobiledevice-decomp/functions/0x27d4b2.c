// rea decompile_all
// name: _AMAuthInstallBasebandLocalSetSigningParameters
// address: 0x27d4b2
// body: available
// range: 0x27d4b2-0x27d67a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandLocalSetSigningParameters
              (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = 1;
  if ((param_1 != 0) &&
     (((param_3 != 0 && param_2 != 0) && param_4 != 0 ||
      (((param_4 == 0 && param_5 == 0) && (param_2 == 0 && param_3 == 0)) && param_6 == 0)))) {
    if (*(undefined8 **)(param_1 + 0x170) != (undefined8 *)0x0) {
      _AMAuthInstallReleaseRsaKeyData(**(undefined8 **)(param_1 + 0x170));
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x170) + 8));
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x10));
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18));
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x20));
      _free(*(void **)(param_1 + 0x170));
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = _CFGetAllocator(param_1);
      iVar1 = _AMAuthInstallCopyRsaKeyDataForKey(uVar2,param_2,&local_38);
      if (iVar1 == 0) {
        pvVar3 = _calloc(1,0x28);
        *(void **)(param_1 + 0x170) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          iVar1 = 2;
        }
        else {
          uVar2 = _CFRetain(local_38);
          **(undefined8 **)(param_1 + 0x170) = uVar2;
          uVar2 = _CFRetain(param_3);
          *(undefined8 *)(*(long *)(param_1 + 0x170) + 8) = uVar2;
          uVar2 = _CFRetain(param_4);
          *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x10) = uVar2;
          uVar2 = _CFRetain(param_6);
          *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x20) = uVar2;
          uVar2 = _SavageSafeRetain(param_5);
          *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18) = uVar2;
          iVar1 = 0;
        }
      }
      else {
        uVar2 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar1);
        _AMAuthInstallLog(3,"AMAuthInstallBasebandLocalSetSigningParameters",
                          "bad local signing key: %@",uVar2);
      }
    }
  }
  _SafeRelease(local_38);
  _SafeRelease(0);
  return iVar1;
}

