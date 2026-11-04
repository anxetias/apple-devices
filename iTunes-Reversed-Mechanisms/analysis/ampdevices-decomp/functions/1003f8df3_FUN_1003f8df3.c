// name: FUN_1003f8df3
// address: 1003f8df3

undefined1 FUN_1003f8df3(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_1002e2e73(param_2);
  if (plVar3 != (long *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x100018);
    do {
      cVar2 = FUN_1003f36d8(uVar1,2,plVar3);
      if (cVar2 != '\0') {
        return 1;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return 0;
}

