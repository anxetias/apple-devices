// name: FUN_100167e71
// address: 100167e71

char FUN_100167e71(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_1001668a7();
  if (lVar2 != 0) {
    cVar1 = _CFBooleanGetValue(lVar2);
    param_3 = (cVar1 == '\0') + '\x01';
  }
  return param_3;
}

