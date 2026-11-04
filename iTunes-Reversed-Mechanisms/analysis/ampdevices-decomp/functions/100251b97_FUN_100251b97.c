// name: FUN_100251b97
// address: 100251b97

ulong FUN_100251b97(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [50];
  undefined4 local_14e;
  undefined1 local_100 [216];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1e8);
  FUN_1001b8172(local_1c0,param_2);
  FUN_1001b8172(local_1e0,param_1);
  FUN_1001b8172(local_1a0,param_3);
  FUN_1001c334a(local_1f8,0x5db30004);
  FUN_1001b80b2(local_190,local_1f8);
  FUN_1001b7a50(local_1f8);
  FUN_1001c334a(local_1f8,0x5db30019);
  FUN_1001b80b2(local_180,local_1f8);
  FUN_1001b7a50(local_1f8);
  local_14e = 0x20001;
  FUN_1001c334a(local_1f8,0x830008);
  FUN_1001b80b2(local_100,local_1f8);
  FUN_1001b7a50(local_1f8);
  sVar1 = FUN_10044f1a0(local_1e8);
  FUN_10020dfaa(local_1e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return CONCAT71((int7)((ulong)param_3 >> 8),sVar1 == 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

