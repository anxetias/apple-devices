// name: FUN_1001e1030
// address: 1001e1030

long FUN_1001e1030(byte *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  
  uVar3 = (ulong)*param_1;
  lVar4 = 1;
  lVar2 = 0;
  do {
    if ((long)uVar3 < 1) {
      return lVar2;
    }
    bVar1 = param_1[uVar3];
    bVar6 = bVar1 - 0x20;
    if (0x19 < (byte)(bVar1 + 0x9f)) {
      bVar6 = bVar1;
    }
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar5 = bVar6 - 0x30;
LAB_1001e107b:
      lVar2 = lVar2 + (ulong)uVar5 * lVar4;
      lVar4 = lVar4 << 4;
    }
    else if ((byte)(bVar6 + 0xbf) < 6) {
      uVar5 = bVar6 - 0x37;
      goto LAB_1001e107b;
    }
    uVar3 = uVar3 - 1;
    if (lVar4 == 0) {
      return lVar2;
    }
  } while( true );
}

