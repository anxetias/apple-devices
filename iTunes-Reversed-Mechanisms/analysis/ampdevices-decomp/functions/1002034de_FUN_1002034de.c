// name: FUN_1002034de
// address: 1002034de

bool FUN_1002034de(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_100166c1b(param_1,&cf_ApplicationType);
  if ((lVar2 != 0) && (cVar1 = FUN_100170633(lVar2,&cf_User), cVar1 == '\0')) {
    return false;
  }
  cVar1 = FUN_100167dd2(param_1,&cf_IsHostBackupEligible,1);
  return cVar1 != '\0';
}

