// name: FUN_100414ed6
// address: 100414ed6

void FUN_100414ed6(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_a0 [8];
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_98,param_1);
  local_48 = (long *)0x0;
  plVar2 = operator_new(0x40);
  *plVar2 = (long)&PTR_FUN_100857d90;
  FUN_100285986(plVar2 + 2,local_98);
  local_48 = plVar2;
  iVar1 = FUN_1001ee1da(local_68,0xffffffff,0,0,"");
  if (local_48 == local_68) {
    lVar3 = 0x20;
LAB_100414f7b:
    (**(code **)(*local_48 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100414f7b;
  }
  if (local_78 == local_98) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_100414fa1;
  }
  (**(code **)(*local_78 + lVar3))();
LAB_100414fa1:
  if ((iVar1 != 0) && (iVar1 = FUN_10041503c(0,local_a0), iVar1 == 0)) {
    FUN_1004152d5(local_a0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

