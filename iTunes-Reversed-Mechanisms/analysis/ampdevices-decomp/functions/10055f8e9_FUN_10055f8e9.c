// name: FUN_10055f8e9
// address: 10055f8e9

undefined4 FUN_10055f8e9(int param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_5a4;
  undefined1 local_59d [5];
  undefined1 local_598 [1024];
  undefined1 local_198 [96];
  undefined8 local_138;
  uint local_130;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5a4 = 0;
  uVar2 = 0;
  if (param_1 < 0x48545450) {
    if (param_1 == 0x44574e4c) {
      param_2 = FUN_1004aa9fa(param_2 + 0x2c);
      if (param_2 == 0) goto LAB_10055fa0f;
    }
    else {
      if (param_1 != 0x46494c45) goto LAB_10055fa0f;
LAB_10055f9cd:
      param_2 = param_2 + 0x2c;
    }
    FUN_100187d80(param_2,&local_5a4);
    uVar2 = local_5a4;
    goto LAB_10055fa0f;
  }
  if (param_1 != 0x48545450) {
    if (param_1 == 0x4d46494c) goto LAB_10055f9cd;
    uVar2 = 0;
    if (param_1 != 0x53485244) goto LAB_10055fa0f;
  }
  local_59d[0] = 0;
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (uVar3 == 0) {
LAB_10055f9d3:
    uVar3 = 0;
  }
  else {
    uVar1 = 0x3ff;
    if (uVar3 < 0x3ff) {
      uVar1 = uVar3;
    }
    FUN_1001c631b(param_2 + 0x30,local_598,(ulong)uVar1);
    local_598[uVar1] = 0;
    local_59d[0] = 0x30;
    FUN_1001a3e13(local_598,local_198);
    if (local_130 == 0) goto LAB_10055f9d3;
    uVar3 = 4;
    if (local_130 < 4) {
      uVar3 = local_130;
    }
    FUN_1001c631b(local_138,local_59d,uVar3);
  }
  uVar2 = FUN_1001e2095(local_59d,uVar3);
LAB_10055fa0f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

