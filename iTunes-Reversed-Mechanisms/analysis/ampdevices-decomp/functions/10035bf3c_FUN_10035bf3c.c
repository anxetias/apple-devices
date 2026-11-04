// name: FUN_10035bf3c
// address: 10035bf3c

undefined4 FUN_10035bf3c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_438 [1056];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_10035c814(*(undefined8 *)(param_1 + 0x20),param_2,local_438,0);
  if (iVar1 == 0) {
    iVar1 = FUN_100182d4d(local_438);
  }
  uVar2 = 0;
  if (((iVar1 != -0x2b) && (uVar2 = 0, iVar1 != 0)) && (uVar2 = 10, iVar1 == -0x78)) {
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

