// name: FUN_1002b8974
// address: 1002b8974

undefined1 FUN_1002b8974(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1001e6168(param_1,param_2,"itls://","http://");
  if (cVar1 == '\0') {
    cVar1 = FUN_1001e6168(param_1,param_2,"itlss://","https://");
    if (cVar1 == '\0') {
      cVar1 = FUN_1001e6168(param_1,param_2,"itals://","http://");
      if (cVar1 == '\0') {
        cVar1 = FUN_1001e6168(param_1,param_2,"italss://","https://");
        if (cVar1 == '\0') {
          cVar1 = FUN_1001e6168(param_1,param_2,"itvls://","http://");
          if (cVar1 == '\0') {
            uVar2 = FUN_1001e6168(param_1,param_2,"itvlss://","https://");
            return uVar2;
          }
        }
      }
    }
  }
  return 1;
}

