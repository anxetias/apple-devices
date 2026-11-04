// rea decompile_all
// name: _DLDeleteDeviceLinkConnection
// address: 0x2c87
// body: available
// range: 0x2c87-0x2da4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLDeleteDeviceLinkConnection(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 5;
  if (*(long *)(param_1 + 0x12) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  _DLDeleteCondition(*(undefined8 *)(param_1 + 0x20));
  _DLDeleteMutex(*(undefined8 *)(param_1 + 0x22));
  if (*(long *)(param_1 + 0x26) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x26) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x2a) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x2a) = 0;
  }
  _free(*(void **)(param_1 + 0x2c));
  *(undefined8 *)(param_1 + 0x2c) = 0;
  if (*(FILE **)(param_1 + 0x30) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = __DLCreateMessageDataV(&cf_DLMessageDisconnect,1,&cf_Connectionisbeingdeleted);
  if (_sSaveCallHistory == '\x01') {
    __DLCallHistoryAddEntry(&cf_Exit_DeleteConnection_);
  }
  __SendMessage(param_1,*(undefined8 *)(param_1 + 0x1a),0xf5c,8,uVar1);
  _DLRegenerateUniqueProcessName();
  return 0;
}

