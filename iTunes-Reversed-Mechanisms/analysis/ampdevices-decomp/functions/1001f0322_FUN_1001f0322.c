// name: FUN_1001f0322
// address: 1001f0322

uint FUN_1001f0322(long param_1,void *param_2,long *param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7,long param_8,ulong param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  uint local_100 [2];
  undefined1 local_f8 [8];
  long local_f0;
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  long local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  long local_98;
  long local_90;
  long *local_88;
  void *local_80;
  long local_78;
  ulong local_70;
  long local_68;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  if (param_1 == 0) {
    uVar16 = 0xffffff9a;
  }
  else {
    local_88 = param_3;
    local_80 = param_2;
    local_78 = param_4;
    local_70 = param_5;
    local_38 = param_6;
    lVar11 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x60),
                           *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
    uVar16 = 0xffffffff;
    if (lVar11 == 0) {
      iVar1 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),&local_98);
      uVar16 = 0xffffffff;
      if ((iVar1 == 0) && (uVar16 = 0xffffff99, local_98 == 0x2014b50)) {
        uVar16 = 0;
      }
    }
    local_5c = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),local_120);
    local_58 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),local_118);
    local_54 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),local_110);
    local_50 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),local_108);
    uVar2 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),local_100);
    local_a4 = local_100[0] >> 0x10 & 0x1f;
    local_a0 = (local_100[0] >> 0x15 & 0xf) - 1;
    local_9c = (local_100[0] >> 0x19) + 0x7bc;
    local_a8 = local_100[0] >> 0xb & 0x1f;
    local_ac = local_100[0] >> 5 & 0x3f;
    local_b0 = local_100[0] * 2 & 0x3e;
    uVar3 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),local_f8);
    uVar4 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),&local_40);
    local_f0 = local_40;
    uVar5 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),&local_40);
    local_e8 = local_40;
    uVar6 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_e0);
    local_4c = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_d8);
    local_48 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_d0);
    local_44 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_c8);
    uVar7 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),local_c0);
    uVar8 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),local_b8);
    uVar9 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),&local_40);
    auVar19._4_4_ = uVar7;
    auVar19._0_4_ = uVar9 | uVar8;
    auVar19._12_4_ = local_48;
    auVar19._8_4_ = local_44;
    auVar20._4_4_ = uVar6 | uVar5 | uVar4 | uVar3 | uVar2;
    auVar20._0_4_ = local_4c;
    auVar20._12_4_ = local_54;
    auVar20._8_4_ = local_50;
    if (local_58 != 0 || local_5c != 0) {
      uVar16 = 0xffffffff;
    }
    if (auVar20 != (undefined1  [16])0x0 || auVar19 != (undefined1  [16])0x0) {
      uVar16 = 0xffffffff;
    }
    uVar15 = local_e0;
    if ((local_78 != 0) && (uVar16 == 0)) {
      uVar15 = local_70;
      if (local_e0 < local_70) {
        *(undefined1 *)(local_78 + local_e0) = 0;
        uVar15 = local_e0;
      }
      uVar16 = 0;
      if (local_70 != 0 && local_e0 != 0) {
        uVar12 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),local_78
                            ,uVar15);
        uVar16 = -(uint)(uVar12 != uVar15);
      }
      uVar15 = local_e0 - uVar15;
    }
    uVar12 = local_d8;
    if ((local_38 == 0) || (uVar16 != 0)) {
      lVar11 = uVar15 + local_d8;
    }
    else {
      uVar17 = param_7;
      if (local_d8 < param_7) {
        uVar17 = local_d8;
      }
      if (uVar15 == 0) {
        uVar2 = 0;
        uVar15 = 0;
      }
      else {
        lVar11 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x60),uVar15,1);
        if (lVar11 == 0) {
          uVar15 = 0;
        }
        uVar2 = -(uint)(lVar11 != 0);
      }
      uVar16 = uVar2;
      if (param_7 != 0 && uVar12 != 0) {
        uVar13 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),local_38
                            ,uVar17);
        uVar16 = 0xffffffff;
        if (uVar13 == uVar17) {
          uVar16 = uVar2;
        }
      }
      lVar11 = (uVar12 - uVar17) + uVar15;
    }
    if (uVar12 != 0 && uVar16 == 0) {
      uVar15 = 0;
      lVar11 = lVar11 - uVar12;
      if (lVar11 == 0) {
        uVar16 = 0;
        local_38 = 0;
      }
      else {
        lVar14 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x60),lVar11,1);
        if (lVar14 == 0) {
          lVar11 = 0;
        }
        uVar16 = -(uint)(lVar14 != 0);
        local_38 = lVar11;
      }
      do {
        iVar1 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_90);
        iVar10 = FUN_1001f1744(param_1,*(undefined8 *)(param_1 + 0x60),&local_68);
        if (iVar10 != 0 || iVar1 != 0) {
          uVar16 = 0xffffffff;
        }
        if (local_90 == 1) {
          if (local_e8 == 0xffffffff) {
            iVar1 = FUN_1001f15f0(param_1,*(undefined8 *)(param_1 + 0x60),&local_e8);
            uVar16 = uVar16 | -(uint)(iVar1 != 0);
          }
          if (local_f0 == 0xffffffff) {
            iVar1 = FUN_1001f15f0(param_1,*(undefined8 *)(param_1 + 0x60),&local_f0);
            uVar16 = uVar16 | -(uint)(iVar1 != 0);
          }
          if (local_40 == 0xffffffff) {
            iVar1 = FUN_1001f15f0(param_1,*(undefined8 *)(param_1 + 0x60),&local_40);
            uVar16 = uVar16 | -(uint)(iVar1 != 0);
          }
          if (local_c8 == 0xffffffff) {
            iVar1 = FUN_1001f1537(param_1,*(undefined8 *)(param_1 + 0x60),local_128);
            bVar18 = iVar1 != 0;
            goto LAB_1001f080b;
          }
        }
        else {
          lVar11 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x60),local_68,1);
          bVar18 = lVar11 != 0;
LAB_1001f080b:
          uVar16 = uVar16 | -(uint)bVar18;
        }
        uVar15 = uVar15 + local_68 + 4;
        lVar11 = local_38;
      } while (uVar15 < local_d8);
    }
    if ((param_8 != 0) && (uVar16 == 0)) {
      uVar15 = param_9;
      if (local_d0 < param_9) {
        *(undefined1 *)(param_8 + local_d0) = 0;
        uVar15 = local_d0;
      }
      if (lVar11 == 0) {
        uVar2 = 0;
      }
      else {
        lVar11 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x60),lVar11,1);
        uVar2 = -(uint)(lVar11 != 0);
      }
      uVar16 = uVar2;
      if (param_9 != 0 && local_d0 != 0) {
        uVar12 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_8,
                            uVar15);
        uVar16 = 0xffffffff;
        if (uVar12 == uVar15) {
          uVar16 = uVar2;
        }
      }
    }
    if ((local_80 != (void *)0x0) && (uVar16 == 0)) {
      _memcpy(local_80,local_120,0x88);
    }
    if ((local_88 != (long *)0x0) && (uVar16 == 0)) {
      *local_88 = local_40;
      uVar16 = 0;
    }
  }
  return uVar16;
}

