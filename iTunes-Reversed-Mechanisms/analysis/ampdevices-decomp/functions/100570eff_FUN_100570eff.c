// name: FUN_100570eff
// address: 100570eff

undefined8 FUN_100570eff(uint *param_1,long param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 < 8) {
    return 0;
  }
  FUN_1001c62d9(param_4,0x28);
  *param_4 = param_2;
  uVar2 = param_1[1];
  *(uint *)(param_4 + 2) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = *param_1;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = (ulong)uVar2;
  param_4[1] = uVar3;
  if (uVar2 == 0) {
    param_4[1] = param_3;
    lVar5 = 8;
LAB_100570f7d:
    param_4[3] = param_2 + lVar5;
    param_4[4] = param_3 - lVar5;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    lVar5 = 8;
    if (uVar2 == 1) {
      if (0xf < param_3) {
        uVar3 = *(ulong *)(param_1 + 2);
        uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
        param_4[1] = uVar3;
        lVar5 = 0x10;
        goto LAB_100570f65;
      }
    }
    else {
LAB_100570f65:
      bVar1 = (long)uVar3 <= (long)param_3;
      param_3 = uVar3;
      if (bVar1) goto LAB_100570f7d;
    }
    uVar4 = 0;
  }
  return uVar4;
}

