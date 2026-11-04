// name: FUN_1003a0b06
// address: 1003a0b06

undefined4 FUN_1003a0b06(undefined8 param_1,undefined1 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long local_98 [4];
  long *local_78;
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_98,param_4);
  plVar2 = operator_new(0x50);
  *plVar2 = (long)&PTR_FUN_100856840;
  plVar2[2] = param_3;
  FUN_1003a5046(plVar2 + 4,local_98);
  local_48 = plVar2;
  uVar1 = FUN_1003a0178(param_1,param_2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  if (local_78 == local_98) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_1003a0bb6;
  }
  (**(code **)(*local_78 + lVar3))();
LAB_1003a0bb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

