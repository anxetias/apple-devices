// rea decompile_all
// name: _lzma2_block_decode
// address: 0x210624
// body: available
// range: 0x210624-0x21084f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzma2_block_decode(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,
                         undefined8 param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  size_t sVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (param_4 != 0) {
    uVar14 = 0;
    uVar8 = 0;
    local_50 = param_3;
    local_48 = param_2;
    local_40 = param_1;
    local_38 = param_4;
    do {
      uVar5 = uStack_60;
      bVar1 = *(byte *)(local_50 + uVar14);
      if ((char)bVar1 < '\0') {
        uVar15 = uVar14 + 5;
        if (local_38 < uVar15) {
          return 0;
        }
        uVar2 = *(ushort *)(local_50 + 1 + uVar14);
        uVar3 = *(ushort *)(local_50 + 3 + uVar14);
        if ((bVar1 >> 5 & 3) - 2 < 2) {
          if (local_38 <= uVar15) {
            return 0;
          }
          bVar6 = *(byte *)(local_50 + uVar15);
          if (0xe0 < bVar6) {
            return 0;
          }
          uVar7 = bVar6 / 9;
          cVar4 = (char)uVar7;
          cVar13 = bVar6 + cVar4 * -9;
          cVar9 = (char)((uint)bVar6 * 0x6d >> 8);
          bVar10 = (byte)(((byte)(bVar6 - cVar9) >> 1) + cVar9) >> 5;
          bVar6 = cVar4 + (char)(uVar7 * 0x34 >> 8) * -5;
          uStack_60._0_2_ = CONCAT11(bVar6,bVar10);
          uStack_60._5_3_ = SUB83(uVar5,5);
          uStack_60._0_5_ =
               CONCAT14(~(-1 << bVar10),
                        CONCAT13(~(-1 << (bVar6 & 0x1f)),CONCAT12(cVar13,(undefined2)uStack_60)));
          if (4 < (byte)(bVar6 + cVar13)) goto LAB_00210837;
          uVar15 = uVar14 + 6;
LAB_0021079a:
          _lzma1_model_reset(&local_78,param_6);
        }
        else if ((bVar1 >> 5 & 3) != 0) goto LAB_0021079a;
        uVar14 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + 1 + uVar15;
        if (local_38 < uVar14) {
          return 0;
        }
        uVar16 = (ulong)((uint)(ushort)(uVar2 << 8 | uVar2 >> 8) + (bVar1 & 0x1f) * 0x10000 + 1);
        uVar11 = uVar8 + uVar16;
        if (local_48 < uVar11) {
          return 0;
        }
        uVar8 = _lzma1_chunk_decode(&local_78,local_40,uVar8 + local_40,uVar8 + local_40 + uVar16,
                                    param_2 + param_1,local_50 + uVar15,local_38 - uVar15);
        if (uVar8 != uVar16) {
          return 0;
        }
      }
      else {
        if (bVar1 == 0) {
          *param_5 = uVar14 + 1;
LAB_00210837:
          if ((char)bVar1 < '\0') {
            return 0;
          }
          return uVar8;
        }
        if (2 < bVar1) {
          return 0;
        }
        uVar15 = uVar14 + 3;
        if (local_38 < uVar15) {
          return 0;
        }
        uVar2 = *(ushort *)(local_50 + 1 + uVar14);
        uVar11 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
        uVar14 = uVar11 + uVar15 + 1;
        if (local_38 < uVar14) {
          return 0;
        }
        sVar12 = uVar11 + 1;
        uVar11 = sVar12 + uVar8;
        if (local_48 < uVar11) {
          return 0;
        }
        _memcpy((void *)(uVar8 + local_40),(void *)(uVar15 + local_50),sVar12);
      }
      uVar8 = uVar11;
    } while (uVar14 < local_38);
  }
  return 0;
}

