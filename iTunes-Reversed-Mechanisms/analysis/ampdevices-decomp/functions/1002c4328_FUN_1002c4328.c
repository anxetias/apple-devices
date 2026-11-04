// name: FUN_1002c4328
// address: 1002c4328

void FUN_1002c4328(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100266bdc(*(undefined8 *)(param_1 + 0x66d8));
  if (cVar1 != '\0') {
    cVar1 = FUN_1002483f2(param_2);
    if (cVar1 != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_4a = "terminated";
        if (param_4 != '\0') {
          local_4a = "launched";
        }
        local_40 = *(undefined8 *)(param_1 + 0x152c8);
        local_58 = 0x8420302;
        local_4c = 0x822;
        local_42 = 0x842;
        local_54 = param_3;
        __os_log_impl(0x100000000,uVar2,1,
                      "%{public}@ was %{public}s, refreshing software info for device %{public}@",
                      &local_58,0x20);
      }
      uVar2 = FUN_1001c156e();
      FUN_1001c6987(uVar2,0x69707369,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

