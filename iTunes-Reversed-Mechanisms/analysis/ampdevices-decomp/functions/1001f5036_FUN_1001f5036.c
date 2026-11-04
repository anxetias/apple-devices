// name: FUN_1001f5036
// address: 1001f5036

int FUN_1001f5036(long param_1,char *param_2,uint *param_3,undefined8 param_4,uint param_5,
                 long param_6,uint param_7,char *param_8,uint param_9,uint param_10,
                 undefined4 param_11,int param_12,int param_13,int param_14,long param_15,
                 undefined8 param_16,ulong param_17,ulong param_18,undefined4 param_19)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  uLongf *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  bool bVar18;
  ulong local_58;
  ulong local_50;
  byte local_46;
  byte local_45;
  byte abStack_42 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -0x66;
  if (((param_9 & 0xfffffff7) != 0 || param_1 == 0) ||
     ((*(int *)(param_1 + 0x70) == 1 && (iVar2 = FUN_1001f5f7b(param_1,0,0), iVar2 != 0))))
  goto LAB_1001f5791;
  pcVar13 = "-";
  if (param_2 != (char *)0x0) {
    pcVar13 = param_2;
  }
  if (param_8 == (char *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = _strlen(param_8);
  }
  sVar4 = _strlen(pcVar13);
  if (param_3 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 6);
    if (uVar5 == 0) {
      uVar7 = (ulong)param_3[5];
      uVar5 = uVar7 - 0x50;
      if (uVar7 < 0x50) {
        uVar5 = uVar7;
      }
      if (0x7bb < uVar7) {
        uVar5 = uVar7 - 0x7bc;
      }
      uVar5 = (ulong)param_3[2] * 0x800 + (ulong)(param_3[1] * 0x20 + (*param_3 >> 1)) |
              (ulong)(param_3[4] * 0x20 + param_3[3] + 0x20) * 0x10000 + uVar5 * 0x2000000;
    }
  }
  *(ulong *)(param_1 + 0x10128) = uVar5;
  uVar5 = param_18 | 2;
  if ((param_10 & 0xfffffffe) != 8) {
    uVar5 = param_18;
  }
  *(ulong *)(param_1 + 0x118) = uVar5;
  if (param_10 == 2) {
    uVar5 = 4;
LAB_1001f518f:
    uVar5 = uVar5 | param_18;
    *(ulong *)(param_1 + 0x118) = uVar5;
  }
  else if (param_10 == 1) {
    uVar5 = 6;
    goto LAB_1001f518f;
  }
  if (param_15 != 0) {
    *(ulong *)(param_1 + 0x118) = uVar5 | 1;
  }
  lVar17 = 0;
  *(undefined8 *)(param_1 + 0x10130) = 0;
  *(uint *)(param_1 + 0x120) = param_9;
  *(undefined4 *)(param_1 + 0x10138) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x124) = param_11;
  uVar5 = FUN_1001a7046(param_1);
  *(ulong *)(param_1 + 0xf0) = uVar5;
  uVar3 = (uint)local_58;
  uVar7 = (ulong)((int)sVar4 + uVar3 + param_7 + 0x2e);
  *(ulong *)(param_1 + 0x108) = uVar7;
  *(undefined8 *)(param_1 + 0x110) = 0x20;
  pvVar6 = _malloc(uVar7 + 0x20);
  *(void **)(param_1 + 0xf8) = pvVar6;
  uVar7 = (ulong)param_7;
  *(ulong *)(param_1 + 0x100) = uVar7;
  uVar11 = 0x2014b50;
  do {
    *(char *)((long)pvVar6 + lVar17) = (char)uVar11;
    uVar11 = uVar11 >> 8;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 4);
  *(short *)((long)pvVar6 + 4) = (short)param_17;
  if (0xffff < param_17) {
    *(undefined2 *)((long)pvVar6 + 4) = 0xffff;
  }
  *(undefined2 *)((long)pvVar6 + 6) = 0x14;
  uVar11 = *(ulong *)(param_1 + 0x118);
  *(short *)((long)pvVar6 + 8) = (short)uVar11;
  if (0xffff < uVar11) {
    *(undefined2 *)((long)pvVar6 + 8) = 0xffff;
  }
  uVar10 = *(uint *)(param_1 + 0x120);
  *(short *)((long)pvVar6 + 10) = (short)uVar10;
  if (0xffff < uVar10) {
    *(undefined2 *)((long)pvVar6 + 10) = 0xffff;
  }
  lVar17 = 0;
  uVar11 = *(ulong *)(param_1 + 0x10128);
  do {
    uVar12 = uVar11;
    *(char *)((long)pvVar6 + lVar17 + 0xc) = (char)uVar12;
    lVar17 = lVar17 + 1;
    uVar11 = uVar12 >> 8;
  } while (lVar17 != 4);
  if (0xff < uVar12) {
    *(undefined4 *)((long)pvVar6 + 0xc) = 0xffffffff;
  }
  *(undefined8 *)((long)pvVar6 + 0x10) = 0;
  *(undefined4 *)((long)pvVar6 + 0x18) = 0;
  uVar11 = sVar4 & 0xffffffff;
  *(char *)((long)pvVar6 + 0x1c) = (char)sVar4;
  *(char *)((long)pvVar6 + 0x1d) = (char)(sVar4 >> 8);
  if (0xffff < uVar11) {
    *(undefined2 *)((long)pvVar6 + 0x1c) = 0xffff;
  }
  *(char *)((long)pvVar6 + 0x1e) = (char)param_7;
  *(char *)((long)pvVar6 + 0x1f) = (char)(param_7 >> 8);
  if (0xffff < param_7) {
    *(undefined2 *)((long)pvVar6 + 0x1e) = 0xffff;
  }
  *(short *)((long)pvVar6 + 0x20) = (short)local_58;
  if (0xffff < uVar3) {
    *(undefined2 *)((long)pvVar6 + 0x20) = 0xffff;
  }
  *(undefined2 *)((long)pvVar6 + 0x22) = 0;
  if (param_3 == (uint *)0x0) {
    *(undefined2 *)((long)pvVar6 + 0x24) = 0;
    *(undefined4 *)((long)pvVar6 + 0x26) = 0;
  }
  else {
    uVar12 = *(ulong *)(param_3 + 8);
    *(short *)((long)pvVar6 + 0x24) = (short)uVar12;
    if (0xffff < uVar12) {
      *(undefined2 *)((long)pvVar6 + 0x24) = 0xffff;
    }
    lVar17 = 0;
    uVar12 = *(ulong *)(param_3 + 10);
    do {
      uVar14 = uVar12;
      *(char *)((long)pvVar6 + lVar17 + 0x26) = (char)uVar14;
      lVar17 = lVar17 + 1;
      uVar12 = uVar14 >> 8;
    } while (lVar17 != 4);
    if (0xff < uVar14) {
      *(undefined4 *)((long)pvVar6 + 0x26) = 0xffffffff;
    }
  }
  if (uVar5 < 0xffffffff) {
    lVar17 = 0;
    uVar5 = uVar5 - *(long *)(param_1 + 0x10188);
    do {
      uVar12 = uVar5;
      *(char *)((long)pvVar6 + lVar17 + 0x2a) = (char)uVar12;
      lVar17 = lVar17 + 1;
      uVar5 = uVar12 >> 8;
    } while (lVar17 != 4);
    if (0xff < uVar12) {
      *(undefined4 *)((long)pvVar6 + 0x2a) = 0xffffffff;
    }
  }
  else {
    uVar5 = 0xffffffff;
    lVar17 = 0;
    do {
      *(char *)((long)pvVar6 + lVar17 + 0x2a) = (char)uVar5;
      uVar5 = uVar5 >> 8;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 4);
  }
  if ((int)sVar4 != 0) {
    uVar5 = 0;
    do {
      *(char *)(*(long *)(param_1 + 0xf8) + 0x2e + uVar5) = pcVar13[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  if (param_7 != 0) {
    uVar5 = 0;
    do {
      *(undefined1 *)(uVar5 + *(long *)(param_1 + 0xf8) + uVar11 + 0x2e) =
           *(undefined1 *)(param_6 + uVar5);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      *(char *)(uVar5 + *(long *)(param_1 + 0xf8) + uVar7 + uVar11 + 0x2e) = param_8[uVar5];
      uVar5 = uVar5 + 1;
    } while ((local_58 & 0xffffffff) != uVar5);
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    iVar2 = -0x68;
    goto LAB_1001f5791;
  }
  *(undefined4 *)(param_1 + 0x1013c) = param_19;
  *(undefined8 *)(param_1 + 0x10140) = 0;
  *(undefined8 *)(param_1 + 0x10148) = 0;
  *(undefined8 *)(param_1 + 0x10150) = 0;
  sVar4 = _strlen(pcVar13);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = 0x4034b50;
  lVar17 = 0;
  do {
    *(char *)((long)&local_50 + lVar17) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 4);
  lVar17 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar8,&local_50,4);
  if (lVar17 == 4) {
    if (*(int *)(param_1 + 0x1013c) == 0) {
      local_50 = CONCAT62(local_50._2_6_,0x14);
    }
    else {
      local_50 = CONCAT62(local_50._2_6_,0x2d);
    }
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2)
    ;
    if (lVar17 != 2) goto LAB_1001f574a;
    local_50._0_2_ = (short)*(ulong *)(param_1 + 0x118);
    if (0xffff < *(ulong *)(param_1 + 0x118)) {
      local_50._0_2_ = 0xffff;
    }
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2)
    ;
    if (lVar17 != 2) goto LAB_1001f574a;
    local_50._0_2_ = (short)*(uint *)(param_1 + 0x120);
    if (0xffff < *(uint *)(param_1 + 0x120)) {
      local_50._0_2_ = 0xffff;
    }
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50);
    if (lVar17 != 2) goto LAB_1001f574a;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    lVar17 = 0;
    uVar5 = *(ulong *)(param_1 + 0x10128);
    do {
      uVar7 = uVar5;
      *(char *)((long)&local_50 + lVar17) = (char)uVar7;
      lVar17 = lVar17 + 1;
      uVar5 = uVar7 >> 8;
    } while (lVar17 != 4);
    if (0xff < uVar7) {
      local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    }
    lVar17 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar8,&local_50,4);
    if (lVar17 != 4) goto LAB_1001f574a;
    local_50 = local_50 & 0xffffffff00000000;
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58));
    if (lVar17 != 4) goto LAB_1001f574a;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x1013c) == 0) {
      local_50 = local_50 & 0xffffffff00000000;
      uVar16 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      uVar3 = 0xffffffff;
      lVar17 = 0;
      do {
        *(char *)((long)&local_50 + lVar17) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 4);
      uVar16 = *(undefined8 *)(param_1 + 0x38);
    }
    lVar17 = (**(code **)(param_1 + 0x10))(uVar16,uVar8,&local_50);
    if (lVar17 != 4) goto LAB_1001f574a;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x1013c) == 0) {
      local_50 = local_50 & 0xffffffff00000000;
      uVar16 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      uVar3 = 0xffffffff;
      lVar17 = 0;
      do {
        *(char *)((long)&local_50 + lVar17) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 4);
      uVar16 = *(undefined8 *)(param_1 + 0x38);
    }
    lVar17 = (**(code **)(param_1 + 0x10))(uVar16,uVar8,&local_50,4);
    if (lVar17 != 4) goto LAB_1001f574a;
    uVar5 = sVar4 & 0xffffffff;
    local_50._0_2_ = (short)sVar4;
    if (0xffff < uVar5) {
      local_50._0_2_ = 0xffff;
    }
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2)
    ;
    if (lVar17 != 2) goto LAB_1001f574a;
    uVar3 = param_5 + 0x14;
    if (*(int *)(param_1 + 0x1013c) == 0) {
      uVar3 = param_5;
    }
    local_50._0_2_ = (short)uVar3;
    if (0xffff < uVar3) {
      local_50._0_2_ = 0xffff;
    }
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2)
    ;
    bVar18 = lVar17 != 2;
    if ((uVar5 != 0) && (lVar17 == 2)) {
      uVar7 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),pcVar13,
                         uVar5);
      bVar18 = uVar7 != uVar5;
    }
    if ((param_5 == 0) || (bVar18)) {
      if (bVar18) goto LAB_1001f574a;
    }
    else {
      uVar5 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),param_4,
                         (ulong)param_5);
      if (uVar5 != param_5) goto LAB_1001f574a;
    }
    if (*(int *)(param_1 + 0x1013c) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0x10000;
      *(long *)(param_1 + 0x90) = param_1 + 0x128;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
LAB_1001f58c9:
      if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
        iVar2 = -param_12;
        if (-1 < -param_12) {
          iVar2 = param_12;
        }
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
        iVar2 = _deflateInit2_((z_streamp)(param_1 + 0x78),param_10,8,iVar2,param_13,param_14,
                               "1.2.12",0x70);
        if (iVar2 != 0) goto LAB_1001f5786;
        *(undefined4 *)(param_1 + 0xe8) = 8;
      }
      *(undefined4 *)(param_1 + 0x10178) = 0;
      if (param_15 != 0) {
        *(undefined4 *)(param_1 + 0x10138) = 1;
        puVar9 = _get_crc_table();
        *(uLongf **)(param_1 + 0x10170) = puVar9;
        iVar2 = DAT_1008a2b68 + 1;
        bVar18 = DAT_1008a2b68 == 0;
        DAT_1008a2b68 = iVar2;
        if (bVar18) {
          uVar3 = _time(0);
          _srand(uVar3 ^ 0xbb40e64e);
        }
        FUN_1001f6fec(param_15,param_1 + 0x10158,puVar9);
        lVar17 = 0;
        do {
          uVar3 = _rand();
          uVar10 = (uint)*(ulong *)(param_1 + 0x10168);
          uVar5 = *(ulong *)(param_1 + 0x10158) >> 8 ^
                  puVar9[((uint)*(ulong *)(param_1 + 0x10158) ^ uVar3 >> 7) & 0xff];
          *(ulong *)(param_1 + 0x10158) = uVar5;
          lVar15 = ((uVar5 & 0xff) + *(long *)(param_1 + 0x10160)) * 0x8088405 + 1;
          *(long *)(param_1 + 0x10160) = lVar15;
          *(ulong *)(param_1 + 0x10168) =
               *(ulong *)(param_1 + 0x10168) >> 8 ^
               puVar9[((uint)((ulong)lVar15 >> 0x18) & 0xff ^ uVar10) & 0xff];
          abStack_42[lVar17] =
               (byte)((uVar10 & 0xfffd ^ 3) * (uVar10 | 2) >> 8) ^ (byte)(uVar3 >> 7);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 10);
        FUN_1001f6fec(param_15,param_1 + 0x10158,puVar9);
        uVar5 = *(ulong *)(param_1 + 0x10168);
        uVar7 = *(ulong *)(param_1 + 0x10158);
        lVar17 = *(long *)(param_1 + 0x10160);
        lVar15 = 0;
        do {
          uVar3 = (uint)uVar5;
          bVar1 = abStack_42[lVar15];
          uVar7 = uVar7 >> 8 ^ puVar9[(byte)((byte)uVar7 ^ bVar1)];
          *(ulong *)(param_1 + 0x10158) = uVar7;
          lVar17 = ((uVar7 & 0xff) + lVar17) * 0x8088405 + 1;
          *(long *)(param_1 + 0x10160) = lVar17;
          uVar5 = uVar5 >> 8 ^ puVar9[((uint)((ulong)lVar17 >> 0x18) & 0xff ^ uVar3) & 0xff];
          *(ulong *)(param_1 + 0x10168) = uVar5;
          *(byte *)((long)&local_50 + lVar15) =
               (byte)((uVar3 & 0xfffd ^ 3) * (uVar3 | 2) >> 8) ^ bVar1;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 10);
        uVar3 = (uint)uVar5;
        uVar10 = (uint)((ulong)param_16 >> 0x10) & 0xffff;
        uVar7 = uVar7 >> 8 ^ puVar9[((uint)uVar7 ^ uVar10) & 0xff];
        *(ulong *)(param_1 + 0x10158) = uVar7;
        lVar15 = ((uVar7 & 0xff) + lVar17) * 0x8088405;
        lVar17 = lVar15 + 1;
        *(long *)(param_1 + 0x10160) = lVar17;
        uVar5 = uVar5 >> 8 ^ puVar9[((uint)((ulong)lVar17 >> 0x18) & 0xff ^ uVar3) & 0xff];
        *(ulong *)(param_1 + 0x10168) = uVar5;
        local_46 = (byte)uVar10 ^ (byte)((uVar3 & 0xfffd ^ 3) * (uVar3 | 2) >> 8);
        uVar3 = (uint)uVar5;
        uVar7 = uVar7 >> 8 ^ puVar9[(uint)uVar7 & 0xff ^ (uint)param_16 >> 0x18];
        *(ulong *)(param_1 + 0x10158) = uVar7;
        lVar17 = ((uVar7 & 0xff) + lVar15 + 1) * 0x8088405 + 1;
        *(long *)(param_1 + 0x10160) = lVar17;
        *(ulong *)(param_1 + 0x10168) =
             uVar5 >> 8 ^ puVar9[((uint)((ulong)lVar17 >> 0x18) & 0xff ^ uVar3) & 0xff];
        local_45 = (byte)((ulong)param_16 >> 0x18) ^ (byte)((uVar3 & 0xfffd ^ 3) * (uVar3 | 2) >> 8)
        ;
        *(undefined4 *)(param_1 + 0x10178) = 0xc;
        lVar17 = (**(code **)(param_1 + 0x10))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                            &local_50,0xc);
        iVar2 = -1;
        if (lVar17 != 0xc) goto LAB_1001f5791;
      }
      *(undefined4 *)(param_1 + 0x70) = 1;
      iVar2 = 0;
      goto LAB_1001f5791;
    }
    uVar8 = FUN_1001a7046(param_1,*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x10140) = uVar8;
    local_50._0_2_ = 1;
    (**(code **)(param_1 + 0x10))
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2);
    local_50 = CONCAT62(local_50._2_6_,0x10);
    (**(code **)(param_1 + 0x10))
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2);
    local_50 = 0;
    (**(code **)(param_1 + 0x10))
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,8);
    local_50 = 0;
    lVar17 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,8)
    ;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0x10000;
    *(long *)(param_1 + 0x90) = param_1 + 0x128;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    iVar2 = -1;
    if (lVar17 == 8) goto LAB_1001f58c9;
  }
  else {
LAB_1001f574a:
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0x10000;
    *(long *)(param_1 + 0x90) = param_1 + 0x128;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    iVar2 = -1;
  }
LAB_1001f5786:
  *(undefined4 *)(param_1 + 0x10178) = 0;
LAB_1001f5791:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

