// name: FUN_10015c4ba
// address: 10015c4ba

int FUN_10015c4ba(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  long lVar3;
  ushort uVar4;
  
  cVar1 = FUN_10015b3fc();
  if (cVar1 == '\0') {
    sVar2 = -0x83b;
  }
  else {
    lVar3 = FUN_1001c627e(param_1);
    uVar4 = (*(ushort *)(lVar3 + 10) << 8 | *(ushort *)(lVar3 + 10) >> 8) - 1;
    lVar3 = FUN_1001c627e(param_1);
    *(ushort *)(lVar3 + 10) = uVar4 * 0x100 | uVar4 >> 8;
    if ((short)uVar4 < 0) {
      lVar3 = FUN_1001c627e(param_1);
      *(undefined2 *)(lVar3 + 10) = 0;
    }
    sVar2 = 0;
  }
  return (int)sVar2;
}

