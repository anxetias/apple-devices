// rea decompile_all
// name: _probeHubForVIDPID
// address: 0x3586c
// body: available
// range: 0x3586c-0x358c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * _probeHubForVIDPID(short param_1,short param_2,short param_3)

{
  undefined *puVar1;
  short sVar2;
  
  puVar1 = &_AxHubList;
  sVar2 = 0x5ac;
  do {
    if ((sVar2 == param_1) && (*(short *)(puVar1 + 2) == param_2)) {
      if (*(short *)(puVar1 + 4) == param_3) {
        return puVar1;
      }
      if (*(short *)(puVar1 + 4) == -1) {
        return puVar1;
      }
    }
    sVar2 = *(short *)(puVar1 + 6);
    puVar1 = puVar1 + 6;
    if (sVar2 == 0) {
      puVar1 = (undefined *)0x0;
      if ((param_2 == 0x1635 && param_1 == 0x5ac) && param_3 == 0xf) {
        puVar1 = &_AxATHubList;
      }
      return puVar1;
    }
  } while( true );
}

