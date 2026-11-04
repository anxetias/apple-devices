// name: FUN_100421501
// address: 100421501

ulong FUN_100421501(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [16];
  undefined1 local_190 [136];
  undefined4 local_108;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1e8);
  uVar2 = FUN_100416f20(param_2,(param_2 == 0x4d616320 || param_2 == 0x69427269) | 0x10cc013a);
  FUN_1001b81f2(local_1c0,uVar2);
  FUN_1001b8172(local_1e0,param_1);
  FUN_1001c334a(local_1f8,0x5db3000e);
  FUN_1001b80b2(local_1a0,local_1f8);
  FUN_1001b7a50(local_1f8);
  FUN_1001c334a(local_1f8,0x5db30004);
  FUN_1001b80b2(local_190,local_1f8);
  FUN_1001b7a50(local_1f8);
  local_108 = 3;
  sVar1 = FUN_10044f1a0();
  FUN_10020dfaa(local_1e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return CONCAT71((int7)((ulong)param_1 >> 8),sVar1 == 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

