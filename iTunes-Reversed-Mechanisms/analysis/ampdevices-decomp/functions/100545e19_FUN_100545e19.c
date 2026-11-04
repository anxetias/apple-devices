// name: FUN_100545e19
// address: 100545e19

bool FUN_100545e19(long param_1)

{
  short sVar1;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [32];
  undefined1 local_360 [18];
  undefined4 local_34e;
  undefined1 local_300 [184];
  undefined1 local_248;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_3e8);
  FUN_1001c334a(local_408,0x10cf005e);
  FUN_1004f0e83(param_1,local_228);
  FUN_1001b8dfc(local_3f8,local_228);
  FUN_1001bbec4(local_418,local_408,local_3f8);
  FUN_1001b80b2(local_3c0,local_418);
  FUN_1001b7a50(local_418);
  FUN_1001b7a50(local_3f8);
  FUN_1001b7a50(local_408);
  FUN_1001c334a(local_228,0x10cf005f);
  FUN_1001b80b2(local_3b0,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x10cf0041);
  FUN_1001b80b2(local_3a0,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x10cf0042);
  FUN_1001b80b2(local_390,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x5db30019);
  FUN_1001b80b2(local_380,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x5db30014);
  FUN_1001b80b2(local_360,local_228);
  FUN_1001b7a50(local_228);
  local_34e = 0x20001;
  FUN_1001c334a(local_228,0x83000a);
  FUN_1001b80b2(local_300,local_228);
  FUN_1001b7a50(local_228);
  FUN_1004fda52(local_228,*(undefined4 *)(param_1 + 0x28));
  FUN_1001b80b2(local_3e0,local_228);
  FUN_1001b7a50(local_228);
  sVar1 = FUN_10044f1a0(local_3e8);
  *(undefined1 *)(param_1 + 0x14e04) = local_248;
  FUN_10020dfaa();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return sVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

