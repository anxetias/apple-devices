// name: FUN_1004c673f
// address: 1004c673f

undefined8 FUN_1004c673f(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = FUN_1004c666a(param_2);
  if (cVar2 != '\0') {
    lVar1 = *param_2;
    lVar3 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      lVar3 = *(long *)(lVar1 + 8);
    }
    if (lVar3 != 0) {
      FUN_1001b7a5c(param_1);
      return param_1;
    }
  }
  FUN_1001b7a44(param_1);
  return param_1;
}

