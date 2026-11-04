// rea decompile_all
// name: _adler32
// address: 0x59f5b
// body: available
// range: 0x59f5b-0x5a090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5a08c to 0x568f0 _adler32_vec (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uLong _adler32(uLong adler,Bytef *buf,uInt len)

{
  byte bVar1;
  undefined1 auVar2 [16];
  Bytef *pBVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uLong uVar9;
  ulong uVar10;
  
  uVar10 = adler & 0xffff;
  uVar8 = adler >> 0x10 & 0xffff;
  if (len == 1) {
    uVar5 = uVar10 + *buf;
    uVar10 = (uVar10 - 0xfff1) + (ulong)*buf;
    if (uVar5 < 0xfff1) {
      uVar10 = uVar5;
    }
    uVar4 = (uVar8 + uVar10) * 0x10000;
    uVar5 = uVar4 - 0xfff10000;
    if (uVar8 + uVar10 < 0xfff1) {
      uVar5 = uVar4;
    }
    uVar9 = uVar5 | uVar10;
  }
  else if (buf == (Bytef *)0x0) {
    uVar9 = 1;
  }
  else {
    pBVar3 = buf;
    if (0xf < (int)len) {
      while (((ulong)pBVar3 & 0xf) != 0) {
        len = len - 1;
        bVar1 = *buf;
        buf = buf + 1;
        uVar5 = uVar10 + bVar1;
        uVar10 = (uVar10 - 0xfff1) + (ulong)bVar1;
        if (uVar5 < 0xfff1) {
          uVar10 = uVar5;
        }
        uVar8 = (uVar8 + uVar5) % 0xfff1;
        pBVar3 = pBVar3 + 1;
      }
      uVar9 = _adler32_vec(uVar10,uVar8,buf,len);
      return uVar9;
    }
    if (len != 0) {
      lVar7 = 0;
      do {
        uVar10 = uVar10 + buf[lVar7];
        uVar8 = uVar8 + uVar10;
        lVar7 = lVar7 + 1;
      } while (len != (uInt)lVar7);
    }
    uVar5 = uVar10 - 0xfff1;
    if (uVar10 < 0xfff1) {
      uVar5 = uVar10;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    iVar6 = SUB164(auVar2 * ZEXT816(0xf00e10d2fc5cd),8);
    uVar9 = ((int)uVar8 + (((uint)((int)uVar8 - iVar6) >> 1) + iVar6 >> 0xf) * -0xfff1) * 0x10000 |
            uVar5;
  }
  return uVar9;
}

