// name: FUN_1001321d0
// address: 1001321d0

void FUN_1001321d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_100130a4c(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}

