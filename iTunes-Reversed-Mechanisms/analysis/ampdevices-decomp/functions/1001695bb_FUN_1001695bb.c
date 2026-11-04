// name: FUN_1001695bb
// address: 1001695bb

ulong FUN_1001695bb(long param_1,ulong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong local_20;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006770b8(uVar2);
    }
  }
  else {
    cVar1 = _CFNumberGetValue(param_1,4,&local_20);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100677042(uVar2);
      }
    }
    else {
      if (local_20 >> 0x20 == 0) goto LAB_100169658;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100676fcc(uVar2);
      }
    }
  }
  FUN_1001782e9(0,0);
  local_20 = param_2;
LAB_100169658:
  return local_20 & 0xffffffff;
}

