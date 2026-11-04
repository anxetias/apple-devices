// rea decompile_all
// name: _Shift
// address: 0x1d0b9d
// body: available
// range: 0x1d0b9d-0x1d0d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Shift(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    iVar3 = 1;
    if (0xbf < bVar1) {
      iVar2 = ((param_3 & 0x7fff) - (param_3 & 0x8000)) + 0x1000000;
      if (bVar1 < 0xe0) {
        if (1 < param_2) {
          uVar4 = ((bVar1 & 0x1f) << 6 | param_1[1] & 0x3f) + iVar2;
          *param_1 = (byte)(uVar4 >> 6) & 0x1f | 0xc0;
          param_1[1] = (byte)uVar4 & 0x3f | param_1[1] & 0xc0;
          iVar3 = 2;
        }
      }
      else if (bVar1 < 0xf0) {
        iVar3 = param_2;
        if (2 < param_2) {
          iVar3 = iVar2 + (param_1[2] & 0x3f) + (bVar1 & 0xf) * 0x1000;
          uVar4 = (param_1[1] & 0x3f) * 0x40 + iVar3;
          *param_1 = (byte)(uVar4 >> 0xc) & 0xf | 0xe0;
          param_1[1] = (byte)(uVar4 >> 6) & 0x3f | param_1[1] & 0xc0;
          param_1[2] = (byte)iVar3 & 0x3f | param_1[2] & 0xc0;
          iVar3 = 3;
        }
      }
      else if ((bVar1 < 0xf8) && (iVar3 = param_2, 3 < param_2)) {
        iVar3 = iVar2 + (param_1[3] & 0x3f) + (bVar1 & 7) * 0x40000;
        uVar4 = (param_1[2] & 0x3f) * 0x40 + iVar3;
        uVar5 = (param_1[1] & 0x3f) * 0x1000 + uVar4;
        *param_1 = (byte)(uVar5 >> 0x12) & 7 | 0xf0;
        param_1[1] = (byte)(uVar5 >> 0xc) & 0x3f | param_1[1] & 0xc0;
        param_1[2] = (byte)(uVar4 >> 6) & 0x3f | param_1[2] & 0xc0;
        param_1[3] = (byte)iVar3 & 0x3f | param_1[3] & 0xc0;
        iVar3 = 4;
      }
    }
  }
  else {
    *param_1 = (char)param_3 + bVar1 & 0x7f;
    iVar3 = 1;
  }
  return iVar3;
}

