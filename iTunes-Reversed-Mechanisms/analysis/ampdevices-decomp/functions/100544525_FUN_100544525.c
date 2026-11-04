// name: FUN_100544525
// address: 100544525

bool FUN_100544525(long param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [20];
  undefined4 local_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [48];
  undefined1 local_1b0 [18];
  undefined2 local_19e;
  undefined1 local_98;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(undefined4 *)(param_1 + 0x66b0);
  local_24c = param_2;
  FUN_1004f0e83(param_1,local_238);
  FUN_1001b8dfc(local_270,local_238);
  cVar1 = *(char *)(param_1 + 0x35c);
  FUN_1001b7a44(local_260);
  puVar5 = local_280;
  FUN_1001b7a44(puVar5);
  if (cVar1 == '\0') {
    uVar4 = FUN_100416f20(uVar2,((char)local_24c == '\0') + 0x10cc008e);
    FUN_1001b81f2(local_260,uVar4);
    uVar4 = FUN_100416f20(uVar2,0x10cc0090);
  }
  else {
    uVar4 = FUN_100416f20(uVar2,0x10cc008e);
    puVar5 = local_260;
  }
  FUN_1001b81f2(puVar5,uVar4);
  FUN_10044eef2(local_238);
  FUN_1001bbec4(local_248,local_260,local_270);
  FUN_1001b80b2(local_210,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001b8172(local_200,local_280);
  local_234 = 8;
  FUN_1001c334a(local_248,0x10cf0006);
  FUN_1001b80b2(local_1f0,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001c334a(local_248,0x10cf0007);
  FUN_1001b80b2(local_1e0,local_248);
  FUN_1001b7a50(local_248);
  local_19e = 1;
  if (param_3 != (undefined1 *)0x0) {
    FUN_1001c334a(local_248,0x5db30013);
    FUN_1001b80b2(local_1b0,local_248);
    FUN_1001b7a50(local_248);
  }
  sVar3 = FUN_10044f1a0(local_238);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_98;
  }
  FUN_10020dfaa(local_238);
  FUN_1001b7a50(local_280);
  FUN_1001b7a50(local_260);
  FUN_1001b7a50(local_270);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return sVar3 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

