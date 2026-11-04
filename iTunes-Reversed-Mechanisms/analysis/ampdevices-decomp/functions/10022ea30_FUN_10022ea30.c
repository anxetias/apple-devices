// name: FUN_10022ea30
// address: 10022ea30

int FUN_10022ea30(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x58);
  puVar6 = (uint *)FUN_1001c63e1(*(undefined4 *)(param_1 + 0x7c));
  if (puVar6 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "moovBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *(long *)(param_1 + 0x58) = lVar2 + *(int *)(param_1 + 0x2e8);
    iVar5 = -0x6c;
    goto LAB_10022f96b;
  }
  uVar11 = *(uint *)(param_1 + 0x7c);
  *puVar6 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x80);
  puVar6[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x84);
  puVar6[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x88);
  puVar6[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x8c);
  puVar6[4] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x90);
  puVar6[5] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x94);
  puVar6[6] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x98);
  puVar6[7] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x9c);
  puVar6[8] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xa0);
  puVar6[9] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  *(ushort *)(puVar6 + 10) = *(ushort *)(param_1 + 0xa4) << 8 | *(ushort *)(param_1 + 0xa4) >> 8;
  *(ushort *)((long)puVar6 + 0x2a) =
       *(ushort *)(param_1 + 0xa6) << 8 | *(ushort *)(param_1 + 0xa6) >> 8;
  uVar11 = *(uint *)(param_1 + 0xa8);
  puVar6[0xb] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xac);
  puVar6[0xc] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  puVar7 = (uint *)FUN_10022ff80(puVar6 + 0xd,param_1 + 0xb0);
  uVar11 = *(uint *)(param_1 + 0xd4);
  *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xd8);
  puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xdc);
  puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xe0);
  puVar7[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xe4);
  puVar7[4] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xe8);
  puVar7[5] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xec);
  puVar7[6] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xf0);
  puVar7[7] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xf4);
  puVar7[8] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xf8);
  puVar7[9] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0xfc);
  puVar7[10] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x100);
  puVar7[0xb] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x104);
  puVar7[0xc] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x108);
  puVar7[0xd] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x10c);
  puVar7[0xe] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x110);
  puVar7[0xf] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x114);
  puVar7[0x10] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  uVar11 = *(uint *)(param_1 + 0x118);
  puVar7[0x11] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  uVar11 = *(uint *)(param_1 + 0x11c);
  puVar7[0x12] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  *(ushort *)(puVar7 + 0x13) = *(ushort *)(param_1 + 0x120) << 8 | *(ushort *)(param_1 + 0x120) >> 8
  ;
  *(ushort *)((long)puVar7 + 0x4e) =
       *(ushort *)(param_1 + 0x122) << 8 | *(ushort *)(param_1 + 0x122) >> 8;
  *(ushort *)(puVar7 + 0x14) = *(ushort *)(param_1 + 0x124) << 8 | *(ushort *)(param_1 + 0x124) >> 8
  ;
  *(ushort *)((long)puVar7 + 0x52) =
       *(ushort *)(param_1 + 0x126) << 8 | *(ushort *)(param_1 + 0x126) >> 8;
  puVar7 = (uint *)FUN_10022ff80(puVar7 + 0x15,param_1 + 0x128);
  uVar11 = *(uint *)(param_1 + 0x14c);
  *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x150);
  puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x154);
  puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x158);
  puVar7[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x15c);
  puVar7[4] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x160);
  puVar7[5] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x164);
  puVar7[6] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x168);
  puVar7[7] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x16c);
  puVar7[8] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x170);
  puVar7[9] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x174);
  puVar7[10] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  *(ushort *)(puVar7 + 0xb) = *(ushort *)(param_1 + 0x178) << 8 | *(ushort *)(param_1 + 0x178) >> 8;
  *(ushort *)((long)puVar7 + 0x2e) =
       *(ushort *)(param_1 + 0x17a) << 8 | *(ushort *)(param_1 + 0x17a) >> 8;
  uVar11 = *(uint *)(param_1 + 0x17c);
  puVar7[0xc] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x180);
  puVar7[0xd] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x184);
  puVar7[0xe] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x188);
  puVar7[0xf] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x18c);
  puVar7[0x10] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  uVar11 = *(uint *)(param_1 + 400);
  puVar7[0x11] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  uVar11 = *(uint *)(param_1 + 0x194);
  puVar7[0x12] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  uVar11 = *(uint *)(param_1 + 0x198);
  puVar7[0x13] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
  ;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  uVar11 = *(uint *)(param_1 + 0x19e);
  *(uint *)((long)puVar7 + 0x52) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1a2);
  *(uint *)((long)puVar7 + 0x56) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1a6);
  *(uint *)((long)puVar7 + 0x5a) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1aa);
  *(uint *)((long)puVar7 + 0x5e) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1ae);
  *(uint *)((long)puVar7 + 0x62) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  *(ushort *)((long)puVar7 + 0x66) =
       *(ushort *)(param_1 + 0x1b2) << 8 | *(ushort *)(param_1 + 0x1b2) >> 8;
  *(ushort *)(puVar7 + 0x1a) = *(ushort *)(param_1 + 0x1b4) << 8 | *(ushort *)(param_1 + 0x1b4) >> 8
  ;
  uVar11 = *(uint *)(param_1 + 0x1b6);
  *(uint *)((long)puVar7 + 0x6a) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1ba);
  *(uint *)((long)puVar7 + 0x6e) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1be);
  *(uint *)((long)puVar7 + 0x72) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1c2);
  *(uint *)((long)puVar7 + 0x76) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1c6);
  *(uint *)((long)puVar7 + 0x7a) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1ca);
  *(uint *)((long)puVar7 + 0x7e) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1ce);
  *(uint *)((long)puVar7 + 0x82) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1d2);
  *(uint *)((long)puVar7 + 0x86) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1d6);
  *(uint *)((long)puVar7 + 0x8a) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1e8);
  *(uint *)((long)puVar7 + 0x8e) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1ec);
  *(uint *)((long)puVar7 + 0x92) =
       uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = **(uint **)(param_1 + 0x1f0);
  FUN_1001c631b(*(uint **)(param_1 + 0x1f0),(long)puVar7 + 0x96,
                uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18)
  ;
  uVar11 = **(uint **)(param_1 + 0x1f0);
  uVar1 = *(uint *)(param_1 + 0x1f8);
  puVar7 = (uint *)((long)puVar7 +
                   (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18) + 0xa6);
  puVar7[-4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x1fc);
  puVar7[-3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x200);
  puVar7[-2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x204);
  puVar7[-1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  if (*(int *)(param_1 + 0x204) != 0) {
    lVar13 = *(long *)(param_1 + 0x250);
    uVar9 = 0;
    do {
      uVar11 = *(uint *)(lVar13 + uVar9 * 8);
      *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      uVar11 = *(uint *)(lVar13 + 4 + uVar9 * 8);
      puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                  uVar11 << 0x18;
      puVar7 = puVar7 + 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x204));
  }
  puVar3 = *(uint **)(param_1 + 0x210);
  uVar11 = *puVar3;
  *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = puVar3[1];
  puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = puVar3[2];
  puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = puVar3[3];
  puVar7[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  puVar7 = puVar7 + 4;
  if (puVar3[3] != 0) {
    puVar10 = puVar3 + 6;
    uVar9 = 0;
    do {
      uVar11 = puVar10[-2];
      *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      uVar11 = puVar10[-1];
      puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                  uVar11 << 0x18;
      uVar11 = *puVar10;
      puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                  uVar11 << 0x18;
      puVar7 = puVar7 + 3;
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 3;
    } while (uVar9 < puVar3[3]);
  }
  uVar11 = *(uint *)(param_1 + 0x218);
  *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x21c);
  puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x220);
  puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x224);
  puVar7[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x228);
  puVar7[4] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  iVar5 = *(int *)(param_1 + 0x228);
  if (*(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268) >> 2 != (long)iVar5) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mSampleSizeArray.size() == mSampleSize.numEntries";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = *(int *)(param_1 + 0x228);
  }
  puVar7 = puVar7 + 5;
  if (iVar5 != 0) {
    lVar13 = *(long *)(param_1 + 0x268);
    uVar9 = 0;
    do {
      uVar11 = *(uint *)(lVar13 + uVar9 * 4);
      *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x228));
  }
  uVar11 = *(uint *)(param_1 + 0x230);
  *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x234);
  puVar7[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x238);
  puVar7[2] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = *(uint *)(param_1 + 0x23c);
  puVar7[3] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  iVar5 = *(int *)(param_1 + 0x23c);
  if (*(long *)(param_1 + 0x288) - *(long *)(param_1 + 0x280) >> 2 != (long)iVar5) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mChunkOffsetArray.size() == mChunkOffset.numEntries";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = *(int *)(param_1 + 0x23c);
  }
  puVar7 = puVar7 + 4;
  if (iVar5 != 0) {
    lVar13 = *(long *)(param_1 + 0x280);
    cVar4 = *(char *)(param_1 + 0x2e4);
    uVar9 = 0;
    do {
      uVar11 = *(uint *)(lVar13 + uVar9 * 4);
      if (cVar4 == '\x01') {
        uVar11 = uVar11 + *(int *)(param_1 + 0x2e8);
      }
      *puVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x23c));
  }
  if ((*(long *)(param_1 + 0x2d8) != 0) && (*(int *)(param_1 + 0x2e0) != 0)) {
    uVar11 = *(int *)(param_1 + 0x2e0) + 8;
    local_58 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
               uVar11 * 0x1000000;
    local_54 = (char *)CONCAT44(local_54._4_4_,0x61746475);
    FUN_1001c631b(&local_58,puVar7,8);
    FUN_1001c631b(*(undefined8 *)(param_1 + 0x2d8),puVar7 + 2,(long)*(int *)(param_1 + 0x2e0));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar5 = FUN_10017d068(*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_10022f1e6;
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 == '\0') goto LAB_10022f955;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      goto LAB_10022f942;
    }
    goto LAB_10022f955;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_10022f1e6:
    if (*(char *)(param_1 + 0x2e4) == '\x01') {
      iVar5 = *(int *)(param_1 + 0x2e8);
      if (iVar5 == 0) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mByteAdjustment != 0";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar5 = *(int *)(param_1 + 0x2e8);
      }
      if (iVar5 < 1) {
        iVar5 = FUN_10022fa2a(param_1,*(undefined4 *)(param_1 + 0x7c),puVar6);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            uVar11 = -*(int *)(param_1 + 0x2e8);
            if (*(long *)(param_1 + 0x40) == 0) {
              if (*(long *)(param_1 + 0x48) != 0) {
                local_60 = *(long *)(param_1 + 0x58);
                lVar13 = *(long *)(param_1 + 0x48) + local_60;
                FUN_1001c631b(lVar13 + (ulong)uVar11,lVar13,lVar2 - (local_60 + (ulong)uVar11));
              }
              goto LAB_10022f6aa;
            }
            iVar5 = FUN_10017cfbe(*(long *)(param_1 + 0x40),&local_60);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                iVar5 = FUN_10017d9dd(*(undefined8 *)(param_1 + 0x40),local_60,uVar11,0,0);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) goto LAB_10022f6aa;
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_10022f942;
                  }
                }
              }
              else {
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                  goto LAB_10022f942;
                }
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              goto LAB_10022f942;
            }
          }
        }
      }
      else {
        iVar5 = FUN_10022fa2a(param_1,*(undefined4 *)(param_1 + 0x78),puVar6);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            lVar13 = (long)puVar6 + (long)*(int *)(param_1 + 0x78);
            if (*(long *)(param_1 + 0x40) == 0) {
              if (*(long *)(param_1 + 0x48) != 0) {
                local_60 = *(long *)(param_1 + 0x58);
                if (*(ulong *)(param_1 + 0x50) <= (ulong)(*(int *)(param_1 + 0x2e8) + lVar2)) {
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = 
                    "curPos + mByteAdjustment + destBufferSavePos - mDestBufferCurPos < mDestBufferCapacity"
                    ;
                    goto LAB_10022f882;
                  }
                  goto LAB_10022f1ce;
                }
                lVar12 = *(long *)(param_1 + 0x48) + local_60;
                FUN_1001c631b(lVar12,*(int *)(param_1 + 0x2e8) + lVar12,lVar2 - local_60);
                FUN_1001c631b(lVar13,*(long *)(param_1 + 0x48) + local_60,
                              (long)*(int *)(param_1 + 0x2e8));
                *(long *)(param_1 + 0x58) =
                     *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x2e8);
              }
