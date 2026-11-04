// name: FUN_10058fa3c
// address: 10058fa3c

bool FUN_10058fa3c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1001e4e7c("iPod Photo Cache",param_1,1);
  bVar2 = true;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001e4e7c("Apple TV Photo Cache",param_1,1);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}

