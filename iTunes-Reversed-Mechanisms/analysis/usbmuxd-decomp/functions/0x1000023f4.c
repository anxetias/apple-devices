// rea decompile_all
// name: FUN_1000023f4
// address: 0x1000023f4
// body: available
// range: 0x1000023f4-0x100002668 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000023f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                     PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  lVar3 = 0;
  if (lVar2 != 0) {
    _CFDictionaryAddValue(lVar2,PTR_cf_MessageType_100021110,PTR_cf_Attached_100021130);
    lVar3 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                       PTR__kCFTypeDictionaryValueCallBacks_10001c060);
    if (lVar3 == 0) {
      _CFRelease(lVar2);
      lVar3 = 0;
    }
    else {
      _CFDictionaryAddValue(lVar2,PTR_cf_Properties_100021200,lVar3);
      _CFRelease(lVar3);
      lVar4 = _CFNumberCreate(uVar1,3,param_1 + 0x188);
      if (lVar4 != 0) {
        _CFDictionaryAddValue(lVar3,PTR_cf_DeviceID_100021208,lVar4);
        _CFDictionaryAddValue(lVar2,PTR_cf_DeviceID_1000211a0,lVar4);
        _CFRelease(lVar4);
      }
      lVar4 = _CFStringCreateWithCString(uVar1,param_1 + 0x30,0x8000100);
      if (lVar4 != 0) {
        _CFDictionaryAddValue(lVar3,PTR_cf_SerialNumber_100021220,lVar4);
        _CFRelease(lVar4);
      }
      if (*(int *)(param_1 + 0x18) == 2) {
        _CFDictionaryAddValue(lVar3,PTR_cf_ConnectionType_100021238,PTR_cf_Network_100021268);
        _CFDictionaryAddValue
                  (lVar3,PTR_cf_NetworkAddress_100021258,*(undefined8 *)(param_1 + 0x140));
        _CFDictionaryAddValue
                  (lVar3,PTR_cf_EscapedFullServiceName_100021248,*(undefined8 *)(param_1 + 0x138));
        uVar5 = (ulong)*(uint *)(param_1 + 0x148);
        puVar6 = PTR_cf_InterfaceIndex_100021250;
      }
      else {
        if (*(int *)(param_1 + 0x18) != 1) {
          return lVar2;
        }
        _CFDictionaryAddValue(lVar3,PTR_cf_ConnectionType_100021238,PTR_cf_USB_100021260);
        if (*(long *)(param_1 + 0x138) != 0) {
          _CFDictionaryAddValue(lVar3,PTR_cf_USBSerialNumber_100021228);
        }
        FUN_100002da3(lVar3,PTR_cf_ProductID_100021210,*(undefined2 *)(param_1 + 0x184));
        FUN_100002da3(lVar3,PTR_cf_LocationID_100021218,*(undefined4 *)(param_1 + 0x18c));
        if (*(long *)(param_1 + 0x198) != 0) {
          _CFDictionaryAddValue(lVar3,PTR_cf_UDID_100021230);
        }
        if (2 < (ulong)*(uint *)(param_1 + 400)) {
          return lVar2;
        }
        uVar5 = *(ulong *)(&DAT_100013f88 + (ulong)*(uint *)(param_1 + 400) * 8);
        puVar6 = PTR_cf_ConnectionSpeed_100021240;
      }
      FUN_100002da3(lVar3,puVar6,uVar5);
      lVar3 = lVar2;
    }
  }
  return lVar3;
}

