// name: FUN_10015b989
// address: 10015b989

long FUN_10015b989(undefined8 param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_1001c627e();
  iVar3 = 0xc;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  uVar1 = *(ushort *)(lVar2 + 0xe + (long)iVar3);
  if ((short)(uVar1 << 8 | uVar1 >> 8) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1001c627e(param_1);
    lVar2 = lVar2 + iVar3 + 0x14;
  }
  return lVar2;
}

