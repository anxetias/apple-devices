// name: FUN_1001ce5fc
// address: 1001ce5fc

bool FUN_1001ce5fc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1001ebe95();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_1001cd44e(param_2,param_3,0);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}

