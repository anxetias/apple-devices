// name: FUN_100168152
// address: 100168152

undefined1 FUN_100168152(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006755f4(uVar2);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_100171475();
    lVar3 = FUN_1001705e9(uVar2);
    lVar4 = _CFURLGetTypeID();
    if (lVar3 == lVar4) {
      *param_3 = uVar2;
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

