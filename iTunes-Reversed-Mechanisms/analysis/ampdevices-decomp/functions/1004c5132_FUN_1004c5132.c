// name: FUN_1004c5132
// address: 1004c5132

undefined8 FUN_1004c5132(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  
  FUN_10032f0f2(local_40);
  plVar2 = *(long **)(param_2 + 0x30);
  if (plVar2 != (long *)(param_2 + 0x38)) {
    do {
      FUN_1001aaf14(local_48,plVar2 + 4);
      FUN_1002e85ae(local_40,local_48);
      FUN_1001ab006(local_48);
      plVar1 = (long *)plVar2[1];
      plVar3 = plVar2;
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar3[2];
          bVar4 = (long *)*plVar2 != plVar3;
          plVar3 = plVar2;
        } while (bVar4);
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    } while (plVar2 != (long *)(param_2 + 0x38));
  }
  FUN_1001a7abe(param_1,local_40);
  FUN_1001a7a94(local_40);
  return param_1;
}

