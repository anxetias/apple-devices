// rea decompile_all
// name: _deflateReset
// address: 0x8e73f
// body: available
// range: 0x8e73f-0x8e885 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateReset(z_streamp strm)

{
  internal_state *piVar1;
  int iVar2;
  uLong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  iVar2 = -2;
  if ((((strm != (z_streamp)0x0) && (piVar1 = strm->state, piVar1 != (internal_state *)0x0)) &&
      (strm->zalloc != (alloc_func)0x0)) && (strm->zfree != (free_func)0x0)) {
    strm->total_in = 0;
    strm->total_out = 0;
    strm->msg = (char *)0x0;
    strm->data_type = 2;
    piVar1[10].dummy = 0;
    *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 4);
    iVar2 = piVar1[0xb].dummy;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      piVar1[0xb].dummy = iVar2;
    }
    iVar5 = 0x2a;
    if (iVar2 == 0) {
      iVar5 = 0x71;
    }
    piVar1[2].dummy = iVar5;
    if (iVar2 == 2) {
      uVar3 = _crc32(0,(Bytef *)0x0,0);
    }
    else {
      uVar3 = _adler32(0,(Bytef *)0x0,0);
    }
    strm->adler = uVar3;
    iVar2 = 0;
    piVar1[0x10].dummy = 0;
    __tr_init(piVar1);
    *(ulong *)(piVar1 + 0x16) = (ulong)(uint)piVar1[0x11].dummy * 2;
    lVar4 = *(long *)(piVar1 + 0x1a);
    uVar6 = (ulong)(piVar1[0x1d].dummy - 1);
    *(undefined2 *)(lVar4 + uVar6 * 2) = 0;
    ___bzero(lVar4,uVar6 * 2);
    lVar4 = (long)piVar1[0x2d].dummy * 0x10;
    piVar1[0x2c].dummy = (uint)*(ushort *)(&DAT_00443fd2 + lVar4);
    piVar1[0x2f].dummy = (uint)*(ushort *)(&_configuration_table + lVar4);
    piVar1[0x30].dummy = (uint)*(ushort *)(&DAT_00443fd4 + lVar4);
    piVar1[0x2b].dummy = (uint)*(ushort *)(&DAT_00443fd6 + lVar4);
    *(undefined8 *)(piVar1 + 0x22) = 0;
    *(undefined8 *)(piVar1 + 0x29) = 0x200000000;
    piVar1[0x24].dummy = 2;
    *(undefined8 *)(piVar1 + 0x26) = 0;
    piVar1[0x1c].dummy = 0;
  }
  return iVar2;
}

