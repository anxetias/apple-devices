// rea decompile_all
// name: PersonalizedImage::digestFileSha1:error:
// address: 0x123643
// body: available
// range: 0x123643-0x12385c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID PersonalizedImage::digestFileSha1_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  CC_LONG len;
  undefined8 uVar2;
  uchar *puVar3;
  undefined8 uVar4;
  void *data;
  long lVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined1 local_b8 [112];
  char *local_48;
  ID *local_40;
  uchar *local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_b8._80_4_ = 0;
  local_b8._84_4_ = 0;
  local_b8._88_4_ = 0;
  local_b8._92_4_ = 0;
  local_b8._64_4_ = 0;
  local_b8._68_4_ = 0;
  local_b8._72_4_ = 0;
  local_b8._76_4_ = 0;
  local_b8._48_4_ = 0;
  local_b8._52_4_ = 0;
  local_b8._56_4_ = 0;
  local_b8._60_4_ = 0;
  local_b8._32_4_ = 0;
  local_b8._36_4_ = 0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = 0;
  local_b8._28_4_ = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b8._8_4_ = 0;
  local_b8._12_4_ = 0;
  if (param_3 == 0) {
    pcVar8 = &cf_Invalidinputs_;
    uVar4 = 0x2ce;
    uVar2 = 0xe8000007;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
    local_b8._96_8_ =
         (*(code *)puVar1)(&_OBJC_CLASS___NSFileHandle,"fileHandleForReadingAtPath:",uVar2);
    if (local_b8._96_8_ == 0) {
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
      pcVar8 = &cf_Failedtocreatefilehandlefor___;
      uVar4 = 0x2d4;
    }
    else {
      _CC_SHA1_Init((CC_SHA1_CTX *)local_b8);
      puVar3 = _malloc(0x14);
      if (puVar3 != (uchar *)0x0) {
        local_b8._104_8_ = "readDataOfLength:";
        local_48 = "bytes";
        local_40 = param_4;
        local_38 = puVar3;
        do {
          uVar2 = _objc_autoreleasePoolPush();
          uVar4 = (*(code *)puVar1)(local_b8._96_8_,local_b8._104_8_,0x400);
          data = (void *)(*(code *)puVar1)(uVar4,local_48);
          len = (*(code *)puVar1)(uVar4,"length");
          _CC_SHA1_Update((CC_SHA1_CTX *)local_b8,data,len);
          lVar5 = (*(code *)puVar1)(uVar4,"length");
          _objc_autoreleasePoolPop(uVar2);
          puVar3 = local_38;
        } while (lVar5 != 0);
        _CC_SHA1_Final(local_38,(CC_SHA1_CTX *)local_b8);
        uVar2 = _objc_alloc(&_OBJC_CLASS___NSData);
        IVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"initWithBytes:length:",puVar3,0x14);
        uVar2 = 0;
        param_4 = local_40;
        goto LAB_00123815;
      }
      pcVar8 = &cf_Failedtoallocatedigestmemory_;
      uVar4 = 0x2dc;
    }
    uVar2 = 0xe80000f1;
  }
  puVar3 = (uchar *)0x0;
  uVar2 = _createAndLogError("-[PersonalizedImage digestFileSha1:error:]",uVar4,uVar2,1,0,pcVar8);
  IVar6 = 0;
LAB_00123815:
  if (param_4 != (ID *)0x0 && IVar6 == 0) {
    IVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar2);
    *param_4 = IVar7;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (puVar3 != (uchar *)0x0) {
    _free(puVar3);
  }
  return IVar6;
}

