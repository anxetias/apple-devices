// name: FUN_1001dfc9d
// address: 1001dfc9d

void FUN_1001dfc9d(byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba82d(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba8b5(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  bVar1 = *param_1;
  *param_2 = bVar1;
  if (bVar1 != 0) {
    uVar3 = bVar1 + 1;
    lVar5 = 1;
    do {
      param_2[lVar5] = param_1[lVar5];
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + 1;
    } while (1 < uVar3);
  }
  return;
}