LAB_10022f6aa:
              lVar13 = (long)*(int *)(param_1 + 0x2e8) + *(long *)(param_1 + 0x68);
              *(long *)(param_1 + 0x68) = lVar13;
              goto LAB_10022f6b9;
            }
            iVar5 = FUN_10017cfbe(*(long *)(param_1 + 0x40),&local_60);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                iVar5 = FUN_10017d7da(*(undefined8 *)(param_1 + 0x40),local_60,lVar13,
                                      *(undefined4 *)(param_1 + 0x2e8),0,0);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) goto LAB_10022f6aa;
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_10022f942;
                  }
                }
              }
              else {
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                  goto LAB_10022f942;
                }
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              goto LAB_10022f942;
            }
          }
        }
      }
    }
    else {
      iVar5 = FUN_10022fa2a(param_1,*(undefined4 *)(param_1 + 0x7c),puVar6);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          if (((*(byte *)(param_1 + 0x10) & 2) == 0) &&
             (uVar11 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x7c), uVar11 != 0)) {
            local_60 = CONCAT44(0x65657266,
                                uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                                uVar11 * 0x1000000);
            iVar5 = FUN_10022fa2a(param_1,8);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) goto LAB_10022f36d;
              uVar8 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar8,0x10);
              if (cVar4 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_10022f942;
              }
            }
          }
          else {
LAB_10022f36d:
            lVar13 = *(long *)(param_1 + 0x68);
LAB_10022f6b9:
            if (*(long *)(param_1 + 0x40) == 0) {
              if (*(long *)(param_1 + 0x48) != 0) {
                if (*(ulong *)(param_1 + 0x50) < lVar13 - 8U) {
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = "mDestBufferCapacity >= position";
                    goto LAB_10022f882;
                  }
                  goto LAB_10022f1ce;
                }
                *(ulong *)(param_1 + 0x58) = lVar13 - 8U;
              }
LAB_10022f788:
              uVar11 = *(int *)(param_1 + 0x70) + 8;
              local_60 = CONCAT44(local_60._4_4_,
                                  uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8
                                  | uVar11 * 0x1000000);
              iVar5 = FUN_10022fa2a(param_1,4);
              if (iVar5 != -0x80) {
                if (iVar5 == 0) {
                  iVar5 = 0;
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_10022f942;
                  }
                }
              }
            }
            else {
              iVar5 = FUN_10017d068();
              if (iVar5 != -0x80) {
                if (iVar5 == 0) goto LAB_10022f788;
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 == '\0') goto LAB_10022f955;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10022f942:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            goto LAB_10022f942;
          }
        }
      }
    }
  }
  else {
    if (*(ulong *)(param_1 + 0x60) <= *(ulong *)(param_1 + 0x50)) {
      *(ulong *)(param_1 + 0x58) = *(ulong *)(param_1 + 0x60);
      goto LAB_10022f1e6;
    }
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_4a = "mDestBufferCapacity >= mMoovOffset";
LAB_10022f882:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10022f1ce:
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
  }
LAB_10022f955:
  *(long *)(param_1 + 0x58) = lVar2 + *(int *)(param_1 + 0x2e8);
  FUN_1001c64c1(puVar6);
LAB_10022f96b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

