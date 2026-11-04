// name: FUN_1001dfd41
// address: 1001dfd41

void FUN_1001dfd41(byte *param_1,byte *param_2,byte param_3)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba93d(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (byte *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba9c5(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (*param_1 < param_3) {
    param_3 = *param_1;
  }
  *param_2 = param_3;
  if (param_3 != 0) {
    uVar2 = param_3 + 1;
    lVar4 = 1;
    do {
      param_2[lVar4] = param_1[lVar4];
      uVar2 = uVar2 - 1;
      lVar4 = lVar4 + 1;
    } while (1 < uVar2);
  }
  return;
}

