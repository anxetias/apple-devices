// rea decompile_all
// name: _MISProvisioningProfileCheckValidity
// address: 0xbefc0
// body: available
// range: 0xbefc0-0xbf054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MISProvisioningProfileCheckValidity(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = _MISProfileValidateSignatureWithAnchorsAndPolicy(param_1,0,1);
  if ((int)uVar3 == 0) {
    iVar2 = _MISProvisioningProfileGetVersion(param_1);
    uVar3 = 0xe8008010;
    if (iVar2 == 1) {
      if ((param_2 != 0) &&
         (cVar1 = _MISProvisioningProfileIncludesDevice(param_1,param_2), cVar1 == '\0')) {
        return 0xe8008012;
      }
      uVar3 = 0;
      if (param_3 != 0) {
        lVar4 = _MISProfileGetValue(param_1,&cf_ExpirationDate);
        if ((lVar4 != 0) && (lVar4 = _CFDateCompare(param_3,lVar4,0), lVar4 != -1)) {
          return 0xe8008011;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

