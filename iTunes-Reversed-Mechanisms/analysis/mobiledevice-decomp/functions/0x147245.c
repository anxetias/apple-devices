// rea decompile_all
// name: _copy_string_value_from_device
// address: 0x147245
// body: available
// range: 0x147245-0x147465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_string_value_from_device(undefined8 param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int local_34;
  
  local_34 = -0x17ffffff;
  lVar3 = _AMDeviceCreateCopy();
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar3 = 0;
    __os_log_internal(0,_md_log_log,0x10,"unable to copy device");
  }
  else {
    iVar2 = _AMDeviceConnect(lVar3);
    local_34 = iVar2;
    if (iVar2 == 0) {
      lVar4 = _AMDeviceCopyValueWithError(lVar3,0,param_2,&local_34);
      if (lVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar4 = 0;
        __os_log_internal(0,_md_log_log,0x10,"AMDeviceCopyValueWithError: 0x%08x",local_34);
        bVar1 = true;
      }
      else {
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFStringGetTypeID();
        bVar1 = true;
        if (lVar5 != lVar6) {
          uVar7 = _CFCopyTypeIDDescription(lVar5);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "AMDeviceCopyValueWithError returned wrong type: %@ (%lu)",uVar7,lVar5);
          _CFRelease(uVar7);
          _CFRelease(lVar4);
          lVar4 = 0;
        }
      }
      goto LAB_00147350;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"AMDeviceConnect failed: 0x%08x",iVar2);
  }
  lVar4 = 0;
  bVar1 = false;
LAB_00147350:
  if (local_34 != 0 && param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  if (bVar1) {
    _AMDeviceDisconnect(lVar3);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return lVar4;
}

