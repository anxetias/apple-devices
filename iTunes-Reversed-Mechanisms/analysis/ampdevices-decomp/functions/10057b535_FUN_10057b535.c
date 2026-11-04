// name: FUN_10057b535
// address: 10057b535

void FUN_10057b535(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  long param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_548 [256];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  undefined1 local_248 [512];
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "ratingStr != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10057b268(param_1,&local_448);
    if (param_2 != (undefined4 *)0x0 || param_3 != (undefined4 *)0x0) {
      FUN_1001e4d4c(&local_448,local_548,0xff);
      uVar2 = FUN_10057b687(local_548,param_3);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uVar2;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_48;
    }
    if (param_5 != 0) {
      FUN_1001e1c39(local_248,param_5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

