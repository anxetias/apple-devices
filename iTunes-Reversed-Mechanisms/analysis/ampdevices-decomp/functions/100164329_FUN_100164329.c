// name: FUN_100164329
// address: 100164329

void FUN_100164329(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_10088ff98;
  if (DAT_10088ff98 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100671beb(uVar3);
    }
    FUN_1001782e9(0,0);
    return;
  }
  FUN_100162e70();
  if (param_2 != 0) {
    FUN_1001630ea(lVar1,param_1,param_2);
    return;
  }
  return;
}

