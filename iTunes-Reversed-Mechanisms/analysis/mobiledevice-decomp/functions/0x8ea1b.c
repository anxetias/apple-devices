// rea decompile_all
// name: _deflateParams
// address: 0x8ea1b
// body: available
// range: 0x8ea1b-0x8eb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateParams(z_streamp strm,int level,int strategy)

{
  internal_state *piVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  iVar2 = -2;
  if ((strm != (z_streamp)0x0) && (piVar1 = strm->state, piVar1 != (internal_state *)0x0)) {
    uVar4 = 6;
    if (level != -1) {
      uVar4 = level;
    }
    if ((uint)strategy < 5 && uVar4 < 10) {
      if (((piVar1[0x2e].dummy == strategy) &&
          (*(long *)(&DAT_00443fd8 + (long)piVar1[0x2d].dummy * 0x10) ==
           *(long *)(&DAT_00443fd8 + (ulong)uVar4 * 0x10))) || (strm->total_in == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = _deflate(strm,5);
      }
      if (piVar1[0x2d].dummy != uVar4) {
        piVar1[0x2d].dummy = uVar4;
        lVar3 = (ulong)uVar4 * 0x10;
        piVar1[0x2c].dummy = (uint)*(ushort *)(&DAT_00443fd2 + lVar3);
        piVar1[0x2f].dummy = (uint)*(ushort *)(&_configuration_table + lVar3);
        piVar1[0x30].dummy = (uint)*(ushort *)(&DAT_00443fd4 + lVar3);
        piVar1[0x2b].dummy = (uint)*(ushort *)(&DAT_00443fd6 + lVar3);
      }
      piVar1[0x2e].dummy = strategy;
    }
  }
  return iVar2;
}

