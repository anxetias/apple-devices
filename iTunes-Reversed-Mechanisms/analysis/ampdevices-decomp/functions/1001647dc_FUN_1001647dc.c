// name: FUN_1001647dc
// address: 1001647dc

void FUN_1001647dc(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100671f28(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFArrayGetCount();
      _CFArrayApplyFunction(param_1,0,uVar2,param_2,param_3);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100671eb2(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

