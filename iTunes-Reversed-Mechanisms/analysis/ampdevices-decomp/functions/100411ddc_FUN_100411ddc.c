// name: FUN_100411ddc
// address: 100411ddc

undefined1  [16] FUN_100411ddc(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

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
      while (plVar4 = plVar1, *(uint *)(plVar4 + 4) <= *param_2) {
        if (*param_2 <= *(uint *)(plVar4 + 4)) {
          uVar2 = 0;
          goto LAB_100411e62;
        }
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar3 = plVar4 + 1;
          goto LAB_100411e2a;
        }
      }
      plVar1 = (long *)*plVar4;
      plVar3 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_100411e2a:
  plVar1 = operator_new(0x30);
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[5] = 0;
  FUN_10020e4b6(param_1,plVar4,plVar3,plVar1);
  uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  plVar4 = plVar1;
LAB_100411e62:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar4;
  return auVar5;
}

