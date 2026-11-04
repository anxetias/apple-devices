// name: FUN_1005463ad
// address: 1005463ad

bool FUN_1005463ad(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0172);
  FUN_1001b7eb0(local_268,uVar2);
  FUN_1001b7b04(local_248,"^FILENAME");
  FUN_1004f0e83(param_1,local_228);
  FUN_1001b8dfc(local_238,local_228);
  FUN_1001ba564(local_258,local_268,local_248,local_238);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_248);
  FUN_1001c334a(local_228,0x10cf0032);
  FUN_1001c334a(local_248,0x5db30004);
  FUN_1004fda52(local_238,*(undefined4 *)(param_1 + 0x28));
  sVar1 = FUN_10044f9f1(local_258,local_228,local_248,local_238,0);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_228);
  FUN_1001b7a50(local_258);
  FUN_1001b7a50(local_268);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return sVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

