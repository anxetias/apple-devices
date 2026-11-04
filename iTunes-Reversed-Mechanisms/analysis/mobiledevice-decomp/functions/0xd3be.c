// rea decompile_all
// name: _ccder_blob_encode_tag
// address: 0xd3be
// body: available
// range: 0xd3be-0xd550 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccder_blob_encode_tag(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  uVar6 = param_2 & 0x1fffffffffffffff;
  uVar5 = (uint)param_2;
  bVar2 = (byte)(param_2 >> 0x38);
  bVar4 = (byte)param_2;
  if (uVar6 < 0x1f) {
    if (lVar3 == lVar1) {
      return 0;
    }
    bVar4 = bVar4 | bVar2 & 0xe0;
  }
  else {
    if (uVar6 < 0x80) {
      if ((ulong)(lVar3 - lVar1) < 2) {
        return 0;
      }
      lVar7 = -1;
    }
    else if (uVar6 < 0x4000) {
      if ((ulong)(lVar3 - lVar1) < 3) {
        return 0;
      }
      *(byte *)(lVar3 + -1) = bVar4 & 0x7f;
      param_2 = (ulong)(byte)((byte)(uVar5 >> 7) | 0x80);
      lVar7 = -2;
    }
    else if (uVar6 < 0x200000) {
      if ((ulong)(lVar3 - lVar1) < 4) {
        return 0;
      }
      *(byte *)(lVar3 + -1) = bVar4 & 0x7f;
      *(byte *)(lVar3 + -2) = (byte)(param_2 >> 7) | 0x80;
      param_2 = (ulong)(byte)((byte)(uVar5 >> 0xe) | 0x80);
      lVar7 = -3;
    }
    else if (uVar6 < 0x10000000) {
      if ((ulong)(lVar3 - lVar1) < 5) {
        return 0;
      }
      *(byte *)(lVar3 + -1) = bVar4 & 0x7f;
      *(byte *)(lVar3 + -2) = (byte)(param_2 >> 7) | 0x80;
      *(byte *)(lVar3 + -3) = (byte)(param_2 >> 0xe) | 0x80;
      param_2 = (ulong)(byte)((byte)(uVar5 >> 0x15) | 0x80);
      lVar7 = -4;
    }
    else {
      if ((ulong)(lVar3 - lVar1) < 6) {
        return 0;
      }
      *(byte *)(lVar3 + -1) = bVar4 & 0x7f;
      *(byte *)(lVar3 + -2) = (byte)(param_2 >> 7) | 0x80;
      *(byte *)(lVar3 + -3) = (byte)(param_2 >> 0xe) | 0x80;
      *(byte *)(lVar3 + -4) = (byte)(param_2 >> 0x15) | 0x80;
      param_2 = (ulong)(byte)((byte)(param_2 >> 0x1c) | 0x80);
      lVar7 = -5;
    }
    *(char *)(lVar3 + lVar7) = (char)param_2;
    lVar3 = lVar3 + lVar7;
    bVar4 = bVar2 | 0x1f;
  }
  *(byte *)(lVar3 + -1) = bVar4;
  *param_1 = lVar1;
  param_1[1] = lVar3 + -1;
  return CONCAT71((int7)((ulong)lVar1 >> 8),1);
}

