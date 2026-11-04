// name: FUN_1005027ed
// address: 1005027ed

undefined8 FUN_1005027ed(undefined8 param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "deviceInfo != nullptr";
LAB_1005028cf:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar2 = FUN_1004de449();
    if (lVar2 != 0) {
      _memcpy(param_2,(void *)(lVar2 + 0x50),0x6660);
      uVar3 = 0;
      goto LAB_100502894;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "handlerData != nullptr";
      goto LAB_1005028cf;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100502894:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

