// name: FUN_1002bbb84
// address: 1002bbb84

undefined1  [16] FUN_1002bbb84(long param_1,ulong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar7 = (long *)(param_1 + 8);
    plVar6 = plVar7;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    do {
      while (plVar7 = plVar4, (ulong)plVar7[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar7[4]) {
          uVar5 = 0;
          goto LAB_1002bbc04;
        }
        plVar4 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar6 = plVar7 + 1;
          goto LAB_1002bbbd5;
        }
      }
      plVar4 = (long *)*plVar7;
      plVar6 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_1002bbbd5:
  plVar4 = operator_new(0x30);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(plVar4 + 4) = *param_3;
  *(undefined4 *)((long)plVar4 + 0x24) = uVar1;
  *(undefined4 *)(plVar4 + 5) = uVar2;
  *(undefined4 *)((long)plVar4 + 0x2c) = uVar3;
  FUN_10020e4b6(param_1,plVar7,plVar6,plVar4);
  uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  plVar7 = plVar4;
LAB_1002bbc04:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar7;
  return auVar8;
}

