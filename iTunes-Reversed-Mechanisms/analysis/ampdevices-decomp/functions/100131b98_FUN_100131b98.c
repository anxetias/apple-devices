// name: FUN_100131b98
// address: 100131b98

long * FUN_100131b98(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = ((ulong)(uint)((int)uVar2 * 8) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (uVar5 >> 0x2f ^ uVar2 >> 0x20 ^ uVar5) * -0x622015f714c7d297;
    uVar4 = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uVar6 = uVar1 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar1 <= uVar4) {
        uVar6 = uVar4 % uVar1;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar3 = plVar7[1];
        if (uVar3 == uVar4) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if ((byte)(uVar5 >> 0x38) < 2) {
            uVar3 = uVar3 & uVar1 - 1;
          }
          else if (uVar1 <= uVar3) {
            uVar3 = uVar3 % uVar1;
          }
          if (uVar3 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

