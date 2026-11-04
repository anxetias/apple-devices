// name: FUN_100248343
// address: 100248343

bool FUN_100248343(undefined8 param_1)

{
  long lVar1;
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1001ce88a(&PTR_cf_com_apple_tools_PurplePod_10083eb40,0xc,0,local_218);
  if (lVar1 != -1) {
    FUN_1001b8dfc(local_228,local_218);
    FUN_1001b80b2(param_1,local_228);
    FUN_1001b7a50(local_228);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar1 != -1;
}

