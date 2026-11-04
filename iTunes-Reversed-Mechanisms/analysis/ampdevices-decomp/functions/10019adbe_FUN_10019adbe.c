// name: FUN_10019adbe
// address: 10019adbe

undefined8 FUN_10019adbe(undefined8 param_1,long param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100170ef7(param_2);
  if ((param_3 & 1) != 0) {
    lVar3 = FUN_100197893(DAT_1008c4d90,param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_100170ef7(lVar3);
      if (lVar4 < lVar2) {
        FUN_100171b23(param_1,&cf_Content_Encoding,&cf_gzip);
        lVar2 = lVar4;
        param_2 = lVar3;
      }
      goto LAB_10019ae2d;
    }
  }
  lVar3 = 0;
LAB_10019ae2d:
  if ((param_3 & 2) != 0) {
    FUN_100171b23(param_1,&cf_Content_Encoding,&cf_gzip);
  }
  uVar5 = 0;
  lVar2 = FUN_1001736b8(DAT_1008c4d90,0,&cf__lu,lVar2);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069887a(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffff94;
  }
  else {
    FUN_100171b23(param_1,&cf_Content_Length,lVar2);
    FUN_1001719fb(param_1,param_2);
  }
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  return uVar5;
}

