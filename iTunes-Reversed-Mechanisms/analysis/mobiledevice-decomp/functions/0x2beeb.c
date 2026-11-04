// rea decompile_all
// name: _vng_aes_decrypt_key192
// address: 0x2beeb
// body: available
// range: 0x2beeb-0x2bf19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_decrypt_key192(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar5;
  long extraout_RDX_01;
  undefined4 *puVar6;
  undefined *puVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 in_XMM7_Da;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  auVar14 = ZEXT416(uVar4);
  uVar3 = param_1[3];
  auVar15 = ZEXT416(uVar3);
  param_2[0x3c] = 0xc0;
  auVar16 = ZEXT416((uint)param_1[4]);
  auVar17 = ZEXT416((uint)param_1[5]);
  puVar7 = &_AESRcon;
  lVar9 = -0xa0;
  puVar6 = param_2 + 0x28;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar4;
  param_2[3] = uVar3;
  InvMixColumn(&_AESRcon,puVar6,&_AESSubBytesWordTable);
  *(undefined4 *)((long)puVar6 + lVar9 + 0x10) = in_XMM7_Da;
  auVar19._0_8_ = InvMixColumn();
  auVar12._8_8_ = extraout_XMM1_Qb;
  auVar12._0_8_ = extraout_XMM1_Qa;
  auVar19._8_8_ = extraout_XMM0_Qb;
  *(undefined4 *)((long)puVar6 + lVar9 + 0x14) = in_XMM7_Da;
  pbVar8 = puVar7 + 1;
  uVar4 = auVar17._0_4_;
  auVar18 = ZEXT416((uint)*pbVar8 ^ *(uint *)(extraout_RDX + 0xc00 + (ulong)auVar17[0] * 4) ^
                    *(uint *)(extraout_RDX + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(extraout_RDX + 0x400 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(extraout_RDX + 0x800 + (ulong)(uVar4 >> 0x18) * 4));
  auVar14 = auVar14 ^ auVar12 ^ auVar19 ^ auVar18;
  auVar15 = auVar15 ^ auVar14;
  auVar16 = auVar16 ^ auVar15;
  auVar17 = auVar17 ^ auVar16;
  lVar9 = lVar9 + 0x18;
  InvMixColumn();
  *(int *)((long)puVar6 + lVar9) = auVar18._0_4_;
  InvMixColumn();
  *(int *)((long)puVar6 + lVar9 + 4) = auVar18._0_4_;
  InvMixColumn();
  *(int *)((long)puVar6 + lVar9 + 8) = auVar18._0_4_;
  auVar11._0_8_ = InvMixColumn();
  auVar13._8_8_ = extraout_XMM1_Qb_00;
  auVar13._0_8_ = extraout_XMM1_Qa_00;
  auVar11._8_8_ = extraout_XMM0_Qb_00;
  *(uint *)((long)puVar6 + lVar9 + 0xc) = auVar18._0_4_;
  uVar4 = auVar18._0_4_ ^ *(uint *)((long)puVar6 + lVar9 + -8);
  *(uint *)((long)puVar6 + lVar9 + 0x10) = uVar4;
  *(uint *)((long)puVar6 + lVar9 + 0x14) = uVar4 ^ *(uint *)((long)puVar6 + lVar9 + -4);
  lVar5 = extraout_RDX_00;
  do {
    lVar10 = lVar9;
    pbVar8 = pbVar8 + 1;
    uVar4 = auVar17._0_4_;
    auVar19 = ZEXT416((uint)*pbVar8 ^ *(uint *)(lVar5 + 0xc00 + (ulong)auVar17[0] * 4) ^
                      *(uint *)(lVar5 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                      *(uint *)(lVar5 + 0x400 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(lVar5 + 0x800 + (ulong)(uVar4 >> 0x18) * 4));
    auVar14 = auVar14 ^ auVar13 ^ auVar11 ^ auVar19;
    auVar15 = auVar15 ^ auVar14;
    auVar16 = auVar16 ^ auVar15;
    auVar17 = auVar17 ^ auVar16;
    auVar11._0_8_ = InvMixColumn();
    auVar13._8_8_ = extraout_XMM1_Qb_01;
    auVar13._0_8_ = extraout_XMM1_Qa_01;
    auVar11._8_8_ = extraout_XMM0_Qb_01;
    lVar9 = lVar10 + 0x18;
    uVar4 = auVar19._0_4_ ^ *(uint *)((long)puVar6 + lVar10);
    *(uint *)((long)puVar6 + lVar9) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar10 + 4);
    *(uint *)((long)puVar6 + lVar10 + 0x1c) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar10 + 8);
    *(uint *)((long)puVar6 + lVar10 + 0x20) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar10 + 0xc);
    *(uint *)((long)puVar6 + lVar10 + 0x24) = uVar4;
    uVar4 = uVar4 ^ *(uint *)((long)puVar6 + lVar10 + 0x10);
    *(uint *)((long)puVar6 + lVar10 + 0x28) = uVar4;
    *(uint *)((long)puVar6 + lVar10 + 0x2c) = uVar4 ^ *(uint *)((long)puVar6 + lVar10 + 0x14);
    lVar5 = extraout_RDX_01;
  } while (lVar9 == 0 || lVar10 < -0x18);
  uVar4 = (uint)auVar11._0_8_ ^
          (uint)pbVar8[1] ^ *(uint *)(extraout_RDX_01 + 0xc00 + (ulong)auVar17[0] * 4) ^
          *(uint *)(extraout_RDX_01 + (ulong)(auVar17._0_4_ >> 8 & 0xff) * 4) ^
          *(uint *)(extraout_RDX_01 + 0x400 + (ulong)auVar17[2] * 4) ^
          *(uint *)(extraout_RDX_01 + 0x800 + (ulong)auVar17[3] * 4);
  *(uint *)((long)puVar6 + lVar10 + 0x30) = uVar4;
  uVar4 = (uint)extraout_XMM1_Qa_01 ^ uVar4;
  *(uint *)((long)puVar6 + lVar10 + 0x34) = uVar4;
  uVar4 = auVar14._0_4_ ^ uVar4;
  *(uint *)((long)puVar6 + lVar10 + 0x38) = uVar4;
  *(uint *)((long)puVar6 + lVar10 + 0x3c) = auVar15._0_4_ ^ uVar4;
  return 0;
}

