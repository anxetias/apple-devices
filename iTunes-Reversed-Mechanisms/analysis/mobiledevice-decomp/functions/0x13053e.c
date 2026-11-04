// rea decompile_all
// name: __pairedDeviceCallback
// address: 0x13053e
// body: available
// range: 0x13053e-0x13093e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __pairedDeviceCallback(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long local_58;
  int iStack_50;
  long local_48;
  long local_40;
  uint local_34;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = param_5;
  switch(param_1) {
  case 1:
  case 5:
    local_34 = 0;
    local_40 = param_3;
    if (param_4 != 0) {
      lVar3 = _CFNumberGetTypeID();
      lVar4 = _CFGetTypeID(param_4);
      if ((lVar3 != lVar4) || (cVar2 = _CFNumberGetValue(param_4,9,&local_34), cVar2 == '\0')) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        pcVar6 = 
        "Failed to get lockdownForwardingPort (watch lockdown services unavailable) from %@";
LAB_0013068e:
        __os_log_internal(0,_md_log_log,1,pcVar6,uVar5);
        return;
      }
      if (0xffff < local_34) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        pcVar6 = "lockdownForwardingPort out of range (watch lockdown services unavailable) from %@"
        ;
        goto LAB_0013068e;
      }
    }
    uVar1 = local_34;
    iStack_50 = param_1;
    if (local_40 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar3 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Invalid input");
    }
    else {
      lVar3 = __CreateEmptyDeviceRef();
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x10) = *(int *)(param_2 + 0x10) + 0x40000000;
        *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined2 *)(lVar3 + 0x18) = *(undefined2 *)(param_2 + 0x18);
        lVar4 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_40);
        *(long *)(lVar3 + 0x20) = lVar4;
        if (lVar4 != 0) {
          *(undefined4 *)(lVar3 + 0x30) = 2;
          uVar5 = _AMDeviceCreateCopy(param_2);
          *(undefined8 *)(lVar3 + 0xb0) = uVar5;
          *(undefined4 *)(lVar3 + 0x90) = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *(undefined1 *)(lVar3 + 0x94) = 1;
          *(undefined4 *)(lVar3 + 0x98) = 0;
          *(undefined8 *)(lVar3 + 0xa0) = 0;
          *(undefined8 *)(lVar3 + 0xa8) = 0;
          *(undefined8 *)(lVar3 + 0xb8) = 0;
          *(uint *)(lVar3 + 200) = uVar1;
          *(undefined8 *)(lVar3 + 0x88) = 0;
          __mutex_init(lVar3 + 0x48);
          goto LAB_0013075f;
        }
        _CFRelease(lVar3);
      }
      lVar3 = 0;
    }
LAB_0013075f:
    local_58 = lVar3;
    if (param_1 == 1) {
      *(long *)(param_2 + 0xb8) = lVar3;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar6 = "Paired Device (unselected) \'%@\' attached.";
    }
    else {
      _CFDictionaryAddValue(*(undefined8 *)(param_2 + 0xc0),local_40,lVar3);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar6 = "Paired Device \'%@\' attached.";
    }
    __os_log_internal(0,_md_log_log,2,pcVar6,local_58);
    _CFRetain(local_58);
    if ((param_5 != 0) && (*(char *)(param_5 + 0x79) == '\x01')) {
      if (*(code **)(param_5 + 0x80) == (code *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
      }
      else {
        (**(code **)(param_5 + 0x80))(&local_58,*(undefined8 *)(param_5 + 0x88));
      }
    }
    break;
  case 2:
  case 6:
    __detachPairedGizmo(param_2,param_1,param_3,param_5);
    break;
  default:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"_pairedDeviceCallback: Unknown message type: %d",param_1);
  }
  return;
}

