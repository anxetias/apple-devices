// name: FUN_1001b9f98
// address: 1001b9f98

uint FUN_1001b9f98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_2 == (ulong *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006a1fd8(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == param_1) {
    uVar7 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = *param_1;
    bVar8 = uVar2 < uVar1;
    uVar6 = uVar1;
    if (bVar8) {
      uVar6 = uVar2;
    }
    uVar7 = 0xffffffff;
    if (!bVar8) {
      uVar7 = (uint)(!bVar8 && uVar2 != uVar1);
    }
    uVar4 = _memcmp((void *)((long)param_1 + 0xc),(void *)((long)param_2 + 0xc),uVar6);
    if (uVar4 != 0) {
      uVar7 = uVar4;
    }
  }
  return uVar7;
}

