// name: FUN_1002f4e70
// address: 1002f4e70

undefined8 FUN_1002f4e70(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1002f78b7();
  uVar2 = FUN_1002f79b8(param_1);
  if (uVar2 < uVar1) {
    iVar3 = FUN_1003870d4(param_1,2,local_440);
    if (iVar3 == 0) {
      uVar4 = FUN_1001691ed(DAT_1008c4d98,local_440,0);
      goto LAB_1002f4ebb;
    }
  }
  uVar4 = 0;
LAB_1002f4ebb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

