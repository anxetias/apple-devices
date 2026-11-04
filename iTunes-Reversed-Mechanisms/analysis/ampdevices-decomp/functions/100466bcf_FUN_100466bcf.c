// name: FUN_100466bcf
// address: 100466bcf

void FUN_100466bcf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100466c53(param_2,local_138);
  uVar1 = FUN_1001e20df(local_138);
  FUN_100466aac(param_1,0,uVar1,param_3,param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

