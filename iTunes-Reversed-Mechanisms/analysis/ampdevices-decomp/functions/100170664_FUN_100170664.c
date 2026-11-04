// name: FUN_100170664
// address: 100170664

void FUN_100170664(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067970a(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFArrayGetCount(param_2);
      uVar2 = FUN_1001704ce(param_3,param_4,uVar2);
      _CFArrayAppendArray(param_1,param_2,uVar2,extraout_RDX);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100679694(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

