// name: FUN_10044fb85
// address: 10044fb85

int FUN_10044fb85(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined2 *param_6,long param_7)

{
  long *plVar1;
  short sVar2;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [66];
  undefined4 local_15e;
  undefined2 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined2 local_120;
  undefined1 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1f8);
  FUN_1001b8172(local_1d0,param_1);
  FUN_1001b8172(local_1c0,param_2);
  FUN_1001b8172(local_1b0,param_3);
  FUN_1001b8172(local_1a0,param_4);
  local_15e = 0x20001;
  FUN_1001b8172(local_1f0,param_5);
  local_40 = 1;
  if (param_6 != (undefined2 *)0x0) {
    local_148 = *param_6;
    FUN_1001b8172(local_140,param_6 + 4);
    FUN_1001b8172(local_130,param_6 + 0xc);
    local_120 = param_6[0x14];
  }
  plVar1 = *(long **)(param_7 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_1f8);
  }
  sVar2 = FUN_10044f1a0(local_1f8);
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

