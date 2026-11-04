// name: FUN_10045006d
// address: 10045006d

int FUN_10045006d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [50];
  undefined4 local_15e;
  undefined1 local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1f8);
  FUN_1001b8172(local_1d0,param_1);
  FUN_1001b8172(local_1b0,param_2);
  FUN_1001b8172(local_1a0,param_3);
  FUN_1001c334a(local_208,0x5db30004);
  FUN_1001b80b2(local_190,local_208);
  FUN_1001b7a50(local_208);
  local_15e = 0x30001;
  FUN_1001b8172(local_1f0,param_4);
  local_40 = 1;
  sVar1 = FUN_10044f1a0();
  sVar2 = 3;
  if (sVar1 != 2) {
    sVar2 = sVar1;
  }
  sVar3 = 2;
  if (sVar1 != 3) {
    sVar3 = sVar2;
  }
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return (int)sVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

