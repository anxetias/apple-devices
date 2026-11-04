// name: FUN_100164e20
// address: 100164e20

undefined1 FUN_100164e20(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10067285c(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006727e6(uVar5);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100164f13;
  }
  lVar3 = _CFGetTypeID(param_1);
  lVar4 = _CFNumberGetTypeID();
  if (lVar3 == lVar4) {
    cVar1 = _CFNumberGetValue(param_1,4,&local_28);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_100164f13;
    local_28 = 0;
  }
  else {
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      uVar2 = FUN_1001672b9(param_1,&local_28);
      goto LAB_100164f13;
    }
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(param_1);
      uVar2 = 1;
      if (cVar1 != '\0') {
        local_28 = 1;
      }
      goto LAB_100164f13;
    }
  }
  uVar2 = 0;
LAB_100164f13:
  *param_2 = local_28;
  return uVar2;
}

