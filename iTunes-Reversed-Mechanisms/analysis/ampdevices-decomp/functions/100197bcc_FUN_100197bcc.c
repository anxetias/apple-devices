// name: FUN_100197bcc
// address: 100197bcc

long FUN_100197bcc(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006969dc(uVar3);
    }
  }
  else {
    uVar3 = FUN_100170f3b(param_2);
    uVar4 = FUN_100170ef7(param_2);
    iVar2 = FUN_1001977c4(uVar3,uVar4,&local_30,&local_28,2);
    if (iVar2 == -0x80) {
      return 0;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return 0;
      }
      FUN_100696970(iVar2,uVar3);
      return 0;
    }
    lVar5 = FUN_100170e14(param_1,local_30,local_28,DAT_1008c4d90);
    if (lVar5 != 0) {
      return lVar5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006968fa(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

