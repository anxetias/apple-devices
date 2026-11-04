// rea decompile_all
// name: _deflateSetDictionary
// address: 0x8e886
// body: available
// range: 0x8e886-0x8e9c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateSetDictionary(z_streamp strm,Bytef *dictionary,uInt dictLength)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  internal_state *piVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  uLong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  
  iVar12 = -2;
  if ((strm != (z_streamp)0x0) &&
     (piVar4 = strm->state, dictionary != (Bytef *)0x0 && piVar4 != (internal_state *)0x0)) {
    iVar12 = piVar4[0xb].dummy;
    if (iVar12 != 0) {
      if (iVar12 == 2) {
        return -2;
      }
      if ((iVar12 == 1) && (piVar4[2].dummy != 0x2a)) {
        return -2;
      }
      uVar8 = _adler32(strm->adler,dictionary,dictLength);
      strm->adler = uVar8;
    }
    iVar12 = 0;
    if (2 < dictLength) {
      uVar2 = piVar4[0x11].dummy;
      iVar12 = 0;
      uVar11 = (ulong)(dictLength - uVar2);
      if (dictLength < uVar2) {
        uVar11 = 0;
      }
      if (uVar2 < dictLength) {
        dictLength = uVar2;
      }
      _memcpy(*(void **)(piVar4 + 0x14),dictionary + uVar11,(ulong)dictLength);
      piVar4[0x27].dummy = dictLength;
      *(ulong *)(piVar4 + 0x22) = (ulong)dictLength;
      pbVar5 = *(byte **)(piVar4 + 0x14);
      bVar1 = *pbVar5;
      piVar4[0x1c].dummy = (uint)bVar1;
      bVar9 = (byte)piVar4[0x20].dummy;
      uVar2 = piVar4[0x1f].dummy;
      uVar10 = ((uint)pbVar5[1] ^ (uint)bVar1 << (bVar9 & 0x1f)) & uVar2;
      piVar4[0x1c].dummy = uVar10;
      lVar6 = *(long *)(piVar4 + 0x1a);
      lVar7 = *(long *)(piVar4 + 0x18);
      uVar3 = piVar4[0x13].dummy;
      uVar11 = 0;
      do {
        uVar10 = ((uint)pbVar5[(uint)uVar11 + 2] ^ uVar10 << (bVar9 & 0x1f)) & uVar2;
        piVar4[0x1c].dummy = uVar10;
        *(undefined2 *)(lVar7 + (ulong)(uVar3 & (uint)uVar11) * 2) =
             *(undefined2 *)(lVar6 + (ulong)uVar10 * 2);
        *(short *)(lVar6 + (ulong)uVar10 * 2) = (short)uVar11;
        uVar11 = uVar11 + 1;
      } while ((dictLength - 2) + (uint)(dictLength == 2) != uVar11);
    }
  }
  return iVar12;
}

