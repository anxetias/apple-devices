// name: FUN_10041ed7b
// address: 10041ed7b

ulong FUN_10041ed7b(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                   uint param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_R13;
  ulong uVar7;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 local_218;
  uint local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [66];
  undefined4 local_15e;
  long local_38;
  undefined7 uVar8;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_20c = param_5;
  cVar1 = FUN_100247cdd(param_2);
  uVar8 = (undefined7)((ulong)unaff_R13 >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (cVar1 == '\0') {
    local_220 = param_1;
    local_218 = param_3;
    cVar1 = FUN_10050523c(param_4);
    uVar6 = local_20c;
    cVar2 = FUN_100505505(param_4,(byte)local_20c ^ 1);
    if (cVar1 != '\0' || cVar2 != '\0') {
      uVar5 = 0;
      if (cVar2 != '\0') {
        uVar5 = (uVar6 & 0xff) + 0x10cc0206;
      }
      uVar6 = uVar6 & 0xff | 0x10cc00ec;
      if (cVar1 == '\0') {
        uVar6 = uVar5;
      }
      uVar4 = FUN_100416f20(param_2,uVar6);
      FUN_1001b7eb0(local_1f8,uVar4);
      FUN_1001bbec4(local_240,local_1f8,local_218);
      uVar4 = local_220;
      FUN_1001b7a50(local_1f8);
      FUN_1001c334a(local_230,0x10cf0052);
      FUN_10044eef2(local_1f8);
      FUN_1001b7a5c(local_208,local_240);
      FUN_1001bbcfe(local_208,local_230);
      FUN_1001b80b2(local_1d0,local_208);
      FUN_1001b7a50(local_208);
      FUN_1001b8172(local_1f0,uVar4);
      FUN_1001c334a(local_208,0x5db3000e);
      FUN_1001b80b2(local_1b0,local_208);
      FUN_1001b7a50(local_208);
      FUN_1001c334a(local_208,0x5db30004);
      FUN_1001b80b2(local_1a0,local_208);
      FUN_1001b7a50(local_208);
      local_15e = 0x20002;
      sVar3 = FUN_10044f1a0();
      FUN_10020dfaa(local_1f8);
      FUN_1001b7a50(local_230);
      FUN_1001b7a50(local_240);
      uVar7 = CONCAT71(uVar8,sVar3 == 1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

