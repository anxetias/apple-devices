// rea decompile_all
// name: _AMSChangeBackupPassword
// address: 0xc0e69
// body: available
// range: 0xc0e69-0xc1068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc1064 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSChangeBackupPassword(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int local_450;
  int local_44c;
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_sBackupPathString == 0) {
    uVar8 = 2;
  }
  else {
    cVar2 = _CFStringGetFileSystemRepresentation(_sBackupPathString,local_448,0x400);
    if (cVar2 == '\0') {
      __AMSDebugLog(
                   "AMSChangeBackupPassword: Can\'t get file system representation for backup tool path\n"
                   );
      uVar8 = 3;
    }
    else {
      uVar8 = 0;
      uVar3 = _ProcessLinkSetupParent(local_448,0);
      uVar4 = __createDictionaryWithRequestAndArgKeysAndValues
                        (&cf_AMSChangeBackupPassword,3,&cf_AMSTargetIdentifierKey,param_1,
                         &cf_AMSOldPassword,param_2,&cf_AMSPassword,param_3);
      _AMSProcessLinkSendMessageAsync(uVar3,uVar4);
      _CFRelease(uVar4);
      do {
        lVar5 = _AMSProcessLinkReadMessageFromChild(uVar3);
        local_44c = 100;
        local_450 = 0;
        if (lVar5 == 0) {
          pcVar7 = "NULL message received";
LAB_000c0f8f:
          _puts(pcVar7);
          bVar1 = false;
        }
        else {
          lVar6 = _CFDictionaryGetValue(lVar5,&cf_errorCode);
          if (lVar6 == 0) {
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_AMSBackupPercentageKey);
            if (lVar6 == 0) {
              pcVar7 = "No number found. Stopping.";
              goto LAB_000c0f8f;
            }
            _CFNumberGetValue(lVar6,9,&local_44c);
            bVar1 = true;
          }
          else {
            _CFNumberGetValue(lVar6,9,&local_450);
            local_44c = local_450;
            bVar1 = true;
          }
        }
        if (local_44c < 0) {
          bVar1 = false;
          _printf("Error number %d. Stopping\n");
          uVar8 = 3;
          if (param_4 != (int *)0x0) {
            *param_4 = local_44c;
            bVar1 = false;
          }
        }
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
      } while (bVar1);
      _AMSProcessLinkRelease(uVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

