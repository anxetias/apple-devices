// rea decompile_all
// name: __DLMoveItemsOnComputer
// address: 0x78c1
// body: available
// range: 0x78c1-0x798e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLMoveItemsOnComputer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_a8 [9];
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_5;
  local_48 = _CFDictionaryGetCount(param_2);
  lVar2 = _CFNumberCreate(0,10);
  uVar1 = local_40;
  local_38 = param_1;
  __DLBulkOperationContextInit(local_a8,param_1,param_3,param_4,local_40,lVar2);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  _CFDictionaryApplyFunction(param_2,__DLMoveItemsOnComputerCallback,local_a8);
  __DLSendStatusResponse(local_a8[0],local_60,local_58,local_50);
  if ((local_60 == 0) || (local_60 == -0xd)) {
    __DLUpdateProgress(local_38,uVar1);
  }
  __DLBulkOperationContextDealloc(local_a8);
  return;
}

