// name: FUN_10056eb2e
// address: 10056eb2e

long * FUN_10056eb2e(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar5 = (ulong)param_3;
    uVar1 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
    uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar1 >> 0x38 < 2) {
      uVar4 = (ulong)(param_3 & (int)param_2 - 1U);
    }
    else {
      uVar4 = uVar5;
      if (param_2 <= uVar5) {
        uVar4 = (ulong)param_3 % (param_2 & 0xffffffff);
      }
    }
    plVar3 = *(long **)(param_1 + uVar4 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == uVar5) {
            if (*(uint *)(plVar3 + 2) == param_3) {
              return plVar3;
            }
          }
          else {
            if ((byte)(uVar1 >> 0x38) < 2) {
              uVar2 = uVar2 & param_2 - 1;
            }
            else if (param_2 <= uVar2) {
              uVar2 = uVar2 % param_2;
            }
            if (uVar2 != uVar4) {
              return (long *)0x0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

