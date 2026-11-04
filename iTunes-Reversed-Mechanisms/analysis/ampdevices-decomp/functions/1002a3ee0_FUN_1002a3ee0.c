// name: FUN_1002a3ee0
// address: 1002a3ee0

long * FUN_1002a3ee0(long param_1,ushort param_2,undefined2 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    plVar2 = plVar3;
  }
  else {
    do {
      while (plVar3 = plVar1, param_2 < *(ushort *)((long)plVar3 + 0x1c)) {
        plVar1 = (long *)*plVar3;
        plVar2 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_1002a3f2b;
      }
      if (param_2 <= *(ushort *)((long)plVar3 + 0x1c)) {
        return plVar3;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar2 = plVar3 + 1;
  }
LAB_1002a3f2b:
  plVar1 = operator_new(0x38);
  *(undefined2 *)((long)plVar1 + 0x1c) = *param_3;
  plVar1[4] = 0;
  FUN_1001c62d9(plVar1 + 5,0x10);
  FUN_10020e4b6(param_1,plVar3,plVar2,plVar1);
  return plVar1;
}

