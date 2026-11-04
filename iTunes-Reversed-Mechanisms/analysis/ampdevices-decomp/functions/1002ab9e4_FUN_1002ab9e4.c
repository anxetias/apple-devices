// name: FUN_1002ab9e4
// address: 1002ab9e4

int FUN_1002ab9e4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [32];
  undefined1 local_170 [18];
  undefined4 local_15e;
  undefined1 local_58;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1f8);
  uVar2 = FUN_100416f20(param_1,0x10cc0234);
  FUN_1001b7eb0(local_218,uVar2);
  FUN_1001bbec4(local_208,local_218,param_3);
  FUN_1001b80b2(local_1d0,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001b7a50(local_218);
  FUN_1001c334a(local_208,0x10cf0030);
  FUN_1001b80b2(local_1b0,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001c334a(local_208,0x10cf0031);
  FUN_1001b80b2(local_1a0,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001c334a(local_208,0x5db30004);
  FUN_1001b80b2(local_190,local_208);
  FUN_1001b7a50(local_208);
  local_15e = 0x30001;
  FUN_1001c334a(local_208,0x5db30014);
  FUN_1001b80b2(local_170,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001b8172(local_1f0,param_2);
  sVar1 = FUN_10044f1a0(local_1f8);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = local_58;
  }
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return (int)sVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

