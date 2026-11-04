// name: FUN_10056a472
// address: 10056a472

bool FUN_10056a472(undefined4 param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  
  if ((param_2[3] != 0) && (lVar1 = FUN_10056eb2e(*param_2,param_2[1],param_1), lVar1 == 0)) {
    return false;
  }
  if (param_2[8] == 0) {
    bVar2 = true;
  }
  else {
    lVar1 = FUN_10056eb2e(param_2[5],param_2[6],param_1);
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}

