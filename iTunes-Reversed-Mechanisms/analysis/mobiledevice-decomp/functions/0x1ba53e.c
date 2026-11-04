// rea decompile_all
// name: PRGSequencer::~PRGSequencer
// address: 0x1ba53e
// body: available
// range: 0x1ba53e-0x1ba570 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::~PRGSequencer() */

void __thiscall PRGSequencer::~PRGSequencer(PRGSequencer *this)

{
  IFWD_MemoryStream *this_00;
  
  CleanUp(this);
  this_00 = *(IFWD_MemoryStream **)this;
  if (this_00 != (IFWD_MemoryStream *)0x0) {
    IFWD_MemoryStream::~IFWD_MemoryStream(this_00);
    operator_delete(this_00);
    *(undefined8 *)this = 0;
  }
  return;
}

