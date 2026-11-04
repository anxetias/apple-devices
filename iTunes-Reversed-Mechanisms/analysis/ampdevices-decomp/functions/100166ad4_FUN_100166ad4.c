// name: FUN_100166ad4
// address: 100166ad4

undefined8 FUN_100166ad4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = _CFGetTypeID();
  lVar2 = _CFDateGetTypeID();
  if (lVar1 == lVar2) {
    local_20 = FUN_1001711f6(param_1);
  }
  else {
    lVar2 = _CFStringGetTypeID();
    if (lVar1 == lVar2) {
      iVar4 = FUN_1001a4bc3(param_1,&local_20);
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_100673d86(uVar5);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      lVar2 = _CFNumberGetTypeID();
      if (lVar1 == lVar2) {
        _CFNumberGetValue(param_1,0xd,&local_20);
      }
    }
  }
  return local_20;
}

