// name: FUN_10019253c
// address: 10019253c

undefined8 FUN_10019253c(long param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint local_8a0 [2];
  long local_898;
  long local_888;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_8a0,0x878);
  iVar1 = _statfs_INODE64(param_1 + 0x19,local_8a0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if (param_2 != (long *)0x0) {
      param_2[2] = 0;
      uVar4 = (ulong)local_8a0[0];
      *param_2 = local_898 * uVar4;
      param_2[1] = local_888 * uVar4;
      *(uint *)(param_2 + 2) = local_8a0[0];
      param_2[3] = local_898;
      param_2[4] = local_888;
      if (uVar4 == 0) {
        *(undefined4 *)(param_2 + 2) = 0x1000;
      }
    }
  }
  else {
    piVar2 = ___error();
    uVar3 = FUN_1001eb020(*piVar2);
    if (param_2 != (long *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[4] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

