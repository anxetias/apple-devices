// name: FUN_1001b7992
// address: 1001b7992

byte * FUN_1001b7992(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  
  if (param_1 != (byte *)0x0) {
    pbVar2 = *(byte **)(*(long *)(*(long *)param_1 + -8) + 8);
    bVar1 = *pbVar2;
    while ((-1 < (char)bVar1 &&
           ((PTR___DefaultRuneLocale_10082cae8[(ulong)bVar1 * 4 + 0x3d] & 4) != 0))) {
      bVar1 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
    }
    return pbVar2;
  }
  ___cxa_bad_typeid();
  uVar3 = FUN_1001b7992(param_2);
  FUN_1001b7b04(auStack_38,uVar3);
  uVar3 = FUN_1001b8336(auStack_38);
  FUN_1001bb78a(param_1,"<%S %p>",uVar3,param_2);
  FUN_1001b7a50(auStack_38);
  return param_1;
}

