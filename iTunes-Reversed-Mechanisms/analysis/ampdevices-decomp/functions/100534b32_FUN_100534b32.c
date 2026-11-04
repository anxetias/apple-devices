// name: FUN_100534b32
// address: 100534b32

undefined1 FUN_100534b32(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  iVar2 = FUN_100193150(0xffff8003,0x73646174,0,local_440);
  if (iVar2 == 0) {
    uVar1 = FUN_100183bb2(local_440,param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

