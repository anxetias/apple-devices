// rea decompile_all
// name: _AMSupportHttpCreatePostRequest
// address: 0x262ddd
// body: available
// range: 0x262ddd-0x262f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x262f50 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportHttpCreatePostRequest
              (undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  lVar2 = 0;
  iVar1 = 1;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar4 = 0;
    if (param_4 == (undefined8 *)0x0) goto LAB_00262ee5;
    iVar1 = _AMSupportHttpCreatePostBody(param_1,param_3,&local_40);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (local_40 == 0) {
        iVar1 = 2;
      }
      else {
        lVar2 = _CFHTTPMessageCreateRequest
                          (param_1,&cf_POST,param_2,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
        if (lVar2 != 0) {
          uVar4 = _CFDataGetLength(local_40);
          iVar1 = 0;
          uVar4 = _CFStringCreateWithFormat(param_1,0,&cf__lu,uVar4);
          _CFHTTPMessageSetHeaderFieldValue(lVar2,&cf_Content_Type,&cf_text_xml_charset__utf_8_);
          _CFHTTPMessageSetHeaderFieldValue(lVar2,&cf_Content_Length,uVar4);
          _CFHTTPMessageSetBody(lVar2,local_40);
          uVar3 = _CFRetain(lVar2);
          *param_4 = uVar3;
          goto LAB_00262ee5;
        }
      }
    }
    else {
      _AMSupportLogInternal(3,"AMSupportHttpCreatePostRequest","AMSupportHttpCreatePostBody failed")
      ;
    }
  }
  lVar2 = 0;
  uVar4 = 0;
LAB_00262ee5:
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(lVar2);
  _AMSupportSafeRelease(uVar4);
  _AMSupportSafeRelease(0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

