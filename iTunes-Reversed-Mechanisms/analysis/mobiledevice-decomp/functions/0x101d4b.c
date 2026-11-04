// rea decompile_all
// name: _AMDCreateDeviceList
// address: 0x101d4b
// body: available
// range: 0x101d4b-0x1021d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDCreateDeviceList(void)

{
  char cVar1;
  dispatch_object_t object;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_40 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_38 = _CFArrayCreateMutable(local_40,0,PTR__kCFTypeArrayCallBacks_004411a8);
  if (local_38 == 0) {
    return 0;
  }
  cVar1 = __AMDRemotePairingDiscoveryEnabled();
  if (cVar1 == '\0') {
    lVar2 = 0;
LAB_00101e96:
    cVar1 = __AMDRemotePairingUSBMuxDisabled();
    if (cVar1 == '\0') {
      lVar10 = _USBMuxCopyDeviceArray();
      if (lVar10 == 0) goto LAB_00102110;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Querying attached usbmuxd devices.");
      for (lVar6 = 0; lVar7 = _CFArrayGetCount(lVar10), lVar6 < lVar7; lVar6 = lVar6 + 1) {
        lVar7 = _CFArrayGetValueAtIndex(lVar10,lVar6);
        if (lVar7 != 0) {
          lVar4 = _CFGetTypeID(lVar7);
          lVar5 = _CFDictionaryGetTypeID();
          if ((lVar4 == lVar5) && (lVar7 = _AMDeviceCreateFromProperties(lVar7), lVar7 != 0)) {
            cVar1 = __AMDRemotePairingDiscoveryEnabled();
            if ((cVar1 == '\0') ||
               (cVar1 = __AMDRemotePairingSupportedOnDevice(lVar7), cVar1 == '\0')) {
              _CFArrayAppendValue(local_38,lVar7);
            }
            _CFRelease(lVar7);
          }
        }
      }
    }
    else {
      lVar10 = 0;
    }
    lVar6 = local_38;
    uVar3 = _CFArrayCreateCopy(local_40,local_38);
    _CFRelease(lVar6);
    if (lVar10 == 0) goto LAB_00102119;
  }
  else {
    local_58 = &local_60;
    local_60 = 0;
    local_50 = 0x2020000000;
    local_48 = 0;
    object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
    if (object._os_obj == (_os_object_s *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create semaphore.");
    }
    else {
      lVar2 = _CFArrayCreateMutable(local_40,0,PTR__kCFTypeArrayCallBacks_004411a8);
      local_58[3] = lVar2;
      if (lVar2 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "Failed to create array.";
      }
      else {
        (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSThread,"detachNewThreadWithBlock:");
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Waiting for browsing to complete.");
        _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "Browsing completed.";
      }
      __os_log_internal(0,_md_log_log,0x10,pcVar9);
      _dispatch_release(object);
    }
    lVar2 = local_58[3];
    __Block_object_dispose(&local_60,8);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    if (lVar2 != 0) {
      __os_log_internal(0,_md_log_log,1,"Querying attached RemotePairing devices.");
      for (lVar10 = 0; lVar6 = _CFArrayGetCount(lVar2), lVar10 < lVar6; lVar10 = lVar10 + 1) {
        lVar6 = _CFArrayGetValueAtIndex(lVar2,lVar10);
        if (lVar6 == 0) {
LAB_001020a5:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = _md_log_log;
          uVar8 = _CFGetTypeID(lVar6);
          __os_log_internal(0,uVar3,0x10,"Device list contained unexpected type ID: %lu",uVar8);
        }
        else {
          lVar7 = _CFGetTypeID(lVar6);
          if (__AMDeviceTypeID == 0) {
            __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
          }
          if (lVar7 != __AMDeviceTypeID) goto LAB_001020a5;
          _CFArrayAppendValue(local_38,lVar6);
        }
      }
      goto LAB_00101e96;
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to copy remote device list.");
    lVar2 = 0;
LAB_00102110:
    uVar3 = 0;
    lVar10 = local_38;
  }
  _CFRelease(lVar10);
LAB_00102119:
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return uVar3;
}

