// name: FUN_10013ea38
// address: 10013ea38

void FUN_10013ea38(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      FUN_1001b7a5c(param_4 + lVar2,param_2 + lVar2);
      lVar1 = param_2 + lVar2;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 + 0x10 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x10) {
      FUN_1001b7a50(param_2);
    }
  }
  return;
}

