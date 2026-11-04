// name: FUN_1005de2fc
// address: 1005de2fc

uint * FUN_1005de2fc(uint *param_1,uint *param_2,uint *param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = *param_3;
  puVar3 = param_2;
  if (uVar1 == 0) {
    return (uint *)0x0;
  }
  while( true ) {
    if (puVar3 < param_1) {
      return (uint *)0x0;
    }
    if ((ulong)((long)puVar3 - (long)param_1) < 8) {
      return (uint *)0x0;
    }
    if (puVar3 + -2 <= param_1) {
      return (uint *)0x0;
    }
    param_3 = param_3 + 1;
    lVar4 = ((long)puVar3 - (long)param_1) - 8;
    while (uVar2 = param_1[1],
          (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) != uVar1
          ) {
      param_1 = (uint *)((long)param_1 + 1);
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        return (uint *)0x0;
      }
    }
    uVar2 = *param_1;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if (uVar1 == param_4) break;
    puVar3 = (uint *)((ulong)uVar2 + (long)param_1);
    if (param_2 < puVar3) {
      return (uint *)0x0;
    }
    uVar1 = *param_3;
    if (*param_3 == 0) {
      uVar1 = param_4;
    }
    if (uVar1 == 0) {
      return (uint *)0x0;
    }
  }
  *param_5 = CONCAT44(param_4,uVar2);
  return param_1;
}

