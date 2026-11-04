// rea decompile_all
// name: _BZClose
// address: 0xb4e5b
// body: available
// range: 0xb4e5b-0xb4e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BZClose(void *param_1)

{
  uint in_EAX;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  if (param_1 != (void *)0x0) {
    if (*(BZFILE **)((long)param_1 + 0x28) != (BZFILE *)0x0) {
      _BZ2_bzReadClose((int *)((long)&uStack_18 + 4),*(BZFILE **)((long)param_1 + 0x28));
    }
    if (*(FILE **)((long)param_1 + 0x20) != (FILE *)0x0) {
      _fclose(*(FILE **)((long)param_1 + 0x20));
    }
    _free(param_1);
  }
  return;
}

