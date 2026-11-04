// name: FUN_1002b7f7c
// address: 1002b7f7c

long * FUN_1002b7f7c(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar1 = *param_2;
    uVar5 = (ulong)uVar1;
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      uVar6 = (ulong)(uVar1 & (int)uVar2 - 1U);
    }
    else {
      uVar6 = uVar5;
      if (uVar2 <= uVar5) {
        uVar6 = uVar5 % (uVar2 & 0xffffffff);
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar4 = plVar7[1];
        if (uVar4 == uVar5) {
          if (*(uint *)(plVar7 + 2) == uVar1) {
            return plVar7;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar2 - 1;
          }
          else if (uVar2 <= uVar4) {
            uVar4 = uVar4 % uVar2;
          }
          if (uVar4 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

