// name: FUN_100449b88
// address: 100449b88

int FUN_100449b88(long *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 2) == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inParams->asset != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0x636d6578;
    *(undefined4 *)((long)param_1 + 0xc) = *param_2;
    lVar3 = FUN_1001705fc(*(undefined8 *)(param_2 + 6));
    param_1[2] = lVar3;
    lVar3 = FUN_1001705fc(*(undefined8 *)(param_2 + 2));
    param_1[3] = lVar3;
    lVar3 = FUN_1001705fc(*(undefined8 *)(param_2 + 4));
    param_1[4] = lVar3;
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

