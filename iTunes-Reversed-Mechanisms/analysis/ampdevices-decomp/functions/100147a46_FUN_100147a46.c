// name: FUN_100147a46
// address: 100147a46

undefined8 * FUN_100147a46(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1001a8fea(param_2);
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_88 = (undefined *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  if (lVar1 == 0) {
    local_78 = 0;
    goto LAB_100147ae4;
  }
  FUN_100149e6c(&local_88,lVar1);
  local_68 = &PTR_FUN_10083ae70;
  local_60 = &local_88;
  local_48 = &local_68;
  FUN_1001a96bc(param_2,&local_68);
  if (local_48 == &local_68) {
    lVar1 = 0x20;
LAB_100147ad6:
    (**(code **)((long)*local_48 + lVar1))();
  }
  else {
    lVar1 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_100147ad6;
  }
LAB_100147ae4:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_88;
  *(undefined4 *)((long)param_1 + 0xc) = local_88._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_80;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_80._4_4_;
  param_1[3] = local_78;
  local_68 = (undefined **)&local_88;
  local_78 = 0;
  local_88 = (undefined *)0x0;
  uStack_80 = 0;
  param_1[4] = 0;
  FUN_10014841e();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

