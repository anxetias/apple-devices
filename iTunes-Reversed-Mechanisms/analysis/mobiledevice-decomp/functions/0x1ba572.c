// rea decompile_all
// name: PRGSequencer::CleanUp
// address: 0x1ba572
// body: available
// range: 0x1ba572-0x1ba5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::CleanUp() */

void __thiscall PRGSequencer::CleanUp(PRGSequencer *this)

{
  int iVar1;
  long lVar2;
  
  IFWD_MemoryStream::~IFWD_MemoryStream(*(IFWD_MemoryStream **)this);
  iVar1 = *(int *)(this + 0xcb0);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(void **)(this + lVar2 * 8 + 0x30) != (void *)0x0) {
        _free(*(void **)(this + lVar2 * 8 + 0x30));
        iVar1 = *(int *)(this + 0xcb0);
      }
      *(undefined8 *)(this + lVar2 * 8 + 0x30) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  *(undefined4 *)(this + 0xcb0) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

