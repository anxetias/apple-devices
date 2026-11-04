// name: FUN_1005983d6
// address: 1005983d6

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005983d6(long param_1,int param_2,int *param_3,char param_4)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_724;
  uint local_720;
  float local_71c;
  uint local_718;
  float local_714;
  undefined1 *local_710;
  long local_708;
  int local_700;
  float local_6fc [2];
  char *local_6f4;
  undefined2 local_6ec;
  char *local_6ea;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_708 = param_1;
  local_700 = param_2;
  if (param_1 == 0 || param_3 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_6ea = "(eq != nullptr && levels != nullptr)";
LAB_100598939:
      local_6ec = 0x822;
      local_6f4 = "Assertion failure";
      local_6fc[1] = 4.875246e-34;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_6fc + 1,0x16);
    }
LAB_1005988e2:
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    if (*param_3 == 2) {
      local_758 = *(undefined8 *)param_3;
      uStack_750 = *(undefined8 *)(param_3 + 2);
      local_748 = 0;
      uStack_740 = 0;
      local_738 = 0;
      uStack_730 = 0;
      puVar12 = (undefined4 *)&DAT_100759680;
    }
    else {
      if (*param_3 != 10) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_6ea = "false";
          goto LAB_100598939;
        }
        goto LAB_1005988e2;
      }
      local_758 = *(undefined8 *)param_3;
      local_738 = *(undefined8 *)(param_3 + 8);
      uStack_730 = *(undefined8 *)(param_3 + 10);
      local_748 = *(undefined8 *)(param_3 + 4);
      uStack_740 = *(undefined8 *)(param_3 + 6);
      uStack_750 = *(undefined8 *)(param_3 + 2);
      puVar12 = &DAT_1007596a0;
    }
    lVar5 = 2;
    fVar13 = DAT_100701d0c;
    do {
      fVar15 = *(float *)((long)&local_758 + lVar5 * 4);
      fVar14 = DAT_100701d1c;
      if ((DAT_100701d1c < fVar15) || (fVar14 = DAT_100701d0c, fVar15 < DAT_100701d0c)) {
        fVar15 = fVar14;
        *(float *)((long)&local_758 + lVar5 * 4) = fVar15;
      }
      if (fVar15 <= fVar13) {
        fVar15 = fVar13;
      }
      lVar5 = lVar5 + 1;
      fVar13 = fVar15;
    } while (lVar5 != 0xc);
    if (param_4 == '\x01') {
      fVar13 = (float)(-(uint)((float)(_DAT_100700430 ^ (uint)fVar15) < fVar15) &
                      (_DAT_100700430 ^ (uint)fVar15));
    }
    else {
      fVar13 = 0.0;
    }
    fVar15 = DAT_100701d1c;
    if ((DAT_100701d1c < local_758._4_4_) ||
       (fVar14 = local_758._4_4_, fVar15 = DAT_100701d0c, local_758._4_4_ < DAT_100701d0c)) {
      fVar14 = fVar15;
      local_758 = CONCAT44(fVar14,(undefined4)local_758);
    }
    *(undefined8 *)(param_1 + 0x11a0) = local_738;
    *(undefined8 *)(param_1 + 0x11a8) = uStack_730;
    *(undefined8 *)(param_1 + 0x1190) = local_748;
    *(undefined8 *)(param_1 + 0x1198) = uStack_740;
    *(undefined8 *)(param_1 + 0x1180) = local_758;
    *(undefined8 *)(param_1 + 0x1188) = uStack_750;
    uVar11 = (ulong)((float)(uint)(param_2 >> 1) * _DAT_100759670);
    fVar15 = DAT_100701d1c;
    if (fVar13 + fVar14 <= DAT_100701d1c) {
      fVar15 = fVar13 + fVar14;
    }
    lVar5 = 0;
    do {
      if ((float)(uVar11 & 0xffffffff) <= (float)(uint)puVar12[lVar5 * 2] * DAT_100759674) {
        *(undefined4 *)((long)&uStack_750 + lVar5 * 4) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 10);
    fVar13 = DAT_100701d0c;
    if (DAT_100701d0c <= fVar15) {
      fVar13 = fVar15;
    }
    if ((fVar13 != 0.0) || (fVar15 = DAT_100700b50, NAN(fVar13))) {
      dVar2 = (double)___exp10(SUB84((double)fVar13 / DAT_100700ae8,0));
      fVar15 = (float)dVar2;
    }
    lVar7 = local_708;
    *(float *)(local_708 + 0x11b0) = fVar15;
    local_710 = (undefined1 *)CONCAT44(local_710._4_4_,uStack_750._4_4_);
    local_720 = -(uint)((float)uStack_750 != 0.0) & 1;
    dVar2 = (double)___exp10(SUB84((double)(float)uStack_750 / DAT_100700ae8,0));
    local_71c = (float)dVar2 + DAT_100700b24;
    local_718 = -(uint)(local_710._0_4_ != 0.0) & 1;
    dVar2 = (double)___exp10(SUB84((double)local_710._0_4_ / DAT_100700ae8,0));
    local_714 = (float)dVar2 + DAT_100700b24;
    lVar5 = lVar7 + 0x51;
    puVar8 = (undefined1 *)(lVar7 + 0x19);
    lVar7 = 0;
    do {
      iVar3 = local_700;
      local_710 = puVar8;
      if (*param_3 == 10) {
        lVar10 = 0;
        do {
          *puVar8 = 3;
          fVar13 = *(float *)((long)&uStack_750 + lVar10);
          puVar8[-1] = fVar13 != 0.0;
          dVar2 = (double)___exp10(SUB84((double)fVar13 / DAT_100700ae8,0));
          *(float *)(puVar8 + -5) = (float)dVar2 + DAT_100700b24;
          uVar1 = *(uint *)((long)puVar12 + lVar10 * 2 + 4);
          uVar9 = (ulong)uVar1;
          if ((uint)uVar11 <= uVar1) {
            uVar9 = uVar11 & 0xffffffff;
          }
          FUN_100286390(local_6fc + 1,2,local_700,*(undefined4 *)((long)puVar12 + lVar10 * 2),uVar9,
                        local_6fc,puVar8 + -0x11);
          *(float *)(puVar8 + -9) = DAT_100700b50 / local_6fc[0];
          lVar10 = lVar10 + 4;
          puVar8 = puVar8 + 0x1c;
        } while (lVar10 != 0x28);
      }
      else {
        lVar10 = local_708 + lVar7 * 0x118;
        *(undefined1 *)(lVar10 + 0x19) = 1;
        *(char *)(lVar10 + 0x18) = (char)local_720;
        *(float *)(lVar10 + 0x14) = local_71c;
        local_724 = puVar12[2];
        FUN_1002860d6(local_6fc + 1,1,local_700,*puVar12,local_6fc,lVar10 + 8);
        *(float *)(lVar10 + 0x10) = DAT_100700b50 / local_6fc[0];
        *(undefined1 *)(lVar10 + 0x35) = 2;
        *(char *)(lVar10 + 0x34) = (char)local_718;
        *(float *)(lVar10 + 0x30) = local_714;
        lVar10 = local_708 + 0x24 + lVar7 * 0x118;
        FUN_10028621e(local_6fc + 1,1,iVar3,local_724,local_6fc,lVar10);
        *(float *)(lVar10 + 8) = DAT_100700b50 / local_6fc[0];
        lVar10 = 0;
        do {
          *(undefined2 *)(lVar5 + -1 + lVar10) = 0;
          lVar10 = lVar10 + 0x1c;
        } while (lVar10 != 0xe0);
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x118;
      puVar8 = local_710 + 0x118;
    } while (lVar7 != 0x10);
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

