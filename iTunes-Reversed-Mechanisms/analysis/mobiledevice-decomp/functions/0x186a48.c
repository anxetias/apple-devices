// rea decompile_all
// name: _UarpRestoreStageFirmwareDataBuffer
// address: 0x186a48
// body: available
// range: 0x186a48-0x186ad4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _UarpRestoreStageFirmwareDataBuffer(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = 0x1e;
  if (param_2 != (void *)0x0 && param_1 != (undefined8 *)0x0) {
    if (param_1[0x22] == 0) {
      pvVar2 = (void *)_uarpZalloc(param_3);
      param_1[0x22] = pvVar2;
      param_1[0x23] = param_3;
      _memcpy(pvVar2,param_2,param_3);
      _dispatch_async_f((dispatch_queue_t)*param_1,param_1,
                        _UarpRestoreStageFirmwareDataBufferQueueHandler);
      uVar1 = 0;
    }
    else {
      _UarpRestoreLayer3LogErrorInternal
                (param_1,param_2,"UARP Restore: Offered Firmware with outstanding offer");
      uVar1 = 0x36;
    }
  }
  return uVar1;
}

