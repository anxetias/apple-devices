// name: FUN_1003b79b7
// address: 1003b79b7

bool FUN_1003b79b7(void *param_1)

{
  char cVar1;
  undefined1 local_900 [24];
  undefined4 local_8e8;
  undefined1 local_4ac;
  undefined1 local_4a8 [1160];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_900,0x8e0);
  local_8e8 = 0x46494c45;
  local_4ac = 1;
  _memcpy(local_4a8,param_1,0x460);
  cVar1 = FUN_100240d22(local_900,0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return cVar1 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

