// name: FUN_100544095
// address: 100544095

bool FUN_100544095(long param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  undefined1 local_220 [32];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [66];
  undefined4 local_18e;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c784d == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x66b0);
    FUN_1004fda52(local_258,*(undefined4 *)(param_1 + 0x28));
    FUN_1004f0e83(param_1,local_228);
    FUN_1001b8dfc(local_248,local_228);
    FUN_10044eef2(local_228);
    uVar3 = FUN_100416f20(uVar1,0x10cc01c1);
    FUN_1001b7eb0(local_268,uVar3);
    FUN_1001bbec4(local_238,local_268,local_248);
    FUN_1001b80b2(local_200,local_238);
    FUN_1001b7a50(local_238);
    FUN_1001b7a50(local_268);
    uVar3 = FUN_100416f20(uVar1,0x10cc01c2);
    FUN_1001b81f2(local_1f0,uVar3);
    FUN_1001c334a(local_238,0x10cf003f);
    FUN_1001b80b2(local_1e0,local_238);
    FUN_1001b7a50(local_238);
    FUN_1001c334a(local_238,0x10cf0040);
    FUN_1001b80b2(local_1d0,local_238);
    FUN_1001b7a50(local_238);
    local_18e = 0x20001;
    FUN_1001b8172(local_220,local_258);
    sVar2 = FUN_10044f1a0(local_228);
    FUN_10020dfaa(local_228);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_258);
    bVar4 = sVar2 == 1;
  }
  else {
    bVar4 = false;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

