// name: FUN_1001b8e86
// address: 1001b8e86

undefined8 FUN_1001b8e86(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  
  local_30 = param_2;
  lVar2 = FUN_1001b8f86();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a1aaa(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 != '\0') goto LAB_1001b8ed6;
LAB_1001b8f38:
    FUN_1001bb78a(param_1,"%lld",param_2);
  }
  else {
LAB_1001b8ed6:
    lVar4 = FUN_100172200(0,lVar2,4,&local_30);
    FUN_10017060f(lVar2);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a1b20(uVar3);
      }
      cVar1 = FUN_1001782e9(0,0);
      param_2 = local_30;
      if (cVar1 == '\0') goto LAB_1001b8f38;
    }
    FUN_1001b7e36(param_1,lVar4);
    FUN_10017060f(lVar4);
  }
  return param_1;
}

