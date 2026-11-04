// name: FUN_10042ad4c
// address: 10042ad4c

undefined8 FUN_10042ad4c(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    uVar2 = 0xffffffd5;
  }
  else {
    uVar2 = 0xffffffd5;
    lVar3 = 0;
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      plVar1 = (long *)*plVar4;
      if (((int)plVar4[1] == param_2) &&
         ((lVar3 = lVar3 + 1, param_3 == 0 || (param_3 <= lVar3 && 0 < param_4)))) {
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) - (*(int *)(param_1 + 0x20) + *(int *)((long)plVar4 + 0xc));
        FUN_1001c2502(param_1 + 0x28,plVar4);
        FUN_1001c64c1(plVar4);
        param_4 = param_4 - (ulong)(0 < param_4);
        uVar2 = 0;
      }
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return uVar2;
}

