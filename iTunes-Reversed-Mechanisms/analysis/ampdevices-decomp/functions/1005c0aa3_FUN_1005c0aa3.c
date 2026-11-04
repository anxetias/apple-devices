// name: FUN_1005c0aa3
// address: 1005c0aa3

undefined8 FUN_1005c0aa3(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "storeSettings != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    _memcpy(&local_448,param_2,0x410);
    uVar2 = FUN_1005b9808(param_1,0x19,&local_448,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

