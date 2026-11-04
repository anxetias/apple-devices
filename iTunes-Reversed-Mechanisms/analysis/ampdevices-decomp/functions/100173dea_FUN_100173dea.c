// name: FUN_100173dea
// address: 100173dea

void FUN_100173dea(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f6ea(uVar2);
    }
  }
  else {
    if (param_4 != 0) {
      uVar2 = _CFStringGetLength();
      uVar2 = FUN_1001704ce(param_2,param_3,uVar2);
      _CFStringReplace(param_1,uVar2,extraout_RDX,param_4);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f674(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

