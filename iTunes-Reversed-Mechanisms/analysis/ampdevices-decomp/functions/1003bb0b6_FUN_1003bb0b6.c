// name: FUN_1003bb0b6
// address: 1003bb0b6

int FUN_1003bb0b6(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_458;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001888ba(param_2,param_3,local_450,0);
  if (iVar2 == 0) {
    iVar2 = FUN_100180f0c(local_450,DAT_1008c4d90,&local_458,0);
    if (iVar2 == 0) {
      FUN_1003bac16(param_1,local_458);
      FUN_10017060f(local_458);
      iVar2 = 0;
      goto LAB_1003bb13b;
    }
  }
  lVar1 = *param_1;
  lVar3 = param_1[1];
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x10;
    FUN_1001b7a50(lVar3);
  }
  param_1[1] = lVar1;
LAB_1003bb13b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

