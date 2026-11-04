// name: FUN_100243ce4
// address: 100243ce4

int FUN_100243ce4(short param_1,undefined8 param_2,int param_3,short *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_240 [2];
  short *local_238;
  undefined8 *local_218;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [88];
  undefined1 local_158 [64];
  undefined4 local_118;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_210 = param_5;
  if ((param_3 + 0x80U & 0xffffff7f) != 0) {
    iVar2 = FUN_1004c6512(&local_218);
    if (iVar2 == 0) {
      if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = local_240;
        local_240[0] = 1;
        local_238 = param_4;
      }
      FUN_1004c5c38(*local_218,(int)param_1,param_3,param_2,puVar3,0,0,0);
      FUN_10044eef2(local_1f8);
      FUN_1004c673f(local_208,local_218);
      FUN_1001b80b2(local_1d0,local_208);
      FUN_1001b7a50(local_208);
      FUN_1001b8172(local_1f0,param_6);
      FUN_1004c6788(local_208,local_218);
      FUN_1001b80b2(local_1c0,local_208);
      FUN_1001b7a50(local_208);
      FUN_1001c334a(local_208,0x5db30003);
      FUN_1001b80b2(local_1b0,local_208);
      FUN_1001b7a50(local_208);
      FUN_1001b8172(local_158,local_210);
      local_118 = 1;
      sVar1 = FUN_10044f1a0();
      FUN_1004c6565(local_218);
      FUN_10020dfaa(local_1f8);
      goto LAB_100243e6d;
    }
  }
  sVar1 = 0;
LAB_100243e6d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

