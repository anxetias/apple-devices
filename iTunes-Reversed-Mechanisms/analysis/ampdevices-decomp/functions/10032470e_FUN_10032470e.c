// name: FUN_10032470e
// address: 10032470e

undefined1  [16] FUN_10032470e(long param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *local_40 [3];
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    plVar4 = plVar3;
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_100324788;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10032475d;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10032475d:
  FUN_100324798(local_40,param_1);
  FUN_10020e4b6(param_1,plVar3,plVar4,local_40[0]);
  uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  plVar3 = local_40[0];
LAB_100324788:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}

