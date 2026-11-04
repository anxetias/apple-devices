// rea decompile_all
// name: _MDRemoteServiceDeviceFromRemoteDeviceUUIDAndType
// address: 0x13c136
// body: available
// range: 0x13c136-0x13c3f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13c3f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _MDRemoteServiceDeviceFromRemoteDeviceUUIDAndType(uchar *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == (uchar *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Invalid argument.";
  }
  else {
    _uuid_unparse(param_1,(char *)&local_68);
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar2 = _CFStringCreateWithCString(uVar6,&local_68,0x8000100);
    lVar3 = _CFUUIDCreateFromString(uVar6,uVar2);
    _CFRelease(uVar2);
    if (lVar3 != 0) {
      lVar4 = _MDRemoteServiceDeviceCreate(uVar6,lVar3,param_2);
      if (lVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar5 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to allocate device.");
        lVar7 = 0;
LAB_0013c29b:
        lVar4 = 0;
      }
      else {
        lVar5 = _MDRemoteServiceDeviceLoadBaseProperties(lVar4);
        if (lVar5 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to initialize device: %@",lVar5);
          lVar7 = lVar4;
          goto LAB_0013c29b;
        }
        uVar6 = _MDRemoteServiceDeviceGetECID(lVar4);
        uVar2 = _objc_alloc(&_OBJC_CLASS___NSUUID);
        puVar1 = PTR__objc_msgSend_00441098;
        lVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"initWithUUIDBytes:",param_1);
        uVar2 = _objc_alloc(&_OBJC_CLASS___NSNumber);
        uVar6 = (*(code *)puVar1)(uVar2,"initWithUnsignedLongLong:",uVar6);
        if (lVar7 != 0) {
          local_68 = PTR___NSConcreteStackBlock_004412a8;
          local_60 = 0xc2000000;
          local_58 = ___mapUUIDToECID_block_invoke;
          local_50 = &___block_descriptor_48_e8_32o40o_e5_v8__0l;
          local_48 = lVar7;
          local_40 = uVar6;
          _dispatch_barrier_sync(_gUUIDStringToECIDQueue);
        }
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(lVar7);
        (*(code *)puVar1)(uVar6);
        lVar5 = 0;
        lVar7 = 0;
      }
      (*(code *)PTR__objc_release_004410a0)(lVar5);
      _CFRelease(lVar3);
      if (lVar7 != 0) {
        _CFRelease(lVar7);
      }
      goto LAB_0013c370;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Failed to convert UUID.";
  }
  lVar4 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar8);
  (*(code *)PTR__objc_release_004410a0)(0);
LAB_0013c370:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

