// name: FUN_10047086e
// address: 10047086e

void FUN_10047086e(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  byte bVar5;
  long *plVar6;
  char cVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int local_58 [3];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || (plVar17 = (long *)param_1[2], plVar17 == (long *)0x0)) {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_58[0] = 0x8220202;
      local_58[1] = 0x7a0a90;
      local_58[2] = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6950;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if ((param_1 != (long *)0x0) && (plVar17 = (long *)param_1[2], plVar17 != (long *)0x0))
    goto LAB_1004708d9;
    plVar17 = (long *)0x0;
LAB_100470918:
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_58[0] = 0x8220202;
      local_58[1] = 0x7a0a90;
      local_58[2] = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe894;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_1004708d9:
    if ((int)plVar17[0x10] != 0x74646174) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58[0] = 0x8220202;
        local_58[1] = 0x7ab58c;
        local_58[2] = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_100470918;
    }
  }
  uVar1 = *(uint *)((long)param_1 + 0xc2);
  if ((uVar1 & 1) != 0) {
    if ((param_1[0xd] != 0) &&
       (lVar16 = param_1[0xd], (*(byte *)((long)plVar17 + 0x1bb3) & 0x20) == 0)) {
      do {
        lVar15 = *(long *)(lVar16 + 0x50);
        FUN_1003a6ecc(lVar16);
        lVar16 = lVar15;
      } while (lVar15 != 0);
      goto LAB_100470e6e;
    }
    if ((uVar1 >> 9 & 1) != 0) goto LAB_100470e6e;
    *(uint *)((long)param_1 + 0xc2) = uVar1 | 0x200;
    FUN_100470fd6(param_1);
    (**(code **)(*plVar17 + 0x10))(plVar17,0x64747269,param_1,0,0);
    if (param_1[2] == 0) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58[0] = 0x8220202;
        local_58[1] = 0x7a0a90;
        local_58[2] = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x6950;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (((long *)param_1[0xb] != (long *)0x0) &&
       (plVar13 = (long *)param_1[0xb], (*(byte *)((long)plVar17 + 0x1bb3) & 0x20) == 0)) {
      do {
        plVar9 = (long *)*plVar13;
        FUN_1002b0cf4(plVar13);
        plVar13 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
    if (*(int *)((long)plVar17 + 0x9c) == 0) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58[0] = 0x8220202;
        local_58[1] = 0x7a0a90;
        local_58[2] = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x1856;
        uStack_48 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if ((param_1 == (long *)0x0) || (lVar16 = param_1[2], lVar16 == 0)) {
      lVar16 = 0;
LAB_100470a76:
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58[0] = 0x8220202;
        local_58[1] = 0x7a0a90;
        local_58[2] = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xe894;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*(int *)(lVar16 + 0x80) != 0x74646174) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58[0] = 0x8220202;
        local_58[1] = 0x7ab58c;
        local_58[2] = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_100470a76;
    }
    *(int *)(lVar16 + 0x9c) = *(int *)(lVar16 + 0x9c) + -1;
    *(byte *)(lVar16 + 0x1bb0) = *(byte *)(lVar16 + 0x1bb0) | 0x20;
    lVar15 = param_1[4];
    plVar13 = (long *)(lVar15 + 0x18);
    if (lVar15 == 0) {
      plVar13 = (long *)(lVar16 + 0x1b68);
    }
    lVar2 = param_1[3];
    *plVar13 = lVar2;
    plVar13 = (long *)(lVar2 + 0x20);
    if (lVar2 == 0) {
      plVar13 = (long *)(lVar16 + 0x1b70);
    }
    *plVar13 = lVar15;
    param_1[3] = 0;
    param_1[4] = 0;
    if ((*(byte *)(lVar16 + 0x1bb3) & 0x20) == 0) {
      if ((int)param_1[1] != 0) {
        plVar13 = (long *)(lVar16 + 0x2570);
        local_58[0] = (int)param_1[1];
        plVar9 = (long *)FUN_1002b7f7c(plVar13);
        if (plVar9 != (long *)0x0) {
          lVar15 = *plVar9;
          uVar12 = plVar9[1];
          uVar3 = *(ulong *)(lVar16 + 0x2578);
          uVar10 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
          uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
          uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar10 >> 0x38 < 2) {
            uVar12 = uVar12 & uVar3 - 1;
          }
          else if (uVar3 <= uVar12) {
            uVar12 = uVar12 % uVar3;
          }
          plVar6 = *(long **)(*plVar13 + uVar12 * 8);
          do {
            plVar11 = plVar6;
            plVar6 = (long *)*plVar11;
          } while ((long *)*plVar11 != plVar9);
          bVar5 = (byte)(uVar10 >> 0x38);
          if (plVar11 == (long *)(lVar16 + 0x2580)) {
LAB_100470ce4:
            if (lVar15 == 0) {
LAB_100470d11:
              *(undefined8 *)(*plVar13 + uVar12 * 8) = 0;
              lVar15 = *plVar9;
              goto LAB_100470d1d;
            }
            uVar10 = *(ulong *)(lVar15 + 8);
            if (bVar5 < 2) {
              uVar14 = uVar3 - 1 & uVar10;
            }
            else {
              uVar14 = uVar10;
              if (uVar3 <= uVar10) {
                uVar14 = uVar10 % uVar3;
              }
            }
            if (uVar14 != uVar12) goto LAB_100470d11;
LAB_100470d26:
            if (bVar5 < 2) {
              uVar10 = uVar10 & uVar3 - 1;
            }
            else if (uVar3 <= uVar10) {
              uVar10 = uVar10 % uVar3;
            }
            if (uVar10 != uVar12) {
              *(long **)(*plVar13 + uVar10 * 8) = plVar11;
              lVar15 = *plVar9;
            }
          }
          else {
            uVar10 = plVar11[1];
            if (bVar5 < 2) {
              uVar10 = uVar10 & uVar3 - 1;
            }
            else if (uVar3 <= uVar10) {
              uVar10 = uVar10 % uVar3;
            }
            if (uVar10 != uVar12) goto LAB_100470ce4;
LAB_100470d1d:
            if (lVar15 != 0) {
              uVar10 = *(ulong *)(lVar15 + 8);
              goto LAB_100470d26;
            }
            lVar15 = 0;
          }
          *plVar11 = lVar15;
          *plVar9 = 0;
          *(long *)(lVar16 + 0x2588) = *(long *)(lVar16 + 0x2588) + -1;
          operator_delete(plVar9);
        }
      }
      if (*param_1 != 0) {
        FUN_100472798(lVar16 + 0x2598);
      }
      if (param_1[0x31] != 0) {
        FUN_100472798(lVar16 + 0x25c0);
      }
    }
    if (*(long *)(lVar16 + 0x2750) != 0) {
      FUN_1001c64c1();
    }
    *(undefined8 *)(lVar16 + 0x2750) = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_100217418(lVar16 + 0x2758,local_58);
    plVar13 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_58[2]));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar9 = plVar13 + 1;
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
      }
    }
    pvVar4 = *(void **)(lVar16 + 0x2738);
    if (pvVar4 != (void *)0x0) {
      FUN_1002a41f4(pvVar4,*(undefined8 *)((long)pvVar4 + 8));
      operator_delete(pvVar4);
    }
    *(undefined8 *)(lVar16 + 0x2738) = 0;
  }
  FUN_1005e5a00(param_1);
  FUN_1003a3a5a(param_1);
  FUN_1004702fc(param_1);
  FUN_100205d70(param_1 + 0x3c);
  FUN_1001ab006(param_1 + 0x2c);
  FUN_1001c5aec(plVar17[0x378],param_1);
LAB_100470e6e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

