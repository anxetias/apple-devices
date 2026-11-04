// name: FUN_1001acb7a
// address: 1001acb7a

void FUN_1001acb7a(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar2 = FUN_1001b8428(param_2);
  if (cVar2 != '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069f1db(uVar3);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') {
      return;
    }
  }
  cVar2 = FUN_1001b8428(param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069f251(uVar3);
    }
    cVar2 = FUN_1001782e9(0x400,0);
    if (cVar2 == '\0') {
      return;
    }
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1001b8c6c(param_2,DAT_1008c4d98);
    local_38 = uVar3;
    local_30 = FUN_1001b8c6c(param_3,DAT_1008c4d98);
    _CFURLRequestAppendHTTPHeaderFieldValue(lVar1,uVar3,local_30);
    FUN_10016d588(&local_30);
    FUN_10016d588(&local_38);
  }
  return;
}

