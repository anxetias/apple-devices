// name: FUN_100199268
// address: 100199268

int FUN_100199268(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    FUN_100171b23(param_1,&cf_Content_Type,param_4);
  }
  lVar3 = FUN_10016696d(param_2,&cf_preformatted_data);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006977f7(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10019adbe(param_1,lVar3,param_3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069778b(iVar2,uVar4);
      }
    }
  }
  return iVar2;
}

