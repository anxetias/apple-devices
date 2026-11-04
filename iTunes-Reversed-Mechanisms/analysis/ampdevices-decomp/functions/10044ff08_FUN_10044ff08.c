// name: FUN_10044ff08
// address: 10044ff08

int FUN_10044ff08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined2 *param_8)

{
  short sVar1;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [48];
  undefined1 local_170 [16];
  undefined1 local_160;
  undefined4 local_15e;
  undefined2 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined2 local_120;
  undefined1 local_58;
  undefined1 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1f8);
  FUN_1001b8172(local_1d0,param_1);
  FUN_1001b8172(local_1c0,param_2);
  FUN_1001b8172(local_1b0,param_3);
  FUN_1001b8172(local_1a0,param_4);
  local_15e = 0x20001;
  FUN_1001b8172(local_170,param_5);
  FUN_1001b8172(local_1f0,param_7);
  local_40 = 1;
  if (param_8 != (undefined2 *)0x0) {
    local_148 = *param_8;
    FUN_1001b8172(local_140,param_8 + 4);
    FUN_1001b8172(local_130,param_8 + 0xc);
    local_120 = param_8[0x14];
  }
  if (param_6 != (undefined1 *)0x0) {
    local_160 = *param_6;
  }
  sVar1 = FUN_10044f1a0(local_1f8);
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = local_58;
  }
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

