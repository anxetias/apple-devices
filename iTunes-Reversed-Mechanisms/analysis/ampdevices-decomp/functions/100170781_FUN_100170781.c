// name: FUN_100170781
// address: 100170781

undefined8 FUN_100170781(long param_1,ulong param_2,ulong param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006798e2(uVar3);
    }
  }
  else if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067986c(uVar3);
    }
  }
  else {
    lVar2 = _CFArrayGetCount();
    if ((param_3 == 0) || ((-1 < (long)(param_3 | param_2) && ((long)(param_3 + param_2) <= lVar2)))
       ) {
      uVar3 = _CFArrayContainsValue(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006797f6(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

