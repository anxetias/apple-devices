// name: FUN_10017dca4
// address: 10017dca4

undefined4 FUN_10017dca4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_840 [20];
  undefined4 local_82c;
  undefined2 local_828 [1028];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_82c = 0;
  local_828[0] = 0;
  uVar1 = FUN_10017dbe8(param_1,0,local_828,0x3ff);
  FUN_1001b7e14(local_840,local_828,local_82c);
  FUN_1001b80b2(param_2,local_840);
  FUN_1001b7a50(local_840);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

