// name: FUN_1005d6010
// address: 1005d6010

uint FUN_1005d6010(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = FUN_10015fc81(param_1,4);
  if (bVar1 == 0xf) {
    iVar2 = FUN_10015fb9a(param_1,0x10);
    uVar3 = FUN_10015fb9a(param_1,7);
    uVar3 = uVar3 | iVar2 << 0x10;
  }
  else {
    uVar3 = 0;
    if (bVar1 < 0xd) {
      uVar3 = *(uint *)(&DAT_10075bee0 + (ulong)bVar1 * 4);
    }
  }
  if (param_2 != (byte *)0x0) {
    *param_2 = bVar1;
  }
  return uVar3;
}

