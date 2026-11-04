// name: FUN_100139b94
// address: 100139b94

void FUN_100139b94(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10013eaf0();
  *param_1 = &PTR_FUN_100839a78;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_1001b7a88(param_1 + 0x37,param_3);
  local_68 = &PTR_FUN_100839d78;
  local_60 = param_1;
  local_48 = &local_68;
  FUN_100144084(param_1,&local_68);
  if (local_48 == &local_68) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_48 == (undefined ***)0x0) goto LAB_100139c30;
  }
  (**(code **)((long)*local_48 + lVar1))();
LAB_100139c30:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

