// rea decompile_all
// name: __AMDeviceListenForPairedDevices
// address: 0x12dd31
// body: available
// range: 0x12dd31-0x12e104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMDeviceListenForPairedDevices(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  int local_34;
  
  local_34 = -0x17ffffff;
  if (param_1 == 0 || param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    return -0x17fffff9;
  }
  lVar4 = _AMDeviceCreateCopy();
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"AMDeviceCreateCopy failed");
    return -0x17fffff1;
  }
  iVar3 = _AMDeviceConnect(lVar4);
  if (iVar3 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    uVar5 = _AMDErrorString(iVar3);
    __os_log_internal(0,uVar1,1,"AMDeviceConnect failed: 0x%08x (%s)",iVar3,uVar5);
LAB_0012de89:
    _CFRelease(lVar4);
    return -0x17fffff1;
  }
  iVar3 = _AMDeviceStartSession(lVar4);
  if (iVar3 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    uVar5 = _AMDErrorString(iVar3);
    __os_log_internal(0,uVar1,1,"AMDeviceStartSession failed: 0x%08x (%s)",iVar3,uVar5);
    _AMDeviceDisconnect(lVar4);
    goto LAB_0012de89;
  }
  lVar6 = _AMDeviceCopyValueWithError(lVar4,0,&cf_ProductVersion,0);
  if (lVar6 == 0) {
LAB_0012df83:
    lVar8 = 0;
    bVar11 = false;
  }
  else {
    uVar7 = _CFStringCompare(lVar6,&cf_9_0,0x40);
    if (uVar7 < 2) {
      lVar8 = _AMDeviceCopyValueWithError
                        (lVar4,&cf_com_apple_mobile_ldwatch,&cf_WatchCompanionCapability,0);
      if (lVar8 == 0) goto LAB_0012df83;
      cVar2 = _CFEqual(lVar8,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      bVar11 = cVar2 != '\0';
    }
    else {
      uVar7 = _CFStringCompare(lVar6,&cf_8_2,0x40);
      if (uVar7 < 2) {
        lVar9 = _AMDeviceCopyValueWithError(lVar4,0,&cf_DeviceClass,0);
        if (lVar9 != 0) {
          cVar2 = _CFEqual(lVar9,&cf_Watch);
          if (cVar2 == '\0') {
            cVar2 = _CFEqual(lVar9,&cf_iPad);
            bVar11 = cVar2 == '\0';
          }
          else {
            bVar11 = false;
          }
          lVar8 = 0;
          goto LAB_0012df9b;
        }
        goto LAB_0012df83;
      }
      bVar11 = false;
      lVar8 = 0;
    }
  }
  lVar9 = 0;
LAB_0012df9b:
  _AMDeviceStopSession(lVar4);
  _AMDeviceDisconnect(lVar4);
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar6 != 0) {
    _CFRelease();
  }
  _CFRelease(lVar4);
  if (!bVar11) {
    return -0x17fffff1;
  }
  cVar2 = _CPXStartListeningForPairedDevices(param_1,param_2,__pairedDeviceCallback,0,&local_34);
  if (cVar2 != '\0') {
    return 0;
  }
  if (local_34 != -0x17fffff1) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar3 = local_34;
    uVar5 = _md_log_log;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = _AMDErrorString(local_34);
    __os_log_internal(0,uVar5,0x10,
                      "libcompanionproxy failed to listen for devices paired with \'%@\': 0x%x (%s)"
                      ,uVar1,iVar3,uVar10);
    return local_34;
  }
  return 0;
}

