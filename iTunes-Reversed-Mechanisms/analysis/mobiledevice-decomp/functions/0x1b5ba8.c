// rea decompile_all
// name: __updater_named
// address: 0x1b5ba8
// body: available
// range: 0x1b5ba8-0x1b5c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __updater_named(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "updaterName is NULL";
LAB_001b5c18:
    __updater_named_cold_1(pcVar3);
  }
  else {
    pcVar3 = "Updater entry is NULL";
    lVar2 = 0;
    do {
      if (*(long *)((long)&_updaterFunctions + lVar2) == 0) goto LAB_001b5c18;
      lVar1 = _CFStringCompare(param_1,*(long *)((long)&_updaterFunctions + lVar2),0);
      if (lVar1 == 0) {
        return (long)&_updaterFunctions + lVar2;
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != 0x270);
  }
  return 0;
}

