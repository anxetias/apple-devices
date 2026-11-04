// name: FUN_10015495a
// address: 10015495a

void FUN_10015495a(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10013eaf0();
  *param_1 = &PTR_FUN_10083b8d8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  FUN_1001b7a44(param_1 + 0x36);
  FUN_1001b7a44(param_1 + 0x38);
  FUN_10032f0f2(param_1 + 0x3a);
  FUN_10032f0f2(param_1 + 0x3c);
  FUN_10032f0f2(param_1 + 0x3e);
  FUN_10032f0f2(param_1 + 0x40);
  param_1[0x42] = 0;
  uVar1 = FUN_10041520b();
  param_1[0x43] = uVar1;
  *(undefined1 *)(param_1 + 0x44) = 0;
  local_68 = &PTR_FUN_10083bef0;
  local_60 = param_1;
  local_48 = &local_68;
  FUN_10014415a(param_1,&local_68);
  if (local_48 == &local_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_48 == (undefined ***)0x0) goto LAB_100154a68;
  }
  (**(code **)((long)*local_48 + lVar2))();
LAB_100154a68:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

