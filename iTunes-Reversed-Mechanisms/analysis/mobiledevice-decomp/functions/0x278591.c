// rea decompile_all
// name: _AMAuthInstallApImg4ServerRequestAddRequiredTagsWithRecoveryOS
// address: 0x278591
// body: available
// range: 0x278591-0x278863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x278856 to 0x27849a _AMAuthInstallApImg4ServerRequestAddUIDMode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApImg4ServerRequestAddRequiredTagsWithRecoveryOS
          (long param_1,long param_2,char param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return 1;
  }
  if (*(char *)(lVar2 + 0x74) == '\0') {
    puVar1 = &_kAMAuthInstallTagApSecurityMode;
  }
  else {
    puVar1 = &_kAMAuthInstallTagX86SecurityMode;
  }
  __CFDictionarySetBoolean(param_2,*puVar1,*(undefined1 *)(lVar2 + 0x48));
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x4a) != '\0') {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x74) == '\0') {
      puVar1 = &_kAMAuthInstallTagApAllowMixAndMatch;
    }
    else {
      puVar1 = &_kAMAuthInstallTagX86AllowMixAndMatch;
    }
    _CFDictionarySetValue(param_2,*puVar1,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x4b) != '\0') {
    _CFDictionarySetValue
              (param_2,&cf_Ap_InternalUseOnlySW,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x74) == '\0') {
    if (*(char *)(lVar2 + 0x4f) != '\0') {
      __CFDictionarySetInteger32(param_2,&cf_Ap_UseGlobalSigning,1);
    }
    if (param_3 == '\0') goto LAB_00278833;
  }
  else {
    __CFDictionarySetBoolean(param_2,&cf_x86_ProductionMode,*(undefined1 *)(lVar2 + 0x14));
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x4f) != '\0') {
      __CFDictionarySetInteger32(param_2,&cf_x86_UseGlobalSigning,1);
    }
    if (param_3 == '\0') goto LAB_00278833;
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x18) != 0) {
      _CFDictionarySetValue(param_2,&cf_x86_Nonce);
    }
    _CFDictionarySetValue(param_2,&cf__x86_Ticket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x74) == '\0') {
    _CFDictionarySetValue(param_2,&cf__ApImg4Ticket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0x18) != 0) {
    _CFDictionarySetValue(param_2,&cf_ApNonce);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    _CFDictionarySetValue(param_2,&cf_SepNonce);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    _CFDictionarySetValue(param_2,&cf_Ap_SoftwareNonceForUpdateFreshness);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0x78) != 0) {
    _CFDictionarySetValue(param_2,&cf__BCert);
    _CFDictionarySetValue(param_2,&cf__Managed,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0x80) != 0) {
    _CFDictionarySetValue(param_2,&cf__BCert);
    _CFDictionarySetValue(param_2,&cf__AlternateSU,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0xa0) != 0) {
    _CFDictionarySetValue(param_2,&cf_Ap_SikaFuse);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(lVar2 + 0xc0) != 0) {
    _CFDictionarySetValue(param_2,&cf_Ap_DisablePlatformOnlyCode);
  }
LAB_00278833:
  uVar3 = _AMAuthInstallApImg3ServerRequestAddRequiredTags(param_1,param_2,0,param_4);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = _AMAuthInstallApImg4ServerRequestAddUIDMode(param_1,param_2);
  return uVar3;
}

