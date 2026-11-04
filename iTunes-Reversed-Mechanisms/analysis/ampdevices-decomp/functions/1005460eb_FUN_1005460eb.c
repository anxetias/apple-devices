// name: FUN_1005460eb
// address: 1005460eb

bool FUN_1005460eb(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [40];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [66];
  undefined4 local_34e;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_3e8);
  uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc02cd);
  FUN_1001b7eb0(local_408,uVar2);
  FUN_1004f0e83(param_1,local_228);
  FUN_1001b8dfc(local_3f8,local_228);
  FUN_1001bbec4(local_418,local_408,local_3f8);
  FUN_1001b80b2(local_3c0,local_418);
  FUN_1001b7a50(local_418);
  FUN_1001b7a50(local_3f8);
  FUN_1001b7a50(local_408);
  FUN_1001c334a(local_228,0x10cf0067);
  FUN_1001b80b2(local_3b0,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x10cf0008);
  FUN_1001b80b2(local_3a0,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001c334a(local_228,0x10cf0007);
  FUN_1001b80b2(local_390,local_228);
  FUN_1001b7a50(local_228);
  local_34e = 0x20001;
  sVar1 = FUN_10044f1a0();
  FUN_10020dfaa(local_3e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return sVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

