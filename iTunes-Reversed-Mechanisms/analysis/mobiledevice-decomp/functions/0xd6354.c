// rea decompile_all
// name: _handleCrashLogMessage
// address: 0xd6354
// body: available
// range: 0xd6354-0xd65ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd64e2 to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xd65eb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleCrashLogMessage(AMRestoreMuxedDeviceMessage*) */

void _handleCrashLogMessage(AMRestoreMuxedDeviceMessage *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ssize_t sVar6;
  int *piVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  char local_c38 [1024];
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),&cf_LogDirectory);
  if (lVar2 != 0) {
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Filename);
    lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Data);
    if (lVar3 == 0 || lVar4 == 0) {
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        _AMRLog(7,&cf_Incompletecrashlogmessagerecieved_);
        return;
      }
      goto LAB_000d65eb;
    }
    ___bzero(local_838 + 0x20,0x3e0);
    ___bzero(local_c38,0x400);
    uVar5 = _CFStringCreateWithFormat
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf______,lVar2,lVar3);
    ___bzero(local_438,0x400);
    _CFStringGetCString(uVar5,local_438,0x400,0x8000100);
    iVar1 = _open(local_438,0x601,0x1a4);
    if (iVar1 < 0) {
      pcVar8 = &cf_Failedtoopencrashlogto__s;
      uVar5 = 3;
    }
    else {
      lVar2 = _CFDataGetLength(lVar4);
      lVar4 = _CFDataGetBytePtr(lVar4);
      if (lVar2 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          sVar6 = _write(iVar1,(void *)(lVar4 + lVar9),lVar2 - lVar9);
          if (sVar6 < 0) {
            piVar7 = ___error();
            if (*piVar7 != 0x23) break;
          }
          else {
            lVar9 = lVar9 + sVar6;
          }
        } while (lVar9 < lVar2);
      }
      _close(iVar1);
      if (lVar9 == lVar2) {
        pcVar8 = &cf_Wrotecrashlog__s;
        uVar5 = 6;
      }
      else {
        _unlink(local_438);
        pcVar8 = &cf_Failedtowritecrashlogto__s;
        uVar5 = 3;
      }
    }
    _AMRLog(uVar5,pcVar8,local_438);
    builtin_strncpy(local_838 + 0x10,"agnosticReports/",0x11);
    builtin_strncpy(local_838,"/Library/Logs/Di",0x10);
    _CFStringGetCString(lVar3,local_c38,0x400,0x8000100);
    _strlcat(local_838,local_c38,0x400);
    iVar1 = _copyfile(local_438,local_838,(copyfile_state_t)0x0,0xf);
    if (iVar1 != 0) {
      _AMRLog(3,&cf_Failedtocopycrashlogtocrashreporterfolder__s,local_838);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
LAB_000d65eb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

