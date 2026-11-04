// name: FUN_1002b7dfc
// address: 1002b7dfc

void * FUN_1002b7dfc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  
  pvVar5 = operator_new(0x30);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((long)pvVar5 + 0x20) = *param_2;
  *(undefined4 *)((long)pvVar5 + 0x24) = uVar1;
  *(undefined4 *)((long)pvVar5 + 0x28) = uVar2;
  *(undefined4 *)((long)pvVar5 + 0x2c) = uVar3;
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar7 = (long *)(param_1 + 8);
    plVar6 = plVar7;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    do {
      while (plVar7 = plVar4, (ulong)plVar7[4] <= *(ulong *)((long)pvVar5 + 0x20)) {
        plVar4 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar6 = plVar7 + 1;
          goto LAB_1002b7e60;
        }
      }
      plVar4 = (long *)*plVar7;
      plVar6 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_1002b7e60:
  FUN_10020e4b6(param_1,plVar7,plVar6,pvVar5);
  return pvVar5;
}

