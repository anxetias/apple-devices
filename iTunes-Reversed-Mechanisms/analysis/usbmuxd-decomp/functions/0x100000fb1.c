// rea decompile_all
// name: FUN_100000fb1
// address: 0x100000fb1
// body: available
// range: 0x100000fb1-0x100000ff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100000fb1(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == 0 || DAT_100022b48 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = _CFArrayGetCount();
    cVar1 = _CFArrayContainsValue(DAT_100022b48,0,uVar2,param_1);
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}

