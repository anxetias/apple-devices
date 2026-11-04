// rea decompile_all
// name: StreamSyncWireTalker::waitForConnectionFromDevice:error:
// address: 0x100012074
// body: available
// range: 0x100012074-0x1000120e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char StreamSyncWireTalker::waitForConnectionFromDevice_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  char cVar1;
  int iVar2;
  ID local_28;
  
  local_28 = 0;
  iVar2 = _DLWaitForConnection(*(undefined8 *)(param_1 + _connection),param_3,&local_28);
  if (iVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    _setError_code_reason_selector_
              (param_1,"_setError:code:reason:selector:",param_4,iVar2,local_28,param_2);
    if (local_28 != 0) {
      _CFRelease();
    }
    cVar1 = '\0';
  }
  return cVar1;
}

