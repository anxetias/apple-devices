// rea decompile_all
// name: _UarpRestoreInitializeEndpoint2
// address: 0x18678b
// body: available
// range: 0x18678b-0x186986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
_UarpRestoreInitializeEndpoint2
          (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,char *param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined8 *context;
  long lVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  ulong uVar5;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_5 != (char *)0x0) {
    local_68 = _UarpRestoreEndpointMsgRecv;
    local_60 = _UarpRestoreEndpointDataRecv;
    local_58 = param_3;
    local_50 = param_1;
    context = (undefined8 *)_uarpZalloc(0x128);
    if (context != (undefined8 *)0x0) {
      local_48 = param_2;
      local_40 = param_6;
      local_38 = param_4;
      lVar2 = _uarpZalloc(0x50);
      context[0x24] = lVar2;
      uVar5 = 0;
      do {
        _uarpLoggingCategoryToString(uVar5 & 0xffffffff);
        uVar3 = _os_log_create("com.apple.uarp.layer3.restore");
        *(undefined8 *)(lVar2 + uVar5 * 8) = uVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 9);
      pdVar4 = _dispatch_queue_create(param_5,(dispatch_queue_attr_t)0x0);
      uVar3 = local_48;
      *context = pdVar4;
      context[7] = local_50;
      context[1] = local_48;
      _memcpy(context + 8,local_58,0x98);
      lVar2 = (*(code *)context[8])(uVar3,context,&local_68,context + 3);
      context[6] = lVar2;
      if (lVar2 != 0) {
        local_e8 = _UarpRestoreLayer3MsgSend;
        local_e0 = _UarpRestoreLayer3FirmwareStageProgress;
        local_d8 = _UarpRestoreLayer3FirmwareStageStatus;
        local_d0 = _UarpRestoreLayer3ApplyStatus;
        local_c8 = _UarpRestoreLayer3AssetSolicitationProgress;
        local_c0 = _UarpRestoreLayer3AssetSolicitationStatus;
        local_b8 = _UarpRestoreLayer3AssetsRescinded;
        local_b0 = _UarpRestoreLayer3TssRequest;
        local_a8 = _UarpRestoreLayer3TssResponse;
        local_a0 = _UarpRestoreLayer3UarpPropertyUpdate;
        local_98 = _UarpRestoreLayer3ApplePropertyUpdate;
        local_90 = _UarpRestoreLayer3PersonalizedFirmware;
        local_88 = _UarpRestoreLayer3LogError;
        local_80 = _UarpRestoreLayer3LogInfo;
        local_78 = _UarpRestoreLayer3LogDebug;
        local_70 = _UarpRestoreLayer3LogFault;
        iVar1 = _CoreUARPRestoreEndpointInitialize
                          (context + 5,&local_e8,local_38,*context,context,local_40);
        if (iVar1 == 0) {
          _dispatch_async_f((dispatch_queue_t)*context,context,_UarpRestoreRemoteEndpointAddHandler)
          ;
          return context;
        }
      }
      _image3Free(context);
    }
  }
  return (undefined8 *)0x0;
}

