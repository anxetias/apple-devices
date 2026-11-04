// name: FUN_1005dca08
// address: 1005dca08

undefined1 FUN_1005dca08(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  uVar1 = param_1[3];
  param_1 = param_1 + 4;
  iVar5 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + 1;
  iVar3 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) - 0x10;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return 0;
    }
    uVar6 = *param_1;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (iVar3 < (int)uVar6) {
      return 0;
    }
    if ((*(byte *)((long)param_1 + 0xb) & 1) == 0) {
      return 1;
    }
    param_1 = (uint *)((long)param_1 + (long)(int)(uVar6 - 0xc) + 0xc);
    iVar4 = iVar3 - uVar6;
    bVar2 = (int)uVar6 <= iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return 0;
}

