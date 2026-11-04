// rea decompile_all
// name: DKeyHas4Words
// address: 0x2bc8e
// body: available
// range: 0x2bc8e-0x2beea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 DKeyHas4Words(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long extraout_RDX;
  long lVar5;
  long extraout_RDX_00;
  uint *puVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  param_2[0x3c] = 0xa0;
  puVar6 = param_2 + 0x24;
  *param_2 = uVar4;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  pbVar7 = &DAT_002b2291;
  uVar14 = *(uint *)(&DAT_002b3e9c + (ulong)(byte)uVar3 * 4) ^ 1 ^
           *(uint *)(&_AESSubBytesWordTable + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_002b369c + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_002b3a9c + (ulong)(uVar3 >> 0x18) * 4);
  uVar2 = uVar2 ^ uVar1 ^ uVar4 ^ uVar14;
  auVar12 = ZEXT416(uVar2);
  auVar13 = ZEXT416(uVar3 ^ uVar2);
  lVar8 = -0x80;
  InvMixColumn();
  *(uint *)((long)puVar6 + lVar8) = uVar14;
  InvMixColumn();
  *(uint *)((long)puVar6 + lVar8 + 4) = uVar14;
  InvMixColumn();
  *(uint *)((long)puVar6 + lVar8 + 8) = uVar14;
  auVar10._0_8_ = InvMixColumn();
  auVar11._8_8_ = extraout_XMM1_Qb;
  auVar11._0_8_ = extraout_XMM1_Qa;
  auVar10._8_8_ = extraout_XMM0_Qb;
  *(uint *)((long)puVar6 + lVar8 + 0xc) = uVar14;
  lVar5 = extraout_RDX;
  do {
    lVar9 = lVar8;
    pbVar7 = pbVar7 + 1;
    uVar4 = auVar13._0_4_;
    auVar15 = ZEXT416((uint)*pbVar7 ^ *(uint *)(lVar5 + 0xc00 + (ulong)auVar13[0] * 4) ^
                      *(uint *)(lVar5 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                      *(uint *)(lVar5 + 0x400 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(lVar5 + 0x800 + (ulong)(uVar4 >> 0x18) * 4));
    auVar12 = auVar12 ^ auVar11 ^ auVar10 ^ auVar15;
    auVar13 = auVar13 ^ auVar12;
    auVar10._0_8_ = InvMixColumn();
    auVar11._8_8_ = extraout_XMM1_Qb_00;
    auVar11._0_8_ = extraout_XMM1_Qa_00;
    auVar10._8_8_ = extraout_XMM0_Qb_00;
    uVar4 = auVar15._0_4_ ^ *(uint *)((long)puVar6 + lVar9);
    *(uint *)((long)puVar6 + lVar9 + 0x10) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar9 + 4);
    *(uint *)((long)puVar6 + lVar9 + 0x14) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar9 + 8);
    *(uint *)((long)puVar6 + lVar9 + 0x18) = uVar4;
    *(uint *)((long)puVar6 + lVar9 + 0x1c) = uVar4 ^ *(uint *)((long)puVar6 + lVar9 + 0xc);
    lVar5 = extraout_RDX_00;
    lVar8 = lVar9 + 0x10;
  } while (lVar9 < -0x10);
  uVar4 = (uint)auVar10._0_8_ ^
          (uint)pbVar7[1] ^ *(uint *)(extraout_RDX_00 + 0xc00 + (ulong)auVar13[0] * 4) ^
          *(uint *)(extraout_RDX_00 + (ulong)(auVar13._0_4_ >> 8 & 0xff) * 4) ^
          *(uint *)(extraout_RDX_00 + 0x400 + (ulong)auVar13[2] * 4) ^
          *(uint *)(extraout_RDX_00 + 0x800 + (ulong)auVar13[3] * 4);
  *(uint *)((long)puVar6 + lVar9 + 0x20) = uVar4;
  uVar4 = (uint)extraout_XMM1_Qa_00 ^ uVar4;
  *(uint *)((long)puVar6 + lVar9 + 0x24) = uVar4;
  uVar4 = auVar12._0_4_ ^ uVar4;
  *(uint *)((long)puVar6 + lVar9 + 0x28) = uVar4;
  *(uint *)((long)puVar6 + lVar9 + 0x2c) = auVar13._0_4_ ^ uVar4;
  return 0;
}

