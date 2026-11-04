// name: FUN_1001b9e88
// address: 1001b9e88

uint FUN_1001b9e88(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  ushort uVar10;
  bool bVar11;
  
  if (param_2 == (ulong *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5);
    if (cVar3 != '\0') {
      FUN_1006a1f62(uVar5);
    }
    FUN_1001782e9(0);
  }
  if (param_2 == param_1) {
    uVar4 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = *param_1;
    uVar8 = uVar1;
    if (uVar2 < uVar1) {
      uVar8 = uVar2;
    }
    if (uVar8 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      lVar9 = 0;
      do {
        uVar6 = *(ushort *)((long)param_1 + lVar9 + 0xc);
        uVar7 = *(ushort *)((long)param_2 + lVar9 + 0xc);
        if (uVar6 != uVar7) break;
        bVar11 = uVar8 * 2 + -2 != lVar9;
        lVar9 = lVar9 + 2;
      } while (bVar11);
      if (((uVar6 != uVar7) && (0xd7ff < uVar6)) && (0xd7ff < uVar7)) {
        uVar10 = uVar6 + 0x2000;
        bVar11 = uVar6 < 0xe000;
        uVar6 = uVar6 - 0x800;
        if (bVar11) {
          uVar6 = uVar10;
        }
        if (uVar7 < 0xe000) {
          uVar7 = uVar7 + 0x2000;
        }
        else {
          uVar7 = uVar7 - 0x800;
        }
      }
    }
    uVar4 = 0xffffffff;
    if (uVar1 <= uVar2) {
      uVar4 = (uint)(uVar1 < uVar2);
    }
    if (uVar6 != uVar7) {
      uVar4 = (uint)uVar6 - (uint)uVar7;
    }
  }
  return uVar4;
}

