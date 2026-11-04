// name: FUN_100169174
// address: 100169174

void FUN_100169174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100170651();
  lVar2 = FUN_1001691ed(uVar3,param_3,0);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676c1a(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  FUN_100171502(param_1,param_2,lVar2);
  FUN_10017060f(lVar2);
  return;
}

