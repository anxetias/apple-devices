// name: FUN_1002adba6
// address: 1002adba6

void FUN_1002adba6(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (undefined8 *)0x0) || (lVar3 = param_1[1], lVar3 == 0)) ||
     (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x8d38;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002adc40;
  }
  puVar11 = *(undefined8 **)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x60) = 0;
  cVar8 = FUN_10047478a(lVar3);
  if (((cVar8 == '\0') && ((*(byte *)(lVar3 + 0xc3) & 2) == 0)) &&
     (uVar9 = FUN_100475030(lVar3), (char)uVar9 != '\0')) {
    *(undefined1 *)(lVar3 + 0xc0) = 0;
    local_5c = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),1);
  }
  else {
    local_5c = 0;
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (puVar11 == param_1) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar10 = puVar11;
        puVar11 = (undefined8 *)*puVar10;
        if (puVar11 == (undefined8 *)0x0) goto LAB_1002adca7;
      } while (puVar11 != param_1);
    }
    puVar11 = (undefined8 *)(lVar3 + 0x58);
    if (puVar10 != (undefined8 *)0x0) {
      puVar11 = puVar10;
    }
    *puVar11 = *param_1;
    piVar1 = (int *)(*(long *)(lVar3 + 0x10) + 0xa0);
    *piVar1 = *piVar1 + -1;
  }
