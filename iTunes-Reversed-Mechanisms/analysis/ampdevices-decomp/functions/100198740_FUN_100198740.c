// name: FUN_100198740
// address: 100198740

void FUN_100198740(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      FUN_100198691(param_4 + lVar2,param_2 + lVar2);
      lVar1 = param_2 + lVar2;
      lVar2 = lVar2 + 0x30;
    } while (lVar1 + 0x30 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x30) {
      FUN_1001987fa(param_2);
    }
  }
  return;
}

