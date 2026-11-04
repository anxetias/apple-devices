// rea decompile_all
// name: _CFStringGetDefaultCString
// address: 0x187bcb
// body: available
// range: 0x187bcb-0x187c54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _CFStringGetDefaultCString(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  
  lVar2 = _CFStringGetLength(param_2);
  pvVar3 = _malloc(lVar2 + 1U);
  if (pvVar3 == (void *)0x0) {
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      (**(code **)(param_1 + 0x70))
                (*(undefined8 *)(param_1 + 0x78),"firmwarePath allocation failed.");
    }
  }
  else {
    cVar1 = _CFStringGetCString(param_2,pvVar3,lVar2 + 1U,0x8000100);
    if (cVar1 != '\0') {
      return pvVar3;
    }
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),"CFStringGetCString failed.");
    }
    _free(pvVar3);
  }
  return (void *)0x0;
}

