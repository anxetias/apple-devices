// name: FUN_1001b6610
// address: 1001b6610

void FUN_1001b6610(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  
  if (*(long **)(param_1 + 0x28) != (long *)(param_1 + 0x30)) {
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      FUN_1001b66d4();
      plVar1 = (long *)plVar4[1];
      if (plVar4[6] == plVar4[7]) {
        plVar2 = plVar4;
        if (plVar1 == (long *)0x0) {
          do {
            plVar3 = (long *)plVar2[2];
            bVar5 = (long *)*plVar3 != plVar2;
            plVar2 = plVar3;
          } while (bVar5);
        }
        else {
          do {
            plVar3 = plVar1;
            plVar1 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        FUN_1001b74ca(param_1 + 0x28,plVar4);
      }
      else if (plVar1 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar5 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar5);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar4 = plVar3;
    } while (plVar3 != (long *)(param_1 + 0x30));
  }
  return;
}

