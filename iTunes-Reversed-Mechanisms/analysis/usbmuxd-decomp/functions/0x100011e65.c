// rea decompile_all
// name: FUN_100011e65
// address: 0x100011e65
// body: available
// range: 0x100011e65-0x100012082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100011e65(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  
  lVar2 = FUN_100012191();
  if (lVar2 == 0) {
    if (DAT_100021030 < 3) {
      return 0xffffffff;
    }
    FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__sFailedtofinddevicepropertiesfor_____,
                  "_SendAttachNotification",param_1);
    return 0xffffffff;
  }
  lVar3 = _CFDictionaryGetValue(lVar2,&cf_AttachedInterfaceIndex);
  if ((lVar3 != 0) &&
     (cVar1 = _CFEqual(lVar3,*(undefined8 *)PTR__kCFNumberNaN_10001c038), cVar1 == '\0')) {
    uVar4 = _CFDictionaryGetValue(lVar2,&cf_InterfaceIndex);
    cVar1 = _CFEqual(lVar3,uVar4);
    if (cVar1 == '\0') {
      if (4 < DAT_100021030) {
        uVar4 = _CFDictionaryGetValue(lVar2,&cf_FullEscapedServiceName);
        uVar5 = _CFDictionaryGetValue(lVar2,&cf_AttachedInterfaceIndex);
        FUN_1000008d2(5,0,&cf__sDevice__hasalreadyappearedoninterface___Sendingdetachnotification_,
                      "_SendAttachNotification",uVar4,uVar5);
      }
      FUN_100011261(param_1,param_3);
    }
  }
  uVar4 = _CFDictionaryGetValue(lVar2,&cf_InterfaceIndex);
  _CFDictionarySetValue(lVar2,&cf_AttachedInterfaceIndex,uVar4);
  _CFDictionarySetValue(lVar2,&cf_UniqueDeviceID,param_2);
  lVar3 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                     PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  _CFDictionarySetValue(lVar3,&cf_EventTypeKey,&cf_EventDeviceAttach);
  _CFDictionarySetValue(lVar3,&cf_DeviceDictionaryKey,lVar2);
  if (param_3 == 0) {
    if (DAT_100021030 < 3) goto LAB_100011ffb;
    pcVar6 = &cf__ssendingattachfordevice_______;
    lVar7 = lVar2;
  }
  else {
    if (DAT_100021030 < 3) goto LAB_100011ffb;
    pcVar6 = &cf__ssendingattachfordevice____________;
    lVar7 = param_1;
    param_1 = lVar2;
  }
  FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",pcVar6,"_SendAttachNotification",lVar7,param_1);
LAB_100011ffb:
  FUN_10000f398(lVar3);
  _CFRelease(lVar3);
  return 0;
}

