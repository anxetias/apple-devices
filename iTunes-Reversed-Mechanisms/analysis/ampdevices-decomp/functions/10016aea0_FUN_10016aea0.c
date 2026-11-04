// name: FUN_10016aea0
// address: 10016aea0

undefined8 FUN_10016aea0(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100678ae0(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1001704bb();
      uVar2 = _CFReadStreamCreateForStreamedHTTPRequest(uVar2,param_2,param_3);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100678a6a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

