// name: FUN_100421653
// address: 100421653

int FUN_100421653(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [50];
  undefined4 local_15e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100416f20(param_2,param_3);
  FUN_1001b7eb0(local_248,uVar2);
  FUN_1001bbec4(local_238,local_248,param_6);
  uVar2 = FUN_100416f20(param_2,param_4);
  FUN_1001b7eb0(local_228,uVar2);
  FUN_1001bbec4(local_218,local_228,param_7);
  FUN_10044eef2(local_1f8);
  local_1f4 = 8;
  FUN_1001b8172(local_1f0,param_1);
  FUN_1001b8172(local_1d0,local_238);
  FUN_1001b8172(local_1c0,local_218);
  FUN_1001c334a(local_208,0x10cf0014);
  FUN_1001b80b2(local_1b0,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001c334a(local_208,param_5);
  FUN_1001b80b2(local_1a0,local_208);
  FUN_1001b7a50(local_208);
  FUN_1001c334a(local_208,0x5db30004);
  FUN_1001b80b2(local_190,local_208);
  FUN_1001b7a50(local_208);
  local_15e = 0x30001;
  sVar1 = FUN_10044f1a0();
  sVar3 = 3;
  if (sVar1 != 2) {
    sVar3 = sVar1;
  }
  sVar4 = 2;
  if (sVar1 != 3) {
    sVar4 = sVar3;
  }
  FUN_10020dfaa(local_1f8);
  FUN_1001b7a50(local_218);
  FUN_1001b7a50(local_228);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_248);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

