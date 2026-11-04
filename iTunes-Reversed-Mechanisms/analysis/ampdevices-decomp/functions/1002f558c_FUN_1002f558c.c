// name: FUN_1002f558c
// address: 1002f558c

int FUN_1002f558c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "cfstrDBPath != nullptr";
LAB_1002f56ba:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        iVar2 = (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0xb8));
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "libErr == eVVViTSLSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = iVar2 + 0x5dc;
          goto LAB_1002f5677;
        }
      }
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      iVar2 = 0;
      goto LAB_1002f5677;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "dictSupportedLanguages != nullptr";
      goto LAB_1002f56ba;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f5677:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

