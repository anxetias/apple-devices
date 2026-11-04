// rea decompile_all
// name: _taDFU_Library_startDeviceDiscoveryForVIDPID
// address: 0x2648d8
// body: available
// range: 0x2648d8-0x264a0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_taDFU_Library_startDeviceDiscoveryForVIDPID
          (undefined2 param_1,undefined2 param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uStack_90;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  uStack_90 = 0xffffffffffffffea;
  if (((param_3 != (long *)0x0) && (*param_3 != 0)) && (param_3[1] != 0)) {
    if (_initServiceDiscoveryGlobals_onceToken != -1) {
      _dispatch_once(&_initServiceDiscoveryGlobals_onceToken,&___block_literal_global);
    }
    puVar4 = _malloc(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      uStack_90 = 0xfffffffffffffff4;
    }
    else {
      uVar1 = *(undefined4 *)((long)param_3 + 4);
      lVar3 = param_3[1];
      uVar2 = *(undefined4 *)((long)param_3 + 0xc);
      *puVar4 = (int)*param_3;
      puVar4[1] = uVar1;
      puVar4[2] = (int)lVar3;
      puVar4[3] = uVar2;
      _CFDictionarySetValue(_clientVIDPIDCallbacksMap,CONCAT22(param_1,param_2),puVar4);
      local_58 = PTR___NSConcreteStackBlock_004412a8;
      local_50 = 0x40000000;
      local_48 = ___startDebugUSBDiscovery_block_invoke;
      local_40 = &___block_descriptor_tmp_26;
      local_38 = param_4;
      if (_startDebugUSBDiscovery_onceToken != -1) {
        _dispatch_once(&_startDebugUSBDiscovery_onceToken,&local_58);
      }
      _dispatch_async(param_4);
      uStack_90 = 0;
    }
  }
  return uStack_90;
}

