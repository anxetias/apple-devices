// rea decompile_all
// name: __DLDownloadFilesFromComputer
// address: 0x7c9d
// body: available
// range: 0x7c9d-0x7d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLDownloadFilesFromComputer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_88 [9];
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  __DLBulkOperationContextInit(local_88,param_1);
  uVar1 = _CFArrayGetCount(param_2);
  _CFArrayApplyFunction(param_2,0,uVar1,__DLDownloadFileFromComputer,local_88);
  lVar2 = _CFDataCreate(0,0,0);
  __DLSendDataAndDisconnectOnError(param_1,lVar2);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  __DLSendStatusResponse(local_88[0],local_40,local_38,local_30);
  if ((local_40 == 0) || (local_40 == -0xd)) {
    __DLUpdateProgress(param_1,param_5);
  }
  __DLBulkOperationContextDealloc(local_88);
  return;
}

