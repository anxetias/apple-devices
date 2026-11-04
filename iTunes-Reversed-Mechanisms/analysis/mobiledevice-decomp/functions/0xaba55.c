// rea decompile_all
// name: _lz4_decode
// address: 0xaba55
// body: available
// range: 0xaba55-0xabc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_lz4_decode(long *param_1,ulong param_2,undefined1 *param_3,undefined8 *param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ushort *puVar11;
  
  puVar4 = (undefined1 *)*param_1;
  puVar11 = (ushort *)*param_4;
  puVar9 = puVar4;
  if (puVar11 < param_5 && puVar4 < param_3) {
    do {
      *param_4 = puVar11;
      *param_1 = (long)puVar9;
      uVar1 = *puVar11;
      puVar11 = (ushort *)((long)puVar11 + 1);
      uVar3 = (uint)(byte)((byte)uVar1 >> 4);
      if (uVar3 == 0xf) {
        uVar3 = 0xf;
        do {
          if (param_5 <= puVar11) {
            return 1;
          }
          uVar2 = *puVar11;
          puVar11 = (ushort *)((long)puVar11 + 1);
          uVar3 = uVar3 + (byte)uVar2;
        } while ((byte)uVar2 == 0xff);
      }
      uVar7 = (ulong)uVar3;
      if ((ulong)((long)param_5 - (long)puVar11) < uVar7) {
        return 1;
      }
      uVar6 = (long)param_3 - (long)puVar9;
      if (uVar6 < uVar7) {
        _memcpy(puVar9,puVar11,uVar6);
        puVar4 = puVar9 + uVar6;
        break;
      }
      _memcpy(puVar9,puVar11,uVar7);
      puVar11 = (ushort *)((long)puVar11 + uVar7);
      puVar4 = puVar9 + uVar7;
      if (param_5 <= puVar11) break;
      if ((ulong)((long)param_5 - (long)puVar11) < 2) {
        return 1;
      }
      uVar6 = (ulong)*puVar11;
      if (uVar6 == 0) {
        return 1;
      }
      if ((long)puVar4 - uVar6 < param_2) {
        return 1;
      }
      uVar3 = ((byte)uVar1 & 0xf) + 4;
      uVar10 = (ulong)uVar3;
      puVar11 = puVar11 + 1;
      if (uVar3 == 0x13) {
        uVar10 = 0x13;
        do {
          if (param_5 <= puVar11) {
            return 1;
          }
          uVar1 = *puVar11;
          puVar11 = (ushort *)((long)puVar11 + 1);
          uVar10 = (ulong)((int)uVar10 + (uint)(byte)uVar1);
        } while ((byte)uVar1 == 0xff);
      }
      uVar8 = (long)param_3 - (long)puVar4;
      if (uVar8 < uVar10) {
        if (puVar4 != param_3) {
          uVar10 = 1;
          if (1 < (uint)uVar8) {
            uVar10 = uVar8;
          }
          uVar5 = 0;
          do {
            puVar9[uVar5 + uVar7] = puVar9[uVar5 + (uVar7 - uVar6)];
            uVar5 = uVar5 + 1;
          } while ((uVar10 & 0xffffffff) != uVar5);
        }
        puVar4 = puVar4 + (uVar8 & 0xffffffff);
        break;
      }
      if (uVar10 != 0) {
        uVar7 = uVar10;
        puVar9 = puVar4;
        do {
          *puVar9 = puVar9[-uVar6];
          puVar9 = puVar9 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar4 = puVar4 + uVar10;
      puVar9 = puVar4;
    } while (puVar11 < param_5);
  }
  *param_1 = (long)puVar4;
  *param_4 = puVar11;
  return 0;
}

