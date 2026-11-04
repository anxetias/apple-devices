// name: FUN_1005b899d
// address: 1005b899d

void FUN_1005b899d(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = 0xe8000008;
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "value != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    lVar2 = _AMDeviceCopyValueWithError(param_1,&cf_com_apple_Accessibility,param_2,&local_3c);
    if (lVar2 != 0) {
      cVar1 = FUN_100165191(lVar2,param_3);
      if (cVar1 != '\0') {
        local_3c = 0;
      }
      FUN_10017060f(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

