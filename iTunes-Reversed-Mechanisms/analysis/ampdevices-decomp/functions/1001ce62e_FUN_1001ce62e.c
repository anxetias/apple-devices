// name: FUN_1001ce62e
// address: 1001ce62e

bool FUN_1001ce62e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1001ebe95();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_1001cdea6(param_2,param_3);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}

