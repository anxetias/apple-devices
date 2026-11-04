// name: FUN_10031ac4c
// address: 10031ac4c

undefined8 FUN_10031ac4c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  short local_366a [6949];
  long local_20;
  
  local_20 = 0x10031ac5d;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x45) != '\0') goto LAB_10031acdc;
  local_366a[1] = 0;
  local_366a[2] = 0;
  local_366a[3] = 0;
  local_366a[4] = 0;
  local_366a[5] = 0;
  local_366a[6] = 0;
  local_366a[7] = 0;
  local_366a[8] = 0;
  *(undefined8 *)((long)&local_20 + lVar3) = 0x10031ac98;
  uVar4 = FUN_1003c3248();
  if ((int)uVar4 != 0) goto LAB_10031acdc;
  if (*(short *)(param_1 + 0x58) == 0) {
    if (*(int *)(param_1 + 0x3c) == 0x53485244) {
      uVar1 = *(undefined4 *)(param_1 + 0xb0);
      uVar2 = *(undefined4 *)(param_1 + 0xb4);
      *(undefined8 *)((long)&local_20 + lVar3) = 0x10031acc7;
      FUN_1005355f6(uVar1,uVar2,local_366a);
      *(short *)(param_1 + 0x58) = local_366a[0];
      if (local_366a[0] != 0) goto LAB_10031acda;
    }
    *(undefined2 *)(param_1 + 0x58) = 1;
  }
LAB_10031acda:
  uVar4 = 0;
LAB_10031acdc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_20 + lVar3) = FUN_10031acfd;
  ___stack_chk_fail();
}

