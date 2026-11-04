// rea decompile_all
// name: __USBMuxCustomRunLoopSourcePerformCallback
// address: 0xc485a
// body: available
// range: 0xc485a-0xc4eb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc4df4 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __USBMuxCustomRunLoopSourcePerformCallback(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  lVar3 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x10));
  if (0 < lVar3) {
    lVar3 = 0;
    do {
      uVar4 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x10),lVar3);
      lVar5 = _CFDictionaryGetValue(uVar4,_kUSBMuxParam_MessageType);
      if ((lVar5 == 0) || (cVar2 = _CFEqual(lVar5,_kUSBMuxMessageType_Attached), cVar2 == '\0')) {
        lVar5 = lVar3 + 1;
      }
      else {
        uVar4 = _CFDictionaryGetValue(uVar4,_kUSBMuxParam_DeviceID);
        lVar5 = lVar3 + 1;
        lVar6 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x10));
        lVar13 = lVar5;
        if (lVar5 < lVar6) {
          do {
            lVar6 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x10),lVar13);
            if ((((lVar6 != 0) &&
                 (lVar7 = _CFDictionaryGetValue(lVar6,_kUSBMuxParam_MessageType), lVar7 != 0)) &&
                (cVar2 = _CFEqual(lVar7,_kUSBMuxMessageType_Detached), cVar2 != '\0')) &&
               ((lVar6 = _CFDictionaryGetValue(lVar6,_kUSBMuxParam_DeviceID), lVar6 != 0 &&
                (cVar2 = _CFEqual(lVar6,uVar4), cVar2 != '\0')))) {
              _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0x10),lVar13);
              _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0x10),lVar3);
              lVar5 = lVar3;
              break;
            }
            lVar13 = lVar13 + 1;
            lVar6 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x10));
          } while (lVar13 < lVar6);
        }
      }
      lVar13 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x10));
      lVar3 = lVar5;
    } while (lVar5 < lVar13);
  }
  lVar3 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x10));
  if (lVar3 == 0) {
    return;
  }
  if (((1 < lVar3) && (*(long *)(param_1 + 0x58) != 0)) &&
     (_CFRunLoopSourceSignal(), *(long *)(param_1 + 0x60) != 0)) {
    _CFRunLoopWakeUp();
  }
  uVar4 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x10),0);
  _CFRetain(uVar4);
  _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0x10),0);
  lVar3 = _CFDictionaryGetValue(uVar4,_kUSBMuxParam_MessageType);
  if (lVar3 == 0) goto LAB_000c4de3;
  cVar2 = _CFEqual(lVar3,_kUSBMuxMessageType_Attached);
  if (cVar2 == '\0') {
    cVar2 = _CFEqual(lVar3,_kUSBMuxMessageType_Detached);
    if (cVar2 == '\0') {
      cVar2 = _CFEqual(lVar3,_kUSBMuxMessageType_Paired);
      if (cVar2 == '\0') goto LAB_000c4de3;
      cVar2 = _GetDictionaryUIntValue(uVar4,_kUSBMuxParam_DeviceID,&local_34);
      if (cVar2 != '\0') {
        if ((*(int *)(param_1 + 0x9c) != local_34 && *(int *)(param_1 + 0x9c) != 0) ||
           (((iVar1 = *(int *)(param_1 + 8), iVar1 != 3 && (iVar1 != 2)) && (iVar1 != 0))))
        goto LAB_000c4de3;
        pcVar9 = *(code **)(param_1 + 0x30);
        goto LAB_000c4cf8;
      }
      pcVar8 = "%s:%d Paired dictionary was missing the device ID\n";
      pcVar12 = "USBMuxHandlePairedDictionary";
      uVar10 = 0x574;
    }
    else {
      cVar2 = _GetDictionaryUIntValue(uVar4,_kUSBMuxParam_DeviceID,&local_34);
      if (cVar2 != '\0') {
        if ((*(int *)(param_1 + 0x9c) != local_34 && *(int *)(param_1 + 0x9c) != 0) ||
           (((iVar1 = *(int *)(param_1 + 8), iVar1 != 3 && (iVar1 != 2)) && (iVar1 != 0))))
        goto LAB_000c4de3;
        pcVar9 = *(code **)(param_1 + 0x20);
LAB_000c4cf8:
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(*(undefined8 *)(param_1 + 0x38),param_1);
        }
        goto LAB_000c4de3;
      }
      pcVar8 = "%s:%d Detach dictionary was missing the device ID\n";
      pcVar12 = "USBMuxHandleDetachDictionary";
      uVar10 = 0x54c;
    }
  }
  else {
    lVar3 = _CFDictionaryGetValue(uVar4,_kUSBMuxParam_Properties);
    if (lVar3 != 0) {
      lVar5 = _CFGetTypeID(lVar3);
      lVar13 = _CFDictionaryGetTypeID();
      if (lVar5 == lVar13) {
        if (*(int *)(param_1 + 0x98) != 0) {
          local_34 = 0;
          local_38 = 0;
          cVar2 = _GetDictionaryUIntValue(lVar3,_kUSBMuxProperty_DeviceID);
          if (cVar2 == '\0') {
            _USBMuxDebugLog("%s:%d proprty dictionary missing device id\n",
                            "USBMuxHandleAttachDictionary",0x4bd);
          }
          cVar2 = _GetDictionaryUIntValue(lVar3,_kUSBMuxProperty_LocationID,&local_38);
          if ((cVar2 == '\0') || (local_38 != *(int *)(param_1 + 0x98))) goto LAB_000c4de3;
          *(int *)(param_1 + 0x9c) = local_34;
        }
        if (2 < *(int *)(param_1 + 8)) {
          if ((*(int *)(param_1 + 8) == 3) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
            (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x38),param_1,lVar3);
            goto LAB_000c4de3;
          }
          pcVar8 = "%s:%d Unsupported version: %d\n";
          pcVar12 = "USBMuxHandleAttachDictionary";
          uVar10 = 0x523;
          goto LAB_000c4ddc;
        }
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        cVar2 = _GetDictionaryUIntValue(lVar3,_kUSBMuxProperty_DeviceID);
        if (cVar2 == '\0') {
          _USBMuxDebugLog("%s:%d proprty dictionary missing device id\n",
                          "USBMuxHandleAttachDictionary",0x4e2);
        }
        cVar2 = _GetDictionaryUIntValue(lVar3,_kUSBMuxProperty_ProductID,&local_38);
        if (cVar2 == '\0') {
          _USBMuxDebugLog("%s:%d proprty dictionary missing product id\n",
                          "USBMuxHandleAttachDictionary",0x4e7);
        }
        cVar2 = _GetDictionaryUIntValue(lVar3,_kUSBMuxProperty_LocationID,&local_3c);
        if (cVar2 == '\0') {
          _USBMuxDebugLog("%s:%d proprty dictionary missing location id\n",
                          "USBMuxHandleAttachDictionary",0x4ec);
        }
        lVar3 = _CFDictionaryGetValue(lVar3,_kUSBMuxProperty_SerialNumber);
        if (lVar3 == 0) {
LAB_000c4d5f:
          pcVar8 = "%s:%d proprty dictionary missing serial number\n";
          pcVar12 = (char *)0x0;
          uVar10 = 0x504;
LAB_000c4d75:
          _USBMuxDebugLog(pcVar8,"USBMuxHandleAttachDictionary",uVar10);
          pcVar8 = "";
        }
        else {
          lVar5 = _CFGetTypeID(lVar3);
          lVar13 = _CFStringGetTypeID();
          if (lVar5 != lVar13) goto LAB_000c4d5f;
          pcVar8 = (char *)_CFStringGetCStringPtr(lVar3,0x8000100);
          if (pcVar8 == (char *)0x0) {
            uVar10 = _CFStringGetLength(lVar3);
            sVar11 = _CFStringGetMaximumSizeForEncoding(uVar10,0x8000100);
            pcVar8 = _malloc(sVar11);
            pcVar12 = pcVar8;
            if ((pcVar8 != (char *)0x0) &&
               (cVar2 = _CFStringGetCString(lVar3,pcVar8,sVar11,0x8000100), cVar2 != '\0'))
            goto LAB_000c4d83;
            pcVar8 = "%s:%d no serial number, CFStringGetCStringPtr failed\n";
            uVar10 = 0x4f9;
            goto LAB_000c4d75;
          }
          pcVar12 = (char *)0x0;
        }
LAB_000c4d83:
        if (*(int *)(param_1 + 8) == 2) {
          pcVar9 = *(code **)(param_1 + 0x18);
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(*(undefined8 *)(param_1 + 0x38),param_1,local_34,(undefined2)local_38,pcVar8,
                      local_3c);
          }
        }
        else if (*(int *)(param_1 + 8) == 0) {
          pcVar9 = *(code **)(param_1 + 0x18);
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(*(undefined8 *)(param_1 + 0x38),param_1,local_34,(undefined2)local_38);
          }
        }
        else {
          _USBMuxDebugLog("%s:%d Unsupported version: %d\n","USBMuxHandleAttachDictionary",0x512);
        }
        if (pcVar12 != (char *)0x0) {
          _free(pcVar12);
        }
        goto LAB_000c4de3;
      }
    }
    pcVar8 = "%s:%d Attached message didn\'t contain properties dictionary\n";
    pcVar12 = "USBMuxHandleAttachDictionary";
    uVar10 = 0x4b3;
  }
LAB_000c4ddc:
  _USBMuxDebugLog(pcVar8,pcVar12,uVar10);
LAB_000c4de3:
  _CFRelease(uVar4);
  return;
}

