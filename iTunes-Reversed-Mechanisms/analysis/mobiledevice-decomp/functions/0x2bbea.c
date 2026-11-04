// rea decompile_all
// name: _vng_aes_decrypt_opt_key
// address: 0x2bbea
// body: available
// range: 0x2bbea-0x2bc5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_decrypt_opt_key(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  long extraout_RDX_08;
  uint *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined1 auVar12 [16];
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 in_XMM7_Da;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined1 auVar11 [16];
  
  if (param_2 < 0x80) {
    param_2 = param_2 << 3;
  }
  if (param_2 == 0x80) {
    uVar3 = *param_1;
    uVar13 = param_1[1];
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    param_3[0x3c] = 0xa0;
    puVar5 = param_3 + 0x24;
    *param_3 = uVar3;
    param_3[1] = uVar13;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
    pbVar7 = &DAT_002b2291;
    uVar18 = *(uint *)(&DAT_002b3e9c + (ulong)(byte)uVar2 * 4) ^ 1 ^
             *(uint *)(&_AESSubBytesWordTable + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_002b369c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_002b3a9c + (ulong)(uVar2 >> 0x18) * 4);
    uVar1 = uVar1 ^ uVar13 ^ uVar3 ^ uVar18;
    auVar21 = ZEXT416(uVar1);
    auVar14 = ZEXT416(uVar2 ^ uVar1);
    lVar10 = -0x80;
    InvMixColumn();
    *(uint *)((long)puVar5 + lVar10) = uVar18;
    InvMixColumn();
    *(uint *)((long)puVar5 + lVar10 + 4) = uVar18;
    InvMixColumn();
    *(uint *)((long)puVar5 + lVar10 + 8) = uVar18;
    auVar16._0_8_ = InvMixColumn();
    auVar15._8_8_ = extraout_XMM1_Qb;
    auVar15._0_8_ = extraout_XMM1_Qa;
    auVar16._8_8_ = extraout_XMM0_Qb;
    *(uint *)((long)puVar5 + lVar10 + 0xc) = uVar18;
    lVar9 = extraout_RDX;
    do {
      lVar8 = lVar10;
      pbVar7 = pbVar7 + 1;
      uVar3 = auVar14._0_4_;
      auVar19 = ZEXT416((uint)*pbVar7 ^ *(uint *)(lVar9 + 0xc00 + (ulong)auVar14[0] * 4) ^
                        *(uint *)(lVar9 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                        *(uint *)(lVar9 + 0x400 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                        *(uint *)(lVar9 + 0x800 + (ulong)(uVar3 >> 0x18) * 4));
      auVar21 = auVar21 ^ auVar15 ^ auVar16 ^ auVar19;
      auVar14 = auVar14 ^ auVar21;
      auVar16._0_8_ = InvMixColumn();
      auVar15._8_8_ = extraout_XMM1_Qb_00;
      auVar15._0_8_ = extraout_XMM1_Qa_00;
      auVar16._8_8_ = extraout_XMM0_Qb_00;
      uVar3 = auVar19._0_4_ ^ *(uint *)((long)puVar5 + lVar8);
      *(uint *)((long)puVar5 + lVar8 + 0x10) = uVar3;
      uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 4);
      *(uint *)((long)puVar5 + lVar8 + 0x14) = uVar3;
      uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 8);
      *(uint *)((long)puVar5 + lVar8 + 0x18) = uVar3;
      *(uint *)((long)puVar5 + lVar8 + 0x1c) = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 0xc);
      lVar9 = extraout_RDX_00;
      lVar10 = lVar8 + 0x10;
    } while (lVar8 < -0x10);
    uVar3 = (uint)auVar16._0_8_ ^
            (uint)pbVar7[1] ^ *(uint *)(extraout_RDX_00 + 0xc00 + (ulong)auVar14[0] * 4) ^
            *(uint *)(extraout_RDX_00 + (ulong)(auVar14._0_4_ >> 8 & 0xff) * 4) ^
            *(uint *)(extraout_RDX_00 + 0x400 + (ulong)auVar14[2] * 4) ^
            *(uint *)(extraout_RDX_00 + 0x800 + (ulong)auVar14[3] * 4);
    *(uint *)((long)puVar5 + lVar8 + 0x20) = uVar3;
    uVar3 = (uint)extraout_XMM1_Qa_00 ^ uVar3;
    *(uint *)((long)puVar5 + lVar8 + 0x24) = uVar3;
    uVar3 = auVar21._0_4_ ^ uVar3;
    *(uint *)((long)puVar5 + lVar8 + 0x28) = uVar3;
    *(uint *)((long)puVar5 + lVar8 + 0x2c) = auVar14._0_4_ ^ uVar3;
    uVar4 = 0;
  }
  else {
    if (param_2 == 0xc0) {
      uVar3 = *param_1;
      uVar13 = param_1[1];
      uVar1 = param_1[2];
      auVar16 = ZEXT416(uVar1);
      uVar2 = param_1[3];
      auVar15 = ZEXT416(uVar2);
      param_3[0x3c] = 0xc0;
      auVar12 = ZEXT416(param_1[4]);
      auVar17 = ZEXT416(param_1[5]);
      puVar6 = &_AESRcon;
      lVar10 = -0xa0;
      puVar5 = param_3 + 0x28;
      *param_3 = uVar3;
      param_3[1] = uVar13;
      param_3[2] = uVar1;
      param_3[3] = uVar2;
      InvMixColumn(&_AESRcon,puVar5,&_AESSubBytesWordTable);
      *(undefined4 *)((long)puVar5 + lVar10 + 0x10) = in_XMM7_Da;
      auVar21._0_8_ = InvMixColumn();
      auVar19._8_8_ = extraout_XMM1_Qb_01;
      auVar19._0_8_ = extraout_XMM1_Qa_01;
      auVar21._8_8_ = extraout_XMM0_Qb_01;
      *(undefined4 *)((long)puVar5 + lVar10 + 0x14) = in_XMM7_Da;
      pbVar7 = puVar6 + 1;
      uVar3 = auVar17._0_4_;
      auVar20 = ZEXT416((uint)*pbVar7 ^ *(uint *)(extraout_RDX_01 + 0xc00 + (ulong)auVar17[0] * 4) ^
                        *(uint *)(extraout_RDX_01 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                        *(uint *)(extraout_RDX_01 + 0x400 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                        *(uint *)(extraout_RDX_01 + 0x800 + (ulong)(uVar3 >> 0x18) * 4));
      auVar16 = auVar16 ^ auVar19 ^ auVar21 ^ auVar20;
      auVar15 = auVar15 ^ auVar16;
      auVar12 = auVar12 ^ auVar15;
      auVar17 = auVar17 ^ auVar12;
      lVar10 = lVar10 + 0x18;
      InvMixColumn();
      *(int *)((long)puVar5 + lVar10) = auVar20._0_4_;
      InvMixColumn();
      *(int *)((long)puVar5 + lVar10 + 4) = auVar20._0_4_;
      InvMixColumn();
      *(int *)((long)puVar5 + lVar10 + 8) = auVar20._0_4_;
      auVar14._0_8_ = InvMixColumn();
      auVar11._8_8_ = extraout_XMM1_Qb_02;
      auVar11._0_8_ = extraout_XMM1_Qa_02;
      auVar14._8_8_ = extraout_XMM0_Qb_02;
      *(uint *)((long)puVar5 + lVar10 + 0xc) = auVar20._0_4_;
      uVar3 = auVar20._0_4_ ^ *(uint *)((long)puVar5 + lVar10 + -8);
      *(uint *)((long)puVar5 + lVar10 + 0x10) = uVar3;
      *(uint *)((long)puVar5 + lVar10 + 0x14) = uVar3 ^ *(uint *)((long)puVar5 + lVar10 + -4);
      lVar9 = extraout_RDX_02;
      do {
        lVar8 = lVar10;
        pbVar7 = pbVar7 + 1;
        uVar3 = auVar17._0_4_;
        auVar21 = ZEXT416((uint)*pbVar7 ^ *(uint *)(lVar9 + 0xc00 + (ulong)auVar17[0] * 4) ^
                          *(uint *)(lVar9 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                          *(uint *)(lVar9 + 0x400 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                          *(uint *)(lVar9 + 0x800 + (ulong)(uVar3 >> 0x18) * 4));
        auVar16 = auVar16 ^ auVar11 ^ auVar14 ^ auVar21;
        auVar15 = auVar15 ^ auVar16;
        auVar12 = auVar12 ^ auVar15;
        auVar17 = auVar17 ^ auVar12;
        auVar14._0_8_ = InvMixColumn();
        auVar11._8_8_ = extraout_XMM1_Qb_03;
        auVar11._0_8_ = extraout_XMM1_Qa_03;
        auVar14._8_8_ = extraout_XMM0_Qb_03;
        lVar10 = lVar8 + 0x18;
        uVar3 = auVar21._0_4_ ^ *(uint *)((long)puVar5 + lVar8);
        *(uint *)((long)puVar5 + lVar10) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 4);
        *(uint *)((long)puVar5 + lVar8 + 0x1c) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 8);
        *(uint *)((long)puVar5 + lVar8 + 0x20) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 0xc);
        *(uint *)((long)puVar5 + lVar8 + 0x24) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 0x10);
        *(uint *)((long)puVar5 + lVar8 + 0x28) = uVar3;
        *(uint *)((long)puVar5 + lVar8 + 0x2c) = uVar3 ^ *(uint *)((long)puVar5 + lVar8 + 0x14);
        lVar9 = extraout_RDX_03;
      } while (lVar10 == 0 || lVar8 < -0x18);
      uVar3 = (uint)auVar14._0_8_ ^
              (uint)pbVar7[1] ^ *(uint *)(extraout_RDX_03 + 0xc00 + (ulong)auVar17[0] * 4) ^
              *(uint *)(extraout_RDX_03 + (ulong)(auVar17._0_4_ >> 8 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_03 + 0x400 + (ulong)auVar17[2] * 4) ^
              *(uint *)(extraout_RDX_03 + 0x800 + (ulong)auVar17[3] * 4);
      *(uint *)((long)puVar5 + lVar8 + 0x30) = uVar3;
      uVar3 = (uint)extraout_XMM1_Qa_03 ^ uVar3;
      *(uint *)((long)puVar5 + lVar8 + 0x34) = uVar3;
      uVar3 = auVar16._0_4_ ^ uVar3;
      *(uint *)((long)puVar5 + lVar8 + 0x38) = uVar3;
      *(uint *)((long)puVar5 + lVar8 + 0x3c) = auVar15._0_4_ ^ uVar3;
      return 0;
    }
    if (param_2 == 0x100) {
      uVar3 = *param_1;
      uVar13 = param_1[1];
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      param_3[0x3c] = 0xe0;
      *param_3 = uVar3;
      param_3[1] = uVar13;
      param_3[2] = uVar1;
      param_3[3] = uVar2;
      uStack_18 = param_1[4];
      uStack_14 = param_1[5];
      uStack_10 = param_1[6];
      uStack_c = param_1[7];
      puVar6 = &_AESRcon;
      lVar9 = -0xc0;
      param_3 = param_3 + 0x30;
      uVar3 = uStack_c;
      InvMixColumn(&_AESRcon,param_3,&_AESSubBytesWordTable);
      *(undefined4 *)((long)param_3 + lVar9 + 0x10) = in_XMM7_Da;
      InvMixColumn();
      *(undefined4 *)((long)param_3 + lVar9 + 0x14) = in_XMM7_Da;
      InvMixColumn();
      *(undefined4 *)((long)param_3 + lVar9 + 0x18) = in_XMM7_Da;
      InvMixColumn();
      *(undefined4 *)((long)param_3 + lVar9 + 0x1c) = in_XMM7_Da;
      pbVar7 = puVar6 + 1;
      uVar3 = (uint)*pbVar7 ^ *(uint *)(extraout_RDX_04 + 0xc00 + (ulong)(byte)uVar3 * 4) ^
              *(uint *)(extraout_RDX_04 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_04 + 0x400 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_04 + 0x800 + (ulong)(uVar3 >> 0x18) * 4);
      lVar10 = lVar9 + 0x20;
      uStack_28 = *(uint *)((long)param_3 + lVar9) ^ uVar3;
      uStack_24 = InvMixColumn();
      *(uint *)((long)param_3 + lVar10) = uVar3;
      uStack_24 = *(uint *)((long)param_3 + lVar10 + -0x1c) ^ uStack_24;
      InvMixColumn();
      auVar12._8_8_ = extraout_XMM1_Qb_04;
      auVar12._0_8_ = extraout_XMM1_Qa_04;
      *(uint *)((long)param_3 + lVar10 + 4) = uVar3;
      auVar12 = ZEXT416(*(uint *)((long)param_3 + lVar10 + -0x18)) ^ auVar12;
      uStack_20 = auVar12._0_4_;
      InvMixColumn();
      *(uint *)((long)param_3 + lVar10 + 8) = uVar3;
      auVar12 = ZEXT416(*(uint *)((long)param_3 + lVar10 + -0x14)) ^ auVar12;
      uStack_1c = auVar12._0_4_;
      InvMixColumn();
      *(uint *)((long)param_3 + lVar10 + 0xc) = uVar3;
      uVar3 = auVar12._0_4_;
      uVar3 = *(uint *)(extraout_RDX_05 + (ulong)auVar12[0] * 4) ^
              *(uint *)(extraout_RDX_05 + 0x400 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_05 + 0x800 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_05 + 0xc00 + (ulong)(uVar3 >> 0x18) * 4);
      uStack_18 = uStack_18 ^ uVar3;
      uStack_14 = uStack_14 ^ uStack_18;
      uStack_10 = uStack_10 ^ uStack_14;
      uStack_c = uStack_c ^ uStack_10;
      auVar16 = ZEXT416(uStack_c);
      InvMixColumn();
      uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar10 + -0x10);
      *(uint *)((long)param_3 + lVar10 + 0x10) = uVar3;
      uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar10 + -0xc);
      *(uint *)((long)param_3 + lVar10 + 0x14) = uVar3;
      uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar10 + -8);
      *(uint *)((long)param_3 + lVar10 + 0x18) = uVar3;
      *(uint *)((long)param_3 + lVar10 + 0x1c) = uVar3 ^ *(uint *)((long)param_3 + lVar10 + -4);
      lVar9 = extraout_RDX_06;
      do {
        lVar8 = lVar10;
        pbVar7 = pbVar7 + 1;
        uVar3 = auVar16._0_4_;
        uVar3 = (uint)*pbVar7 ^ *(uint *)(lVar9 + 0xc00 + (ulong)auVar16[0] * 4) ^
                *(uint *)(lVar9 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                *(uint *)(lVar9 + 0x400 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                *(uint *)(lVar9 + 0x800 + (ulong)(uVar3 >> 0x18) * 4);
        uStack_28 = uStack_28 ^ uVar3;
        uStack_24 = uStack_24 ^ uStack_28;
        uStack_20 = uStack_20 ^ uStack_24;
        uStack_1c = uStack_1c ^ uStack_20;
        uVar13 = uStack_1c;
        InvMixColumn();
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8);
        *(uint *)((long)param_3 + lVar8 + 0x20) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 4);
        *(uint *)((long)param_3 + lVar8 + 0x24) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 8);
        *(uint *)((long)param_3 + lVar8 + 0x28) = uVar3;
        *(uint *)((long)param_3 + lVar8 + 0x2c) = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 0xc);
        uVar3 = *(uint *)(extraout_RDX_07 + (ulong)(byte)uVar13 * 4) ^
                *(uint *)(extraout_RDX_07 + 0x400 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
                *(uint *)(extraout_RDX_07 + 0x800 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
                *(uint *)(extraout_RDX_07 + 0xc00 + (ulong)(uVar13 >> 0x18) * 4);
        uStack_18 = uStack_18 ^ uVar3;
        uStack_14 = uStack_14 ^ uStack_18;
        uStack_10 = uStack_10 ^ uStack_14;
        uStack_c = uStack_c ^ uStack_10;
        auVar16 = ZEXT416(uStack_c);
        InvMixColumn();
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 0x10);
        *(uint *)((long)param_3 + lVar8 + 0x30) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 0x14);
        *(uint *)((long)param_3 + lVar8 + 0x34) = uVar3;
        uVar3 = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 0x18);
        *(uint *)((long)param_3 + lVar8 + 0x38) = uVar3;
        *(uint *)((long)param_3 + lVar8 + 0x3c) = uVar3 ^ *(uint *)((long)param_3 + lVar8 + 0x1c);
        lVar9 = extraout_RDX_08;
        lVar10 = lVar8 + 0x20;
      } while (lVar8 < -0x20);
      uStack_28 = uStack_28 ^
                  (uint)pbVar7[1] ^ *(uint *)(extraout_RDX_08 + 0xc00 + (ulong)auVar16[0] * 4) ^
                  *(uint *)(extraout_RDX_08 + (ulong)(auVar16._0_4_ >> 8 & 0xff) * 4) ^
                  *(uint *)(extraout_RDX_08 + 0x400 + (ulong)auVar16[2] * 4) ^
                  *(uint *)(extraout_RDX_08 + 0x800 + (ulong)auVar16[3] * 4);
      *(uint *)((long)param_3 + lVar8 + 0x40) = uStack_28;
      uStack_24 = uStack_24 ^ uStack_28;
      *(uint *)((long)param_3 + lVar8 + 0x44) = uStack_24;
      uStack_20 = uStack_20 ^ uStack_24;
      *(uint *)((long)param_3 + lVar8 + 0x48) = uStack_20;
      *(uint *)((long)param_3 + lVar8 + 0x4c) = uStack_1c ^ uStack_20;
      return 0;
    }
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

