// name: FUN_10022b6fc
// address: 10022b6fc

undefined8 FUN_10022b6fc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (param_2 - param_1 != param_4 - param_3) {
    return 0;
  }
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      if (*(char *)(param_1 + lVar3) != *(char *)(param_3 + lVar3)) {
        return 0;
      }
      lVar1 = param_1 + lVar3;
      cVar2 = FUN_1001e3edc(lVar1 + 4,param_3 + lVar3 + 4,0);
      if (cVar2 == '\0') {
        return 0;
      }
      lVar3 = lVar3 + 0x204;
    } while (lVar1 + 0x204 != param_2);
  }
  return 1;
}

