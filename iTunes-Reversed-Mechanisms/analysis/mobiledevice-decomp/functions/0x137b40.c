// rea decompile_all
// name: _AMDeviceUnpair
// address: 0x137b40
// body: available
// range: 0x137b40-0x137de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceUnpair(long param_1)

{
  pthread_mutex_t *ppVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    return -0x17fffff9;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  cVar4 = __AMDeviceIsBackedByRSD(param_1);
  if ((cVar4 != '\0') && (*(long *)(param_1 + 0xf8) == 0)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,
                      "Unpairing over RemoteXPC is only supported for devices discovered via MobileDevice."
                     );
    return -0x17fffff1;
  }
  if (1 < uVar2) {
    return -0x17fffff9;
  }
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x48);
  _pthread_mutex_lock(ppVar1);
  lVar7 = __LoadPairingRecord(*(undefined8 *)(param_1 + 0x20),0);
  iVar5 = _AMDeviceDeleteHostPairingRecordForUDID(*(undefined8 *)(param_1 + 0x20));
  if (iVar5 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = _md_log_log;
    uVar8 = _AMDErrorString(iVar5);
    __os_log_internal(0,uVar3,0x10,"Failed to delete host pairing record: %s",uVar8);
    _pthread_mutex_unlock(ppVar1);
    if (lVar7 == 0) {
      return iVar5;
    }
    goto LAB_00137d45;
  }
  if (lVar7 == 0) {
    _pthread_mutex_unlock(ppVar1);
    return -0x17ffffdb;
  }
  lVar9 = _CFDictionaryGetValue(lVar7,&cf_HostID);
  if (lVar9 == 0) {
LAB_00137d08:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid host id.");
    iVar5 = -0x17ffffa4;
  }
  else {
    lVar10 = _CFGetTypeID(lVar9);
    lVar11 = _CFStringGetTypeID();
    if (lVar10 != lVar11) goto LAB_00137d08;
    iVar6 = _AMDeviceIsValid(param_1);
    iVar5 = 0;
    if (((iVar6 != 0) && (*(long *)(param_1 + 0xf8) == 0)) &&
       (iVar6 = _send_unpair(param_1,lVar9), iVar6 != 0)) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar3 = _md_log_log;
      uVar8 = _AMDErrorString(iVar6);
      __os_log_internal(0,uVar3,0x10,"Could not unpair with device: %s",uVar8);
      iVar5 = iVar6;
    }
  }
  _pthread_mutex_unlock(ppVar1);
LAB_00137d45:
  _CFRelease(lVar7);
  return iVar5;
}

