// name: FUN_1002d1806
// address: 1002d1806

void FUN_1002d1806(undefined8 param_1,char param_2,ulong param_3)

{
  uint uVar1;
  double dVar2;
  undefined2 local_228;
  undefined1 local_226 [518];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_228 = 0;
  if ((param_3 & 0x10) == 0) {
    if (param_2 != '\0') {
      FUN_1001e1b6d((long)param_2,&local_228);
    }
  }
  else if (param_2 == '\0') {
    if ((param_3 & 2) != 0) {
      FUN_1001c34b7(0x23280011,&local_228);
    }
  }
  else {
    dVar2 = (double)FUN_100320bbf((int)param_2,0);
    uVar1 = (int)dVar2 & 0xff;
    if ((char)(int)dVar2 != '\0') {
      _memset_pattern16(local_226,&DAT_100740cf0,(ulong)(uVar1 * 2));
    }
    local_228 = (undefined2)uVar1;
  }
  FUN_1001b8dfc(param_1,&local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

