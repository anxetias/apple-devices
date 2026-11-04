// rea decompile_all
// name: _copyPrivateKeyFromPKCS8
// address: 0x12acea
// body: available
// range: 0x12acea-0x12b061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12b05d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copyPrivateKeyFromPKCS8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  local_3c = 1;
  local_38 = 0;
  local_78 = 0;
  local_70 = &cf_mobiledevice;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_30 = *(undefined8 *)PTR__kSecAttrCanSign_004411e0;
  local_50 = (*(code *)PTR__objc_msgSend_00441098)
                       (&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_30,1);
  puVar1 = PTR__objc_msgSend_00441098;
  local_48 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Invalid argument.";
LAB_0012aef8:
    __os_log_internal(0,_md_log_log,1,pcVar3);
  }
  else {
    pcVar3 = (char *)(*(code *)PTR__objc_msgSend_00441098)(param_1,"bytes");
    sVar4 = (*(code *)puVar1)(param_1,"length");
    pcVar5 = _strnstr(pcVar3,"-----BEGIN PRIVATE KEY-----\n",sVar4);
    pcVar3 = _strnstr(pcVar3,"\n-----END PRIVATE KEY-----\n",sVar4);
    if (pcVar5 == (char *)0x0 || pcVar3 == (char *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar3 = "Failed to parse PEM delimiters.";
      goto LAB_0012aef8;
    }
    uVar6 = _objc_autoreleasePoolPush();
    lVar7 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSData,"dataWithBytesNoCopy:length:freeWhenDone:",
                       pcVar5 + 0x1c,(long)pcVar3 - (long)(pcVar5 + 0x1c),0);
    if (lVar7 == 0) {
      pcVar3 = "Failed to extract PEM body.";
    }
    else {
      uVar8 = _objc_alloc(&_OBJC_CLASS___NSData);
      lVar7 = (*(code *)PTR__objc_msgSend_00441098)
                        (uVar8,"initWithBase64EncodedData:options:",lVar7,1);
      if (lVar7 != 0) {
        _objc_autoreleasePoolPop(uVar6);
        iVar2 = _SecItemImport(lVar7,0,&local_40,&local_3c,0,&local_78,0,&local_38);
        if (iVar2 == 0) {
          lVar9 = _CFArrayGetValueAtIndex(local_38,0);
          if (lVar9 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar9 = 0;
            __os_log_internal(0,_md_log_log,1,"Failed to get private key");
          }
          else {
            _CFRetain(lVar9);
          }
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar9 = 0;
          __os_log_internal(0,_md_log_log,1,"Failed to create private key: %d",iVar2);
        }
        goto LAB_0012af50;
      }
      pcVar3 = "Failed to decode PEM body.";
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,pcVar3);
    _objc_autoreleasePoolPop(uVar6);
  }
  lVar7 = 0;
  lVar9 = 0;
LAB_0012af50:
  if (local_38 != 0) {
    _CFRelease();
  }
  local_38 = 0;
  (*(code *)PTR__objc_release_004410a0)(lVar7);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

