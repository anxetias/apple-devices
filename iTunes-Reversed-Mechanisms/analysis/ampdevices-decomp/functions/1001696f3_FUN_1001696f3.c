// name: FUN_1001696f3
// address: 1001696f3

undefined8 FUN_1001696f3(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100677290(uVar2);
    }
  }
  else {
    cVar1 = _CFNumberGetValue(param_1,4,&local_20);
    if (cVar1 != '\0') {
      return local_20;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067721a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return param_2;
}

