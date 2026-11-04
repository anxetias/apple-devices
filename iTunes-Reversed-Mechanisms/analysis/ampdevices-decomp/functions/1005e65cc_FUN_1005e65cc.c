// name: FUN_1005e65cc
// address: 1005e65cc

ulong FUN_1005e65cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e4722(param_1,0,local_218);
  FUN_1001b8dfc(local_228,local_218);
  iVar1 = FUN_1001b96de(local_228,param_2,0x1b1);
  FUN_1001b7a50(local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return CONCAT71((int7)((ulong)param_2 >> 8),iVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

