// name: FUN_10046c999
// address: 10046c999

void FUN_10046c999(void)

{
  char cVar1;
  long lVar2;
  undefined8 in_R8;
  
  lVar2 = FUN_100166844(in_R8,&cf_ProfileTypes);
  if (lVar2 != 0) {
    cVar1 = FUN_100164756(lVar2,&cf_com_apple_applicationaccess);
    if (cVar1 != '\0') {
      FUN_10027ba74();
      return;
    }
  }
  return;
}

