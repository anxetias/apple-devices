// rea decompile_all
// name: MDRemotePairingBrowser::_handleDeviceAppearedOnNetwork:
// address: 0x140bc4
// body: available
// range: 0x140bc4-0x1411f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleDeviceAppearedOnNetwork_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  undefined8 local_40;
  int local_34;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_34 = 0xe8000001;
  local_40 = 0;
  if (param_3 == 0) {
    local_34 = 0xe8000007;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Invalid input.";
LAB_00140ce5:
    __os_log_internal(0,_md_log_log,0x10,pcVar8);
    return local_34;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
  lVar4 = (*(code *)puVar1)(uVar3,"rpDevice");
  if (lVar4 == 0) {
    local_34 = 0xe80000f1;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Invalid device.";
    goto LAB_00140ce5;
  }
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"connectionFlags");
  if ((uVar5 & 0x10) == 0) {
    local_34 = 0;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = _md_log_log;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"udid");
    __os_log_internal(0,uVar3,1,"Network device \'%@\' is not actively advertising, skipping.",uVar6
                     );
    return local_34;
  }
  lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
  if ((*(int *)(lVar7 + 0x10) != 2) &&
     (lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"), *(int *)(lVar7 + 0x10) != 0)) {
    return 0;
  }
  lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
  if (((*(char *)(lVar7 + 0x7c) == '\x01') &&
      (cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"wirelesslyPairableDevice"),
      cVar2 != '\0')) &&
     (lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable"), lVar7 == 0)) {
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"rpDevice");
    uVar3 = __AMDeviceCreateWithRPDevice(uVar3,0,&local_40,&local_34);
    (*(code *)PTR__objc_msgSend_00441098)(param_3,"setNetworkPairable:",uVar3);
    lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
    if (lVar7 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar3 = _md_log_log;
      uVar6 = _AMDErrorString(local_34);
      __os_log_internal(0,uVar3,0x10,"Failed to create pairable network device: %s %@",uVar6,
                        local_40);
    }
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
    local_34 = (*(code *)PTR__objc_msgSend_00441098)
                         (param_1,"notifyClientAboutDevice:action:",uVar3,1);
    if (local_34 == 0) goto LAB_00140d69;
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
    if (lVar4 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
      _CFRelease(uVar3);
    }
    puVar1 = PTR__objc_msgSend_00441098;
    (*(code *)PTR__objc_msgSend_00441098)(param_3,"setNetworkPairable:",0);
    (*(code *)puVar1)(param_3,"setNetworkPairable:",0);
  }
  else {
LAB_00140d69:
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"authFlags");
    if (((uVar5 & 1) == 0) ||
       (cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"wirelesslyPairableDevice"),
       cVar2 != '\0')) {
      return 0;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Authenticated, attaching network paired device.");
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
    if (lVar4 != 0) {
      return 0;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"No network paired device yet allocated.");
    pcVar9 = (code *)PTR__objc_msgSend_00441098;
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
    uVar3 = (*pcVar9)(uVar3,"rpDevice");
    uVar3 = __AMDeviceCreateWithRPDevice(uVar3,0,&local_40,&local_34);
    (*pcVar9)(param_3,"setNetwork:",uVar3);
    lVar4 = (*pcVar9)(param_3,"network");
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar3 = _md_log_log;
      uVar6 = _AMDErrorString(local_34);
      __os_log_internal(0,uVar3,0x10,"Failed to create paired network device: %s %@",uVar6,local_40)
      ;
      pcVar9 = (code *)PTR__objc_msgSend_00441098;
    }
    uVar3 = (*pcVar9)(param_3,"network");
    local_34 = (*pcVar9)(param_1,"notifyClientAboutDevice:action:",uVar3,1);
    if (local_34 == 0) {
      lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
      puVar1 = PTR__objc_msgSend_00441098;
      if (*(char *)(lVar4 + 0x7a) != '\x01') {
        return 0;
      }
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
      uVar6 = (*(code *)puVar1)(param_1,"note");
      local_34 = __AMDRemotePairingAsyncListenForPairedDevices(uVar3,uVar6);
      if (local_34 == 0) {
        return 0;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar10 = local_34;
      uVar3 = _md_log_log;
      uVar6 = _AMDErrorString(local_34);
      pcVar8 = "Failed to listen for bluetooth watches on RemotePairing device: 0x%08x (%s)";
      goto LAB_0014107c;
    }
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
    if (lVar4 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
      _CFRelease(uVar3);
    }
    (*pcVar9)(param_3,"setNetwork:",0);
    (*pcVar9)(param_3,"setNetwork:",0);
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  iVar10 = local_34;
  uVar3 = _md_log_log;
  uVar6 = _AMDErrorString(local_34);
  pcVar8 = "Failed to attach device: 0x%08x (%s)";
LAB_0014107c:
  __os_log_internal(0,uVar3,0x10,pcVar8,iVar10,uVar6);
  return local_34;
}

