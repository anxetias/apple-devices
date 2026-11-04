// name: FUN_10016ad19
// address: 10016ad19

undefined8
FUN_10016ad19(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067897c(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1001704bb();
      if (param_5 == 0) {
        uVar3 = FUN_1001736b8(uVar2,0,&cf__________d,param_2,param_3,param_4);
      }
      else {
        if (param_6 == 0) {
          pcVar4 = &cf_____________d;
          param_6 = param_3;
        }
        else {
          pcVar4 = &cf________________d;
          param_4 = param_3;
        }
        uVar3 = FUN_1001736b8(uVar2,0,pcVar4,param_2,param_5,param_6,param_4);
      }
      uVar2 = FUN_1001744bd(uVar2,uVar3,0);
      FUN_10017060f(uVar3);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100678906(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

