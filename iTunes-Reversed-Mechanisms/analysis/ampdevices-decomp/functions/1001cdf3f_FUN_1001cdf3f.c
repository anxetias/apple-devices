// name: FUN_1001cdf3f
// address: 1001cdf3f

undefined8 FUN_1001cdf3f(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001cda96(param_2,param_3,param_4,local_128);
  lVar1 = FUN_1001cda26(local_128,param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10017060f(lVar1);
    lVar1 = FUN_100172473(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,local_128,0x8000100);
    if (lVar1 == 0) {
      uVar2 = 0xffffff94;
    }
    else {
      uVar2 = 0;
      FUN_1001724e6(lVar1,0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                    *(undefined8 *)(param_1 + 0x18));
      FUN_1001725a7(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                    *(undefined8 *)(param_1 + 0x18));
      FUN_10017060f(lVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

