// rea decompile_all
// name: _AMDeviceSecureUpgradeApplication
// address: 0x14f5ae
// body: available
// range: 0x14f5ae-0x14f7a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSecureUpgradeApplication
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_38;
  
  local_38 = 0;
  iVar1 = -0x17ffffff;
  if (param_1 == 0) {
    iVar1 = _AMDeviceSecureStartService(param_2,&cf_com_apple_mobile_installation_proxy,0,&local_38)
    ;
    if (iVar1 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Was unable to start the install service on the device: 0x%x",iVar1);
      goto LAB_0014f70b;
    }
    iVar1 = 0;
    param_1 = local_38;
  }
  lVar2 = _CFURLCopyLastPathComponent(param_3);
  if (lVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Could not copy last path component from url %@",param_3);
  }
  else {
    lVar3 = _CFStringCreateWithFormat
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf__s_c__,"PublicStaging"
                       ,0x2f,lVar2);
    iVar1 = _perform_command(param_1,&cf_Upgrade,0,param_5,param_6,&cf_PackagePath,lVar3,
                             &cf_ClientOptions,param_4,0);
    if (iVar1 != 0) {
      uVar4 = _AMDErrorString(iVar1);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Could not upgrade package on device, error: %s, pathToApplication: %@",
                        uVar4,lVar3);
    }
    _CFRelease(lVar2);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
  }
LAB_0014f70b:
  if (local_38 != 0) {
    _CFRelease();
  }
  return iVar1;
}

