// name: FUN_100169538
// address: 100169538

undefined4 FUN_100169538(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100676f56(uVar2);
    }
  }
  else {
    cVar1 = _CFNumberGetValue(param_1,3,&local_1c);
    if (cVar1 != '\0') {
      return local_1c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100676ee0(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return param_2;
}

