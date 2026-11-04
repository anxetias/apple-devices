// name: FUN_1001662b2
// address: 1001662b2

undefined8 FUN_1001662b2(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006737fc(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = FUN_100170f3b();
      uVar3 = FUN_100170ef7(param_1);
      uVar2 = FUN_100180a78(uVar2,uVar3,param_2,0);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100673786(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

