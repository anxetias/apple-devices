// name: FUN_100285854
// address: 100285854

long * FUN_100285854(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar6 = (ulong)param_2;
    uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar2 >> 0x38 < 2) {
      uVar4 = (ulong)(param_2 & (int)uVar1 - 1U);
    }
    else {
      uVar4 = uVar6;
      if (uVar1 <= uVar6) {
        uVar4 = (ulong)param_2 % (uVar1 & 0xffffffff);
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar3 = plVar5[1];
        if (uVar3 == uVar6) {
          if (*(uint *)(plVar5 + 2) == param_2) {
            return plVar5;
          }
        }
        else {
          if ((byte)(uVar2 >> 0x38) < 2) {
            uVar3 = uVar3 & uVar1 - 1;
          }
          else if (uVar1 <= uVar3) {
            uVar3 = uVar3 % uVar1;
          }
          if (uVar3 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

