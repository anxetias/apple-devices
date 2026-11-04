// name: FUN_1002f1664
// address: 1002f1664

long * FUN_1002f1664(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar2 = ~(param_2 << 0x20) + param_2;
    uVar2 = uVar2 >> 0x16 ^ uVar2;
    uVar2 = ~(uVar2 << 0xd) + uVar2;
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 >> 0xf ^ uVar2;
    uVar2 = ~(uVar2 << 0x1b) + uVar2;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      uVar5 = uVar1 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar1 <= uVar2) {
        uVar5 = uVar2 % uVar1;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar4 = plVar6[1];
        if (uVar4 == uVar2) {
          if (plVar6[2] == param_2) {
            return plVar6;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            uVar4 = uVar4 % uVar1;
          }
          if (uVar4 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

