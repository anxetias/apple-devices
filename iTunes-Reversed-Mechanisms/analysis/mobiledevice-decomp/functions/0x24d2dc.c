// rea decompile_all
// name: std::ostringstream::~ostringstream
// address: 0x24d2dc
// body: available
// range: 0x24d2dc-0x24d359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24d355 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::ostringstream::~ostringstream() */

void __thiscall std::ostringstream::~ostringstream(ostringstream *this)

{
  *(undefined ***)this = &PTR__ostringstream_0044ef30;
  *(undefined **)(this + 0x70) = &DAT_0044ef58;
  *(undefined ***)(this + 8) = &PTR__stringbuf_0044f130;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::streambuf::~streambuf((streambuf *)(this + 8));
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)(this + 0x70));
  operator_delete(this);
  return;
}

