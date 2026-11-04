// name: FUN_100169fa1
// address: 100169fa1

undefined8 FUN_100169fa1(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100677d1a(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFStringGetLength();
      uVar2 = _CFStringFindWithOptions(param_1,param_2,0,uVar2,9,0);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100677ca4(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

