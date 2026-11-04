// name: FUN_10049c6ea
// address: 10049c6ea

long FUN_10049c6ea(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
LAB_10049c7ca:
    param_1 = 0;
  }
  else {
    uVar2 = ~(param_3 << 0x20) + param_3;
    uVar2 = uVar2 >> 0x16 ^ uVar2;
    uVar2 = ~(uVar2 << 0xd) + uVar2;
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 >> 0xf ^ uVar2;
    uVar2 = ~(uVar2 << 0x1b) + uVar2;
    uVar4 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2;
    uVar1 = uVar4 & param_2;
    lVar3 = *(long *)(param_1 + (long)(int)uVar1 * 0x10);
    if (lVar3 == param_3) {
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
    }
    else {
      uVar5 = (uVar4 >> 0x17) + ~uVar4;
      uVar5 = uVar5 * 0x1000 ^ uVar5;
      uVar5 = uVar5 >> 7 ^ uVar5;
      uVar5 = uVar5 * 4 ^ uVar5;
      uVar4 = 0;
      do {
        if (lVar3 == 0) goto LAB_10049c7ca;
        if (uVar4 == 0) {
          uVar4 = uVar5 >> 0x14 ^ uVar5 | 1;
        }
        uVar1 = uVar1 + uVar4 & param_2;
        lVar3 = *(long *)(param_1 + (long)(int)uVar1 * 0x10);
      } while (lVar3 != param_3);
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
    }
  }
  return param_1;
}

