// name: FUN_10041dd48
// address: 10041dd48

long * FUN_10041dd48(long *param_1)

{
  long *plVar1;
  long lVar2;
  long local_78 [4];
  long *local_58;
  long local_48 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_78);
  if (local_78 != param_1) {
    plVar1 = (long *)param_1[4];
    if (local_58 == local_78) {
      if (plVar1 == param_1) {
        (**(code **)(*local_58 + 0x18))(local_58,local_48);
        (**(code **)(*local_58 + 0x20))();
        local_58 = (long *)0x0;
        (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],local_78);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        local_58 = local_78;
        (**(code **)(local_48[0] + 0x18))(local_48,param_1);
        (**(code **)(local_48[0] + 0x20))();
      }
      else {
        (**(code **)(*local_58 + 0x18))(local_58,param_1);
        (**(code **)(*local_58 + 0x20))();
        local_58 = (long *)param_1[4];
      }
      param_1[4] = (long)param_1;
    }
    else if (plVar1 == param_1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_78);
      (**(code **)(*(long *)param_1[4] + 0x20))();
      param_1[4] = (long)local_58;
      local_58 = local_78;
    }
    else {
      param_1[4] = (long)local_58;
      local_58 = plVar1;
    }
  }
  if (local_58 == local_78) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_58 == (long *)0x0) goto LAB_10041de65;
  }
  (**(code **)(*local_58 + lVar2))();
LAB_10041de65:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

