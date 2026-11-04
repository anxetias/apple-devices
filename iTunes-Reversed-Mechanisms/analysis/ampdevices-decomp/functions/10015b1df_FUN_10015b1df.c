// name: FUN_10015b1df
// address: 10015b1df

bool FUN_10015b1df(int *param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066b9c3(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      FUN_10015a4db(param_1);
      lVar2 = FUN_10015a687(param_1,param_2);
      if (lVar2 != 0) {
        FUN_1001c631b(lVar2,param_3,param_1[1]);
      }
      FUN_10015a525(param_1);
      return lVar2 != 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066b94d(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

