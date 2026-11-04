// rea decompile_all
// name: _Ace3ExternalDFURestoreInfoInit
// address: 0x187f37
// body: available
// range: 0x187f37-0x18808c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _Ace3ExternalDFURestoreInfoInit
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *context;
  dispatch_semaphore_t pdVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  context = _calloc(1,0x80);
  if (context != (void *)0x0) {
    *(undefined8 *)((long)context + 0x70) = param_2;
    *(undefined8 *)((long)context + 0x78) = param_3;
    pdVar1 = _dispatch_semaphore_create(0);
    *(dispatch_semaphore_t *)((long)context + 0x30) = pdVar1;
    pdVar1 = _dispatch_semaphore_create(0);
    *(dispatch_semaphore_t *)((long)context + 0x38) = pdVar1;
    pdVar1 = _dispatch_semaphore_create(0);
    *(dispatch_semaphore_t *)((long)context + 0x40) = pdVar1;
    lVar2 = _CFDictionaryGetValue(param_1,&cf_serialString);
    if (lVar2 == 0) {
      pcVar6 = "serial string available in options dict";
      uVar4 = 3;
    }
    else {
      lVar3 = _CFDictionaryGetValue(param_1,&cf_nonceString);
      if (lVar3 == 0) {
        pcVar6 = "special string is not available in options dict";
        uVar4 = 4;
      }
      else {
        uVar4 = _Ace3ExternalDFUInitUSBCOptions(context,lVar2,lVar3);
        *(undefined8 *)((long)context + 0x50) = uVar4;
        uVar4 = _Ace3ExternalDFUInitLayer4Callbacks(context);
        *(undefined8 *)((long)context + 0x58) = uVar4;
        if (*(code **)((long)context + 0x70) != (code *)0x0) {
          (**(code **)((long)context + 0x70))
                    (*(undefined8 *)((long)context + 0x78),"UARP Restore Initialize Common.");
          uVar4 = *(undefined8 *)((long)context + 0x58);
        }
        puVar5 = (undefined8 *)
                 _UarpRestoreInitializeEndpoint
                           (context,*(undefined8 *)((long)context + 0x50),uVar4,
                            "com.apple.uarp.restore.usbc.external.dfu",0);
        *(undefined8 **)((long)context + 0x60) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          _dispatch_async_f((dispatch_queue_t)*puVar5,context,
                            _Ace3ExternalDFURestoreInfoQueriesHandler);
          _dispatch_semaphore_wait
                    (*(dispatch_semaphore_t *)((long)context + 0x40),0xffffffffffffffff);
          return context;
        }
        pcVar6 = "UarpRestoreInitializeEndpoint failed.";
        uVar4 = 6;
      }
    }
    _Ace3ExternalDFULog(context,param_4,uVar4,pcVar6);
  }
  return (void *)0x0;
}

