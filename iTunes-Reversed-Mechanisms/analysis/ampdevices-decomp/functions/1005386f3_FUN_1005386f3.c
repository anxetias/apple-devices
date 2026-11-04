// name: FUN_1005386f3
// address: 1005386f3

undefined1 FUN_1005386f3(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1005382c5(param_1,local_38,0x10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_1001734f5(DAT_1008c4d90,local_38,0x600,
                          *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    uVar2 = FUN_10053864f(uVar3,param_2);
    FUN_10017060f(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

