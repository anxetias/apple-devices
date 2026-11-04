// name: FUN_1001ef022
// address: 1001ef022

void FUN_1001ef022(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[4];
    plVar2 = (long *)param_2[4];
    if (plVar1 == param_1) {
      if (plVar2 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_48[0] + 0x18))(local_48,param_2);
        (**(code **)(local_48[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else if (plVar2 == param_2) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      (**(code **)(*(long *)param_2[4] + 0x20))();
      param_2[4] = param_1[4];
      param_1[4] = (long)param_1;
    }
    else {
      param_1[4] = (long)plVar2;
      param_2[4] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

