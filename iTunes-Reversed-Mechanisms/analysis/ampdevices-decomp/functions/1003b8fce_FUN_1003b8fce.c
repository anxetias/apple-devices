// name: FUN_1003b8fce
// address: 1003b8fce

undefined8 FUN_1003b8fce(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffd5;
  if (DAT_1008c75a0 != 0) {
    lVar2 = DAT_1008c75a0;
    do {
      if ((*(int *)(lVar2 + 0x178) == *(int *)(param_1 + 0x178)) &&
         (*(int *)(lVar2 + 0x17c) == *(int *)(param_1 + 0x17c))) {
        cVar1 = FUN_1001df7be(lVar2 + 0x38,param_1 + 0x38,0);
        if (cVar1 != '\0') {
          uVar3 = 0;
          goto LAB_1003b9036;
        }
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
  }
  lVar2 = 0;
LAB_1003b9036:
  *param_2 = lVar2;
  return uVar3;
}

