// rea decompile_all
// name: _AMDeviceProxyCFTypeToCFBoolean
// address: 0x10680c
// body: available
// range: 0x10680c-0x106889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyCFTypeToCFBoolean(void const*) */

void * _AMDeviceProxyCFTypeToCFBoolean(void *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int local_1c;
  
  if (param_1 != (void *)0x0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFBooleanGetTypeID();
    if (lVar1 == lVar2) {
      return param_1;
    }
    lVar1 = _CFGetTypeID(param_1);
    lVar2 = _CFNumberGetTypeID();
    if (lVar1 == lVar2) {
      local_1c = 0;
      _CFNumberGetValue(param_1,3,&local_1c);
      puVar3 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (local_1c == 0) {
        puVar3 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      return (void *)*puVar3;
    }
  }
  return (void *)0x0;
}

