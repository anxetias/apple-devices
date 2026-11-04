// name: FUN_1002f5734
// address: 1002f5734

int FUN_1002f5734(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = *(int *)(param_1 + 0xd0);
  if (iVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mSessionCount != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar3 = 0;
    FUN_1001782e9(0,0);
    iVar4 = *(int *)(param_1 + 0xd0);
    if (iVar4 != 0) goto LAB_1002f5796;
  }
  else {
LAB_1002f5796:
    iVar3 = iVar4 + -1;
    *(int *)(param_1 + 0xd0) = iVar3;
  }
  if (param_2 != 0 && *(code **)(param_1 + 0x88) != (code *)0x0) {
    iVar4 = (**(code **)(param_1 + 0x88))(param_2);
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "libErr == eVVViTSLSuccess";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = iVar4 + 0x5dc;
      goto LAB_1002f58cf;
    }
    iVar3 = *(int *)(param_1 + 0xd0);
  }
  iVar4 = 0;
  if (iVar3 == 0) {
    lVar1 = param_1 + 0xd8;
    cVar2 = FUN_10017cbd0(lVar1);
    if (cVar2 != '\0') {
      iVar3 = FUN_1002f5a24(param_1,0x3d,lVar1);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      FUN_1001c62d9(lVar1,0x420);
      *(undefined4 *)(param_1 + 0x4f8) = 0;
    }
    lVar1 = param_1 + 0x500;
    cVar2 = FUN_10017cbd0(lVar1);
    if (cVar2 != '\0') {
      iVar3 = FUN_1002f5a24(param_1,0x3c,lVar1);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      FUN_1001c62d9(lVar1,0x420);
      *(undefined4 *)(param_1 + 0x920) = 0;
    }
  }
LAB_1002f58cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

