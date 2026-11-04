// name: FUN_10017fb25
// address: 10017fb25

undefined8 FUN_10017fb25(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006875d8(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      cVar1 = FUN_10017fbfb();
      if (cVar1 != '\0') {
        return 0xfffffaea;
      }
      cVar1 = FUN_10017fbfb(param_2);
      if (cVar1 != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x90);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return 0xfffffffc;
        }
                    /* WARNING: Could not recover jumptable at 0x00010017fb8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      return 0xfffffa81;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100687562(uVar2);
    }
  }
  FUN_1001782e9(0,1);
  return 0xffffffce;
}

