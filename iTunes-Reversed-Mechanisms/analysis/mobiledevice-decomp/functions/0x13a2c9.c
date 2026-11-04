// rea decompile_all
// name: _AMDeviceEnterRecovery
// address: 0x13a2c9
// body: available
// range: 0x13a2c9-0x13a4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceEnterRecovery(long param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar3 = -0x17fffff9;
    goto LAB_0013a3f8;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    iVar3 = -0x17ffff7c;
  }
  else {
    ppVar1 = (pthread_mutex_t *)(param_1 + 0x48);
    _pthread_mutex_lock(ppVar1);
    iVar3 = _send_enter_recovery(param_1);
    if (iVar3 == -0x17ffffe2) {
      iVar3 = _AMDeviceStartSession(param_1);
      if (iVar3 != 0) {
        iVar3 = _AMDevicePairWithCallback(param_1,0,0,0);
        if (iVar3 == 0) {
          iVar3 = _AMDeviceStartSession(param_1);
          if (iVar3 == 0) goto LAB_0013a3d2;
          pcVar4 = "Failed to start session with device %u: %s";
        }
        else {
          pcVar4 = "Failed to pair with device %u: %s";
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar2 = _md_log_log;
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = _AMDErrorString(iVar3);
        __os_log_internal(0,uVar2,0x10,pcVar4,uVar6,uVar5);
        _pthread_mutex_unlock(ppVar1);
        iVar3 = -0x17ffffe2;
        goto LAB_0013a3ea;
      }
LAB_0013a3d2:
      iVar3 = _send_enter_recovery(param_1);
    }
    _pthread_mutex_unlock(ppVar1);
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_0013a3ea:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
LAB_0013a3f8:
  uVar2 = _md_log_log;
  uVar5 = _AMDErrorString(iVar3);
  __os_log_internal(0,uVar2,0x10,"Could not enter recovery mode for device %u: %s",uVar6,uVar5);
  return iVar3;
}

