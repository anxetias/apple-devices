// name: FUN_100172017
// address: 100172017

undefined8 FUN_100172017(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c1e8(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      if (param_1 != 0) {
        uVar2 = _CFNumberGetValue(param_1,param_2,param_3);
        return uVar2;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10067c0fc(uVar2);
      }
      FUN_1001782e9(0,0);
      if (0x10 < param_2) {
        return 0;
      }
      if ((0xbfffU >> ((int)param_2 - 1U & 0x1f) & 1) == 0) {
        return 0;
      }
      FUN_1001c62d9(param_3,*(undefined8 *)(&DAT_10070e428 + param_2 * 8));
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c172(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

