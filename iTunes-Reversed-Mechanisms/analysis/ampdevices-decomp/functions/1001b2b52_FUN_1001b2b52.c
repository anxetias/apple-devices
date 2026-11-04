// name: FUN_1001b2b52
// address: 1001b2b52

undefined8 FUN_1001b2b52(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((int)param_1 < 1) {
    iVar9 = -0x80000000;
  }
  else {
    iVar9 = 0;
    if (param_1 < 0x20000) {
      uVar7 = (ulong)param_1;
    }
    else {
      iVar9 = 0;
      uVar5 = (ulong)param_1;
      do {
        uVar7 = uVar5 >> 1;
        iVar9 = iVar9 + 0x10000;
        uVar2 = (uint)uVar5;
        uVar5 = uVar7;
      } while (0x3ffff < uVar2);
    }
    uVar2 = (uint)uVar7;
    if (uVar2 < 0x10000) {
      do {
        uVar1 = (uint)uVar7;
        uVar2 = uVar1 * 2;
        iVar9 = iVar9 + -0x10000;
        uVar7 = (ulong)uVar2;
      } while (uVar1 < 0x8000);
    }
    uVar1 = uVar2 >> 10 & 0x3c;
    uVar5 = ((long)*(int *)(&DAT_1007115e4 + uVar1) - (long)*(int *)(&DAT_1007115e0 + uVar1)) *
            (ulong)(uVar2 & 0xfff);
    uVar7 = uVar5 + 0xfff;
    if (-1 < (long)uVar5) {
      uVar7 = uVar5;
    }
    iVar9 = iVar9 + *(int *)(&DAT_1007115e0 + uVar1) + (int)(uVar7 >> 0xc);
  }
  uVar2 = _FixMul(iVar9);
  iVar9 = (int)uVar2 >> 0x10;
  uVar8 = 0x7fffffff;
  if ((iVar9 < 0x10) && (uVar8 = 0, -0x11 < iVar9)) {
    bVar6 = (byte)(uVar2 >> 0x10);
    uVar1 = 0x10000 >> (-bVar6 & 0x1f);
    if (-1 < iVar9) {
      uVar1 = 0x10000 << (bVar6 & 0x1f);
    }
    uVar3 = uVar2 >> 10 & 0x3c;
    iVar4 = (*(int *)(&DAT_100711634 + uVar3) - *(int *)(&DAT_100711630 + uVar3)) * (uVar2 & 0xfff);
    iVar9 = iVar4 + 0xfff;
    if (-1 < iVar4) {
      iVar9 = iVar4;
    }
    uVar8 = _FixMul(uVar1,(iVar9 >> 0xc) + *(int *)(&DAT_100711630 + uVar3));
    return uVar8;
  }
  return uVar8;
}

