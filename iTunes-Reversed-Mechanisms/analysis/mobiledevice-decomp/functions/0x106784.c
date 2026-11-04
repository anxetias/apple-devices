// rea decompile_all
// name: _AMDeviceProxyGetFusingFromCFTypes
// address: 0x106784
// body: available
// range: 0x106784-0x10680b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyGetFusingFromCFTypes(void const*, void const*) */

char _AMDeviceProxyGetFusingFromCFTypes(void *param_1,void *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  
  lVar3 = _AMDeviceProxyCFTypeToCFBoolean(param_1);
  lVar4 = _AMDeviceProxyCFTypeToCFBoolean(param_2);
  cVar5 = '\0';
  if (lVar4 != 0 && lVar3 != 0) {
    cVar1 = _CFBooleanGetValue(lVar3);
    cVar2 = _CFBooleanGetValue(lVar4);
    cVar5 = '\x02';
    if ((cVar1 == '\0' || cVar2 == '\0') && (cVar5 = '\x01', cVar1 != '\0' || cVar2 == '\0')) {
      cVar5 = (cVar2 == '\0' && cVar1 == '\0') * '\x03';
    }
  }
  return cVar5;
}

