// name: FUN_1001691ed
// address: 1001691ed

cfstringStruct * FUN_1001691ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_10016ff43();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100676c90(uVar4);
    }
    FUN_1001782e9(0,0);
    pcVar3 = &cf___;
  }
  else {
    pcVar3 = (cfstringStruct *)FUN_100174622(lVar2,param_3);
    FUN_10017060f(lVar2);
  }
  return pcVar3;
}

