// name: FUN_1005470a5
// address: 1005470a5

void FUN_1005470a5(long param_1)

{
  undefined8 uVar1;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0223);
  FUN_1001b7eb0(local_258,uVar1);
  FUN_1004f0e83(param_1,local_218);
  FUN_1001b8dfc(local_248,local_218);
  FUN_1001bbec4(local_218,local_258,local_248);
  uVar1 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0224);
  FUN_1001b7eb0(local_238,uVar1);
  FUN_1004fda52(local_228,*(undefined4 *)(param_1 + 0x28));
  FUN_100450ae1(local_218,local_238,local_228);
  FUN_1001b7a50(local_228);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_218);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_258);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

