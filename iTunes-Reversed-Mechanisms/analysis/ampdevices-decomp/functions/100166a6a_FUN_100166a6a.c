// name: FUN_100166a6a
// address: 100166a6a

bool FUN_100166a6a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100673d10(uVar4);
    }
    bVar3 = false;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100171475();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_100166ad4(lVar2);
    }
    bVar3 = lVar2 != 0;
    *param_3 = uVar4;
  }
  return bVar3;
}

