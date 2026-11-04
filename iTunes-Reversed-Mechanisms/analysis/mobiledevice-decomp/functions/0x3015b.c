// rea decompile_all
// name: _handleDevices
// address: 0x3015b
// body: available
// range: 0x3015b-0x30226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _handleDevices(long param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *local_38;
  
  pcVar3 = "YES";
  pcVar2 = "YES";
  if (param_1 == 0) {
    pcVar2 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s devices %s","handleDevices",pcVar2);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar1 = _malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
      pcVar3 = "NO";
    }
    local_38 = puVar1;
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceList %s","handleDevices",pcVar3);
    puVar4 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      _CFDictionaryApplyFunction(param_1,_addDeviceToList,&local_38);
      puVar4 = local_38;
    }
  }
  return puVar4;
}

