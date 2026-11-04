// name: FUN_1002e8670
// address: 1002e8670

undefined8 FUN_1002e8670(long param_1,byte param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  iVar3 = FUN_1001c17c4();
  if ((((param_1 == 0 || 5 < iVar3) || (*(long *)(param_1 + 0x10) == 0)) ||
      ((*(byte *)(*(long *)(param_1 + 0x10) + 0x1bb0) & 1) == 0)) ||
     ((*(uint *)(param_1 + 0xc2) & 0x10000008) != 0)) {
LAB_1002e86b7:
    uVar4 = 0;
  }
  else {
    if (param_3 != '\0') {
      plVar5 = (long *)(param_1 + 0x58);
      do {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_1002e86b7;
        cVar1 = FUN_1002e85fc(plVar5,param_2,0);
      } while (cVar1 == '\0');
    }
    if (param_2 != 0) {
      bVar2 = FUN_100474865(param_1);
      if ((bVar2 & param_2) == 0) goto LAB_1002e86b7;
    }
    uVar4 = 1;
  }
  return uVar4;
}

