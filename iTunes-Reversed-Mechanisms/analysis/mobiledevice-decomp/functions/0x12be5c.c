// rea decompile_all
// name: _AMDeviceCreateFromProperties
// address: 0x12be5c
// body: available
// range: 0x12be5c-0x12c326 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCreateFromProperties(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  undefined2 local_32;
  
  iVar3 = __InitializeMobileDevice();
  if (iVar3 != 0) {
    return 0;
  }
  lVar4 = __CreateEmptyDeviceRef();
  if ((param_1 == 0) || (lVar4 == 0)) {
    if (lVar4 == 0) {
      return 0;
    }
LAB_0012c303:
    _CFRelease(lVar4);
    return 0;
  }
  lVar5 = _CFDictionaryGetValue(param_1,&cf_Properties);
  if (lVar5 == 0) {
    lVar5 = param_1;
  }
  lVar6 = _CFGetTypeID(lVar5);
  lVar7 = _CFDictionaryGetTypeID();
  if ((lVar6 != lVar7) ||
     (lVar6 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_DeviceID), lVar6 == 0))
  goto LAB_0012c303;
  lVar7 = _CFGetTypeID(lVar6);
  lVar8 = _CFNumberGetTypeID();
  if ((lVar7 != lVar8) ||
     ((cVar2 = _CFNumberGetValue(lVar6,3,lVar4 + 0x10), cVar2 == '\0' ||
      (lVar6 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_SerialNumber), lVar6 == 0))))
  goto LAB_0012c303;
  lVar7 = _CFGetTypeID(lVar6);
  lVar8 = _CFStringGetTypeID();
  if (lVar7 != lVar8) goto LAB_0012c303;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar6 = _CFStringCreateMutableCopy(uVar1,0,lVar6);
  if (lVar6 == 0) goto LAB_0012c303;
  lVar7 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_USBSerialNumber);
  if (lVar7 != 0) {
    uVar9 = _CFStringCreateCopy(uVar1,lVar7);
    *(undefined8 *)(lVar4 + 0x28) = uVar9;
  }
  local_48 = uVar1;
  lVar7 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_LinkType);
  local_40 = lVar6;
  if (lVar7 == 0) {
LAB_0012c085:
    lVar7 = 0;
  }
  else {
    cVar2 = _CFEqual(lVar7,_kUSBMuxPropertyLinkType_USB);
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar4 + 0x30) = 1;
      lVar6 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_ProductID);
      if (lVar6 != 0) {
        lVar7 = _CFGetTypeID(lVar6);
        lVar8 = _CFNumberGetTypeID();
        if ((lVar7 == lVar8) && (cVar2 = _CFNumberGetValue(lVar6,2,&local_32), cVar2 != '\0')) {
          *(undefined2 *)(lVar4 + 0x18) = local_32;
          lVar5 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_LocationID);
          if (lVar5 != 0) {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFNumberGetTypeID();
            if (((lVar6 == lVar7) && (cVar2 = _CFNumberGetValue(lVar5,4,&local_50), cVar2 != '\0'))
               && (local_50 >> 0x20 == 0)) {
              *(int *)(lVar4 + 0x14) = (int)local_50;
              lVar6 = 0;
LAB_0012c215:
              lVar5 = local_40;
              lVar8 = _CFDictionaryCreateMutable
                                (local_48,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              *(long *)(lVar4 + 0xc0) = lVar8;
              lVar7 = lVar6;
              if (lVar8 != 0) {
                *(long *)(lVar4 + 0x20) = lVar5;
                *(undefined1 *)(lVar4 + 0x94) = 1;
                *(undefined4 *)(lVar4 + 0x98) = 0;
                *(undefined8 *)(lVar4 + 0xa0) = 0;
                *(undefined8 *)(lVar4 + 0xb0) = 0;
                *(undefined8 *)(lVar4 + 0xb8) = 0;
                *(undefined4 *)(lVar4 + 200) = 0xf27e;
                *(undefined8 *)(lVar4 + 0xf0) = 0;
                *(undefined8 *)(lVar4 + 0xd0) = 0;
                *(undefined8 *)(lVar4 + 0xd8) = 0;
                *(undefined8 *)(lVar4 + 0xe0) = 0;
                __mutex_init(lVar4 + 0x48);
                goto LAB_0012c2da;
              }
              goto LAB_0012c2c4;
            }
          }
        }
      }
      goto LAB_0012c085;
    }
    cVar2 = _CFEqual(lVar7,_kUSBMuxPropertyLinkType_Network);
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar4 + 0x30) = 0;
      lVar6 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_EscapedFullServiceName);
      if (lVar6 != 0) {
        lVar7 = _CFGetTypeID(lVar6);
        lVar8 = _CFStringGetTypeID();
        uVar1 = local_48;
        if (lVar7 == lVar8) {
          lVar6 = _CFStringCreateMutableCopy(local_48,0,lVar6);
          lVar7 = 0;
          if (lVar6 != 0) {
            uVar9 = _CFStringGetLength(lVar6);
            _CFStringFindAndReplace(lVar6,&cf__,&cf___,0,uVar9,0);
            lVar8 = _CFStringCreateCopy(uVar1,lVar6);
            *(long *)(lVar4 + 0x88) = lVar8;
            lVar7 = lVar6;
            if ((lVar8 != 0) &&
               (lVar8 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_InterfaceIndex), lVar8 != 0)) {
              lVar10 = _CFGetTypeID(lVar8);
              lVar11 = _CFNumberGetTypeID();
              if ((lVar10 == lVar11) &&
                 ((cVar2 = _CFNumberGetValue(lVar8,4,&local_50), cVar2 == '\x01' &&
                  (0xffffffff00000001 < local_50 - 0xffffffff)))) {
                *(int *)(lVar4 + 0x90) = (int)local_50;
                lVar5 = _CFDictionaryGetValue(lVar5,_kUSBMuxProperty_NetworkAddress);
                if (lVar5 != 0) {
                  lVar8 = _CFGetTypeID(lVar5);
                  lVar10 = _CFDataGetTypeID();
                  if ((lVar8 == lVar10) && (lVar5 = _CFDataCreateCopy(local_48,lVar5), lVar5 != 0))
                  {
                    *(long *)(lVar4 + 0xa8) = lVar5;
                    goto LAB_0012c215;
                  }
                }
              }
            }
          }
          goto LAB_0012c2c4;
        }
      }
      goto LAB_0012c085;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Unknown link type %@",lVar7);
    lVar7 = 0;
  }
LAB_0012c2c4:
  lVar6 = lVar7;
  _CFRelease(lVar4);
  _CFRelease(local_40);
  lVar4 = 0;
LAB_0012c2da:
  if (lVar6 != 0) {
    _CFRelease(lVar6);
    return lVar4;
  }
  return lVar4;
}

