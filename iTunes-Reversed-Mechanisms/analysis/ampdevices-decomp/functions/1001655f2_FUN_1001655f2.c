// name: FUN_1001655f2
// address: 1001655f2

undefined8 FUN_1001655f2(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100672fbe(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_2 < 0) || (lVar3 = _CFArrayGetCount(param_1), lVar3 <= param_2)) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100672f48(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    lVar3 = _CFArrayGetValueAtIndex(param_1,param_2);
    if (lVar3 != 0) {
      FUN_1001654db(lVar3,&local_28);
      return local_28;
    }
  }
  return 0;
}

