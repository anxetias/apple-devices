// name: FUN_1001ace34
// address: 1001ace34

undefined8 * FUN_1001ace34(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*param_2 != 0) && (lVar1 = _CFURLResponseGetHTTPResponse(), lVar1 != 0)) {
    uVar2 = _CFHTTPMessageCopyAllHeaderFields(lVar1);
    FUN_1001a8d5a(param_1,uVar2,0);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10032f0f2(param_1);
  return param_1;
}

