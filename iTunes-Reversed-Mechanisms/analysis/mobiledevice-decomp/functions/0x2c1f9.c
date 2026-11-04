// rea decompile_all
// name: _vng_aes_decrypt_key256
// address: 0x2c1f9
// body: available
// range: 0x2c1f9-0x2c227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_decrypt_key256(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar11 [16];
  uint uVar12;
  undefined4 in_XMM7_Da;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  param_2[0x3c] = 0xe0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uStack_18 = param_1[4];
  uStack_14 = param_1[5];
  uStack_10 = param_1[6];
  uStack_c = param_1[7];
  puVar6 = &_AESRcon;
  lVar8 = -0xc0;
  param_2 = param_2 + 0x30;
  uVar5 = uStack_c;
  InvMixColumn(&_AESRcon,param_2,&_AESSubBytesWordTable);
  *(undefined4 *)((long)param_2 + lVar8 + 0x10) = in_XMM7_Da;
  InvMixColumn();
  *(undefined4 *)((long)param_2 + lVar8 + 0x14) = in_XMM7_Da;
  InvMixColumn();
  *(undefined4 *)((long)param_2 + lVar8 + 0x18) = in_XMM7_Da;
  InvMixColumn();
  *(undefined4 *)((long)param_2 + lVar8 + 0x1c) = in_XMM7_Da;
  pbVar7 = puVar6 + 1;
  uVar5 = (uint)*pbVar7 ^ *(uint *)(extraout_RDX + 0xc00 + (ulong)(byte)uVar5 * 4) ^
          *(uint *)(extraout_RDX + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(extraout_RDX + 0x400 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(extraout_RDX + 0x800 + (ulong)(uVar5 >> 0x18) * 4);
  lVar9 = lVar8 + 0x20;
  uStack_28 = *(uint *)((long)param_2 + lVar8) ^ uVar5;
  uStack_24 = InvMixColumn();
  *(uint *)((long)param_2 + lVar9) = uVar5;
  uStack_24 = *(uint *)((long)param_2 + lVar9 + -0x1c) ^ uStack_24;
  InvMixColumn();
  auVar11._8_8_ = extraout_XMM1_Qb;
  auVar11._0_8_ = extraout_XMM1_Qa;
  *(uint *)((long)param_2 + lVar9 + 4) = uVar5;
  auVar11 = ZEXT416(*(uint *)((long)param_2 + lVar9 + -0x18)) ^ auVar11;
  uStack_20 = auVar11._0_4_;
  InvMixColumn();
  *(uint *)((long)param_2 + lVar9 + 8) = uVar5;
  auVar11 = ZEXT416(*(uint *)((long)param_2 + lVar9 + -0x14)) ^ auVar11;
  uStack_1c = auVar11._0_4_;
  InvMixColumn();
  *(uint *)((long)param_2 + lVar9 + 0xc) = uVar5;
  uVar5 = auVar11._0_4_;
  uVar5 = *(uint *)(extraout_RDX_00 + (ulong)auVar11[0] * 4) ^
          *(uint *)(extraout_RDX_00 + 0x400 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(extraout_RDX_00 + 0x800 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(extraout_RDX_00 + 0xc00 + (ulong)(uVar5 >> 0x18) * 4);
  uStack_18 = uStack_18 ^ uVar5;
  uStack_14 = uStack_14 ^ uStack_18;
  uStack_10 = uStack_10 ^ uStack_14;
  uStack_c = uStack_c ^ uStack_10;
  auVar11 = ZEXT416(uStack_c);
  InvMixColumn();
  uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar9 + -0x10);
  *(uint *)((long)param_2 + lVar9 + 0x10) = uVar5;
  uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar9 + -0xc);
  *(uint *)((long)param_2 + lVar9 + 0x14) = uVar5;
  uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar9 + -8);
  *(uint *)((long)param_2 + lVar9 + 0x18) = uVar5;
  *(uint *)((long)param_2 + lVar9 + 0x1c) = uVar5 ^ *(uint *)((long)param_2 + lVar9 + -4);
  lVar8 = extraout_RDX_01;
  do {
    lVar10 = lVar9;
    pbVar7 = pbVar7 + 1;
    uVar5 = auVar11._0_4_;
    uVar5 = (uint)*pbVar7 ^ *(uint *)(lVar8 + 0xc00 + (ulong)auVar11[0] * 4) ^
            *(uint *)(lVar8 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(lVar8 + 0x400 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(lVar8 + 0x800 + (ulong)(uVar5 >> 0x18) * 4);
    uStack_28 = uStack_28 ^ uVar5;
    uStack_24 = uStack_24 ^ uStack_28;
    uStack_20 = uStack_20 ^ uStack_24;
    uStack_1c = uStack_1c ^ uStack_20;
    uVar12 = uStack_1c;
    InvMixColumn();
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10);
    *(uint *)((long)param_2 + lVar10 + 0x20) = uVar5;
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 4);
    *(uint *)((long)param_2 + lVar10 + 0x24) = uVar5;
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 8);
    *(uint *)((long)param_2 + lVar10 + 0x28) = uVar5;
    *(uint *)((long)param_2 + lVar10 + 0x2c) = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 0xc);
    uVar5 = *(uint *)(extraout_RDX_02 + (ulong)(byte)uVar12 * 4) ^
            *(uint *)(extraout_RDX_02 + 0x400 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(extraout_RDX_02 + 0x800 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(extraout_RDX_02 + 0xc00 + (ulong)(uVar12 >> 0x18) * 4);
    uStack_18 = uStack_18 ^ uVar5;
    uStack_14 = uStack_14 ^ uStack_18;
    uStack_10 = uStack_10 ^ uStack_14;
    uStack_c = uStack_c ^ uStack_10;
    auVar11 = ZEXT416(uStack_c);
    InvMixColumn();
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 0x10);
    *(uint *)((long)param_2 + lVar10 + 0x30) = uVar5;
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 0x14);
    *(uint *)((long)param_2 + lVar10 + 0x34) = uVar5;
    uVar5 = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 0x18);
    *(uint *)((long)param_2 + lVar10 + 0x38) = uVar5;
    *(uint *)((long)param_2 + lVar10 + 0x3c) = uVar5 ^ *(uint *)((long)param_2 + lVar10 + 0x1c);
    lVar8 = extraout_RDX_03;
    lVar9 = lVar10 + 0x20;
  } while (lVar10 < -0x20);
  uStack_28 = uStack_28 ^
              (uint)pbVar7[1] ^ *(uint *)(extraout_RDX_03 + 0xc00 + (ulong)auVar11[0] * 4) ^
              *(uint *)(extraout_RDX_03 + (ulong)(auVar11._0_4_ >> 8 & 0xff) * 4) ^
              *(uint *)(extraout_RDX_03 + 0x400 + (ulong)auVar11[2] * 4) ^
              *(uint *)(extraout_RDX_03 + 0x800 + (ulong)auVar11[3] * 4);
  *(uint *)((long)param_2 + lVar10 + 0x40) = uStack_28;
  uStack_24 = uStack_24 ^ uStack_28;
  *(uint *)((long)param_2 + lVar10 + 0x44) = uStack_24;
  uStack_20 = uStack_20 ^ uStack_24;
  *(uint *)((long)param_2 + lVar10 + 0x48) = uStack_20;
  *(uint *)((long)param_2 + lVar10 + 0x4c) = uStack_1c ^ uStack_20;
  return 0;
}

