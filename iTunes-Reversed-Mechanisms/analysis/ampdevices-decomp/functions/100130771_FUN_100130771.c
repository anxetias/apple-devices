// name: FUN_100130771
// address: 100130771

void FUN_100130771(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      FUN_1001307ea(param_4 + lVar2,param_2 + lVar2);
      lVar1 = param_2 + lVar2;
      lVar2 = lVar2 + 0x38;
    } while (lVar1 + 0x38 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x38) {
      FUN_10012ffcc(param_2);
    }
  }
  return;
}

