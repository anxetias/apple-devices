// rea decompile_all
// name: _deflateInit2_
// address: 0x8e3c9
// body: available
// range: 0x8e3c9-0x8e660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8e65c to 0x8e73f _deflateReset (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateInit2_(z_streamp strm,int level,int method,int windowBits,int memLevel,int strategy,
                  char *version,int stream_size)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  internal_state *piVar5;
  voidpf pvVar6;
  int iVar7;
  int iVar8;
  uInt uVar9;
  uint uVar10;
  
  iVar3 = -6;
  if ((((version != (char *)0x0) && (stream_size == 0x70)) && (*version == '1')) &&
     (iVar3 = -2, strm != (z_streamp)0x0)) {
    strm->msg = (char *)0x0;
    pcVar4 = strm->zalloc;
    if (pcVar4 == (alloc_func)0x0) {
      pcVar4 = _zcalloc;
      strm->zalloc = _zcalloc;
      strm->opaque = (voidpf)0x0;
    }
    if (strm->zfree == (free_func)0x0) {
      strm->zfree = _zcfree;
    }
    uVar10 = 6;
    if (level != -1) {
      uVar10 = level;
    }
    if (windowBits < 0) {
      iVar2 = -windowBits;
      iVar8 = 0;
    }
    else {
      iVar2 = windowBits + -0x10;
      if ((uint)windowBits < 0x10) {
        iVar2 = windowBits;
      }
      iVar8 = 2 - (uint)((uint)windowBits < 0x10);
    }
    if ((((uint)strategy < 5) && (uVar10 < 10)) &&
       ((method == 8 && ((0xfffffff6 < memLevel - 10U && (0xfffffff7 < iVar2 - 0x10U)))))) {
      piVar5 = (*pcVar4)(strm->opaque,1,0x1730);
      iVar3 = -4;
      if (piVar5 != (internal_state *)0x0) {
        iVar7 = 9;
        if (iVar2 != 8) {
          iVar7 = iVar2;
        }
        strm->state = piVar5;
        *(z_streamp *)piVar5 = strm;
        piVar5[0xb].dummy = iVar8;
        *(undefined8 *)(piVar5 + 0xc) = 0;
        uVar9 = 1 << ((byte)iVar7 & 0x1f);
        piVar5[0x12].dummy = iVar7;
        piVar5[0x11].dummy = uVar9;
        piVar5[0x13].dummy = uVar9 - 1;
        piVar5[0x1e].dummy = memLevel + 7;
        iVar2 = 0x80 << ((byte)memLevel & 0x1f);
        piVar5[0x1d].dummy = iVar2;
        piVar5[0x1f].dummy = iVar2 + -1;
        piVar5[0x20].dummy = (memLevel + 9U & 0xff) / 3;
        pvVar6 = (*strm->zalloc)(strm->opaque,uVar9,2);
        *(voidpf *)(piVar5 + 0x14) = pvVar6;
        pvVar6 = (*strm->zalloc)(strm->opaque,piVar5[0x11].dummy,2);
        *(voidpf *)(piVar5 + 0x18) = pvVar6;
        pvVar6 = (*strm->zalloc)(strm->opaque,piVar5[0x1d].dummy,2);
        uVar9 = 0x40 << ((byte)memLevel & 0x1f);
        *(voidpf *)(piVar5 + 0x1a) = pvVar6;
        *(undefined8 *)(piVar5 + 0x5ca) = 0;
        piVar5[0x5be].dummy = uVar9;
        pvVar6 = (*strm->zalloc)(strm->opaque,uVar9,4);
        *(voidpf *)(piVar5 + 4) = pvVar6;
        uVar1 = piVar5[0x5be].dummy;
        *(ulong *)(piVar5 + 6) = (ulong)uVar1 * 4;
        if (((*(long *)(piVar5 + 0x14) != 0) && (*(long *)(piVar5 + 0x18) != 0)) &&
           (pvVar6 != (voidpf)0x0 && *(long *)(piVar5 + 0x1a) != 0)) {
          *(ulong *)(piVar5 + 0x5c0) = (ulong)(uVar1 & 0xfffffffe) + (long)pvVar6;
          *(voidpf *)(piVar5 + 0x5bc) = (voidpf)((ulong)uVar1 * 3 + (long)pvVar6);
          piVar5[0x2d].dummy = uVar10;
          piVar5[0x2e].dummy = strategy;
          *(undefined1 *)&piVar5[0xf].dummy = 8;
          iVar3 = _deflateReset(strm);
          return iVar3;
        }
        piVar5[2].dummy = 0x29a;
        strm->msg = "insufficient memory";
        _deflateEnd(strm);
      }
    }
  }
  return iVar3;
}

