// name: FUN_10015b3c2
// address: 10015b3c2

int FUN_10015b3c2(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  long lVar3;
  
  cVar1 = FUN_10015b3fc();
  if (cVar1 == '\0') {
    sVar2 = -0x83b;
  }
  else {
    lVar3 = FUN_1001c627e(param_1);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    FUN_1001c6209(param_1);
    sVar2 = 0;
  }
  return (int)sVar2;
}

