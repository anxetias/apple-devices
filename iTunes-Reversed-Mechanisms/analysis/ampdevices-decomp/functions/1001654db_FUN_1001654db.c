// name: FUN_1001654db
// address: 1001654db

undefined1 FUN_1001654db(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100672ed2(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100672e5c(uVar4);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
    local_28 = 0;
  }
  else {
    lVar2 = _CFGetTypeID(param_1);
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      _CFNumberGetValue(param_1,0xd,&local_28);
      uVar5 = 1;
    }
    else {
      lVar3 = _CFStringGetTypeID();
      if (lVar2 == lVar3) {
        local_28 = _CFStringGetDoubleValue(param_1);
      }
      else {
        lVar3 = _CFBooleanGetTypeID();
        if (lVar2 != lVar3) {
          local_28 = 0;
          uVar5 = 0;
          goto LAB_1001655c8;
        }
        cVar1 = _CFBooleanGetValue(param_1);
        local_28 = 0;
        if (cVar1 != '\0') {
          local_28 = DAT_100700458;
        }
      }
      uVar5 = 1;
    }
  }
LAB_1001655c8:
  *param_2 = local_28;
  return uVar5;
}

