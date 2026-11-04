// name: FUN_100205844
// address: 100205844

void FUN_100205844(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_48;
  int local_44;
  undefined2 local_40;
  undefined8 local_3e;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 1) {
    if (param_2 < 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_3e = FUN_1005c68ce(param_2);
        local_48 = 0x4000202;
        local_40 = 0x820;
        local_44 = param_2;
        __os_log_impl(0x100000000,uVar1,0x10,"restore error %d (%s)",&local_48,0x12);
      }
      *(int *)(param_3 + 0x68c) = param_2;
    }
  }
  else {
    *(int *)(param_3 + 0x688) = param_2;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
  if (cVar2 != '\0') {
    local_48 = 0x4000100;
    local_44 = param_2;
    __os_log_impl(0x100000000,uVar1,2,"restore> %d%%",&local_48,8);
  }
  FUN_10020598b(param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

