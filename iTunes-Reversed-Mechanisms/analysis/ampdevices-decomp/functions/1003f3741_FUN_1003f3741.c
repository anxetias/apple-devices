// name: FUN_1003f3741
// address: 1003f3741

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f3741(undefined8 *param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  undefined8 uVar21;
  uint *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 **ppuVar28;
  long local_f8;
  undefined8 *local_f0;
  uint local_e8;
  char *local_e4;
  undefined2 local_dc;
  int local_da;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined2 local_bc;
  char *local_ba;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar24 = *(undefined8 **)(param_2 + 8);
  if ((puVar24 == (undefined8 *)0x0) || (local_f8 = puVar24[2], local_f8 == 0)) {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x822;
      local_ba = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
    puVar24 = *(undefined8 **)(param_2 + 8);
    if (puVar24 == (undefined8 *)0x0) {
      puVar24 = (undefined8 *)0x0;
      local_f8 = 0;
    }
    else {
      local_f8 = puVar24[2];
    }
  }
  uVar13 = FUN_1004744bf(puVar24,0);
  cVar8 = FUN_1002b16f5(param_2);
  if (puVar24[0xd] == 0) {
    uVar16 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar16,0x10);
    if (cVar9 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x822;
      local_ba = "trackInfo->firstPlaylistItem != nullptr";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_f0 = param_1 + 0x4e;
  FUN_1001c62d9(param_1,0x270);
  *param_1 = 0x2707469686d;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar24 + 1);
  *(undefined4 *)((long)param_1 + 500) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 100);
  auVar26 = pmovzxwd(ZEXT416(*(uint *)((long)puVar24 + 0x136)),
                     ZEXT416(*(uint *)((long)puVar24 + 0x136)));
  *(long *)((long)param_1 + 0x2c) = auVar26._0_8_;
  auVar26 = pmovzxwd(ZEXT416(*(uint *)((long)puVar24 + 0x13a)),
                     ZEXT416(*(uint *)((long)puVar24 + 0x13a)));
  *(long *)((long)param_1 + 0x5c) = auVar26._0_8_;
  *(byte *)((long)param_1 + 0x1e) = (byte)(*(uint *)((long)puVar24 + 0xc2) >> 10) & 1;
  *(uint *)((long)param_1 + 0x34) = (uint)*(ushort *)((long)puVar24 + 0x142);
  *(uint *)(param_1 + 7) = (uint)*(ushort *)(param_2 + 0x54);
  *(undefined2 *)((long)param_1 + 0x20c) = *(undefined2 *)(param_2 + 0x56);
  *(int *)((long)param_1 + 0x3c) = (int)(long)(*(float *)(param_2 + 0x50) * _DAT_1007439c4);
  *(int *)(param_1 + 8) = (int)*(short *)((long)puVar24 + 0x12a);
  lVar23 = puVar24[0x10];
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)(lVar23 + 4);
  *(uint *)((long)param_1 + 0x4c) = (uint)*(ushort *)(param_2 + 0x5a);
  param_1[10] = *(undefined8 *)((long)puVar24 + 0x144);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)puVar24 + 0x14c);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(lVar23 + 0xc);
  *(byte *)(param_1 + 0xf) = *(byte *)((long)puVar24 + 0xc2) >> 2 & 1;
  param_1[0xe] = *puVar24;
  uVar16 = FUN_1002b44c2(param_2);
  param_1[0x43] = uVar16;
  uVar16 = FUN_1002b71b5(param_2);
  param_1[0x44] = uVar16;
  lVar23 = *(long *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(lVar23 + 0x20);
  param_1[0x34] = uVar16;
  uVar2 = *(undefined8 *)(lVar23 + 8);
  param_1[0x33] = uVar2;
  uVar3 = *(undefined8 *)(lVar23 + 0x10);
  param_1[0x35] = uVar3;
  *(undefined8 *)((long)param_1 + 0x204) = *(undefined8 *)(lVar23 + 0x18);
  lVar17 = *(long *)(param_2 + 8);
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar23 + 0x38);
  }
  param_1[0x36] = uVar21;
  uVar21 = *(undefined8 *)(lVar23 + 0x48);
  param_1[0x38] = uVar21;
  uVar4 = *(undefined8 *)(lVar23 + 0x58);
  param_1[0x3a] = uVar4;
  uVar5 = *(undefined8 *)(lVar23 + 0x40);
  param_1[0x37] = uVar5;
  uVar6 = *(undefined8 *)(lVar23 + 0x50);
  param_1[0x39] = uVar6;
  uVar7 = *(undefined8 *)(lVar23 + 0x60);
  param_1[0x3b] = uVar7;
  *(int *)((long)param_1 + 0x154) = (int)uVar16;
  *(int *)((long)param_1 + 100) = (int)uVar2;
  *(int *)((long)param_1 + 0x144) = (int)uVar3;
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (undefined4)*(undefined8 *)(lVar23 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar14;
  *(int *)(param_1 + 0x1d) = (int)uVar21;
  *(int *)(param_1 + 0x1e) = (int)uVar4;
  *(int *)((long)param_1 + 0xe4) = (int)uVar5;
  *(int *)((long)param_1 + 0xec) = (int)uVar6;
  *(int *)((long)param_1 + 0xf4) = (int)uVar7;
  *(undefined2 *)((long)param_1 + 0x7e) = *(undefined2 *)(param_2 + 0x76);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x174);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(lVar23 + 0x8c);
  *(undefined2 *)((long)param_1 + 0x7a) = *(undefined2 *)((long)puVar24 + 0x15c);
  *(undefined1 *)((long)param_1 + 0x92) = *(undefined1 *)(puVar24 + 0x17);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(lVar23 + 0x84);
  *(byte *)((long)param_1 + 0x93) = *(byte *)(param_2 + 0x48) >> 7;
  *(undefined4 *)((long)param_1 + 0x1ec) = *(undefined4 *)(lVar23 + 4);
  *(byte *)((long)param_1 + 0x195) = (byte)(*(uint *)(param_2 + 0x48) >> 10) & 1;
  param_1[0x13] = puVar24[0x2a];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(puVar24 + 0x2b);
  *(undefined1 *)((long)param_1 + 0xa4) = *(undefined1 *)((long)puVar24 + 0xb9);
  *(bool *)((long)param_1 + 0xa5) = cVar8 != '\0' || *(short *)((long)puVar24 + 0xc2) < 0;
  uVar10 = FUN_10047f358(puVar24);
  *(undefined1 *)((long)param_1 + 0xa6) = uVar10;
  uVar12 = *(ushort *)(param_2 + 0x58);
  if (uVar12 < 0x1f5) {
    if (uVar12 < 0x12d) {
      if (uVar12 < 0x66) {
        if (2 < uVar12) {
          if (uVar12 != 0x65) goto switchD_1003f3bd1_default;
          uVar12 = 10;
        }
      }
      else if (uVar12 < 0xc9) {
        if (uVar12 == 0x66) {
          uVar12 = 0x14;
        }
        else {
          if (uVar12 != 0x67) goto switchD_1003f3bd1_default;
          uVar12 = 0x1e;
        }
      }
      else if (uVar12 == 0xc9) {
        uVar12 = 0xb;
      }
      else if (uVar12 == 0xca) {
        uVar12 = 0x15;
      }
      else {
        if (uVar12 != 0xcb) goto switchD_1003f3bd1_default;
        uVar12 = 0x1f;
      }
    }
    else if (uVar12 < 0x191) {
      if (uVar12 == 0x12d) {
        uVar12 = 0xc;
      }
      else if (uVar12 == 0x12e) {
        uVar12 = 0x16;
      }
      else {
        if (uVar12 != 0x12f) goto switchD_1003f3bd1_default;
        uVar12 = 0x20;
      }
    }
    else {
      switch(uVar12) {
      case 0x191:
        uVar12 = 0x28;
        break;
      case 0x192:
        uVar12 = 0x29;
        break;
      case 0x193:
        uVar12 = 0x2a;
        break;
      case 0x194:
        uVar12 = 0x2b;
        break;
      case 0x195:
        uVar12 = 0x2c;
        break;
      case 0x196:
        uVar12 = 0x2d;
        break;
      default:
switchD_1003f3bd1_default:
        uVar12 = 0;
      }
    }
  }
  else if (uVar12 < 0x25a) {
    switch(uVar12) {
    case 0x1f5:
      uVar12 = 0x32;
      break;
    case 0x1f6:
      uVar12 = 0x33;
      break;
    case 0x1f7:
      uVar12 = 0x34;
      break;
    case 0x1f8:
      uVar12 = 0x35;
      break;
    case 0x1f9:
      uVar12 = 0x36;
      break;
    case 0x1fa:
      uVar12 = 0x37;
      break;
    case 0x1fb:
      uVar12 = 0x38;
      break;
    case 0x1fc:
      uVar12 = 0x39;
      break;
    case 0x1fd:
      uVar12 = 0x3a;
      break;
    case 0x1fe:
      uVar12 = 0x3b;
      break;
    default:
      if (uVar12 != 0x259) goto switchD_1003f3bd1_default;
      uVar12 = 0x3c;
    }
  }
  else if (uVar12 < 0x385) {
    switch(uVar12) {
    case 0x321:
      uVar12 = 0x50;
      break;
    case 0x322:
      uVar12 = 0x51;
      break;
    case 0x323:
      uVar12 = 0x52;
      break;
    case 0x324:
      uVar12 = 0x53;
      break;
    default:
      if (uVar12 == 0x25a) {
        uVar12 = 0x3d;
      }
      else {
        if (uVar12 != 0x2bd) goto switchD_1003f3bd1_default;
        uVar12 = 0x46;
      }
    }
  }
  else if (uVar12 == 0x385) {
    uVar12 = 0x5a;
  }
  else if (uVar12 == 0x386) {
    uVar12 = 0x5b;
  }
  else {
    if (uVar12 != 0x3e9) goto switchD_1003f3bd1_default;
    uVar12 = 100;
  }
  *(ushort *)(param_1 + 0x12) = uVar12;
  *(char *)((long)param_1 + 0xb2) = '\x02' - ((*(uint *)((long)puVar24 + 0xc2) >> 0x1d & 1) != 0);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xd8);
  *(undefined1 *)((long)param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x47);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x7c);
  uVar18 = 0x100001;
  if (uVar13 != 0x100000) {
    if ((uVar13 & 0x200c62) == 0x200000) {
      uVar18 = uVar13 | 1;
    }
    else {
      uVar18 = uVar13;
      if (((byte)(*(uint *)(param_1 + 0x20003) >> 0x19) & 1) == 0 && (uVar13 >> 10 & 1) != 0) {
        uVar18 = uVar13 & 0xfffffbfd | 2;
      }
    }
  }
  *(uint *)(param_1 + 0x1a) = uVar18;
  uVar18 = *(uint *)(puVar24[0xe] + 0xc);
  uVar19 = 0x100001;
  if (uVar18 != 0x100000) {
    if ((uVar18 & 0x200c62) == 0x200000) {
      uVar19 = uVar18 | 1;
    }
    else {
      uVar19 = uVar18;
      if (((*(uint *)(param_1 + 0x20003) >> 0x19 & 1) == 0) && ((uVar18 & 0x400) != 0)) {
        uVar19 = uVar18 & 0xfffffbfd | 2;
      }
    }
  }
  *(uint *)(param_1 + 0x3f) = uVar19;
  *(undefined8 *)((long)param_1 + 0x124) = puVar24[0x30];
  param_1[0x15] = puVar24[0x31];
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(puVar24[0x10] + 0x10);
  lVar23 = puVar24[0xf];
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(lVar23 + 0xc);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(lVar23 + 4);
  *(undefined4 *)((long)param_1 + 0xdc) = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x88);
  *(undefined1 *)((long)param_1 + 0x197) = *(undefined1 *)(puVar24 + 0x19);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(byte *)((long)param_1 + 0x102) = (byte)(*(uint *)((long)puVar24 + 0xc2) >> 0x11) & 1;
  bVar11 = FUN_100474dd0(puVar24,0);
  puVar22 = (uint *)((long)puVar24 + 0xc2);
  *(byte *)((long)param_1 + 0xa7) = bVar11 >> 2 & 1;
  *(byte *)((long)param_1 + 0x20e) = *(byte *)((long)puVar24 + 0xc5) & 1;
  *(byte *)((long)param_1 + 0x169) = (byte)(*puVar22 >> 0x19) & 1;
  *(byte *)((long)param_1 + 0x14a) = (byte)(*puVar22 >> 0x17) & 1;
  param_1[0x23] = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = *(undefined2 *)(param_2 + 0x74);
  param_1[0x2b] = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)((long)param_1 + 0x1f) = *(undefined1 *)((long)puVar24 + 300);
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(byte *)((long)param_1 + 0x16a) = (byte)(*puVar22 >> 0x1f);
  *(undefined1 *)((long)param_1 + 0x79) = *(undefined1 *)((long)puVar24 + 0x12e);
  uVar14 = FUN_1003186de(puVar24);
  *(undefined4 *)((long)param_1 + 0x16c) = uVar14;
  lVar23 = puVar24[0xf];
  auVar26 = *(undefined1 (*) [16])(lVar23 + 0x10);
  auVar27._0_8_ = auVar26._8_8_;
  auVar27._8_4_ = auVar26._0_4_;
  auVar27._12_4_ = auVar26._4_4_;
  *(undefined1 (*) [16])((long)param_1 + 0x184) = auVar27;
  *(byte *)((long)param_1 + 0x171) = (byte)(*puVar22 >> 0xb) & 1;
  *(byte *)((long)param_1 + 0x216) = (byte)(*puVar22 >> 0xc) & 1;
  pbVar20 = *(byte **)(param_2 + 0x18);
  *(byte *)((long)param_1 + 0x172) = *pbVar20 >> 1 & 1;
  *(byte *)((long)param_1 + 0x173) = *pbVar20 >> 2 & 1;
  *(byte *)((long)param_1 + 0x103) = *pbVar20 >> 4 & 1;
  *(byte *)((long)param_1 + 0x1d) = (byte)(*(uint *)(param_2 + 0x48) >> 0xb) & 1;
  *(byte *)((long)param_1 + 0x1c) = (byte)(*(uint *)(param_2 + 0x48) >> 0xc) & 1;
  *(byte *)((long)param_1 + 0xb1) = (byte)(*puVar22 >> 0x12) & 1;
  *(byte *)((long)param_1 + 0x214) = *(byte *)(param_2 + 0x4a) & 1;
  *(byte *)((long)param_1 + 0x215) = *(byte *)((long)puVar24 + 0xc6) >> 2 & 1;
  *(byte *)((long)param_1 + 0x217) = (byte)(*(uint *)(param_2 + 0x48) >> 0x11) & 1;
  *(byte *)((long)param_1 + 0x22d) = *(byte *)((long)puVar24 + 0xc6) & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)((long)puVar24 + 0xc6) >> 1 & 1;
  pbVar20 = *(byte **)(param_2 + 0x10);
  *(byte *)((long)param_1 + 0x229) = *pbVar20 >> 1 & 1;
  *(byte *)((long)param_1 + 0x22b) = *pbVar20 >> 2 & 1;
  *(byte *)((long)param_1 + 0x22a) = *pbVar20 >> 3 & 1;
  *(byte *)((long)param_1 + 0x22e) = *pbVar20 >> 4 & 1;
  *(undefined8 *)((long)param_1 + 0x1e4) = puVar24[0x32];
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(puVar24 + 0x33);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)((long)puVar24 + 0x19c);
  *(undefined8 *)((long)param_1 + 0x1fc) = puVar24[0x2f];
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(pbVar20 + 0xa8);
  uVar16 = *(undefined8 *)(pbVar20 + 0x30);
  *(undefined8 *)((long)param_1 + 0x234) = *(undefined8 *)(pbVar20 + 0x28);
  *(undefined8 *)((long)param_1 + 0x23c) = uVar16;
  *(byte *)((long)param_1 + 0x244) = (byte)(*(uint *)(param_2 + 0x48) >> 0x13) & 1;
  *(byte *)((long)param_1 + 0x245) = *(byte *)((long)puVar24 + 0xc6) >> 7;
  *(undefined1 *)((long)param_1 + 0x246) = *(undefined1 *)((long)puVar24 + 0x134);
  *(undefined1 *)((long)param_1 + 0x247) = *(undefined1 *)((long)puVar24 + 0x135);
  *(undefined4 *)((long)param_1 + 0x254) = *(undefined4 *)(puVar24 + 0x26);
  pbVar20 = (byte *)puVar24[0xe];
  *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(pbVar20 + 0x10);
  *(byte *)((long)param_1 + 0x24c) =
       (byte)((ushort)*(undefined2 *)((long)puVar24 + 0xc6) >> 0xb) & 1;
  *(byte *)((long)param_1 + 0x24d) = *pbVar20 >> 2 & 1;
  *(byte *)((long)param_1 + 0x24e) = (byte)(*(uint *)(param_2 + 0x48) >> 0x14) & 1;
  *(undefined1 *)((long)param_1 + 0x24f) = *(undefined1 *)(lVar23 + 0x20);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(lVar23 + 0x21);
  *(undefined1 *)((long)param_1 + 0x251) = *(undefined1 *)(lVar23 + 0x22);
  uVar25 = *(ulong *)(param_2 + 0x68);
  *(ulong *)((long)param_1 + 300) = uVar25;
  *(uint *)((long)param_1 + 0x24) = -(uint)(uVar25 >> 0x20 != 0) | (uint)uVar25;
  if (puVar24[5] == 0) {
    uVar16 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar16,0x10);
    if (cVar9 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x822;
      local_ba = "albumInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(puVar24[5] + 0x18);
  }
  if (puVar24[8] == 0) {
    uVar16 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar16,0x10);
    if (cVar9 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x822;
      local_ba = "artistInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(puVar24[8] + 0x14);
  }
  iVar15 = *(int *)(param_2 + 0x3c);
  if (iVar15 == 0x46494c45) {
    uVar14 = 1;
LAB_1003f4286:
    *(undefined4 *)((long)param_1 + 0x14) = uVar14;
  }
  else {
    if (iVar15 == 0x48545450) {
      uVar14 = 3;
      goto LAB_1003f4286;
    }
    if (iVar15 == 0x53485244) {
      uVar14 = 2;
      goto LAB_1003f4286;
    }
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  iVar15 = FUN_1003f32d1(param_1,local_f8 + 0x1c10,*(undefined4 *)(puVar24 + 0x1b),1,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 != 0) || ((char)local_c8 == '\0')) {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 == 0) goto LAB_1003f4305;
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 == '\0') goto LAB_1003f4e20;
    puVar22 = &local_c8;
    local_c8 = 0x8220202;
    uStack_c4 = 0x7a0a90;
    iStack_c0 = 1;
    local_bc = 0x400;
    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
    goto LAB_1003f4e0d;
  }
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
LAB_1003f4305:
  lVar23 = local_f8 + 0x1cb0;
  iVar15 = FUN_1003f32d1(param_1,lVar23,*(undefined4 *)((long)puVar24 + 0xdc),4,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  iVar15 = FUN_1003f32d1(param_1,lVar23,*(undefined4 *)(puVar24 + 0x1c),0x16,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  iVar15 = FUN_1003f32d1(param_1,lVar23,*(undefined4 *)((long)puVar24 + 0xec),0xc,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  iVar15 = FUN_1003f32d1(param_1,local_f8 + 0x1c60,*(undefined4 *)((long)puVar24 + 0xe4),3,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  iVar15 = FUN_1003f32d1(param_1,local_f8 + 0x1d00,*(undefined4 *)(puVar24 + 0x1d),0xd,1,
                         *(undefined4 *)(param_1 + 0x20027),&local_f0,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  ppuVar28 = &local_f0;
  iVar15 = FUN_1003f32d1(param_1,local_f8 + 0x1df0,*(undefined4 *)(puVar24 + 0x1e),5,1,
                         *(undefined4 *)(param_1 + 0x20027),ppuVar28,&local_c8);
  if ((iVar15 == 0) && ((char)local_c8 != '\0')) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  }
  else {
    if (iVar15 == -0x80) goto LAB_1003f4e20;
    if (iVar15 != 0) {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 == '\0') goto LAB_1003f4e20;
      puVar22 = &local_c8;
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      iStack_c0 = 1;
      local_bc = 0x400;
      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      goto LAB_1003f4e0d;
    }
  }
  uVar16 = CONCAT44((int)((ulong)ppuVar28 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1e40,*(undefined4 *)((long)puVar24 + 0xf4),6,1
                         ,uVar16,&local_f0);
  if (iVar15 == -0x80) goto LAB_1003f4e20;
  if (iVar15 != 0) {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 == '\0') goto LAB_1003f4e20;
    puVar22 = &local_c8;
    local_c8 = 0x8220202;
    uStack_c4 = 0x7a0a90;
    iStack_c0 = 1;
    local_bc = 0x400;
    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
    goto LAB_1003f4e0d;
  }
  uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1ee0,*(undefined4 *)((long)puVar24 + 0xfc),8,1
                         ,uVar16,&local_f0);
  if (iVar15 == -0x80) goto LAB_1003f4e20;
  if (iVar15 != 0) {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 == '\0') goto LAB_1003f4e20;
    puVar22 = &local_c8;
    local_c8 = 0x8220202;
    uStack_c4 = 0x7a0a90;
    iStack_c0 = 1;
    local_bc = 0x400;
    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
    goto LAB_1003f4e0d;
  }
  uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1f30,*(undefined4 *)(puVar24 + 0x20),9,1,
                         uVar16,&local_f0);
  if (iVar15 == -0x80) goto LAB_1003f4e20;
  if (iVar15 != 0) {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 == '\0') goto LAB_1003f4e20;
    puVar22 = &local_c8;
    local_c8 = 0x8220202;
    uStack_c4 = 0x7a0a90;
    iStack_c0 = 1;
    local_bc = 0x400;
    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
    goto LAB_1003f4e0d;
  }
  ppuVar28 = (undefined8 **)
             CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1f80,*(undefined4 *)((long)puVar24 + 0x104),10
                         ,1,ppuVar28,&local_f0);
  if (iVar15 == -0x80) goto LAB_1003f4e20;
  if (iVar15 == 0) {
    if (*(int *)((long)param_1 + 0x14) == 1) {
      if (*(int *)(param_2 + 0x90) != 0 && *(long *)(param_2 + 0x88) != 0) {
        ppuVar28 = &local_f0;
        iVar15 = FUN_1003f3360(param_1,*(long *)(param_2 + 0x88),*(int *)(param_2 + 0x90),2,1,
                               *(undefined4 *)(param_1 + 0x20027),ppuVar28);
        if (iVar15 == -0x80) goto LAB_1003f4e20;
        if (iVar15 != 0) {
          uVar16 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar16,0x10);
          if (cVar8 == '\0') goto LAB_1003f4e20;
          puVar22 = &local_c8;
          local_c8 = 0x8220202;
          uStack_c4 = 0x7a0a90;
          iStack_c0 = 1;
          local_bc = 0x400;
          local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
          goto LAB_1003f4e0d;
        }
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
      }
    }
    if ((*(byte *)puVar24[0xf] & 1) == 0) {
LAB_1003f485b:
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      lVar23 = 0xba;
      do {
        FUN_1002fa385(puVar24,(int)lVar23 + -0xba,&local_c8);
        *(undefined1 *)((long)param_1 + lVar23 + 0x7a) = *(undefined1 *)((long)puVar24 + lVar23);
        if (iStack_c0 - 0x4eU < 6) {
          ppuVar28 = (undefined8 **)
                     CONCAT44((int)((ulong)ppuVar28 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
          iVar15 = FUN_1003f5e84(param_1,param_1,local_80,
                                 *(undefined4 *)((long)puVar24 + lVar23 * 4 + -0x140),
                                 *(undefined4 *)(&DAT_100747f7c + (ulong)(iStack_c0 - 0x4eU) * 4),1,
                                 ppuVar28,&local_f0);
          if (iVar15 != 0) {
            if (iVar15 == -0x80) goto LAB_1003f4e20;
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 == '\0') goto LAB_1003f4e20;
            puVar22 = &local_e8;
            local_e8 = 0x8220202;
            local_e4 = "Assertion failure";
            local_dc = 0x400;
            local_da = iVar15;
            goto LAB_1003f4e0d;
          }
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0xc0);
      if ((**(byte **)(param_2 + 0x10) & 1) == 0) {
LAB_1003f4904:
        uVar14 = (undefined4)((ulong)ppuVar28 >> 0x20);
        pbVar20 = *(byte **)(param_2 + 0x18);
        bVar11 = *pbVar20;
        if ((bVar11 & 1) != 0) {
          if (*(int *)(pbVar20 + 0xc) != 0) {
            lVar23 = 0x10;
            uVar25 = 0;
            do {
              FUN_1003f5ec5(param_1,param_1,pbVar20 + lVar23,&local_f0);
              uVar14 = (undefined4)((ulong)ppuVar28 >> 0x20);
              uVar25 = uVar25 + 1;
              pbVar20 = *(byte **)(param_2 + 0x18);
              lVar23 = lVar23 + 0x38;
            } while (uVar25 < *(uint *)(pbVar20 + 0xc));
            bVar11 = *pbVar20;
          }
          *(byte *)((long)param_1 + 0x194) = bVar11 >> 3 & 1;
          *(byte *)(param_1 + 0x29) = pbVar20[8];
          *(byte *)((long)param_1 + 0x149) = pbVar20[9];
          *(byte *)((long)param_1 + 0x16b) = pbVar20[10];
          sVar1 = *(short *)(pbVar20 + 2);
          *(char *)((long)param_1 + 0x22c) = (char)sVar1;
          *(byte *)((long)param_1 + 0x252) = pbVar20[4];
          *(bool *)((long)param_1 + 0x196) = (ushort)(sVar1 - 1U) < 3;
        }
        if ((*(byte *)puVar24[0xe] & 1) == 0) {
LAB_1003f499a:
          uVar25 = FUN_100474dd0(puVar24,0);
          if ((uVar25 & 0x200004) != 0) {
            FUN_1001b7a44(&local_c8);
            FUN_10047edcd(&local_e8,puVar24);
            FUN_1001b80b2(&local_c8,&local_e8);
            FUN_1001b7a50(&local_e8);
            cVar9 = FUN_1001b8428(&local_c8);
            if (cVar9 == '\0') {
              uVar16 = FUN_1001b83ae(&local_c8);
              uVar14 = FUN_1001b83f0(&local_c8);
              FUN_1003f625f(param_1,uVar16,uVar14,0xf,&local_f0);
              *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
            }
            FUN_10047d1cb(&local_e8,puVar24,PTR_cf_podcast_feed_url_100844b30);
            FUN_1001b80b2(&local_c8,&local_e8);
            FUN_1001b7a50(&local_e8);
            cVar9 = FUN_1001b8428(&local_c8);
            if (cVar9 == '\0') {
              uVar16 = FUN_1001b83ae(&local_c8);
              uVar14 = FUN_1001b83f0(&local_c8);
              FUN_1003f625f(param_1,uVar16,uVar14,0x10,&local_f0);
              *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
            }
            FUN_1001b7a50(&local_c8);
          }
          if (((**(byte **)(param_2 + 0x10) & 1) != 0) &&
             (lVar23 = *(long *)(*(byte **)(param_2 + 0x10) + 0x98), lVar23 != 0)) {
            iVar15 = FUN_1003f6757(param_1,lVar23,0x28,&local_f0);
            if (iVar15 != 0) {
              uVar16 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar16,0x10);
              if (cVar8 == '\0') goto LAB_1003f4e20;
              puVar22 = &local_c8;
              local_c8 = 0x8220202;
              uStack_c4 = 0x7a0a90;
              iStack_c0 = 1;
              local_bc = 0x400;
              local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
              goto LAB_1003f4e0d;
            }
            *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
          }
          if (((*(byte *)(param_2 + 0x48) & 0x20) != 0) &&
             (lVar23 = FUN_1002af284(param_2), lVar23 != 0)) {
            local_c8 = 0;
            uStack_c4 = 0;
            iVar15 = FUN_10017574a(lVar23);
            if (iVar15 == 0) {
              lVar17 = FUN_100170ef7(CONCAT44(uStack_c4,local_c8));
              if (lVar17 < 0x80001) {
                uVar16 = FUN_100170f3b(CONCAT44(uStack_c4,local_c8));
                uVar14 = FUN_100170ef7(CONCAT44(uStack_c4,local_c8));
                FUN_1003f625f(param_1,uVar16,uVar14,0x11,&local_f0);
                *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
              }
              FUN_10017060f(CONCAT44(uStack_c4,local_c8));
              FUN_100175848(lVar23);
            }
          }
          if ((uVar13 & 4) == 0) {
            if ((uVar13 >> 0x15 & 1) == 0) {
              uVar13 = *(uint *)((long)param_1 + 0x10013c) | uVar13;
            }
            else {
              uVar13 = *(uint *)((long)param_1 + 0x10013c) | 0x200000;
            }
            *(uint *)((long)param_1 + 0x10013c) = uVar13;
          }
          else {
            *(byte *)((long)param_1 + 0x10013c) = *(byte *)((long)param_1 + 0x10013c) | 4;
          }
          uVar13 = 0x40;
          if (*(char *)((long)param_1 + 0xa7) == '\0') {
            if (*(int *)((long)puVar24 + 0xdc) != 0) {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 1;
            }
            if (*(int *)(puVar24 + 0x1c) != 0) {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 2;
            }
            if (*(int *)((long)puVar24 + 0xe4) != 0) {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 4;
            }
            if (*(int *)(puVar24 + 0x1e) != 0) {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 8;
            }
            if (*(int *)((long)puVar24 + 0xec) != 0) {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 0x10;
            }
            if (cVar8 != '\0') {
              *(byte *)(param_1 + 0x20028) = *(byte *)(param_1 + 0x20028) | 0x20;
            }
            uVar13 = 0x80;
            if ((*(byte *)((long)puVar24 + 0xc3) & 4) != 0) goto LAB_1003f59d0;
          }
          else {
LAB_1003f59d0:
            *(uint *)(param_1 + 0x20028) = *(uint *)(param_1 + 0x20028) | uVar13;
          }
          uVar13 = (int)local_f0 - (int)param_1;
          if (0x100000 < uVar13) {
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 != '\0') {
              local_c8 = 0x8220202;
              uStack_c4 = 0x7a0a90;
              iStack_c0 = 1;
              local_bc = 0x822;
              local_ba = "dataSize <= (1 * 1024L * 1024L)";
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(uint *)(param_1 + 1) = uVar13;
          if (*(char *)((long)param_1 + 0x100127) != '\0') {
            FUN_1003f630f(param_1 + 0x20006,param_1);
          }
          uStack_c4 = 0;
          local_c8 = uVar13;
          iVar15 = FUN_100160894(param_1[0x20000],&local_c8,param_1);
          if ((iVar15 == -0x80) || (iVar15 == 0)) goto LAB_1003f4e20;
          uVar16 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar16,0x10);
          if (cVar8 == '\0') goto LAB_1003f4e20;
          puVar22 = &local_c8;
          local_c8 = 0x8220202;
          uStack_c4 = 0x7a0a90;
          iStack_c0 = 1;
          local_bc = 0x400;
          local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
        }
        else {
          lVar23 = local_f8 + 0x2020;
          iVar15 = FUN_1003f5e84(param_1,param_1,lVar23,*(undefined4 *)((byte *)puVar24[0xe] + 0x20)
                                 ,0x12,1,CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x20027)),
                                 &local_f0);
          if (iVar15 == -0x80) goto LAB_1003f4e20;
          if (iVar15 == 0) {
            iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x21b0,
                                   *(undefined4 *)(puVar24[0xe] + 0x1c),0x19,1,
                                   *(undefined4 *)(param_1 + 0x20027),&local_f0);
            if (iVar15 == -0x80) goto LAB_1003f4e20;
            if (iVar15 == 0) {
              iVar15 = FUN_1003f6044(param_1,param_1,lVar23,*(undefined4 *)(puVar24[0xe] + 0x24),0xe
                                     ,*(undefined4 *)(param_1 + 0x20027),&local_f0);
              if (iVar15 == -0x80) goto LAB_1003f4e20;
              if (iVar15 == 0) {
                iVar15 = FUN_1003f6044(param_1,param_1,lVar23,*(undefined4 *)(puVar24[0xe] + 0x28),
                                       0x29,*(undefined4 *)(param_1 + 0x20027),&local_f0);
                if (iVar15 == -0x80) goto LAB_1003f4e20;
                if (iVar15 == 0) {
                  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2340,
                                         *(undefined4 *)(puVar24[0xe] + 0x2c),0x27,1,
                                         *(undefined4 *)(param_1 + 0x20027),&local_f0);
                  if (iVar15 == -0x80) goto LAB_1003f4e20;
                  if (iVar15 == 0) goto LAB_1003f499a;
                  uVar16 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar8 == '\0') goto LAB_1003f4e20;
                  puVar22 = &local_c8;
                  local_c8 = 0x8220202;
                  uStack_c4 = 0x7a0a90;
                  iStack_c0 = 1;
                  local_bc = 0x400;
                  local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                }
                else {
                  uVar16 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar8 == '\0') goto LAB_1003f4e20;
                  puVar22 = &local_c8;
                  local_c8 = 0x8220202;
                  uStack_c4 = 0x7a0a90;
                  iStack_c0 = 1;
                  local_bc = 0x400;
                  local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                }
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar16,0x10);
                if (cVar8 == '\0') goto LAB_1003f4e20;
                puVar22 = &local_c8;
                local_c8 = 0x8220202;
                uStack_c4 = 0x7a0a90;
                iStack_c0 = 1;
                local_bc = 0x400;
                local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
              }
            }
            else {
              uVar16 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar16,0x10);
              if (cVar8 == '\0') goto LAB_1003f4e20;
              puVar22 = &local_c8;
              local_c8 = 0x8220202;
              uStack_c4 = 0x7a0a90;
              iStack_c0 = 1;
              local_bc = 0x400;
              local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
            }
          }
          else {
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 == '\0') goto LAB_1003f4e20;
            puVar22 = &local_c8;
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            iStack_c0 = 1;
            local_bc = 0x400;
            local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
          }
        }
      }
      else {
        uVar16 = CONCAT44((int)((ulong)ppuVar28 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
        iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1d50,
                               *(undefined4 *)(puVar24[0xe] + 0x14),0x2f,1,uVar16,&local_f0);
        if (iVar15 == -0x80) goto LAB_1003f4e20;
        if (iVar15 == 0) {
          uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
          iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x1da0,
                                 *(undefined4 *)(puVar24[0xe] + 0x18),0x30,1,uVar16,&local_f0);
          if (iVar15 == -0x80) goto LAB_1003f4e20;
          if (iVar15 == 0) {
            uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
            iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2250,
                                   *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x68),0x25,1,uVar16,
                                   &local_f0);
            if (iVar15 == -0x80) goto LAB_1003f4e20;
            if (iVar15 == 0) {
              uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
              iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x22a0,
                                     *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x6c),0x26,2,uVar16
                                     ,&local_f0);
              if (iVar15 == -0x80) goto LAB_1003f4e20;
              if (iVar15 == 0) {
                uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
                iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x22f0,
                                       *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x70),0x2a,1,
                                       uVar16,&local_f0);
                if (iVar15 == -0x80) goto LAB_1003f4e20;
                if (iVar15 == 0) {
                  uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027))
                  ;
                  iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2390,
                                         *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x74),0x2b,1,
                                         uVar16,&local_f0);
                  if (iVar15 == -0x80) goto LAB_1003f4e20;
                  if (iVar15 == 0) {
                    uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),
                                      *(undefined4 *)(param_1 + 0x20027));
                    iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x23e0,
                                           *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x78),0x2c,1,
                                           uVar16,&local_f0);
                    if (iVar15 == -0x80) goto LAB_1003f4e20;
                    if (iVar15 == 0) {
                      uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),
                                        *(undefined4 *)(param_1 + 0x20027));
                      iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2390,
                                             *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x7c),0x2d,
                                             1,uVar16,&local_f0);
                      if (iVar15 == -0x80) goto LAB_1003f4e20;
                      if (iVar15 == 0) {
                        ppuVar28 = (undefined8 **)
                                   CONCAT44((int)((ulong)uVar16 >> 0x20),
                                            *(undefined4 *)(param_1 + 0x20027));
                        iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x23e0,
                                               *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x80),
                                               0x2e,1,ppuVar28,&local_f0);
                        if (iVar15 == -0x80) goto LAB_1003f4e20;
                        if (iVar15 == 0) goto LAB_1003f4904;
                        uVar16 = FUN_1001cc310();
                        cVar8 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar8 == '\0') goto LAB_1003f4e20;
                        puVar22 = &local_c8;
                        local_c8 = 0x8220202;
                        uStack_c4 = 0x7a0a90;
                        iStack_c0 = 1;
                        local_bc = 0x400;
                        local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                      }
                      else {
                        uVar16 = FUN_1001cc310();
                        cVar8 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar8 == '\0') goto LAB_1003f4e20;
                        puVar22 = &local_c8;
                        local_c8 = 0x8220202;
                        uStack_c4 = 0x7a0a90;
                        iStack_c0 = 1;
                        local_bc = 0x400;
                        local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                      }
                    }
                    else {
                      uVar16 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar8 == '\0') goto LAB_1003f4e20;
                      puVar22 = &local_c8;
                      local_c8 = 0x8220202;
                      uStack_c4 = 0x7a0a90;
                      iStack_c0 = 1;
                      local_bc = 0x400;
                      local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                    }
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar8 == '\0') goto LAB_1003f4e20;
                    puVar22 = &local_c8;
                    local_c8 = 0x8220202;
                    uStack_c4 = 0x7a0a90;
                    iStack_c0 = 1;
                    local_bc = 0x400;
                    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                  }
                }
                else {
                  uVar16 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar8 == '\0') goto LAB_1003f4e20;
                  puVar22 = &local_c8;
                  local_c8 = 0x8220202;
                  uStack_c4 = 0x7a0a90;
                  iStack_c0 = 1;
                  local_bc = 0x400;
                  local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
                }
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar16,0x10);
                if (cVar8 == '\0') goto LAB_1003f4e20;
                puVar22 = &local_c8;
                local_c8 = 0x8220202;
                uStack_c4 = 0x7a0a90;
                iStack_c0 = 1;
                local_bc = 0x400;
                local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
              }
            }
            else {
              uVar16 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar16,0x10);
              if (cVar8 == '\0') goto LAB_1003f4e20;
              puVar22 = &local_c8;
              local_c8 = 0x8220202;
              uStack_c4 = 0x7a0a90;
              iStack_c0 = 1;
              local_bc = 0x400;
              local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
            }
          }
          else {
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 == '\0') goto LAB_1003f4e20;
            puVar22 = &local_c8;
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            iStack_c0 = 1;
            local_bc = 0x400;
            local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
          }
        }
        else {
          uVar16 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar16,0x10);
          if (cVar8 == '\0') goto LAB_1003f4e20;
          puVar22 = &local_c8;
          local_c8 = 0x8220202;
          uStack_c4 = 0x7a0a90;
          iStack_c0 = 1;
          local_bc = 0x400;
          local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
        }
      }
    }
    else {
      uVar16 = CONCAT44((int)((ulong)ppuVar28 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
      iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2070,
                             *(undefined4 *)((byte *)puVar24[0xf] + 0x28),0x13,1,uVar16,&local_f0);
      if (iVar15 == -0x80) goto LAB_1003f4e20;
      if (iVar15 == 0) {
        uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
        iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2160,
                               *(undefined4 *)(puVar24[0xf] + 0x2c),0x14,1,uVar16,&local_f0);
        if (iVar15 == -0x80) goto LAB_1003f4e20;
        if (iVar15 == 0) {
          uVar16 = CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
          iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2200,
                                 *(undefined4 *)(puVar24[0xf] + 0x24),0x1a,2,uVar16,&local_f0);
          if (iVar15 == -0x80) goto LAB_1003f4e20;
          if (iVar15 == 0) {
            ppuVar28 = (undefined8 **)
                       CONCAT44((int)((ulong)uVar16 >> 0x20),*(undefined4 *)(param_1 + 0x20027));
            iVar15 = FUN_1003f5e84(param_1,param_1,local_f8 + 0x2160,
                                   *(undefined4 *)(puVar24[0xf] + 0x30),0x31,1,ppuVar28,&local_f0);
            if (iVar15 == -0x80) goto LAB_1003f4e20;
            if (iVar15 == 0) goto LAB_1003f485b;
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 == '\0') goto LAB_1003f4e20;
            puVar22 = &local_c8;
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            iStack_c0 = 1;
            local_bc = 0x400;
            local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
          }
          else {
            uVar16 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar16,0x10);
            if (cVar8 == '\0') goto LAB_1003f4e20;
            puVar22 = &local_c8;
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            iStack_c0 = 1;
            local_bc = 0x400;
            local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
          }
        }
        else {
          uVar16 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar16,0x10);
          if (cVar8 == '\0') goto LAB_1003f4e20;
          puVar22 = &local_c8;
          local_c8 = 0x8220202;
          uStack_c4 = 0x7a0a90;
          iStack_c0 = 1;
          local_bc = 0x400;
          local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
        }
      }
      else {
        uVar16 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar16,0x10);
        if (cVar8 == '\0') goto LAB_1003f4e20;
        puVar22 = &local_c8;
        local_c8 = 0x8220202;
        uStack_c4 = 0x7a0a90;
        iStack_c0 = 1;
        local_bc = 0x400;
        local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
      }
    }
  }
  else {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 == '\0') goto LAB_1003f4e20;
    puVar22 = &local_c8;
    local_c8 = 0x8220202;
    uStack_c4 = 0x7a0a90;
    iStack_c0 = 1;
    local_bc = 0x400;
    local_ba = (char *)CONCAT44(local_ba._4_4_,iVar15);
  }
LAB_1003f4e0d:
  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",puVar22,0x12);
LAB_1003f4e20:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar15;
}

