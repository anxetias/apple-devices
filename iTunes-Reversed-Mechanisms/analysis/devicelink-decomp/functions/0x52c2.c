// rea decompile_all
// name: __DLBulkOperationSendFinalChunk
// address: 0x52c2
// body: available
// range: 0x52c2-0x535c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __DLBulkOperationSendFinalChunk(undefined8 param_1,char param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_3 == 0) {
    lVar2 = _CFDataCreate(0,0,0);
  }
  else {
    lVar2 = _DLCreateDataFromString(param_3);
  }
  lVar3 = _CFDataGetLength(lVar2);
  pcVar4 = _malloc(lVar3 + 1U);
  *pcVar4 = -param_2;
  _CFDataGetBytes(lVar2,0,lVar3,pcVar4 + 1);
  uVar1 = __DLBulkOperationSendChunk(param_1,pcVar4,lVar3 + 1U);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  _free(pcVar4);
  return uVar1;
}

