// name: FUN_1000ef450
// address: 1000ef450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef450(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  uint local_110;
  byte local_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte local_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  
  lVar17 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar16 = (int)param_1[1];
  puVar18 = (uint *)*param_1;
  pbVar19 = (byte *)param_1[4];
  uVar67 = *puVar18 ^ _DAT_1006d2f00 ^ _DAT_1006d2f10;
  uVar71 = puVar18[1] ^ _UNK_1006d2f04 ^ _UNK_1006d2f14;
  uVar72 = puVar18[2] ^ _UNK_1006d2f08 ^ _UNK_1006d2f18;
  uVar73 = puVar18[3] ^ _UNK_1006d2f0c ^ _UNK_1006d2f1c;
  auVar69 = *(undefined1 (*) [16])param_1[2];
  auVar74 = pshufb(auVar69,_DAT_1006d2e30);
  auVar74 = auVar74 ^ _DAT_1006d2f20;
  auVar68[1] = auVar69[1] * '\x02';
  auVar68[0] = auVar69[0] * '\x02';
  auVar68[2] = auVar69[2] * '\x02';
  auVar68[3] = auVar69[3] * '\x02';
  auVar68[4] = auVar69[4] * '\x02';
  auVar68[5] = auVar69[5] * '\x02';
  auVar68[6] = auVar69[6] * '\x02';
  auVar68[7] = auVar69[7] * '\x02';
  auVar68[8] = auVar69[8] * '\x02';
  auVar68[9] = auVar69[9] * '\x02';
  auVar68[10] = auVar69[10] * '\x02';
  auVar68[0xb] = auVar69[0xb] * '\x02';
  auVar68[0xc] = auVar69[0xc] * '\x02';
  auVar68[0xd] = auVar69[0xd] * '\x02';
  auVar68[0xe] = auVar69[0xe] * '\x02';
  auVar68[0xf] = auVar69[0xf] * '\x02';
  auVar69 = pshufb(auVar68,_DAT_1006d2e30);
  auVar69 = auVar69 & _DAT_1006d2f30;
  iVar63 = (((uint)param_1 & 0x45fedd0e) * -2 + (uint)param_1 + 0xc5fedd0e ^ 0x1592ec15) *
           0x29e509e3;
  auVar70[0] = auVar69[0] + auVar74[0] + DAT_1006d2f40;
  auVar70[1] = auVar69[1] + auVar74[1] + UNK_1006d2f41;
  auVar70[2] = auVar69[2] + auVar74[2] + UNK_1006d2f42;
  auVar70[3] = auVar69[3] + auVar74[3] + UNK_1006d2f43;
  auVar70[4] = auVar69[4] + auVar74[4] + UNK_1006d2f44;
  auVar70[5] = auVar69[5] + auVar74[5] + UNK_1006d2f45;
  auVar70[6] = auVar69[6] + auVar74[6] + UNK_1006d2f46;
  auVar70[7] = auVar69[7] + auVar74[7] + UNK_1006d2f47;
  auVar70[8] = auVar69[8] + auVar74[8] + UNK_1006d2f48;
  auVar70[9] = auVar69[9] + auVar74[9] + UNK_1006d2f49;
  auVar70[10] = auVar69[10] + auVar74[10] + UNK_1006d2f4a;
  auVar70[0xb] = auVar69[0xb] + auVar74[0xb] + UNK_1006d2f4b;
  auVar70[0xc] = auVar69[0xc] + auVar74[0xc] + UNK_1006d2f4c;
  auVar70[0xd] = auVar69[0xd] + auVar74[0xd] + UNK_1006d2f4d;
  auVar70[0xe] = auVar69[0xe] + auVar74[0xe] + UNK_1006d2f4e;
  auVar70[0xf] = auVar69[0xf] + auVar74[0xf] + UNK_1006d2f4f;
  auVar69 = pshufb(auVar70 ^ _DAT_1006d2f50,_DAT_1006d2e30);
  bStack_45 = auVar69[3];
  puVar20 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0617];
  bStack_47 = auVar69[1];
  puVar21 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05ae];
  bStack_41 = auVar69[7];
  bStack_43 = auVar69[5];
  bStack_3f = auVar69[9];
  bStack_3b = auVar69[0xd];
  bStack_42 = auVar69[6];
  puVar22 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f065e];
  bStack_40 = auVar69[8];
  puVar23 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0671];
  bStack_3e = auVar69[10];
  bStack_3a = auVar69[0xe];
  bStack_46 = auVar69[2];
  local_48 = auVar69[0];
  uVar61 = (uint)(byte)(puVar23[((ulong)local_48 ^ 0xbc) - 2] + 0x76 ^ 0xc3) << 0x18 |
           ((byte)puVar22[((ulong)bStack_46 ^ 0x54) - 7] ^ 0x66) << 8 |
           (uint)(byte)(puVar20[((ulong)bStack_45 ^ 0xa0) - 0xe] - 0x26 ^ 0x19) |
           (uint)(byte)(puVar21[((ulong)bStack_47 ^ 0x23) - 7] ^ bStack_47 ^ 0x2a) << 0x10;
  bStack_44 = auVar69[4];
  uVar36 = (uint)(byte)(puVar23[((ulong)bStack_44 ^ 0xd0) - 2] + 0x76 ^ 0x16) << 0x18 |
           ((byte)puVar22[((ulong)bStack_42 ^ 0xfb) - 7] ^ 0x42) << 8 |
           (uint)(byte)(puVar20[((ulong)bStack_41 ^ 0x38) - 0xe] - 0x26 ^ 0xb) |
           (uint)(byte)(puVar21[((ulong)bStack_43 ^ 0xa3) - 7] ^ bStack_43 ^ 0x2b) << 0x10;
  bStack_39 = auVar69[0xf];
  bStack_3c = auVar69[0xc];
  bStack_3d = auVar69[0xb];
  uVar31 = (uint)(byte)(puVar23[((ulong)bStack_3c ^ 0x9c) - 2] + 0x76 ^ 0x53) << 0x18 |
           (uint)(byte)(puVar20[((ulong)bStack_39 ^ 0xe6) - 0xe] - 0x26) |
           ((byte)puVar22[((ulong)bStack_3a ^ 0x4c) - 7] ^ 0x38) << 8 |
           (uint)(byte)(puVar21[((ulong)bStack_3b ^ 0xbe) - 7] ^ bStack_3b ^ 0xe3) << 0x10;
  uVar45 = ((uVar31 ^ 0x18) - (uVar31 * 2 & 0xd2894400)) + 0x6944a200;
  puVar24 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0608];
  puVar25 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0659];
  puVar26 = (&PTR_DAT_10082ee00)[iVar63 + iVar16 + -0x6c3f06ab];
  puVar27 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05e5];
  uVar31 = (*(uint *)(puVar26 + (ulong)(uVar45 & 0xff ^ 0xc2) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar45 & 0xff ^ 0xc2) * 4 + -10) >> 4) ^
           *(int *)(puVar25 + (ulong)(uVar45 >> 0x18 ^ 0xa1) * 4 + -10) + 0xa9f9894bU ^
           *(uint *)(puVar24 + (ulong)(uVar45 >> 8 & 0xff ^ 0x72) * 4 + -0xb) ^ uVar61 ^
           *(uint *)(puVar27 + (ulong)(uVar45 >> 0x10 & 0xff ^ 5) * 4 + -0xe);
  uVar46 = (uint)(byte)(puVar20[((ulong)bStack_3d ^ 0xf3) - 0xe] - 0x26) |
           (uint)(byte)(puVar21[((ulong)bStack_3f ^ 0xeb) - 7] ^ bStack_3f ^ 0x83) << 0x10 |
           ((byte)puVar22[((ulong)bStack_3e ^ 0x20) - 7] ^ 0x1e) << 8 |
           (uint)(byte)(puVar23[((ulong)bStack_40 ^ 0x98) - 2] + 0x76 ^ 0x98) << 0x18;
  uVar64 = uVar31 ^ uVar36 ^ 0xb562cced;
  uVar47 = ((uVar31 ^ uVar36) & 0x1000 | 0x15e78d26) ^ uVar46 ^ uVar64 & 0xffffefff;
  uVar37 = uVar47 ^ uVar45;
  uVar32 = (*(uint *)(puVar26 + (ulong)(uVar37 & 0xff ^ 5) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar37 & 0xff ^ 5) * 4 + -10) >> 4) ^ uVar31 ^ 0x5f13697d;
  uVar32 = (uVar32 << 0x14 | uVar32 >> 0xc) ^
           ((*(int *)(puVar25 + (ulong)(uVar37 >> 0x18 ^ 0xb6) * 4 + -10) + 0xa9f9894bU) * 0x100000
           | *(int *)(puVar25 + (ulong)(uVar37 >> 0x18 ^ 0xb6) * 4 + -10) + 0xa9f9894bU >> 0xc) ^
           0x85ddd7d1;
  uVar48 = *(uint *)(puVar27 + (ulong)(uVar37 >> 0x10 & 0xff ^ 0xc4) * 4 + -0xe) ^
           *(uint *)(puVar24 + (ulong)(uVar37 >> 8 & 0xff ^ 0xa4) * 4 + -0xb) ^
           (uVar32 << 0xc | uVar32 >> 0x14);
  uVar37 = uVar37 ^ 0x17c1d6c7;
  uVar49 = uVar48 ^ uVar64 ^ uVar47;
  uVar50 = uVar49 ^ uVar37;
  uVar38 = (*(uint *)(puVar26 + (ulong)(uVar50 & 0xff ^ 0x5b) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar50 & 0xff ^ 0x5b) * 4 + -10) >> 4) ^
           *(int *)(puVar25 + (ulong)(uVar50 >> 0x18 ^ 0xb5) * 4 + -10) + 0xa9f9894bU ^
           *(uint *)(puVar24 + (ulong)(uVar50 >> 8 & 0xff ^ 0x10) * 4 + -0xb) ^
           *(uint *)(puVar27 + (ulong)(uVar50 >> 0x10 & 0xff ^ 0x85) * 4 + -0xe);
  uVar39 = uVar38 ^ uVar64;
  uVar40 = uVar39 ^ 0x60bdb2f9;
  uVar41 = uVar40 ^ uVar37;
  uVar32 = uVar41 ^ 0xa5f1c8d;
  puVar20 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05dd];
  puVar21 = (&PTR_DAT_10082ee00)[iVar16 + -0x6c3f065f + iVar63];
  bStack_4b = (byte)(uVar73 >> 8);
  bStack_4a = (byte)(uVar73 >> 0x10);
  puVar22 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0628];
  bStack_49 = (byte)(uVar73 >> 0x18);
  puVar23 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f060e];
  bStack_4c = (byte)uVar73;
  uVar38 = uVar38 ^ uVar48;
  uVar32 = *(int *)(puVar25 + (ulong)(uVar41 >> 0x18 ^ 0x40) * 4 + -10) + 0xa9f9894bU ^ uVar38 ^
           (*(uint *)(puVar26 + (ulong)(uVar32 & 0xff ^ 0xed) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar32 & 0xff ^ 0xed) * 4 + -10) >> 4) ^
           *(uint *)(puVar24 + (ulong)(uVar32 >> 8 & 0xff ^ 0x38) * 4 + -0xb) ^
           *(uint *)(puVar27 + (ulong)(uVar32 >> 0x10 & 0xff ^ 0x13) * 4 + -0xe);
  uVar51 = uVar49 ^ uVar40 ^ 0x3517364c;
  uVar73 = uVar32 ^ 0xe14956a2;
  uVar40 = uVar40 ^ uVar73;
  uVar65 = uVar40 ^ 0x37d79ce8;
  uVar33 = uVar65 ^ uVar51;
  uVar34 = uVar33 ^ uVar41;
  bStack_4e = (byte)(uVar72 >> 0x10);
  bStack_4d = (byte)(uVar72 >> 0x18);
  bStack_4f = (byte)(uVar72 >> 8);
  bStack_50 = (byte)uVar72;
  uVar46 = ((uint)(byte)((puVar23[((ulong)bStack_50 ^ 0xa9) - 7] << 5 |
                         (byte)puVar23[((ulong)bStack_50 ^ 0xa9) - 7] >> 3) ^ 0x45) << 0x18 |
           ((byte)puVar21[((ulong)bStack_4f ^ 0x9f) - 6] ^ 0x38) << 0x10 |
           (byte)puVar22[((ulong)bStack_4d ^ 0x13) - 0xb] ^ 0x93 |
           ((byte)puVar20[((ulong)bStack_4e ^ 0x62) - 6] ^ 0x6f) << 8) ^ uVar46;
  local_58 = (byte)uVar67;
  puVar28 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0599];
  bStack_56 = (byte)(uVar67 >> 0x10);
  bStack_55 = (byte)(uVar67 >> 0x18);
  bStack_51 = (byte)(uVar71 >> 0x18);
  bStack_53 = (byte)(uVar71 >> 8);
  bStack_52 = (byte)(uVar71 >> 0x10);
  bStack_54 = (byte)uVar71;
  bStack_57 = (byte)(uVar67 >> 8);
  uVar52 = ((uint)(byte)((puVar23[((ulong)bStack_54 ^ 0x51) - 7] << 5 |
                         (byte)puVar23[((ulong)bStack_54 ^ 0x51) - 7] >> 3) ^ 0xea) << 0x18 |
           ((byte)puVar20[((ulong)bStack_52 ^ 0xb9) - 6] ^ 0x33) << 8 |
           (byte)puVar22[((ulong)bStack_51 ^ 0xff) - 0xb] ^ 0xc |
           ((byte)puVar21[((ulong)bStack_53 ^ 0xed) - 6] ^ 0xbb) << 0x10) ^ uVar36 ^ 0xbed63797;
  puVar29 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0591];
  uVar53 = ((uint)(byte)((puVar23[((ulong)bStack_4c ^ 0x70) - 7] << 5 |
                         (byte)puVar23[((ulong)bStack_4c ^ 0x70) - 7] >> 3) ^ 0x87) << 0x18 |
           (byte)puVar22[((ulong)bStack_49 ^ 0x98) - 0xb] ^ 0xd2 |
           ((byte)puVar20[((ulong)bStack_4a ^ 0xb4) - 6] ^ 0xa4) << 8 |
           ((byte)puVar21[((ulong)bStack_4b ^ 0x7a) - 6] ^ 0x32) << 0x10) ^ uVar45 ^ 0x113541ab;
  puVar30 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f058d];
  uVar45 = (((byte)puVar21[((ulong)bStack_57 ^ 0x37) - 6] ^ 0x99) << 0x10 |
           (uint)(byte)((puVar23[((ulong)local_58 ^ 0xa2) - 7] << 5 |
                        (byte)puVar23[((ulong)local_58 ^ 0xa2) - 7] >> 3) ^ 0x5f) << 0x18 |
           (uint)(byte)puVar22[((ulong)bStack_55 ^ 0xe8) - 0xb] |
           ((byte)puVar20[((ulong)bStack_56 ^ 9) - 6] ^ 0xc5) << 8) ^ uVar61 ^ 0xbe323d57;
  puVar20 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f06a5];
  uVar31 = *(int *)(puVar29 + (ulong)(uVar52 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar31 ^
           *(uint *)(puVar30 + (ulong)(uVar53 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar46 >> 8 & 0xff ^ 0xbd) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar46 >> 8 & 0xff ^ 0xbd) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar20 + (ulong)(uVar45 >> 0x18) * 4 + -0xe) ^ 0xdac7fcd;
  uVar61 = (uVar31 << 5 | uVar31 >> 0x1b) ^ 0x5c80cbea;
  uVar31 = uVar61 >> 5;
  uVar42 = *(int *)(puVar25 + (ulong)(uVar34 >> 0x18 ^ 0xe) * 4 + -10) + 0xa9f9894bU ^ uVar73 ^
           *(uint *)(puVar27 + (ulong)((uVar34 ^ 0x2bc84858) >> 0x10 & 0xff ^ 0x92) * 4 + -0xe) ^
           *(uint *)(puVar24 + (ulong)((uVar34 ^ 0xaf5f1c8d) >> 8 & 0xff ^ 0x72) * 4 + -0xb) ^
           (*(uint *)(puVar26 + (ulong)((uVar34 ^ 0x2bc84858) & 0xff ^ 0x17) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)((uVar34 ^ 0x2bc84858) & 0xff ^ 0x17) * 4 + -10) >> 4);
  uVar65 = uVar65 ^ uVar42;
  uVar66 = uVar65 ^ 0x76fc06a7;
  uVar43 = uVar66 ^ uVar33;
  uVar73 = uVar34 ^ 0xaf5f1c8d ^ uVar43;
  uVar61 = (uVar61 << 0x1b | uVar31) ^ 0xa4b74dfb;
  uVar54 = *(int *)(puVar25 + (ulong)(uVar73 >> 0x18 ^ 0x61) * 4 + -10) + 0xa9f9894bU ^
           *(uint *)(puVar27 + (ulong)((uVar73 ^ 0xc0de0277) >> 0x10 & 0xff ^ 5) * 4 + -0xe) ^
           uVar42 ^ *(uint *)(puVar24 + (ulong)(uVar73 >> 8 & 0xff ^ 0x70) * 4 + -0xb) ^
           (*(uint *)(puVar26 + (ulong)(uVar73 & 0xff ^ 0xb5) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar73 & 0xff ^ 0xb5) * 4 + -10) >> 4);
  uVar66 = uVar66 ^ uVar54;
  uVar67 = uVar66 ^ 0x4d568212 ^ uVar43 ^ 0xf6888065;
  uVar62 = uVar73 ^ 0xc0de0277 ^ uVar67;
  uVar71 = uVar62 ^ 0xb89eca4a;
  uVar57 = *(int *)(puVar25 + (ulong)(uVar62 >> 0x18 ^ 0x2c) * 4 + -10) + 0xa9f9894bU ^ uVar54 ^
           (*(uint *)(puVar26 + (ulong)(uVar71 & 0xff ^ 0xc2) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar71 & 0xff ^ 0xc2) * 4 + -10) >> 4) ^
           *(uint *)(puVar27 + (ulong)(uVar71 >> 0x10 & 0xff ^ 5) * 4 + -0xe) ^
           *(uint *)(puVar24 + (ulong)(uVar71 >> 8 & 0xff ^ 0x72) * 4 + -0xb) ^ 0x63fc06a7;
  uVar58 = uVar43 ^ 0xf6888065 ^ uVar57;
  uVar59 = uVar58 ^ 0x9257e83e;
  uVar60 = uVar59 ^ uVar62;
  uVar71 = uVar60 ^ 0x8d9eca4a;
  uVar55 = *(uint *)(puVar24 + (ulong)(uVar71 >> 8 & 0xff ^ 0x18) * 4 + -0xb) ^
           *(uint *)(puVar27 + (ulong)(uVar71 >> 0x10 & 0xff ^ 4) * 4 + -0xe) ^
           (*(uint *)(puVar26 + (ulong)(uVar71 & 0xff ^ 0xee) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar71 & 0xff ^ 0xee) * 4 + -10) >> 4) ^
           *(int *)(puVar25 + (ulong)(uVar60 >> 0x18 ^ 0x26) * 4 + -10) + 0xa9f9894bU;
  uVar56 = uVar55 ^ uVar66 ^ 0x4d568212;
  uVar71 = uVar56 ^ 0xd011a4d9;
  uVar72 = uVar71 ^ uVar62;
  uVar35 = uVar72 ^ 0x78eda27e;
  uVar46 = uVar46 ^ 0xd3ae7031;
  uVar47 = (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar53 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar47 ^
           *(uint *)(puVar20 + (ulong)(uVar46 >> 0x18) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar52 & 0xff) * 4 + -6);
  uVar44 = uVar64 ^ *(uint *)(puVar30 + (ulong)(uVar45 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar52 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar53 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar53 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar46 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU;
  uVar46 = uVar37 ^ *(uint *)(puVar20 + (ulong)(uVar53 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar52 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar52 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar30 + (ulong)(uVar46 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar45 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU;
  uVar45 = uVar49 ^ *(uint *)(puVar20 + (ulong)(uVar47 >> 0x18 ^ 0x65) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar46 >> 0x10 & 0xff ^ 0x56) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar44 & 0xff ^ 0xa2) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)((uVar31 & 0xff00) >> 8 ^ 0x80) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)((uVar31 & 0xff00) >> 8 ^ 0x80) * 4 + -10) >> 0x1a);
  uVar37 = (*(uint *)(puVar28 + (ulong)(uVar46 >> 8 & 0xff ^ 0xc0) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar46 >> 8 & 0xff ^ 0xc0) * 4 + -10) >> 0x1a) ^
           uVar48 ^ uVar64 ^ *(uint *)(puVar30 + (ulong)(uVar61 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar47 >> 0x10 & 0xff ^ 0xe5) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar44 >> 0x18 ^ 0xa6) * 4 + -0xe) ^ 0x71656c12;
  uVar48 = uVar48 ^ *(uint *)(puVar20 + (ulong)(uVar61 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar47 >> 8 & 0xff ^ 0xe) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar47 >> 8 & 0xff ^ 0xe) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar44 >> 0x10 & 0xff ^ 0x7a) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar46 & 0xff ^ 0x3e) * 4 + -6) ^ 0xa53b0cfc;
  uVar44 = *(int *)(puVar29 + (ulong)(uVar61 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar50 ^
           (*(uint *)(puVar28 + (ulong)(uVar44 >> 8 & 0xff ^ 0xb8) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar44 >> 8 & 0xff ^ 0xb8) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar30 + (ulong)(uVar47 & 0xff ^ 0x8b) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar46 >> 0x18 ^ 0x1b) * 4 + -0xe) ^ 0xfd6a2a7;
  uVar46 = uVar45 ^ 0x66a477d5;
  uVar47 = uVar39 ^ *(uint *)(puVar30 + (ulong)(uVar48 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar37 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar44 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar44 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar46 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU;
  uVar31 = uVar47 ^ 0xebd03c17;
  uVar39 = uVar38 ^ *(uint *)(puVar30 + (ulong)(uVar44 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar37 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff ^ 0xba) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff ^ 0xba) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar20 + (ulong)(uVar48 >> 0x18) * 4 + -0xe) ^ 0xf0918849;
  uVar61 = *(int *)(puVar29 + (ulong)(uVar44 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar51 ^
           *(uint *)(puVar30 + (ulong)(uVar37 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar48 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar48 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar20 + (ulong)(uVar46 >> 0x18) * 4 + -0xe);
  uVar45 = *(int *)(puVar29 + (ulong)(uVar48 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar41 ^
           (*(uint *)(puVar28 + (ulong)(uVar37 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar37 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar30 + (ulong)(uVar46 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar44 >> 0x18) * 4 + -0xe);
  uVar34 = *(int *)(puVar29 + (ulong)(uVar39 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^ uVar34 ^
           *(uint *)(puVar30 + (ulong)(uVar61 & 0xff ^ 0x3b) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar45 >> 0x18 ^ 0xfa) * 4 + -0xe) ^ 0xb409dcb3;
  uVar33 = (*(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar45 >> 0x10 & 0xff ^ 0x1f) * 4 + -2) + 0xb580dccdU ^ uVar33
           ^ *(uint *)(puVar30 + (ulong)(uVar31 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar61 >> 0x18 ^ 0xb2) * 4 + -0xe) ^ 0x3c329263;
  uVar37 = uVar40 ^ *(uint *)(puVar20 + (ulong)(uVar47 >> 0x18 ^ 0xf3) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff ^ 0x96) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff ^ 0x96) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar61 >> 0x10 & 0xff ^ 0xfa) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar39 & 0xff) * 4 + -6);
  uVar31 = uVar32 ^ *(uint *)(puVar20 + (ulong)(uVar39 >> 0x18) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar45 & 0xff ^ 0x9c) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar31 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff ^ 0xda) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff ^ 0xda) * 4 + -10) >> 0x1a) ^ 0xcb3b0cfc;
  uVar45 = uVar43 ^ *(uint *)(puVar30 + (ulong)(uVar37 & 0xff ^ 0xfc) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar33 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar34 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ 0xb2fada3b;
  uVar61 = uVar73 ^ *(uint *)(puVar30 + (ulong)(uVar33 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar31 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar34 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar37 >> 8 & 0xff ^ 0xc) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar37 >> 8 & 0xff ^ 0xc) * 4 + -10) >> 0x1a) ^ 0xdb88c249;
  uVar39 = (*(uint *)(puVar28 + (ulong)(uVar34 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar34 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^ uVar65 ^
           *(uint *)(puVar20 + (ulong)(uVar37 >> 0x18 ^ 0xcb) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar31 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar33 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ 0x8a1096b3;
  uVar31 = uVar42 ^ *(uint *)(puVar30 + (ulong)(uVar34 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar31 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar37 >> 0x10 & 0xff ^ 0x3b) * 4 + -2) + 0xb580dccdU ^
           0x2dd802e5;
  uVar33 = (uVar31 - (uVar31 * 2 & 0x63c4221c)) + 0x31e2110e;
  uVar31 = uVar67 ^ *(uint *)(puVar30 + (ulong)(uVar39 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar45 >> 0x18) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar61 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)((uVar33 ^ 0xe2cd00) >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)((uVar33 ^ 0xe2cd00) >> 8 & 0xff) * 4 + -10) >> 0x1a);
  uVar34 = *(uint *)(puVar30 + (ulong)(uVar33 & 0xff) * 4 + -6) ^ uVar66 ^
           *(int *)(puVar29 + (ulong)(uVar45 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar39 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff) * 4 + -10) >> 0x1a);
  uVar32 = uVar34 ^ 0x9c581206;
  uVar73 = uVar62 ^ *(uint *)(puVar20 + (ulong)(uVar61 >> 0x18) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar45 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)((uVar33 ^ 0xe2cd00) >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           0x96c80a74;
  uVar40 = uVar54 ^ *(uint *)(puVar20 + (ulong)(uVar33 >> 0x18 ^ 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar30 + (ulong)(uVar61 & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar39 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU;
  uVar39 = uVar31 ^ 0xffbadf06;
  uVar33 = *(int *)(puVar29 + (ulong)(uVar73 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)((uVar40 ^ 0x12905a5e) >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)((uVar40 ^ 0x12905a5e) >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           uVar58 ^ *(uint *)(puVar20 + (ulong)(uVar39 >> 0x18) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar32 & 0xff) * 4 + -6) ^ 0xea725a5e;
  uVar61 = uVar66 ^ uVar57 ^ *(uint *)(puVar30 + (ulong)((uVar40 ^ 0x12905a5e) & 0xff) * 4 + -6) ^
           *(int *)(puVar29 + (ulong)(uVar39 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar34 >> 0x18 ^ 0x84) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(byte)(uVar73 >> 8) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(byte)(uVar73 >> 8) * 4 + -10) >> 0x1a) ^ 0x2aba1206;
  uVar55 = uVar55 ^ uVar57;
  uVar67 = uVar57 ^ *(uint *)(puVar30 + (ulong)(byte)uVar73 * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff ^ 0x12) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff ^ 0x12) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar20 + (ulong)(uVar40 >> 0x18 ^ 10) * 4 + -0xe) ^
           *(int *)(puVar29 +
                   (ulong)(((uVar32 >> 0x10 & 0xff) - (uVar32 >> 0xf & 0x1c4)) + 0xe2) * 4 + -2) +
           0xb580dccdU;
  uVar45 = uVar67 ^ 0xdcc6d84c;
  uVar37 = *(uint *)(puVar26 + (ulong)(uVar35 & 0xff ^ 0xc2) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar35 & 0xff ^ 0xc2) * 4 + -10) >> 4;
  uVar31 = *(uint *)(puVar27 + (ulong)(uVar35 >> 0x10 & 0xff ^ 5) * 4 + -0xe) ^
           *(uint *)(puVar24 + (ulong)(uVar35 >> 8 & 0xff ^ 0x72) * 4 + -0xb) ^ uVar55;
  uVar34 = uVar31 ^ 0xdb568212;
  uVar35 = uVar60 ^ *(uint *)(puVar30 + (ulong)(uVar39 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar32 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar32 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar40 >> 0x10 & 0xff ^ 0x72) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar73 >> 0x18) * 4 + -0xe);
  uVar37 = *(int *)(puVar25 + (ulong)(uVar72 >> 0x18 ^ 0xd8) * 4 + -10) + 0xa9f9894bU ^
           (-uVar34 ^ uVar34 ^ uVar37 + (uVar37 ^ uVar31 ^ 0x24a97ded) + 1) + uVar37;
  uVar31 = *(int *)(puVar29 + (ulong)(uVar67 >> 0x10 & 0xff ^ 0x24) * 4 + -2) + 0xb580dccdU ^ uVar72
           ^ (*(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff) * 4 + -10) << 6 |
             *(uint *)(puVar28 + (ulong)(uVar61 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(uint *)(puVar20 + (ulong)(uVar35 >> 0x18 ^ 0x9c) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar33 & 0xff) * 4 + -6);
  uVar59 = uVar59 ^ uVar71;
  uVar32 = uVar56 ^ uVar37 ^ 0xbbeda27e;
  uVar67 = uVar32 ^ uVar59;
  uVar72 = uVar67 ^ uVar72;
  uVar73 = uVar72 ^ 0x333524d3;
  uVar40 = uVar56 ^ *(uint *)(puVar30 + (ulong)(uVar45 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar61 >> 0x18) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar33 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)(uVar35 >> 8 & 0xff ^ 0x60) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar35 >> 8 & 0xff ^ 0x60) * 4 + -10) >> 0x1a);
  uVar34 = uVar31 ^ 0x62bbaf40;
  uVar39 = uVar59 ^ *(uint *)(puVar30 + (ulong)(uVar61 & 0xff) * 4 + -6) ^
           *(uint *)(puVar20 + (ulong)(uVar33 >> 0x18) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar35 >> 0x10 & 0xff ^ 0xc9) * 4 + -2) + 0xb580dccdU ^
           (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^ 0x8c56da54;
  uVar33 = uVar55 ^ *(uint *)(puVar20 + (ulong)(uVar45 >> 0x18) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar61 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar35 & 0xff ^ 0x58) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^ 0x438e5cf9;
  uVar45 = uVar40 ^ 0x4e4614a1;
  uVar61 = uVar32 ^ *(uint *)(puVar30 + (ulong)(uVar33 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff ^ 0x62) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar31 >> 8 & 0xff ^ 0x62) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar39 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar20 + (ulong)(uVar40 >> 0x18 ^ 0x56) * 4 + -0xe);
  local_110 = uVar72 ^ 0xc6464ce7;
  uVar40 = uVar72 ^ 0xc6464ce7 ^ *(uint *)(puVar20 + (ulong)(uVar34 >> 0x18) * 4 + -0xe) ^
           (*(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar45 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^
           *(int *)(puVar29 + (ulong)(uVar33 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar39 & 0xff) * 4 + -6);
  uVar35 = (*(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar33 >> 8 & 0xff) * 4 + -10) >> 0x1a) ^ uVar67 ^
           *(uint *)(puVar20 + (ulong)(uVar39 >> 0x18) * 4 + -0xe) ^
           *(int *)(puVar29 + (ulong)(uVar34 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^
           *(uint *)(puVar30 + (ulong)(uVar45 & 0xff) * 4 + -6);
  uVar72 = *(uint *)(puVar27 + (ulong)(uVar73 >> 0x10 & 0xff ^ 0x76) * 4 + -0xe) ^
           *(uint *)(puVar24 + (ulong)(uVar73 >> 8 & 0xff ^ 0x1a) * 4 + -0xb) ^
           *(int *)(puVar25 + (ulong)(uVar72 >> 0x18 ^ 0x67) * 4 + -10) + 0xa9f9894bU ^
           (*(uint *)(puVar26 + (ulong)(uVar73 & 0xff ^ 0xf6) * 4 + -10) << 0x1c |
           *(uint *)(puVar26 + (ulong)(uVar73 & 0xff ^ 0xf6) * 4 + -10) >> 4);
  uVar71 = uVar72 ^ uVar71;
  uVar33 = *(int *)(puVar29 + (ulong)(uVar45 >> 0x10 & 0xff) * 4 + -2) + 0xb580dccdU ^ uVar37 ^
           *(uint *)(puVar20 + (ulong)(uVar33 >> 0x18) * 4 + -0xe) ^
           *(uint *)(puVar30 + (ulong)(uVar34 & 0xff) * 4 + -6) ^
           (*(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) << 6 |
           *(uint *)(puVar28 + (ulong)(uVar39 >> 8 & 0xff) * 4 + -10) >> 0x1a);
  uVar34 = uVar33 ^ 0x2b371768;
  puVar20 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05db];
  uVar32 = uVar35 ^ 0x4aca7be3;
  puVar21 = (&PTR_DAT_10082ee00)[iVar16 + -0x6c3f0584 + iVar63];
  puVar22 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0683];
  uVar73 = uVar71 ^ uVar67 ^ 0x7f720218;
  uVar72 = uVar72 ^ uVar37;
  local_110 = local_110 ^ uVar73;
  uVar31 = uVar38 ^ uVar36 ^ uVar72;
  uVar67 = uVar31 ^ 0xe88dbb2;
  puVar23 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f068d];
  uVar45 = uVar71 ^ *(uint *)(puVar20 + (ulong)(uVar34 & 0xff) * 4 + -10) ^
           *(int *)(puVar21 + (ulong)(uVar61 >> 0x18 ^ 0x16) * 4 + -0xf) + 0x1e0d33c2U ^
           *(uint *)(puVar22 + (ulong)((uVar40 ^ 0x9c138d2f) >> 8 & 0xff) * 4 + -2) ^
           *(uint *)(puVar23 + (ulong)(uVar32 >> 0x10 & 0xff) * 4 + -6);
  uVar73 = *(int *)(puVar21 + (ulong)(uVar35 >> 0x18 ^ 0xe8) * 4 + -0xf) + 0x1e0d33c2U ^ uVar73 ^
           *(uint *)(puVar22 + (ulong)(uVar34 >> 8 & 0xff) * 4 + -2) ^
           *(uint *)(puVar20 + (ulong)(uVar61 & 0xff ^ 0xfb) * 4 + -10) ^
           *(uint *)(puVar23 + (ulong)((uVar40 ^ 0x9c138d2f) >> 0x10 & 0xff) * 4 + -6);
  uVar33 = uVar72 ^ *(uint *)(puVar20 + (ulong)(uVar40 & 0xff ^ 8) * 4 + -10) ^
           *(uint *)(puVar23 + (ulong)(uVar61 >> 0x10 & 0xff ^ 0xb8) * 4 + -6) ^
           *(int *)(puVar21 + (ulong)(uVar33 >> 0x18 ^ 0x89) * 4 + -0xf) + 0x1e0d33c2U ^
           *(uint *)(puVar22 + (ulong)(uVar32 >> 8 & 0xff) * 4 + -2);
  uVar34 = ((uVar31 ^ local_110 ^ 0x264093ea) - uVar67) + ((local_110 ^ 0x28c84858) & uVar67) * 2 ^
           *(uint *)(puVar23 + (ulong)(uVar34 >> 0x10 & 0xff) * 4 + -6) ^
           *(int *)(puVar21 + (ulong)(uVar40 >> 0x18 ^ 0x3e) * 4 + -0xf) + 0x1e0d33c2U ^
           *(uint *)(puVar20 + (ulong)(uVar32 & 0xff) * 4 + -10) ^
           *(uint *)(puVar22 + (ulong)(uVar61 >> 8 & 0xff ^ 0x79) * 4 + -2);
  uVar32 = uVar34 ^ 0xf182795e;
  puVar20 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05a7];
  bVar1 = puVar20[((ulong)(uVar32 >> 0x18) ^ 0x4e) - 0xe];
  bVar2 = puVar20[((ulong)(uVar45 >> 0x18) ^ 0x2d) - 0xe];
  puVar21 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0596];
  bVar3 = puVar21[((ulong)(uVar73 & 0xff) ^ 0x81) - 0xf];
  bVar4 = puVar21[((ulong)uVar33 & 0xff ^ 0x59) - 0xf];
  puVar22 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f05aa];
  bVar5 = puVar22[((ulong)(uVar45 >> 8 & 0xff) ^ 0x8e) - 0xb];
  uVar31 = uVar73 ^ 0xa7f759df;
  puVar23 = (&PTR_DAT_10082ee00)[iVar16 + iVar63 + -0x6c3f0582];
  bVar6 = puVar23[((ulong)(uVar33 >> 0x10) & 0xff ^ 0x4d) - 3];
  bVar7 = puVar20[((ulong)(uVar31 >> 0x18) ^ 199) - 0xe];
  bVar8 = puVar22[((ulong)(uVar33 >> 8 & 0xff) ^ 0x54) - 0xb];
  bVar9 = puVar21[((ulong)(uVar45 & 0xff) ^ 0x15) - 0xf];
  bVar10 = puVar20[((ulong)(uVar33 >> 0x18) ^ 0x31) - 0xe];
  bVar11 = puVar22[(ulong)(uVar32 >> 8 & 0xff) - 0xb];
  bVar12 = puVar23[((ulong)(uVar34 >> 0x10 & 0xff) ^ 0x84) - 3];
  bVar13 = puVar22[((ulong)(uVar73 >> 8 & 0xff) ^ 0xaf) - 0xb];
  bVar14 = puVar23[((ulong)(uVar31 >> 0x10) & 0xff ^ 0x82) - 3];
  bVar15 = puVar23[((ulong)(uVar45 >> 0x10) & 0xff ^ 0xda) - 3];
  pbVar19[0xf] = puVar21[((ulong)(uVar34 & 0xff) ^ 0x8e) - 0xf] ^ 0x55;
  pbVar19[0xe] = bVar11 ^ 0xfe;
  pbVar19[0xd] = bVar12 ^ 0x91;
  pbVar19[0xc] = (byte)(uVar32 >> 0x18) ^ bVar1 ^ 99;
  pbVar19[0xb] = bVar3 ^ 0xcc;
  pbVar19[10] = bVar13 ^ 0x67;
  pbVar19[9] = bVar14 ^ 0x94;
  pbVar19[8] = (byte)(uVar31 >> 0x18) ^ bVar7 ^ 0x59;
  pbVar19[7] = bVar9 ^ 0xf3;
  pbVar19[6] = bVar5 ^ 0xe7;
  pbVar19[5] = bVar15 ^ 0xd3;
  pbVar19[4] = (byte)(uVar45 >> 0x18) ^ bVar2 ^ 0xd6;
  pbVar19[3] = bVar4 ^ 0x91;
  pbVar19[2] = bVar8 ^ 0xb3;
  pbVar19[1] = bVar6 ^ 0x76;
  *pbVar19 = (byte)(uVar33 >> 0x18) ^ bVar10 ^ 0xcf;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar17) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

