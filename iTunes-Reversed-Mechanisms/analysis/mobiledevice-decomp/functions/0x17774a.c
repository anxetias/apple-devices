// rea decompile_all
// name: ___thr_AMRDeviceLogStopWatchingDevice
// address: 0x17774a
// body: available
// range: 0x17774a-0x177903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRDeviceLogStopWatchingDevice(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined1 uVar6;
  dispatch_object_t dVar7;
  long local_50;
  long local_48;
  undefined1 *local_40;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    pcVar5 = &cf_Can_tstopwatchingdevicewithoutargs;
    goto LAB_001778a4;
  }
  lVar1 = _CFArrayGetCount();
  if (lVar1 != 3) {
    _CFRelease(param_1);
    pcVar5 = &cf_Can_tstopwatchingdevicewithincorrectargscount;
    goto LAB_001778a4;
  }
  puVar2 = (undefined8 *)_CFArrayGetValueAtIndex(param_1,0);
  lVar1 = _CFArrayGetValueAtIndex(param_1,1);
  local_40 = (undefined1 *)_CFArrayGetValueAtIndex(param_1,2);
  if (puVar2 == (undefined8 *)0x0) {
    pcVar5 = &cf_Can_twatchdevicewithNULLdevicelogmanager;
LAB_001778ff:
    uVar6 = 0;
  }
  else {
    if (lVar1 == 0) {
      pcVar5 = &cf_Can_twatchNULLdeviceforlogs;
      goto LAB_001778ff;
    }
    local_50 = lVar1;
    ___thr_AMRestorableDeviceGetECID(&local_50);
    local_38 = local_48;
    if (local_48 == 0) {
      pcVar5 = &cf_Can_twatchdevicelogwith0ECID;
      goto LAB_001778ff;
    }
    lVar1 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4,&local_38);
    if (lVar1 == 0) {
      pcVar5 = &cf_FailedtocreateCFNumberfromECID;
      goto LAB_001778ff;
    }
    lVar3 = _CFDictionaryGetValue(*puVar2,lVar1);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      *(undefined1 *)(lVar3 + 0x34) = 1;
      dVar7 = (dispatch_object_t)((dispatch_object_t *)(lVar3 + 0x18))->_os_obj;
      if (dVar7._os_obj != (_os_object_s *)0x0) {
        lVar4 = _dispatch_source_testcancel((dispatch_source_t)dVar7._os_obj);
        if (lVar4 == 0) {
          _dispatch_source_cancel((dispatch_source_t)dVar7._os_obj);
          dVar7 = *(dispatch_object_t *)(lVar3 + 0x18);
        }
        _dispatch_release(dVar7);
      }
      dVar7 = (dispatch_object_t)((dispatch_object_t *)(lVar3 + 0x10))->_os_obj;
      if (dVar7._os_obj != (_os_object_s *)0x0) {
        lVar4 = _dispatch_source_testcancel((dispatch_source_t)dVar7._os_obj);
        if (lVar4 == 0) {
          _dispatch_source_cancel((dispatch_source_t)dVar7._os_obj);
          dVar7 = *(dispatch_object_t *)(lVar3 + 0x10);
        }
        _dispatch_release(dVar7);
      }
      _CFDictionaryRemoveValue(*puVar2,lVar1);
      uVar6 = 1;
    }
    _CFRelease(param_1);
    pcVar5 = (cfstringStruct *)0x0;
    param_1 = lVar1;
  }
  _CFRelease(param_1);
  if (local_40 != (undefined1 *)0x0) {
    *local_40 = uVar6;
  }
LAB_001778a4:
  _AMRSafeLogAndRelease(3,pcVar5);
  return;
}

