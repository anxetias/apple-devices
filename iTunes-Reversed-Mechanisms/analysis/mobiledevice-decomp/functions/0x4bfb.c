// rea decompile_all
// name: _AMSupportHttpCreateDataFromURL
// address: 0x4bfb
// body: available
// range: 0x4bfb-0x4d75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d71 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportHttpCreateDataFromURL
              (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  iVar1 = 1;
  if (param_4 != (undefined8 *)0x0 && param_2 != 0) {
    lVar2 = _CFHTTPMessageCreateRequest
                      (param_1,&cf_GET,param_2,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
    iVar1 = 2;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar3 = _CFDataCreateMutable(param_1,0);
      lVar5 = 0;
      if ((lVar3 != 0) &&
         (iVar1 = _AMSupportHttpMessageSendSyncWithOptions
                            (lVar2,param_3,lVar3,&local_48,&local_40,&local_50), lVar5 = lVar3,
         iVar1 == 0)) {
        if (local_40 == 200) {
          uVar4 = _CFRetain(lVar3);
          *param_4 = uVar4;
          iVar1 = 0;
        }
        else {
          _AMSupportLogInternal(3,"AMSupportHttpCreateDataFromURL","httpStatus is %ld");
          iVar1 = 0xe;
        }
      }
    }
    if (local_50 != 0) {
      _AMSupportLogInternal(3,"AMSupportHttpCreateDataFromURL","command failed with error: %@");
    }
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    if (local_50 != 0) {
      _CFRelease();
      local_50 = 0;
    }
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

