// name: FUN_1001ef9c4
// address: 1001ef9c4

/* WARNING: Type propagation algorithm not settling */

void * FUN_1001ef9c4(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  void *pvVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  long local_1e0;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  code *pcStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  ulong local_168;
  long local_160 [6];
  ulong local_130;
  long local_128;
  long local_120 [19];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  void *local_38;
  
  local_180 = 0;
  uStack_178 = 0;
  if (param_2 == (undefined4 *)0x0) {
    FUN_1001a70c6(&local_1c8);
  }
  else {
    uStack_178 = *(undefined8 *)(param_2 + 0x14);
    uStack_188 = *(undefined8 *)(param_2 + 0x10);
    local_180 = *(undefined8 *)(param_2 + 0x12);
    local_1c8 = *param_2;
    uStack_1c4 = param_2[1];
    uStack_1c0 = param_2[2];
    uStack_1bc = param_2[3];
    local_1b8 = *(undefined8 *)(param_2 + 4);
    uStack_1b0 = *(undefined8 *)(param_2 + 6);
    local_1a8 = *(undefined8 *)(param_2 + 8);
    pcStack_1a0 = *(code **)(param_2 + 10);
    local_198 = *(undefined8 *)(param_2 + 0xc);
    uStack_190 = *(undefined8 *)(param_2 + 0xe);
  }
  local_170 = param_3;
  uVar8 = FUN_1001a7017(&local_1c8,param_1,5);
  if (uVar8 != 0) {
    local_168 = uVar8;
    lVar9 = FUN_1001a702e(&local_1c8,uVar8,0,2);
    if (lVar9 == 0) {
      uVar10 = FUN_1001a7046(&local_1c8,uVar8);
      local_38 = (void *)0xffff;
      if (uVar10 < 0xffff) {
        local_38 = (void *)uVar10;
      }
      pvVar11 = _malloc(0x404);
      if (pvVar11 != (void *)0x0) {
        local_48 = uVar10;
        if (4 < uVar10) {
          pvVar15 = (void *)0x4;
          local_58 = uVar8;
          do {
            uVar8 = local_58;
            local_50 = (long)pvVar15 + 0x400;
            pvVar15 = local_38;
            if (local_50 < local_38) {
              pvVar15 = (void *)local_50;
            }
            lVar9 = local_48 - (long)pvVar15;
            uVar10 = 0x404;
            if (pvVar15 < 0x404) {
              uVar10 = (ulong)pvVar15;
            }
            lVar12 = FUN_1001a702e(&local_1c8,local_58,lVar9,0);
            if ((lVar12 != 0) ||
               (uVar8 = (*(code *)CONCAT44(uStack_1bc,uStack_1c0))(uStack_190,uVar8,pvVar11),
               uVar8 != uVar10)) break;
            uVar8 = (ulong)((int)uVar10 - 4);
            iVar4 = (int)uVar10 + -3;
            do {
              if ((((*(char *)((long)pvVar11 + uVar8) == 'P') &&
                   (*(char *)((long)pvVar11 + uVar8 + 1) == 'K')) &&
                  (*(char *)((long)pvVar11 + uVar8 + 2) == '\x06')) &&
                 (*(char *)((long)pvVar11 + uVar8 + 3) == '\a')) {
                if (lVar9 + uVar8 != 0) {
                  _free(pvVar11);
                  uVar10 = local_58;
                  uVar13 = local_50;
                  if (local_48 < local_50) {
                    uVar13 = local_48;
                  }
                  if (0xfffe < uVar13) {
                    uVar13 = 0xffff;
                  }
                  lVar9 = FUN_1001a702e(&local_1c8,local_58,(local_48 - uVar13) + uVar8,0);
                  if (((((lVar9 != 0) ||
                        (iVar4 = FUN_1001f1537(&local_1c8,uVar10,&local_40), iVar4 != 0)) ||
                       ((iVar4 = FUN_1001f1537(&local_1c8,uVar10,&local_40), iVar4 != 0 ||
                        ((local_40 != 0 ||
                         (iVar4 = FUN_1001f15f0(&local_1c8,uVar10,&local_60), iVar4 != 0)))))) ||
                      (iVar4 = FUN_1001f1537(&local_1c8,uVar10,&local_40), uVar8 = local_60,
                      iVar4 != 0)) ||
                     ((((local_40 != 1 ||
                        (lVar9 = FUN_1001a702e(&local_1c8,uVar10,local_60,0), lVar9 != 0)) ||
                       (iVar4 = FUN_1001f1537(&local_1c8,uVar10,&local_40), iVar4 != 0)) ||
                      ((local_40 != 0x6064b50 || (uVar8 == 0)))))) goto LAB_1001efe18;
                  local_7c = 1;
                  local_38 = (void *)uVar8;
                  lVar9 = FUN_1001a702e(&local_1c8,local_168,uVar8,0);
                  local_50 = CONCAT71(local_50._1_7_,lVar9 != 0);
                  uVar1 = FUN_1001f1537(&local_1c8,local_168,&local_40);
                  uVar2 = FUN_1001f15f0(&local_1c8,local_168,local_1d0);
                  local_58 = CONCAT44(local_58._4_4_,uVar2 | uVar1);
                  uVar3 = FUN_1001f1744(&local_1c8,local_168,local_1d8);
                  local_48 = CONCAT44(local_48._4_4_,uVar3);
                  iVar4 = FUN_1001f1744(&local_1c8,local_168,local_1d8);
                  iVar16 = FUN_1001f1537(&local_1c8,local_168,&local_60);
                  iVar5 = FUN_1001f1537(&local_1c8,local_168,&local_68);
                  iVar6 = FUN_1001f15f0(&local_1c8,local_168,local_160);
                  iVar7 = FUN_1001f15f0(&local_1c8,local_168,&local_1e0);
                  uVar1 = 0xffffff99;
                  if ((local_1e0 == local_160[0] && local_68 == 0) && local_60 == 0) {
                    uVar1 = -(uint)((((iVar4 != 0 || (uint)local_48 != 0) ||
                                     ((iVar7 != 0 || iVar6 != 0) || (iVar5 != 0 || iVar16 != 0))) ||
                                    (int)local_58 != 0) | (byte)local_50);
                  }
                  iVar4 = FUN_1001f15f0(&local_1c8,local_168,&local_128);
                  iVar16 = FUN_1001f15f0(&local_1c8,local_168,local_120);
                  uVar2 = 0xffffffff;
                  if (iVar16 == 0 && iVar4 == 0) {
                    uVar2 = uVar1;
                  }
                  local_160[1] = 0;
                  goto LAB_1001f00be;
                }
                break;
              }
              uVar8 = uVar8 - 1;
              iVar16 = iVar4 + -1;
              bVar20 = 0 < iVar4;
              iVar4 = iVar16;
            } while (iVar16 != 0 && bVar20);
          } while (local_50 < local_38);
        }
        _free(pvVar11);
      }
    }
LAB_1001efe18:
    uVar8 = local_168;
    lVar9 = FUN_1001a702e(&local_1c8,local_168,0,2);
    uVar10 = 0;
    uVar17 = 0xffffffff;
    uVar3 = 0xffffffff;
    if (lVar9 == 0) {
      uVar13 = FUN_1001a7046(&local_1c8,uVar8);
      uVar10 = 0xffff;
      if (uVar13 < 0xffff) {
        uVar10 = uVar13;
      }
      local_38 = _malloc(0x404);
      if (local_38 == (void *)0x0) {
        uVar10 = 0;
        uVar3 = 0xffffffff;
      }
      else {
        if (uVar13 < 5) {
          uVar10 = 0;
        }
        else {
          local_50 = uVar8;
          local_48 = -uVar13;
          local_58 = (long)local_38 + 3;
          uVar8 = 4;
          local_70 = uVar13;
          do {
            uVar13 = local_50;
            uVar18 = uVar8 + 0x400;
            uVar8 = uVar10;
            if (uVar18 < uVar10) {
              uVar8 = uVar18;
            }
            uVar19 = 0x404;
            if (uVar8 < 0x404) {
              uVar19 = uVar8;
            }
            lVar9 = FUN_1001a702e(&local_1c8,local_50,local_70 - uVar8,0);
            if ((lVar9 != 0) ||
               (uVar13 = (*(code *)CONCAT44(uStack_1bc,uStack_1c0))
                                   (uStack_190,uVar13,local_38,uVar19), uVar13 != uVar19)) break;
            uVar13 = (ulong)((int)uVar19 - 4);
            lVar9 = (local_48 + uVar8) - uVar13;
            pcVar14 = (char *)(uVar13 + local_58);
            iVar4 = (int)uVar19 + -3;
            do {
              if ((((pcVar14[-3] == 'P') && (pcVar14[-2] == 'K')) && (pcVar14[-1] == '\x05')) &&
                 (*pcVar14 == '\x06')) {
                if (lVar9 != 0) {
                  uVar10 = -lVar9;
                  uVar17 = 0;
                  goto LAB_1001eff84;
                }
                break;
              }
              lVar9 = lVar9 + 1;
              pcVar14 = pcVar14 + -1;
              iVar16 = iVar4 + -1;
              bVar20 = 0 < iVar4;
              iVar4 = iVar16;
            } while (iVar16 != 0 && bVar20);
          } while (uVar18 < uVar10);
          uVar10 = 0;
          uVar17 = 0xffffffff;
        }
LAB_1001eff84:
        _free(local_38);
        uVar3 = uVar17;
      }
    }
    local_48 = CONCAT44(local_48._4_4_,uVar3);
    local_7c = 0;
    local_38 = (void *)uVar10;
    local_50 = FUN_1001a702e(&local_1c8,local_168,uVar10,0);
    iVar4 = FUN_1001f1537(&local_1c8,local_168,&local_40);
    iVar16 = FUN_1001f1744(&local_1c8,local_168,&local_60);
    iVar5 = FUN_1001f1744(&local_1c8,local_168,&local_68);
    iVar6 = FUN_1001f1744(&local_1c8,local_168,&local_40);
    local_160[0] = local_40;
    iVar7 = FUN_1001f1744(&local_1c8,local_168,&local_40);
    bVar20 = local_50 != 0;
    local_50 = -local_50;
    uVar1 = -(uint)bVar20 | (uint)local_48;
    if ((iVar7 != 0 || iVar6 != 0) || (iVar5 != 0 || (iVar16 != 0 || iVar4 != 0))) {
      uVar1 = 0xffffffff;
    }
    uVar2 = 0xffffff99;
    if ((local_40 == local_160[0] && local_68 == 0) && local_60 == 0) {
      uVar2 = uVar1;
    }
    iVar4 = FUN_1001f1537(&local_1c8,local_168,&local_40);
    local_128 = local_40;
    iVar16 = FUN_1001f1537(&local_1c8,local_168,&local_40);
    local_120[0] = local_40;
    iVar5 = FUN_1001f1744(&local_1c8,local_168,local_160 + 1);
    if (iVar5 != 0 || (iVar16 != 0 || iVar4 != 0)) {
      uVar2 = 0xffffffff;
    }
LAB_1001f00be:
    local_160[2] = (long)local_38 - (local_128 + local_120[0]);
    if ((local_38 < (ulong)(local_128 + local_120[0])) || (uVar2 != 0)) {
      (*pcStack_1a0)(uStack_190,local_168);
    }
    else {
      local_130 = (ulong)local_38;
      local_88 = 0;
      local_80 = 0;
      pvVar11 = _malloc(0x150);
      if (pvVar11 != (void *)0x0) {
        _memcpy(pvVar11,&local_1c8,0x150);
        *(undefined8 *)((long)pvVar11 + 0x88) = *(undefined8 *)((long)pvVar11 + 0xa8);
        *(undefined8 *)((long)pvVar11 + 0x80) = 0;
        iVar4 = FUN_1001f0322(pvVar11,(long)pvVar11 + 0xb0,(long)pvVar11 + 0x138,0,0,0,0,0,0);
        *(ulong *)((long)pvVar11 + 0x90) = (ulong)(iVar4 == 0);
        return pvVar11;
      }
    }
  }
  return (void *)0x0;
}

