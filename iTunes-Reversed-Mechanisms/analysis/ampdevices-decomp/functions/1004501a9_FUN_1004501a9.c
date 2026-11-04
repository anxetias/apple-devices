// name: FUN_1004501a9
// address: 1004501a9

int FUN_1004501a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 local_210 [16];
  long local_200;
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [50];
  undefined4 local_15e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_200 = param_6;
  FUN_10044eef2(local_1f8);
  local_1f4 = 8;
  FUN_1001b8172(local_1d0,param_1);
  FUN_1001b8172(local_1c0,param_2);
  FUN_1001b8172(local_1b0,param_3);
  FUN_1001b8172(local_1a0,param_4);
  FUN_1001c334a(local_210,0x5db30004);
  FUN_1001b80b2(local_190,local_210);
  FUN_1001b7a50(local_210);
  local_15e = 0x30001;
  FUN_1001b8172(local_1f0,param_5);
  plVar1 = *(long **)(local_200 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_1f8);
  }
  sVar2 = FUN_10044f1a0(local_1f8);
  sVar3 = 3;
  if (sVar2 != 2) {
    sVar3 = sVar2;
  }
  sVar4 = 2;
  if (sVar2 != 3) {
    sVar4 = sVar3;
  }
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

