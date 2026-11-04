// rea decompile_all
// name: _AMAuthInstallBasebandPersonalizationRequired
// address: 0x27cd67
// body: available
// range: 0x27cd67-0x27cdd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallBasebandPersonalizationRequired(long param_1)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      bVar2 = false;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandPersonalizationRequired",
                        "failed to get fusing status");
    }
    else if ((((3 < *(uint *)(lVar1 + 0x60)) || (*(uint *)(lVar1 + 0x60) == 1)) ||
             (bVar2 = true, *(long *)(lVar1 + 0x10) == 0)) &&
            (bVar2 = true, *(long *)(param_1 + 0xa8) == 0)) {
      bVar2 = *(long *)(param_1 + 0xb0) != 0;
    }
  }
  return bVar2;
}

