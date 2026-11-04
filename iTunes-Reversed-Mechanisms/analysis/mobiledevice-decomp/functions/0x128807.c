// rea decompile_all
// name: _lib_auth_install_log_handler
// address: 0x128807
// body: available
// range: 0x128807-0x128a0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x128a06 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lib_auth_install_log_handler(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = _objc_autoreleasePoolPush();
  lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  if (lVar4 != 0) {
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (&cf_libauthinstall_,"stringByAppendingString:",lVar4);
    if (lVar4 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"%@",lVar4);
      puVar1 = PTR__objc_msgSend_00441098;
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"stringByAppendingString:",&cf_newline_s_)
      ;
      uVar5 = (*(code *)puVar1)(uVar5,"dataUsingEncoding:",4);
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
      cVar2 = (*(code *)puVar1)(uVar6,"fileExistsAtPath:",&cf__tmp_libauthinstall_logs_txt);
      if (cVar2 == '\0') {
        uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
        local_48 = *(undefined8 *)PTR__NSFilePosixPermissions_00441058;
        local_40 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",0x1ff);
        uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:"
                                  ,&local_40,&local_48,1);
        (*(code *)puVar1)(uVar6,"createFileAtPath:contents:attributes:",
                          &cf__tmp_libauthinstall_logs_txt,uVar5,uVar7);
      }
      else {
        lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                          (&_OBJC_CLASS___NSFileHandle,"fileHandleForWritingAtPath:",
                           &cf__tmp_libauthinstall_logs_txt);
        if (lVar4 != 0) {
          (*(code *)puVar1)(lVar4,"seekToEndOfFile");
          (*(code *)puVar1)(lVar4,"writeData:",uVar5);
          (*(code *)puVar1)(lVar4,"closeFile");
        }
      }
    }
  }
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

