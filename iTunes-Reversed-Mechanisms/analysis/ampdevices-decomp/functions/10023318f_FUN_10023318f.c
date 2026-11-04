// name: FUN_10023318f
// address: 10023318f

void FUN_10023318f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
  if (cVar2 != '\0') {
    local_38 = 0x8220102;
    local_34 = param_2;
    __os_log_impl(0x100000000,uVar1,2,"progress> adjusting from %{public}s",&local_38,0xc);
  }
  FUN_10017848a(&local_38,FUN_1002333cd,param_1);
  FUN_100233265(param_1,&local_38,FUN_1002333cd);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

