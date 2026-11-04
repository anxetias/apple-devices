// name: FUN_10017d64f
// address: 10017d64f

undefined8
FUN_10017d64f(int *param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) ||
     ((*(long *)(param_1 + 4) != 0 && ((*param_1 == 0x41464350 || (*param_1 == 0x504f5358)))))) {
    if (param_4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100685d06(uVar3);
      }
    }
    else {
      if (param_3 != 0 || param_1 != (int *)0x0) {
        if (param_1 == (int *)0x0) {
          lVar2 = FUN_10018dc73();
        }
        else {
          lVar2 = *(long *)(param_1 + 4);
        }
        if (*(code **)(lVar2 + 0xe0) == (code *)0x0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_100685c90(uVar3);
          }
          FUN_1001782e9(0,0);
          return 0xfffffffc;
        }
                    /* WARNING: Could not recover jumptable at 0x00010017d761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 0xe0))(param_1,param_2,param_3,param_4,param_5);
        return uVar3;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100685c1a(uVar3);
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100685ba4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

