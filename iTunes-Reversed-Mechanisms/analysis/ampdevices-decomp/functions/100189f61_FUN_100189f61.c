// name: FUN_100189f61
// address: 100189f61

undefined8 FUN_100189f61(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f7b9(uVar3);
    }
  }
  else {
    lVar2 = FUN_100189f00();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100189f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x10))(param_1,param_2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f743(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

