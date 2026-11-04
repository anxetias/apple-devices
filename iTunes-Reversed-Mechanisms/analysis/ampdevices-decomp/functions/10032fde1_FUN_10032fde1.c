// name: FUN_10032fde1
// address: 10032fde1

void FUN_10032fde1(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "filePath[0] != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_1[1] == 0x2f) {
    uVar2 = *param_1 - 1;
    *param_1 = uVar2;
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_1001c631b(param_1 + 2,param_1 + 1,(uint)uVar2 * 2);
      return;
    }
    goto LAB_10032febc;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_10032febc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

