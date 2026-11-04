// name: FUN_100242008
// address: 100242008

undefined1 FUN_100242008(undefined4 param_1,void *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 local_910 [24];
  undefined4 local_8f8;
  undefined1 local_4bc;
  undefined1 local_4b8 [1160];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_910,0x8e0);
  local_4bc = 1;
  local_8f8 = param_1;
  _memcpy(local_4b8,param_2,0x460);
  uVar1 = FUN_100240d22(local_910,0,param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

