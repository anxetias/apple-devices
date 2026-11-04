// rea decompile_all
// name: _process_entry_from_old
// address: 0xaf71f
// body: available
// range: 0xaf71f-0xaf8c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaf8be to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _process_entry_from_old(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(char *)(param_3 + 0xb) == '\0') {
    piVar2 = (int *)_CFDataGetBytePtr(param_2);
    pcVar8 = &cf_DIRS;
    if (*piVar2 == 10) {
      pcVar8 = &cf_LINKS;
    }
    pcVar9 = &cf_FILES;
    if (*piVar2 != 8) {
      pcVar9 = pcVar8;
    }
    uVar3 = _CFDictionaryGetValue(*param_3,pcVar9);
    uVar4 = _CFDictionaryGetValue(param_3[3],&cf_DELS);
    cVar1 = _CFDictionaryContainsKey(uVar3,param_1);
    if (cVar1 == '\0') {
      ___bzero(local_438,0x400);
      lVar5 = _CFDictionaryGetValue(*param_3,&cf_DIRS);
      if (lVar5 != 0) {
        lVar6 = _CFDictionaryGetCount(lVar5);
        if (lVar6 != 0) {
          cVar1 = _CFStringGetFileSystemRepresentation(param_1,local_438,0x400);
          if (cVar1 == '\0') {
            _process_entry_from_old_cold_1();
          }
          else {
            pcVar7 = _rindex(local_438,0x2f);
            if (pcVar7 != (char *)0x0 && pcVar7 != local_438) {
              *pcVar7 = '\0';
              lVar6 = _CFStringCreateWithFileSystemRepresentation(0,local_438);
              if (lVar6 == 0) {
                _dmlog("parentExistsInNew",0xef,&cf__sunabletocreateCFStringfrom_s,
                       "parentExistsInNew",local_438);
                goto LAB_000af7ac;
              }
              cVar1 = _CFDictionaryContainsKey(lVar5,lVar6);
              _CFRelease(lVar6);
              if (cVar1 == '\0') goto LAB_000af7ac;
            }
            _CFDictionarySetValue(uVar4,param_1,param_2);
          }
        }
      }
    }
  }
LAB_000af7ac:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

