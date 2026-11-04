// name: FUN_1005a3d14
// address: 1005a3d14

void FUN_1005a3d14(ulong param_1,undefined8 param_2)

{
  ulong local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
             (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
             (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28
             | param_1 << 0x38;
  FUN_1001e0a72(&local_40,8,local_38,0x11,0);
  FUN_1001e04f5(local_38,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

