// name: FUN_1001697fe
// address: 1001697fe

undefined8 FUN_1001697fe(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_1;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100677468(uVar2);
    }
  }
  else {
    cVar1 = _CFNumberGetValue(param_2,0xd,&local_20);
    if (cVar1 != '\0') {
      return local_20;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006773f2(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return local_18;
}

