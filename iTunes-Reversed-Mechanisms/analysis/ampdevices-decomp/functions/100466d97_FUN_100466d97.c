// name: FUN_100466d97
// address: 100466d97

undefined8 FUN_100466d97(long param_1,undefined8 param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ushort local_228 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001e21dd(param_2);
  uVar3 = 0xffffffce;
  if (param_1 != 0 && iVar2 != 0) {
    piVar4 = (int *)(param_1 + 4);
    do {
      piVar1 = piVar4 + -1;
      if ((*piVar1 == 0) && (*piVar4 == 0)) goto LAB_100466e25;
      piVar4 = piVar4 + 3;
    } while (*piVar1 != iVar2);
    FUN_1001e222d(param_2,local_228);
    FUN_1001e1c39(param_2,param_3);
    *param_3 = *param_3 + ~local_228[0];
    uVar3 = 0xffffffce;
    if (*param_3 != 0) {
      uVar3 = 0;
    }
  }
LAB_100466e25:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

