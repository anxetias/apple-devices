// name: FUN_10015b4ae
// address: 10015b4ae

bool FUN_10015b4ae(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = FUN_10015b3fc();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066bbad(uVar3);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_1001c627e(param_1);
    if ((*(byte *)(lVar2 + 8) & 0x80) == 0) {
      bVar4 = false;
    }
    else {
      lVar2 = FUN_1001c627e(param_1);
      bVar4 = 0 < *(short *)(lVar2 + 0x18);
    }
  }
  return bVar4;
}

