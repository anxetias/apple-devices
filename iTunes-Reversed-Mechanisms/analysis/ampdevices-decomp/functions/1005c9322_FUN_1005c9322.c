// name: FUN_1005c9322
// address: 1005c9322

undefined8 FUN_1005c9322(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    uVar3 = FUN_100416f20(*(undefined4 *)(lVar2 + 0x66b0),0x10cc0278);
    FUN_1001b7eb0(&local_38,uVar3);
    FUN_1001bbec4(param_1,&local_38,param_3);
    FUN_1001b7a50(&local_38);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

