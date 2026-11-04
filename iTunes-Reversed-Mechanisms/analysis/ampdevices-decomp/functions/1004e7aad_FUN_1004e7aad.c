// name: FUN_1004e7aad
// address: 1004e7aad

void FUN_1004e7aad(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_1 + 0x6ace) != param_2) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_44 = "";
        if (param_2 == '\0') {
          local_44 = "not ";
        }
        local_48 = 0x8220102;
        __os_log_impl(0x100000000,uVar2,1,"sync> device is %{public}ssynchronized",&local_48,0xc);
      }
    }
    *(char *)(param_1 + 0x6ace) = param_2;
    if ((param_2 != '\0') && (*(int *)(param_1 + 0x152dc) == 0)) {
      *(undefined1 *)(param_1 + 0x14ced) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

