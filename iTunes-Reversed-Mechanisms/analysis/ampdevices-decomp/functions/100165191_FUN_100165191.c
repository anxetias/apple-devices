// name: FUN_100165191
// address: 100165191

undefined8 FUN_100165191(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int local_24;
  
  local_24 = (int)((ulong)in_RAX >> 0x20);
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100672b96(uVar6);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100672b20(uVar6);
    }
    FUN_1001782e9(0,0);
LAB_100165221:
    uVar6 = 0;
    uVar1 = 0;
  }
  else {
    lVar4 = _CFGetTypeID(param_1);
    lVar5 = _CFBooleanGetTypeID();
    if (lVar4 == lVar5) {
      uVar1 = _CFBooleanGetValue(param_1);
    }
    else {
      lVar5 = _CFNumberGetTypeID();
      if (lVar4 != lVar5) {
        lVar5 = _CFStringGetTypeID();
        if (lVar4 == lVar5) {
          lVar4 = _CFStringCompare(param_1,&cf_true,1);
          uVar6 = 1;
          if ((lVar4 == 0) || (lVar4 = _CFStringCompare(param_1,&cf_YES,1), lVar4 == 0)) {
            uVar1 = 1;
          }
          else {
            iVar3 = _CFStringGetIntValue(param_1);
            uVar1 = iVar3 != 0;
          }
          goto LAB_100165254;
        }
        goto LAB_100165221;
      }
      cVar2 = _CFNumberGetValue(param_1,3,&local_24);
      uVar1 = local_24 != 0 && cVar2 != '\0';
    }
    uVar6 = 1;
  }
LAB_100165254:
  *param_2 = uVar1;
  return uVar6;
}

