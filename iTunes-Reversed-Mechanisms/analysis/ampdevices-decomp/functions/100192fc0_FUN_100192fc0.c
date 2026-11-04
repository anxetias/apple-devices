// name: FUN_100192fc0
// address: 100192fc0

void FUN_100192fc0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + lVar2;
      FUN_1001b7a5c(param_4 + lVar2,lVar1);
      _memcpy((void *)(param_4 + lVar2 + 0x10),(void *)(lVar1 + 0x10),0x638);
      lVar2 = lVar2 + 0x648;
    } while (lVar1 + 0x648 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x648) {
      FUN_1001b7a50(param_2);
    }
  }
  return;
}

