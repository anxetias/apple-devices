// name: FUN_10024848c
// address: 10024848c

void FUN_10024848c(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_1,100);
  *param_1 = 0x64707266;
  *(undefined1 *)(param_1 + 5) = 1;
  if ((byte)(param_2 - 1U) < 4) {
    uVar2 = *(undefined4 *)(&DAT_10071baa0 + (ulong)(byte)(param_2 - 1U) * 4);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "false";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x204;
  }
  param_1[1] = 0x10001;
  param_1[4] = uVar2;
  *(undefined8 *)(param_1 + 2) = 0xff000000;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

