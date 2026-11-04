// name: FUN_1001a8200
// address: 1001a8200

void FUN_1001a8200(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1001a826c();
    lVar1 = param_1[1];
    ___bzero(lVar1,param_2 * 8);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return;
}

