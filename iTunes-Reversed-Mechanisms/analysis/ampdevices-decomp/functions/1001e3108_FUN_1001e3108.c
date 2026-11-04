// name: FUN_1001e3108
// address: 1001e3108

void FUN_1001e3108(byte *param_1,undefined4 *param_2)

{
  ulong uVar1;
  char local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (ulong)*param_1;
  if (uVar1 != 0) {
    _memcpy(local_128,param_1 + 1,uVar1);
  }
  local_128[uVar1] = '\0';
  _sscanf(local_128,"%d");
  *param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

