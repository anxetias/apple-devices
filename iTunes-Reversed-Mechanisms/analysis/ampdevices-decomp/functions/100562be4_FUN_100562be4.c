// name: FUN_100562be4
// address: 100562be4

long * FUN_100562be4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = FUN_1001bd420();
  uVar2 = DAT_1008c25e0;
  if (DAT_1008c25e0 != 0) {
    uVar5 = DAT_1008c25e0 - (DAT_1008c25e0 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uVar7 = DAT_1008c25e0 - 1 & uVar4;
    }
    else {
      uVar7 = uVar4;
      if (DAT_1008c25e0 <= uVar4) {
        uVar7 = uVar4 % DAT_1008c25e0;
      }
    }
    plVar8 = *(long **)(DAT_1008c25d8 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      uVar1 = DAT_1008c25e0 - 1;
      do {
        uVar6 = plVar8[1];
        if (uVar4 == uVar6) {
          iVar3 = FUN_1001b9c66(plVar8 + 2,param_1);
          if (iVar3 == 0) {
            return plVar8;
          }
        }
        else {
          if ((byte)(uVar5 >> 0x38) < 2) {
            uVar6 = uVar6 & uVar1;
          }
          else if (uVar2 <= uVar6) {
            uVar6 = uVar6 % uVar2;
          }
          if (uVar6 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

