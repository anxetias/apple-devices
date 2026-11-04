// rea decompile_all
// name: RPSocket_fd::get_port
// address: 0x196bbc
// body: available
// range: 0x196bbc-0x196be2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_fd::get_port() */

ushort __thiscall RPSocket_fd::get_port(RPSocket_fd *this)

{
  ushort uVar1;
  
  if ((this[0x101] == (RPSocket_fd)0x1e) || (uVar1 = 0, this[0x101] == (RPSocket_fd)0x2)) {
    uVar1 = *(ushort *)(this + 0x102) << 8 | *(ushort *)(this + 0x102) >> 8;
  }
  return uVar1;
}

