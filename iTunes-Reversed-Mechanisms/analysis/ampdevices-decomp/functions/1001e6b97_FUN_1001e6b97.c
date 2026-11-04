// name: FUN_1001e6b97
// address: 1001e6b97

ulong FUN_1001e6b97(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  double local_130;
  undefined1 local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e5b77(param_1,local_128,0x100);
  iVar1 = FUN_1001a4c5b(local_128,&local_130);
  uVar2 = (long)(local_130 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) &
          0xffffffff;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

