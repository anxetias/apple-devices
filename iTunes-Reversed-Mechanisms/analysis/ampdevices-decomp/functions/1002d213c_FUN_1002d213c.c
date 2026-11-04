// name: FUN_1002d213c
// address: 1002d213c

undefined1
FUN_1002d213c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_4a0 [1128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  iVar2 = FUN_10017e137(param_1,local_4a0,0);
  if (iVar2 == 0) {
    uVar1 = FUN_1002d1f64(local_4a0,param_2,param_3,param_4,param_5,param_6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

