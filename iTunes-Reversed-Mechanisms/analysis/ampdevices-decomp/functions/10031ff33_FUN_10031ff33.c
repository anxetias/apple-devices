// name: FUN_10031ff33
// address: 10031ff33

int FUN_10031ff33(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_a78 [1056];
  undefined1 local_658 [520];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c34b7(0x800002,local_658);
  iVar3 = 0;
  FUN_10031fe30(param_1,local_a78,0);
  iVar2 = FUN_10018c4cc(local_a78,local_658,1,local_450);
  if (iVar2 == 0) {
    iVar2 = FUN_100322e6b(param_1,local_450);
    if (iVar2 == 0) goto LAB_10031fff4;
  }
  if (*(long *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  }
  uVar1 = FUN_1002b458b(param_1);
  iVar3 = FUN_100534dbd(uVar4,uVar1,local_450);
  if (iVar3 == 0) {
    iVar3 = FUN_100322e6b(param_1,local_450);
  }
LAB_10031fff4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