LAB_1002adca7:
  cVar8 = FUN_10031b8dc(lVar4);
  if ((cVar8 == '\x06') && ((*(byte *)((long)param_1 + 0x4a) & 4) != 0)) {
    FUN_1002ae348(lVar3);
  }
  *param_1 = 0;
  uVar16 = *(ulong *)(lVar4 + 0x1bb0);
  *(ulong *)(lVar4 + 0x1bb0) = uVar16 | 0x80;
  if (((uint)uVar16 >> 0x1d & 1) == 0) {
    if (*(int *)(param_1 + 6) != 0) {
      plVar2 = (long *)(lVar4 + 0x25e8);
      puVar11 = (undefined8 *)FUN_1002ae434(plVar2);
      if (puVar11 != param_1) {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8db1;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      local_60 = *(int *)(param_1 + 6);
      if (local_60 == 0) {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x6ad0;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        plVar12 = (long *)FUN_1002b7f7c(plVar2,&local_60);
        if (plVar12 != (long *)0x0) {
          lVar18 = *plVar12;
          uVar16 = plVar12[1];
          uVar5 = *(ulong *)(lVar4 + 0x25f0);
          uVar13 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 >> 0x38 < 2) {
            uVar16 = uVar16 & uVar5 - 1;
          }
          else if (uVar5 <= uVar16) {
            uVar16 = uVar16 % uVar5;
          }
          plVar7 = *(long **)(*plVar2 + uVar16 * 8);
          do {
            plVar15 = plVar7;
            plVar7 = (long *)*plVar15;
          } while ((long *)*plVar15 != plVar12);
          bVar6 = (byte)(uVar13 >> 0x38);
          if (plVar15 == (long *)(lVar4 + 0x25f8)) {
LAB_1002adea6:
            if (lVar18 == 0) {
LAB_1002aded3:
              *(undefined8 *)(*plVar2 + uVar16 * 8) = 0;
              lVar18 = *plVar12;
              goto LAB_1002adedf;
            }
            uVar13 = *(ulong *)(lVar18 + 8);
            if (bVar6 < 2) {
              uVar17 = uVar5 - 1 & uVar13;
            }
            else {
              uVar17 = uVar13;
              if (uVar5 <= uVar13) {
                uVar17 = uVar13 % uVar5;
              }
            }
            if (uVar17 != uVar16) goto LAB_1002aded3;
LAB_1002adee8:
            if (bVar6 < 2) {
              uVar13 = uVar13 & uVar5 - 1;
            }
            else if (uVar5 <= uVar13) {
              uVar13 = uVar13 % uVar5;
            }
            if (uVar13 != uVar16) {
              *(long **)(*plVar2 + uVar13 * 8) = plVar15;
              lVar18 = *plVar12;
            }
          }
          else {
            uVar13 = plVar15[1];
            if (bVar6 < 2) {
              uVar13 = uVar13 & uVar5 - 1;
            }
            else if (uVar5 <= uVar13) {
              uVar13 = uVar13 % uVar5;
            }
            if (uVar13 != uVar16) goto LAB_1002adea6;
LAB_1002adedf:
            if (lVar18 != 0) {
              uVar13 = *(ulong *)(lVar18 + 8);
              goto LAB_1002adee8;
            }
            lVar18 = 0;
          }
          *plVar15 = lVar18;
          *plVar12 = 0;
          *(long *)(lVar4 + 0x2600) = *(long *)(lVar4 + 0x2600) + -1;
          operator_delete(plVar12);
        }
      }
    }
    lVar18 = param_1[5];
    if (lVar18 != 0) {
      plVar2 = (long *)(lVar4 + 0x2610);
      lVar14 = FUN_1002b8060(plVar2,lVar18);
      if (lVar14 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = *(undefined8 **)(lVar14 + 0x18);
      }
      if (puVar11 != param_1) {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8dfd;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        lVar18 = param_1[5];
        if (lVar18 == 0) {
          uVar9 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar9,0x10);
          if (cVar8 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x6ad0;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1002ae130;
        }
      }
      plVar12 = (long *)FUN_1002b8060(plVar2,lVar18);
      if (plVar12 != (long *)0x0) {
        lVar18 = *plVar12;
        uVar16 = plVar12[1];
        uVar5 = *(ulong *)(lVar4 + 0x2618);
        uVar13 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar13 >> 0x38 < 2) {
          uVar16 = uVar16 & uVar5 - 1;
        }
        else if (uVar5 <= uVar16) {
          uVar16 = uVar16 % uVar5;
        }
        plVar7 = *(long **)(*plVar2 + uVar16 * 8);
        do {
          plVar15 = plVar7;
          plVar7 = (long *)*plVar15;
        } while ((long *)*plVar15 != plVar12);
        bVar6 = (byte)(uVar13 >> 0x38);
        if (plVar15 == (long *)(lVar4 + 0x2620)) {
LAB_1002ae0a5:
          if (lVar18 == 0) {
LAB_1002ae0d2:
            *(undefined8 *)(*plVar2 + uVar16 * 8) = 0;
            lVar18 = *plVar12;
            goto LAB_1002ae0de;
          }
          uVar13 = *(ulong *)(lVar18 + 8);
          if (bVar6 < 2) {
            uVar17 = uVar5 - 1 & uVar13;
          }
          else {
            uVar17 = uVar13;
            if (uVar5 <= uVar13) {
              uVar17 = uVar13 % uVar5;
            }
          }
          if (uVar17 != uVar16) goto LAB_1002ae0d2;
LAB_1002ae0e7:
          if (bVar6 < 2) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar13 = uVar13 % uVar5;
          }
          if (uVar13 != uVar16) {
            *(long **)(*plVar2 + uVar13 * 8) = plVar15;
            lVar18 = *plVar12;
          }
        }
        else {
          uVar13 = plVar15[1];
          if (bVar6 < 2) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar13 = uVar13 % uVar5;
          }
          if (uVar13 != uVar16) goto LAB_1002ae0a5;
LAB_1002ae0de:
          if (lVar18 != 0) {
            uVar13 = *(ulong *)(lVar18 + 8);
            goto LAB_1002ae0e7;
          }
          lVar18 = 0;
        }
        *plVar15 = lVar18;
        *plVar12 = 0;
        *(long *)(lVar4 + 0x2628) = *(long *)(lVar4 + 0x2628) + -1;
        operator_delete(plVar12);
      }
    }
LAB_1002ae130:
    if ((((*(long *)(lVar4 + 0x2638) != 0) && (param_1[1] != 0)) &&
        (*(long *)(param_1[1] + 0x10) != 0)) && (*(long *)(param_1[2] + 0x38) != 0)) {
      FUN_1002adb1d(*(long *)(lVar4 + 0x2638),param_1);
    }
    if (((*(long *)(lVar4 + 0x2640) != 0) && (param_1[1] != 0)) &&
       ((*(long *)(param_1[1] + 0x10) != 0 && (*(long *)(param_1[4] + 0x20) != 0)))) {
      FUN_1002adb1d(*(long *)(lVar4 + 0x2640),param_1);
    }
    lVar4 = *(long *)(lVar4 + 0x2648);
    if ((lVar4 != 0) && (*(int *)(param_1[2] + 0x68) != 0)) {
      uVar9 = FUN_1002acb5a(param_1);
      FUN_1002adb1d(lVar4,param_1,uVar9);
    }
    FUN_1002fef76(lVar3);
  }
  param_1[1] = 0;
  if ((char)local_5c != '\0') {
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_1005389ba(&local_58,0x85);
    FUN_1004755ef(lVar3,0,&local_58);
  }
LAB_1002adc40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

