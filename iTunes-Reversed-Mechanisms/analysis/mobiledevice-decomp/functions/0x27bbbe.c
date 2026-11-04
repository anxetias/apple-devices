// rea decompile_all
// name: _AMAuthInstallBasebandCreateServerRequestDictionary
// address: 0x27bbbe
// body: available
// range: 0x27bbbe-0x27bcd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandCreateServerRequestDictionary
              (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    pcVar4 = "%s: measurementDict is NULL";
  }
  else if (param_4 == (undefined8 *)0x0) {
    pcVar4 = "%s: outRequestDict is NULL";
  }
  else {
    if (param_5 != 0) {
      uVar2 = _CFGetAllocator();
      if (param_3 == 0) {
        lVar3 = _CFDictionaryCreateMutable
                          (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      }
      else {
        lVar3 = _CFDictionaryCreateMutableCopy(uVar2,0,param_3);
      }
      if (lVar3 == 0) {
        iVar1 = 2;
        lVar3 = 0;
      }
      else {
        _CFDictionarySetValue(lVar3,&cf_BasebandFirmware,param_2);
        iVar1 = _AMAuthInstallBasebandServerRequestAddRequiredTags(param_1,lVar3,param_5);
        if (iVar1 == 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            _AMAuthInstallApServerRequestAddRequiredTags(param_1,lVar3,0);
          }
          uVar2 = _CFRetain(lVar3);
          *param_4 = uVar2;
          iVar1 = 0;
        }
      }
      goto LAB_0027bc7c;
    }
    pcVar4 = "%s: bbfwURL is NULL";
  }
  lVar3 = 0;
  _AMAuthInstallLog(3,"AMAuthInstallBasebandCreateServerRequestDictionary",pcVar4);
  iVar1 = 1;
LAB_0027bc7c:
  _SafeRelease(lVar3);
  return iVar1;
}

