// name: FUN_100165026
// address: 100165026

undefined1 FUN_100165026(long param_1,undefined8 *param_2)

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
      FUN_100672aaa(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100672a34(uVar5);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100165119;
  }
  lVar3 = _CFGetTypeID(param_1);
  lVar4 = _CFNumberGetTypeID();
  if (lVar3 == lVar4) {
    cVar1 = _CFNumberGetValue(param_1,4,&local_28);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_100165119;
    local_28 = 0;
  }
  else {
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      uVar2 = FUN_100167475(param_1,&local_28);
      goto LAB_100165119;
    }
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(param_1);
      uVar2 = 1;
      if (cVar1 != '\0') {
        local_28 = 1;
      }
      goto LAB_100165119;
    }
  }
  uVar2 = 0;
LAB_100165119:
  *param_2 = local_28;
  return uVar2;
}

