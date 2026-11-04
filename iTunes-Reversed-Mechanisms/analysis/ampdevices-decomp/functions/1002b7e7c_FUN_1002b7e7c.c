// name: FUN_1002b7e7c
// address: 1002b7e7c

undefined1  [16] FUN_1002b7e7c(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar4 = (long *)(param_1 + 8);
    plVar3 = plVar4;
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    do {
      while (plVar4 = plVar1, (ulong)plVar4[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar4[4]) {
          uVar2 = 0;
          goto LAB_1002b7efb;
        }
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar3 = plVar4 + 1;
          goto LAB_1002b7ecd;
        }
      }
      plVar1 = (long *)*plVar4;
      plVar3 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_1002b7ecd:
  plVar1 = operator_new(0x28);
  plVar1[4] = *param_3;
  FUN_10020e4b6(param_1,plVar4,plVar3,plVar1);
  uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  plVar4 = plVar1;
LAB_1002b7efb:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar4;
  return auVar5;
}

