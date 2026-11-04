// rea decompile_all
// name: std::ostringstream::ostringstream[abi:ne190102]
// address: 0x24c86c
// body: available
// range: 0x24c86c-0x24c90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::ostringstream::ostringstream[abi:ne190102]() */

void __thiscall std::ostringstream::ostringstream_abi_ne190102_(ostringstream *this)

{
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined ***)this = &PTR__ostream_0044efa0;
  *(undefined ***)(this + 0x70) = &PTR__ostream_0044efc8;
  std::ios_base::init(this + 0x70);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined ***)this = &PTR__ostringstream_0044ef30;
  *(undefined **)(this + 0x70) = &DAT_0044ef58;
  std::streambuf::streambuf((streambuf *)(this + 8));
  *(undefined ***)(this + 8) = &PTR__stringbuf_0044f130;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0x10;
  return;
}

