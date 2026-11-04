// name: FUN_1005e6dd4
// address: 1005e6dd4

undefined8 FUN_1005e6dd4(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  
  lVar1 = *param_2;
  cVar2 = FUN_1002b7185(*(undefined8 *)(lVar1 + 0x58));
  if (cVar2 == '\0') {
    cVar2 = FUN_100481a53(lVar1);
    if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar1 + 0x58), plVar4 != (long *)0x0)) {
      uVar3 = 0;
      do {
        if (*(uint *)(plVar4 + 0xc) - 1 < uVar3 - 1) {
          uVar3 = *(uint *)(plVar4 + 0xc);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      if (**(uint **)(param_1 + 8) < uVar3) {
        **(uint **)(param_1 + 8) = uVar3;
      }
    }
  }
  return 0;
}

