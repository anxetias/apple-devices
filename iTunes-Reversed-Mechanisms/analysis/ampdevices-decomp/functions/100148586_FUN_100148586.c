// name: FUN_100148586
// address: 100148586

void FUN_100148586(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_99;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_98,param_3);
  FUN_10014869e(local_68,local_98,&local_99);
  FUN_1001a7c48(param_1,param_2,local_68);
  if (local_48 == local_68) {
    lVar1 = 0x20;
LAB_100148601:
    (**(code **)(*local_48 + lVar1))();
  }
  else {
    lVar1 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100148601;
  }
  if (local_78 == local_98) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_100148627;
  }
  (**(code **)(*local_78 + lVar1))();
LAB_100148627:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

