// name: FUN_1001e1327
// address: 1001e1327

undefined8
FUN_1001e1327(undefined8 param_1,ulong param_2,char param_3,byte param_4,char param_5,
             undefined1 *param_6)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 local_498 [16];
  undefined2 local_488;
  undefined2 local_486;
  undefined1 local_478 [16];
  ulong local_468;
  undefined8 local_460;
  ulong local_458;
  undefined2 local_44c;
  undefined2 local_44a;
  ushort local_448 [256];
  undefined1 local_248 [512];
  undefined1 local_48 [2];
  undefined2 local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_460 = param_1;
  FUN_1001b7a44();
  *param_6 = 1;
  if (param_2 == 0xffffffffffffffff) {
    uVar3 = 0x27110006;
    if (param_5 != '\0') {
      uVar3 = 0x2711000c;
    }
    FUN_1001c334a(local_48,uVar3);
    uVar3 = local_460;
    FUN_1001b80b2(local_460,local_48);
    FUN_1001b7a50(local_48);
    *param_6 = 0;
    goto LAB_1001e16cc;
  }
  if (param_2 == 0) {
    uVar3 = 0x27110001;
    if (param_5 != '\0') {
      uVar3 = 0x27110007;
    }
    FUN_1001c334a(local_48,uVar3);
    uVar3 = local_460;
    FUN_1001b80b2(local_460,local_48);
    puVar4 = local_48;
  }
  else {
    if (param_3 == '\0') {
      cVar1 = FUN_1001eafe3();
      if (cVar1 == '\0') goto LAB_1001e141a;
      uVar6 = 1000000000;
      local_458 = 1000;
      uVar7 = 1000000000000;
      local_468 = 1000000;
    }
    else {
LAB_1001e141a:
      uVar6 = 0x40000000;
      local_458 = 0x400;
      uVar7 = 0x10000000000;
      local_468 = 0x100000;
    }
    FUN_1001b7a44(local_478);
    uVar2 = local_458;
    uVar9 = local_468;
    if (param_2 < uVar7) {
      if (uVar6 <= param_2) {
        uVar3 = 0x27110004;
        if (param_5 != '\0') {
          uVar3 = 0x2711000a;
        }
        FUN_1001c334a(local_48,uVar3,param_2 % local_468);
        uVar2 = local_458;
        FUN_1001b80b2(local_478,local_48);
        uVar6 = uVar9;
        goto LAB_1001e1537;
      }
      if (param_2 < local_468) {
        uVar3 = 0x27110002;
        if (param_5 != '\0') {
          uVar3 = 0x27110008;
        }
        FUN_1001c334a(local_48,uVar3);
        FUN_1001b80b2(local_478,local_48);
        FUN_1001b7a50(local_48);
        uVar5 = 1;
        uVar6 = 1;
      }
      else {
        uVar6 = param_2 & 0xffffffff;
        param_2 = uVar6 / (local_458 & 0xffffffff);
        uVar3 = 0x27110003;
        if (param_5 != '\0') {
          uVar3 = 0x27110009;
        }
        FUN_1001c334a(local_48,uVar3,uVar6 % (local_458 & 0xffffffff));
        FUN_1001b80b2(local_478,local_48);
        FUN_1001b7a50(local_48);
        uVar5 = 1;
        uVar6 = 10;
      }
    }
    else {
      uVar3 = 0x27110005;
      if (param_5 != '\0') {
        uVar3 = 0x2711000b;
      }
      FUN_1001c334a(local_48,uVar3,param_2 % uVar6);
      FUN_1001b80b2(local_478,local_48);
      uVar2 = local_458;
LAB_1001e1537:
      param_2 = param_2 / uVar6;
      FUN_1001b7a50(local_48);
      uVar5 = 2;
      uVar6 = 100;
    }
    uVar7 = (ulong)(((int)uVar6 * (int)(param_2 % uVar2) + (int)uVar2) - 1) / (uVar2 & 0xffffffff);
    uVar9 = uVar7;
    if (uVar6 == uVar7) {
      uVar9 = 0;
    }
    FUN_1001b8e86(local_498,(ulong)(uVar6 == uVar7) + param_2 / uVar2,1);
    FUN_1001bb41a(local_498,local_248);
    if ((uVar9 == 0 & (param_4 ^ 1)) == 0) {
      local_488 = 1;
      local_486 = FUN_1001e7a3d();
      local_44c = 1;
      FUN_1001e17f8(0,local_48);
      local_44a = local_46;
      FUN_1001e1890(&local_488,local_248);
      FUN_1001b8e86(local_48,uVar9,1);
      FUN_1001bb41a(local_48,local_448);
      if (uVar5 != local_448[0]) {
        iVar8 = local_448[0] - uVar5;
        do {
          FUN_1001e1890(&local_44c,local_248);
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0);
      }
      FUN_1001e1890(local_448,local_248);
      FUN_1001b7a50(local_48);
    }
    FUN_1001b8dfc(&local_488,local_248);
    uVar3 = local_460;
    FUN_1001bbec4(local_48,local_478,&local_488);
    FUN_1001b80b2(uVar3,local_48);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(&local_488);
    FUN_1001b7a50(local_498);
    puVar4 = local_478;
  }
  FUN_1001b7a50(puVar4);
LAB_1001e16cc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

