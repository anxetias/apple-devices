// name: FUN_1001f1ae4
// address: 1001f1ae4

long * FUN_1001f1ae4(long *param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = FUN_1001f1bf0(param_1 + 3);
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      uVar6 = uVar1 - 1 & uVar2;
    }
    else {
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar2 % uVar1;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar4 = plVar5[1];
        if (uVar4 == uVar2) {
          if (*param_2 == *(undefined1 (*) [16])(plVar5 + 2)) {
            return plVar5;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            uVar4 = uVar4 % uVar1;
          }
          if (uVar4 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

