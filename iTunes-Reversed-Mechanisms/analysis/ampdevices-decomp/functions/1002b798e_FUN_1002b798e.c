// name: FUN_1002b798e
// address: 1002b798e

undefined1  [16] FUN_1002b798e(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if (plVar3 != (long *)0x0) {
    uVar1 = *param_2;
    do {
      plVar4 = plVar3;
      if ((ulong)plVar3[4] <= uVar1) {
        if (uVar1 <= (ulong)plVar3[4]) {
          for (plVar2 = (long *)*plVar3; plVar2 != (long *)0x0;
              plVar2 = (long *)plVar2[(ulong)plVar2[4] < uVar1]) {
            if ((ulong)plVar2[4] >= uVar1) {
              plVar4 = plVar2;
            }
          }
          for (plVar3 = (long *)plVar3[1]; plVar3 != (long *)0x0;
              plVar3 = (long *)plVar3[(ulong)plVar3[4] <= uVar1]) {
            if ((ulong)plVar3[4] > uVar1) {
              plVar5 = plVar3;
            }
          }
          break;
        }
        plVar3 = plVar3 + 1;
        plVar4 = plVar5;
      }
      plVar3 = (long *)*plVar3;
      plVar5 = plVar4;
    } while (plVar3 != (long *)0x0);
  }
  auVar6._8_8_ = plVar5;
  auVar6._0_8_ = plVar4;
  return auVar6;
}

