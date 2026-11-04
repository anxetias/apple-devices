// name: FUN_100321441
// address: 100321441

int FUN_100321441(byte param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long local_128 [4];
  long *local_108;
  long local_f8 [4];
  long *local_d8;
  long local_c8 [4];
  long *local_a8;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 & 1) != 0) {
    FUN_10028593a(local_68,param_2);
    iVar1 = FUN_100321679(local_48);
    if (local_48 == local_68) {
      lVar2 = 0x20;
LAB_1003214a2:
      (**(code **)(*local_48 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_1003214a2;
    }
    if (iVar1 != 0) goto LAB_1003215ec;
  }
  if ((param_1 & 2) != 0) {
    FUN_10028593a(local_98,param_2);
    iVar1 = FUN_10032169f(local_78);
    if (local_78 == local_98) {
      lVar2 = 0x20;
LAB_1003214ef:
      (**(code **)(*local_78 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_78 != (long *)0x0) goto LAB_1003214ef;
    }
    if (iVar1 != 0) goto LAB_1003215ec;
  }
  if ((param_1 & 4) != 0) {
    FUN_10028593a(local_c8,param_2);
    iVar1 = FUN_1003216c5(local_a8);
    if (local_a8 == local_c8) {
      lVar2 = 0x20;
LAB_100321542:
      (**(code **)(*local_a8 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_a8 != (long *)0x0) goto LAB_100321542;
    }
    if (iVar1 != 0) goto LAB_1003215ec;
  }
  if ((param_1 & 8) != 0) {
    FUN_10028593a(local_f8,param_2);
    iVar1 = FUN_1003216eb(local_d8);
    if (local_d8 == local_f8) {
      lVar2 = 0x20;
LAB_100321595:
      (**(code **)(*local_d8 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_d8 != (long *)0x0) goto LAB_100321595;
    }
    if (iVar1 != 0) goto LAB_1003215ec;
  }
  iVar1 = 0;
  if ((char)param_1 < '\0') {
    FUN_10028593a(local_128,param_2);
    iVar1 = FUN_100321711(local_108);
    if (local_108 == local_128) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_108 == (long *)0x0) goto LAB_1003215ec;
    }
    (**(code **)(*local_108 + lVar2))();
  }
LAB_1003215ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

