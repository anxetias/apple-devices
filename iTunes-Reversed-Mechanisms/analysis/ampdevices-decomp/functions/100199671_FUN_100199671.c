// name: FUN_100199671
// address: 100199671

long FUN_100199671(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_20;
  
  local_20 = -1;
  lVar4 = -1;
  if (param_1 != 0) {
    lVar2 = FUN_100171a6c(param_1,&cf_Content_Length);
    if (lVar2 != 0) {
      cVar1 = FUN_1001672b9(lVar2,&local_20);
      if ((cVar1 != '\0') && (local_20 < 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100697ba4(uVar3);
        }
        FUN_1001782e9(0,0);
        local_20 = -1;
      }
      FUN_10017060f(lVar2);
      lVar4 = local_20;
    }
  }
  return lVar4;
}

