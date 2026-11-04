// name: FUN_1002e667a
// address: 1002e667a

void FUN_1002e667a(int *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [12];
  undefined2 local_5c;
  char *local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_3;
  if (*param_1 != 0x706c7374) {
    uVar20 = FUN_1001cc310();
    cVar19 = _os_log_type_enabled(uVar20,0x10);
    if (cVar19 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_8_ = "Assertion failure (expected to be true)";
      local_5c = 0x822;
      local_5a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",local_68,0x16);
    }
    cVar19 = FUN_1001782e9(0,1);
    if (cVar19 == '\0') {
      uVar20 = FUN_1001cc310();
      cVar19 = _os_log_type_enabled(uVar20,0x10);
      if (cVar19 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_8_ = "Assertion failure";
        local_5c = 0x822;
        local_5a = "PlaylistIsValid(inPlaylist)";
        __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",local_68,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002e685c;
    }
  }
  if (*param_4 == 0) {
    uVar20 = FUN_1001cc310();
    cVar19 = _os_log_type_enabled(uVar20,0x10);
    if (cVar19 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_8_ = "Assertion failure";
      local_5c = 0x822;
      local_5a = "inArtworkData.IsValid()";
      __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002e685c;
  }
  *(undefined8 *)(param_1 + 0x138) = param_5;
  if ((*(long *)(param_1 + 2) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 2) + 0x2cf8), plVar1 == (long *)0x0))
  goto LAB_1002e685c;
  lVar22 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  uVar2 = *(undefined4 *)((long)param_2 + 0x14);
  lVar12 = param_2[3];
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar13 = param_2[4];
  uVar4 = *(undefined4 *)((long)param_2 + 0x24);
  lVar14 = param_2[5];
  uVar5 = *(undefined4 *)((long)param_2 + 0x2c);
  lVar15 = param_2[6];
  uVar6 = *(undefined4 *)((long)param_2 + 0x34);
  lVar16 = param_2[7];
  uVar7 = *(undefined4 *)((long)param_2 + 0x3c);
  lVar17 = param_2[8];
  uVar8 = *(undefined4 *)((long)param_2 + 0x44);
  lVar18 = param_2[9];
  uVar9 = *(undefined4 *)((long)param_2 + 0x4c);
  FUN_1001a7a9e(local_88,param_4);
  local_48 = (long *)0x0;
  plVar21 = operator_new(0x68);
  *plVar21 = (long)&PTR_FUN_100853048;
  plVar21[1] = lVar22;
  plVar21[2] = lVar10;
  *(int *)(plVar21 + 3) = (int)lVar11;
  *(undefined4 *)((long)plVar21 + 0x1c) = uVar2;
  *(int *)(plVar21 + 4) = (int)lVar12;
  *(undefined4 *)((long)plVar21 + 0x24) = uVar3;
  *(int *)(plVar21 + 5) = (int)lVar13;
  *(undefined4 *)((long)plVar21 + 0x2c) = uVar4;
  *(int *)(plVar21 + 6) = (int)lVar14;
  *(undefined4 *)((long)plVar21 + 0x34) = uVar5;
  *(int *)(plVar21 + 7) = (int)lVar15;
  *(undefined4 *)((long)plVar21 + 0x3c) = uVar6;
  *(int *)(plVar21 + 8) = (int)lVar16;
  *(undefined4 *)((long)plVar21 + 0x44) = uVar7;
  *(int *)(plVar21 + 9) = (int)lVar17;
  *(undefined4 *)((long)plVar21 + 0x4c) = uVar8;
  *(int *)(plVar21 + 10) = (int)lVar18;
  *(undefined4 *)((long)plVar21 + 0x54) = uVar9;
  FUN_1001a7a9e(plVar21 + 0xb,local_88);
  local_48 = plVar21;
  (**(code **)(*plVar1 + 0x38))(plVar1,param_4,local_70,local_68);
  if (local_48 == (long *)local_68) {
    lVar22 = 0x20;
LAB_1002e684e:
    (**(code **)(*local_48 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1002e684e;
  }
  FUN_1001a85d4(local_88);
LAB_1002e685c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

