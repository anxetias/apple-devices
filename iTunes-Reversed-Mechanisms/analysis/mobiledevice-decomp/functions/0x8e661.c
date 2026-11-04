// rea decompile_all
// name: _deflateEnd
// address: 0x8e661
// body: available
// range: 0x8e661-0x8e73e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateEnd(z_streamp strm)

{
  int iVar1;
  int iVar2;
  internal_state *address;
  
  iVar2 = -2;
  if ((strm != (z_streamp)0x0) && (address = strm->state, address != (internal_state *)0x0)) {
    iVar1 = address[2].dummy;
    if (((iVar1 - 0x45U < 0x2d) && ((0x100400400011U >> ((ulong)(iVar1 - 0x45U) & 0x3f) & 1) != 0))
       || ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      if (*(voidpf *)(address + 4) != (voidpf)0x0) {
        (*strm->zfree)(strm->opaque,*(voidpf *)(address + 4));
        address = strm->state;
      }
      if (*(voidpf *)(address + 0x1a) != (voidpf)0x0) {
        (*strm->zfree)(strm->opaque,*(voidpf *)(address + 0x1a));
        address = strm->state;
      }
      if (*(voidpf *)(address + 0x18) != (voidpf)0x0) {
        (*strm->zfree)(strm->opaque,*(voidpf *)(address + 0x18));
        address = strm->state;
      }
      if (*(voidpf *)(address + 0x14) != (voidpf)0x0) {
        (*strm->zfree)(strm->opaque,*(voidpf *)(address + 0x14));
        address = strm->state;
      }
      (*strm->zfree)(strm->opaque,address);
      strm->state = (internal_state *)0x0;
      iVar2 = (uint)(iVar1 != 0x71) * 3 + -3;
    }
  }
  return iVar2;
}

