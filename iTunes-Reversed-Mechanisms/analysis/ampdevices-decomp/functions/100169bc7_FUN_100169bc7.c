// name: FUN_100169bc7
// address: 100169bc7

undefined8 FUN_100169bc7(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067781a(uVar2);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1001737db(param_1,0);
    FUN_1001741cf(uVar2,param_2,0x8000100);
  }
  return uVar2;
}

