// name: FUN_10016769f
// address: 10016769f

char FUN_10016769f(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  uint local_24;
  
  local_24 = (uint)((ulong)in_RAX >> 0x20);
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067490a(uVar3);
    }
    cVar1 = '\0';
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100167740(param_1,param_2,&local_24);
    if (cVar1 == '\0') {
      local_24 = 0;
    }
    else if (0xff < local_24) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_100674894(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    *param_3 = (char)local_24;
  }
  return cVar1;
}

