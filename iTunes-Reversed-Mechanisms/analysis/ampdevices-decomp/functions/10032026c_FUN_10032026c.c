// name: FUN_10032026c
// address: 10032026c

void FUN_10032026c(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  }
  uVar1 = FUN_1002b458b(param_1);
  iVar2 = FUN_100534dbd(uVar3,uVar1,local_440);
  if (iVar2 == 0) {
    FUN_100322e6b(param_1,local_440);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

