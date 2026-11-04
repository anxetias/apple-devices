// name: FUN_10039c40c
// address: 10039c40c

undefined8 FUN_10039c40c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_70;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_1 + 0x50);
  FUN_10028593a(local_68);
  param_1 = param_1 + 0x48;
  if (lVar4 != param_1) {
    do {
      local_70 = *(undefined8 *)(lVar4 + 0x10);
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      cVar1 = (**(code **)(*local_48 + 0x30))(local_48,&local_70);
    } while ((cVar1 == '\0') && (lVar4 = *(long *)(lVar4 + 8), lVar4 != param_1));
  }
  if (local_48 == local_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_10039c492;
  }
  (**(code **)(*local_48 + lVar2))();
LAB_10039c492:
  if (lVar4 == param_1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

