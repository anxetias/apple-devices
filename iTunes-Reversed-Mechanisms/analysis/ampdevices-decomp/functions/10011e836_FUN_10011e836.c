// name: FUN_10011e836
// address: 10011e836

ushort FUN_10011e836(long param_1,byte param_2,int param_3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_3 < 1) {
    uVar3 = **(ushort **)(param_1 + 0xb0);
  }
  else {
    uVar4 = 1 << ((char)param_3 - 1U & 0x1f);
    puVar1 = *(ushort **)(param_1 + 0xb0);
    uVar3 = *puVar1;
    do {
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 * 2;
      if (((byte)puVar1[1] & bVar2) != ((byte)uVar4 & param_2)) {
        uVar3 = uVar3 ^ puVar1[2];
      }
      uVar4 = uVar4 >> 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *puVar1 = uVar3;
  }
  return uVar3;
}

