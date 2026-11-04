// name: FUN_10042ae01
// address: 10042ae01

undefined8 FUN_10042ae01(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    uVar2 = 0xffffffd5;
  }
  else {
    uVar2 = 0xffffffd5;
    plVar3 = *(long **)(param_1 + 0x28);
    do {
      plVar1 = (long *)*plVar3;
      if ((int)plVar3[1] == param_2) {
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) - (*(int *)(param_1 + 0x20) + *(int *)((long)plVar3 + 0xc));
        FUN_1001c2502(param_1 + 0x28,plVar3);
        FUN_1001c64c1(plVar3);
        uVar2 = 0;
      }
      plVar3 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return uVar2;
}

