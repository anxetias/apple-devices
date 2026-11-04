// name: FUN_1001e556e
// address: 1001e556e

ushort * FUN_1001e556e(ushort *param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  *param_3 = 0;
  uVar1 = *param_1;
  puVar3 = param_1;
  while ((uVar1 != param_2 && ((0xd < uVar1 || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0))))) {
    uVar1 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  uVar2 = (int)puVar3 - (int)param_1;
  uVar1 = 0xff;
  if ((uVar2 & 0x1fe00) == 0) {
    uVar1 = (ushort)(uVar2 >> 1);
  }
  *param_3 = uVar1;
  FUN_1001c631b(param_1,param_3 + 1,(uint)uVar1 * 2);
  if ((*puVar3 < 0xe) && ((0x2401U >> (*puVar3 & 0x1f) & 1) != 0)) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = puVar3 + 1;
  }
  return puVar3;
}

