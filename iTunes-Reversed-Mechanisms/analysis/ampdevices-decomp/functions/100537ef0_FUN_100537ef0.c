// name: FUN_100537ef0
// address: 100537ef0

bool FUN_100537ef0(int param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = DAT_1008c7850;
  if (param_1 != 0 || DAT_1008c7850 == '\0') {
    lVar2 = FUN_1002f463c();
    cVar1 = FUN_1002f47a6(lVar2,&DAT_1008c7854);
    if ((((cVar1 == '\0') || (DAT_1008c7854 < 0x1440000)) ||
        (cVar1 = FUN_1002f506e(lVar2), cVar1 == '\0')) ||
       ((cVar1 = FUN_1002f506e(lVar2), cVar1 == '\0' ||
        (cVar1 = '\x01', *(uint *)(lVar2 + 0xc0) < 0x1410000)))) {
      FUN_1002f4ef6(lVar2);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      *(undefined8 *)(lVar2 + 0x88) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      cVar1 = '\x02';
    }
  }
  DAT_1008c7850 = cVar1;
  return DAT_1008c7850 == '\x01';
}

