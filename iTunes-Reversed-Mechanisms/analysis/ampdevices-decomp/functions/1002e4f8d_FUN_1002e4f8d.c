// name: FUN_1002e4f8d
// address: 1002e4f8d

void FUN_1002e4f8d(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long local_b8 [4];
  long *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x24b0;
      uStack_78 = 0x1007b;
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0xd095;
      uStack_78 = 0x1007b;
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)(param_1 + 0x168) = param_4;
    if (*(long *)(lVar3 + 0x2cf8) != 0) {
      FUN_10031bbcc(&local_88,param_1);
      plVar1 = *(long **)(lVar3 + 0x2cf8);
      local_98 = operator_new(0x58);
      *local_98 = (long)&PTR_FUN_100852f28;
      local_98[1] = CONCAT44(uStack_84,local_88);
      local_98[2] = CONCAT26(uStack_7a,CONCAT24(uStack_7c,uStack_80));
      *(undefined4 *)(local_98 + 3) = uStack_78;
      *(uint *)((long)local_98 + 0x1c) = CONCAT22(uStack_72,uStack_74);
      *(undefined4 *)(local_98 + 4) = uStack_70;
      *(undefined4 *)((long)local_98 + 0x24) = uStack_6c;
      *(undefined4 *)(local_98 + 5) = local_68;
      *(undefined4 *)((long)local_98 + 0x2c) = uStack_64;
      *(undefined4 *)(local_98 + 6) = uStack_60;
      *(undefined4 *)((long)local_98 + 0x34) = uStack_5c;
      *(undefined4 *)(local_98 + 7) = local_58;
      *(undefined4 *)((long)local_98 + 0x3c) = uStack_54;
      *(undefined4 *)(local_98 + 8) = uStack_50;
      *(undefined4 *)((long)local_98 + 0x44) = uStack_4c;
      *(undefined4 *)(local_98 + 9) = local_48;
      *(undefined4 *)((long)local_98 + 0x4c) = uStack_44;
      *(undefined4 *)(local_98 + 10) = uStack_40;
      *(undefined4 *)((long)local_98 + 0x54) = uStack_3c;
      (**(code **)(*plVar1 + 0x38))(plVar1,param_3,param_2,local_b8);
      if (local_98 == local_b8) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_98 == (long *)0x0) goto LAB_1002e50c0;
      }
      (**(code **)(*local_98 + lVar3))();
    }
  }
LAB_1002e50c0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

