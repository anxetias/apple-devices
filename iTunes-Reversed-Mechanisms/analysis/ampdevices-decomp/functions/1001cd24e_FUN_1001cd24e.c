// name: FUN_1001cd24e
// address: 1001cd24e

void FUN_1001cd24e(ulong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  pcVar4 = &cf_PreventUserIdleSystemSleep;
  if ((int)param_1 == 5) {
    pcVar4 = &cf_NetworkClientActive;
  }
  iVar2 = FUN_1001cd2b1(param_1,pcVar4,&DAT_1008a22f0 + (param_1 & 0xffffffff));
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006af1e4(iVar2,uVar3);
    }
  }
  return;
}

