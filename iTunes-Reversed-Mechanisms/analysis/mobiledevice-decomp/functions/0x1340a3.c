// rea decompile_all
// name: _AMDeviceSetWirelessBuddyFlags
// address: 0x1340a3
// body: available
// range: 0x1340a3-0x1344ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSetWirelessBuddyFlags(long param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_40;
  int local_34;
  
  local_34 = -0x17ffffff;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    return -0x17fffff9;
  }
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
  lVar3 = _AMDeviceCopyValueWithError
                    (param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_SupportsWifiSyncing,
                     &local_34);
  if (local_34 == 0) {
    if (lVar3 == 0) {
LAB_00134258:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Device does not support wireless syncing.");
      local_34 = -0x17ffff81;
      goto joined_r0x00134412;
    }
    uVar5 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    cVar2 = _CFEqual(lVar3,uVar5);
    if (cVar2 == '\0') goto LAB_00134258;
    if ((param_2 & 1) == 0) {
      local_34 = _AMDeviceRemoveValue
                           (param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_WirelessBuddyID);
      if (local_34 == 0) {
        local_40 = 0;
        local_34 = 0;
LAB_00134364:
        if ((param_2 & 2) == 0) {
          uVar5 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
        }
        local_34 = _AMDeviceSetValue(param_1,&cf_com_apple_mobile_wireless_lockdown,
                                     &cf_EnableWifiConnections,uVar5);
        if (local_34 == 0) {
          local_34 = 0;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          iVar1 = local_34;
          uVar5 = _md_log_log;
          uVar4 = _AMDErrorString(local_34);
          __os_log_internal(0,uVar5,0x10,"Failed to set key (%@/%@): 0x%08x (%s)",
                            &cf_com_apple_mobile_wireless_lockdown,&cf_EnableWifiConnections,iVar1,
                            uVar4);
        }
        _CFRelease(lVar3);
        lVar3 = local_40;
        goto joined_r0x00134412;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar1 = local_34;
      uVar5 = _md_log_log;
      uVar4 = _AMDErrorString(local_34);
      __os_log_internal(0,uVar5,0x10,"Failed to remove key (%@/%@): 0x%08x (%s)",
                        &cf_com_apple_mobile_wireless_lockdown,&cf_WirelessBuddyID,iVar1,uVar4);
    }
    else {
      local_40 = __CopyOwnWirelessBuddyID();
      if (local_40 == 0) {
        local_34 = -0x17ffffff;
      }
      else {
        local_34 = _AMDeviceSetValue(param_1,&cf_com_apple_mobile_wireless_lockdown,
                                     &cf_WirelessBuddyID,local_40);
        if (local_34 == 0) goto LAB_00134364;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        iVar1 = local_34;
        uVar5 = _md_log_log;
        uVar4 = _AMDErrorString(local_34);
        __os_log_internal(0,uVar5,0x10,"Failed to set key (%@/%@): 0x%08x (%s)",
                          &cf_com_apple_mobile_wireless_lockdown,&cf_WirelessBuddyID,iVar1,uVar4);
        _CFRelease(lVar3);
        lVar3 = local_40;
      }
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar1 = local_34;
    uVar5 = _md_log_log;
    uVar4 = _AMDErrorString(local_34);
    __os_log_internal(0,uVar5,0x10,"Failed to retrieve key (%@/%@): 0x%08x (%s)",
                      &cf_com_apple_mobile_wireless_lockdown,&cf_SupportsWifiSyncing,iVar1,uVar4);
joined_r0x00134412:
    if (lVar3 == 0) goto LAB_0013429b;
  }
  _CFRelease(lVar3);
LAB_0013429b:
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  return local_34;
}

