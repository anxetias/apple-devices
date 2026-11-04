// rea decompile_all
// name: _zlib_encode_buffer
// address: 0x1d256c
// body: available
// range: 0x1d256c-0x1d2697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _zlib_encode_buffer(Bytef *param_1,ulong param_2,Bytef *param_3,ulong param_4,
                        undefined8 param_5,int param_6,int param_7)

{
  Bytef *pBVar1;
  int iVar2;
  int iVar3;
  z_streamp strm;
  long lVar4;
  undefined8 local_50;
  undefined8 local_48;
  Bytef *local_40;
  int local_34;
  
  if ((param_4 | param_2) >> 0x20 == 0) {
    local_48 = 0x42000;
    local_50 = param_5;
    local_40 = param_1;
    local_34 = param_6;
    strm = (z_streamp)_zlib_malloc(&local_50,1,0x70);
    pBVar1 = local_40;
    strm->state = (internal_state *)0x0;
    strm->zalloc = (alloc_func)0x0;
    strm->zfree = (free_func)0x0;
    strm->opaque = (voidpf)0x0;
    *(undefined8 *)&strm->avail_in = 0;
    strm->total_in = 0;
    strm->next_out = (Bytef *)0x0;
    *(undefined8 *)&strm->avail_out = 0;
    strm->total_out = 0;
    strm->msg = (char *)0x0;
    *(undefined8 *)&strm->data_type = 0;
    strm->adler = 0;
    strm->reserved = 0;
    strm->zalloc = _zlib_malloc;
    strm->zfree = _zlib_free;
    strm->opaque = &local_50;
    strm->avail_in = (uInt)param_4;
    strm->next_in = param_3;
    strm->avail_out = (uInt)param_2;
    strm->next_out = local_40;
    iVar2 = 0xf;
    if (param_7 == 0) {
      iVar2 = -0xf;
    }
    lVar4 = 0;
    iVar2 = _deflateInit2_(strm,local_34,8,iVar2,8,0,"1.2.5",0x70);
    if (iVar2 == 0) {
      iVar2 = _deflate(strm,4);
      iVar3 = _deflateEnd(strm);
      lVar4 = 0;
      if ((iVar3 == 0) && (iVar2 == 1)) {
        lVar4 = (long)strm->next_out - (long)pBVar1;
      }
    }
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}

