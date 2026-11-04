// rea decompile_all
// name: PersonalizedImage::digestFileSha384:error:
// address: 0x1238e0
// body: available
// range: 0x1238e0-0x123b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID PersonalizedImage::digestFileSha384_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  CC_LONG len;
  undefined8 uVar2;
  uchar *puVar3;
  undefined8 uVar4;
  void *data;
  long lVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  CC_SHA512_CTX local_128;
  long local_58;
  char *local_50;
  char *local_48;
  uchar *local_40;
  ID *local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_128.wbuf[0xe] = 0;
  local_128.wbuf[0xf] = 0;
  local_128.wbuf[0xc] = 0;
  local_128.wbuf[0xd] = 0;
  local_128.wbuf[10] = 0;
  local_128.wbuf[0xb] = 0;
  local_128.wbuf[8] = 0;
  local_128.wbuf[9] = 0;
  local_128.wbuf[6] = 0;
  local_128.wbuf[7] = 0;
  local_128.wbuf[4] = 0;
  local_128.wbuf[5] = 0;
  local_128.wbuf[2] = 0;
  local_128.wbuf[3] = 0;
  local_128.wbuf[0] = 0;
  local_128.wbuf[1] = 0;
  local_128.hash[6] = 0;
  local_128.hash[7] = 0;
  local_128.hash[4] = 0;
  local_128.hash[5] = 0;
  local_128.hash[2] = 0;
  local_128.hash[3] = 0;
  local_128.hash[0] = 0;
  local_128.hash[1] = 0;
  local_128.count[0] = 0;
  local_128.count[1] = 0;
  if (param_3 == 0) {
    pcVar7 = &cf_Invalidinputs_;
    uVar4 = 0x310;
    uVar2 = 0xe8000007;
LAB_00123ad7:
    puVar3 = (uchar *)0x0;
    uVar2 = _createAndLogError("-[PersonalizedImage digestFileSha384:error:]",uVar4,uVar2,1,0,pcVar7
                              );
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
    local_58 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileHandle,"fileHandleForReadingAtPath:",uVar2);
    if (local_58 == 0) {
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
      pcVar7 = &cf_Failedtocreatefilehandlefor___;
      uVar4 = 0x316;
LAB_00123ad2:
      uVar2 = 0xe80000f1;
      goto LAB_00123ad7;
    }
    _CC_SHA384_Init(&local_128);
    puVar3 = _malloc(0x30);
    if (puVar3 == (uchar *)0x0) {
      pcVar7 = &cf_Failedtoallocatedigestmemory_;
      uVar4 = 0x31e;
      goto LAB_00123ad2;
    }
    local_50 = "readDataOfLength:";
    local_48 = "bytes";
    local_40 = puVar3;
    local_38 = param_4;
    do {
      uVar2 = _objc_autoreleasePoolPush();
      uVar4 = (*(code *)puVar1)(local_58,local_50,0x400);
      data = (void *)(*(code *)puVar1)(uVar4,local_48);
      len = (*(code *)puVar1)(uVar4,"length");
      _CC_SHA384_Update(&local_128,data,len);
      lVar5 = (*(code *)puVar1)(uVar4,"length");
      _objc_autoreleasePoolPop(uVar2);
      puVar3 = local_40;
    } while (lVar5 != 0);
    _CC_SHA384_Final(local_40,&local_128);
    uVar2 = _objc_alloc(&_OBJC_CLASS___NSData);
    IVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"initWithBytes:length:",puVar3,0x30);
    if (IVar6 != 0) {
      uVar2 = 0;
      goto LAB_00123afd;
    }
    uVar2 = _createAndLogError("-[PersonalizedImage digestFileSha384:error:]",0x33f,0xe80000f1,1,0,
                               &cf_Failedtoallocatememory_);
    param_4 = local_38;
  }
  if (param_4 != (ID *)0x0) {
    IVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar2);
    *param_4 = IVar6;
  }
  IVar6 = 0;
LAB_00123afd:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (puVar3 != (uchar *)0x0) {
    _free(puVar3);
  }
  return IVar6;
}

