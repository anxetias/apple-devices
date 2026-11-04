// name: FUN_1003a5c5e
// address: 1003a5c5e

undefined8 FUN_1003a5c5e(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  cVar2 = FUN_1002e3f13(*param_2);
  bVar4 = *(byte *)(lVar1 + 0xfa);
  if (cVar2 != '\0') {
    bVar4 = bVar4 | 1;
    *(byte *)(lVar1 + 0xfa) = bVar4;
  }
  uVar3 = 0x2349;
  if ((bVar4 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}

