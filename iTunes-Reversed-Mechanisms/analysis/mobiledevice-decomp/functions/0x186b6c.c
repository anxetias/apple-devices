// rea decompile_all
// name: _UarpRestoreInfoQueries
// address: 0x186b6c
// body: available
// range: 0x186b6c-0x186c61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_UarpRestoreInfoQueries(undefined8 *param_1,void *param_2,uint param_3,void *param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 *context;
  void *pvVar2;
  
  uVar1 = 0x1e;
  if (param_1 != (undefined8 *)0x0) {
    if ((-1 < (int)param_3) && (param_2 != (void *)0x0 || (int)param_3 < 1)) {
      if ((-1 < (int)param_5) && (param_4 != (void *)0x0 || (int)param_5 < 1)) {
        context = (undefined8 *)_uarpZalloc(0x28);
        *context = param_1;
        *(uint *)(context + 1) = param_3;
        if (0 < (int)param_3) {
          pvVar2 = _calloc((ulong)param_3,4);
          context[2] = pvVar2;
          _memcpy(pvVar2,param_2,(long)*(int *)(context + 1) << 2);
        }
        *(uint *)(context + 3) = param_5;
        if (0 < (int)param_5) {
          pvVar2 = _calloc((ulong)param_5,4);
          context[4] = pvVar2;
          _memcpy(pvVar2,param_4,(long)*(int *)(context + 3) << 2);
        }
        _dispatch_async_f((dispatch_queue_t)*param_1,context,_UarpRestoreInfoQueriesQueueHandler);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

