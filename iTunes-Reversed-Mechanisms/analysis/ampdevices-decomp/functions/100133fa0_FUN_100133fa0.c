// name: FUN_100133fa0
// address: 100133fa0

void FUN_100133fa0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10013eaf0();
  *param_1 = &PTR_FUN_1008392e0;
  FUN_10032f0f2(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x36) = param_2;
  uVar1 = FUN_10041520b();
  param_1[0x37] = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  pvVar2 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar2 != (void *)0x0) {
    FUN_10041581c(pvVar2);
  }
  param_1[0x39] = pvVar2;
  FUN_10013efce(param_1,param_3);
  local_68 = &PTR_FUN_1008394a0;
  local_60 = param_1;
  local_48 = &local_68;
  FUN_10014415a(param_1,&local_68);
  if (local_48 == &local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (undefined ***)0x0) goto LAB_100134075;
  }
  (**(code **)((long)*local_48 + lVar3))();
LAB_100134075:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

