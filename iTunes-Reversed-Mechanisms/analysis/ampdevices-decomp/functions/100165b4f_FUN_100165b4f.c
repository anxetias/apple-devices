// name: FUN_100165b4f
// address: 100165b4f

undefined8 FUN_100165b4f(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006732fa(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_100165a63();
    uVar3 = _CFBundleCopyResourceURLForLocalization(param_1,param_2,param_3,param_4,uVar2);
    FUN_10017060f(uVar2);
  }
  return uVar3;
}

