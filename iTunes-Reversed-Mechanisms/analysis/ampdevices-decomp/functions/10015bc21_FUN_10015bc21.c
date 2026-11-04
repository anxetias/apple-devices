// name: FUN_10015bc21
// address: 10015bc21

int FUN_10015bc21(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  cVar1 = FUN_10015b91e();
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    lVar3 = FUN_10015baa6(param_1,param_2,param_3,0,param_4,0,param_5);
    if (lVar3 != 0) {
      iVar2 = FUN_1001c627e(param_1);
      iVar2 = (int)lVar3 - iVar2;
    }
  }
  return iVar2;
}

