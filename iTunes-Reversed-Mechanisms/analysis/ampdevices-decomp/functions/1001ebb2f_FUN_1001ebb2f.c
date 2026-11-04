// name: FUN_1001ebb2f
// address: 1001ebb2f

bool FUN_1001ebb2f(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_38 [4];
  uint local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  _fegetenv(local_38);
  uVar1 = local_34;
  uVar2 = 0x8040;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  local_34 = uVar2 | local_34 & 0xffff7fbf;
  _fesetenv(local_38);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (uVar1 & 0x8040) != 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

