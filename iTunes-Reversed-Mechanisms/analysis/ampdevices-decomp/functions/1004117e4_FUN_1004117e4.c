// name: FUN_1004117e4
// address: 1004117e4

long * FUN_1004117e4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = FUN_1001bd420(param_2);
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar4 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      uVar6 = uVar1 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar1 <= uVar3) {
        uVar6 = uVar3 % uVar1;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          iVar2 = FUN_1001b9c66(plVar7 + 2,param_2);
          if (iVar2 == 0) {
            return plVar7;
          }
        }
        else {
          if ((byte)(uVar4 >> 0x38) < 2) {
            uVar5 = uVar5 & uVar1 - 1;
          }
          else if (uVar1 <= uVar5) {
            uVar5 = uVar5 % uVar1;
          }
          if (uVar5 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

