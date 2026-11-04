// name: FUN_1001cda26
// address: 1001cda26

undefined8 FUN_1001cda26(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100172473(0,param_1,0x8000100);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006af58a(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1001cd9e9(lVar2,param_2);
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

