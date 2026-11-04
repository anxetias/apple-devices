// name: FUN_1001b788c
// address: 1001b788c

undefined1  [16] FUN_1001b788c(long param_1,ulong *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar8 = (long *)(param_1 + 8);
    plVar9 = (long *)(param_1 + 8);
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    do {
      while (plVar6 = plVar1, plVar9 = plVar6, (ulong)plVar6[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar6[4]) {
          uVar7 = 0;
          goto LAB_1001b791b;
        }
        plVar1 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar8 = plVar6 + 1;
          goto LAB_1001b78dd;
        }
      }
      plVar1 = (long *)*plVar6;
      plVar8 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_1001b78dd:
  plVar6 = operator_new(0x30);
  lVar2 = *(long *)(param_3 + 2);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(plVar6 + 4) = *param_3;
  *(undefined4 *)((long)plVar6 + 0x24) = uVar3;
  *(undefined4 *)(plVar6 + 5) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x2c) = uVar5;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_10020e4b6(param_1,plVar9,plVar8,plVar6);
  uVar7 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
LAB_1001b791b:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = plVar6;
  return auVar10;
}

