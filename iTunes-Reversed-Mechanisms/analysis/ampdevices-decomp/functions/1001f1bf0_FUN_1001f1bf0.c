// name: FUN_1001f1bf0
// address: 1001f1bf0

uint FUN_1001f1bf0(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2[5] + (uint)param_2[4] * 0x10 + (uint)param_2[3] * 0x100 +
          ((uint)param_2[2] + (uint)param_2[1] * 0x10 + (uint)*param_2 * 0x100) * 0x1000;
  uVar1 = (uint)param_2[6] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[7] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[8] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[9] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[10] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[0xb] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[0xc] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[0xd] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = (uint)param_2[0xe] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar2 = (uint)param_2[0xf] + (uVar1 >> 0x18 & 0xfffffff0 ^ uVar1) * 0x10;
  uVar1 = uVar2 & 0xf0000000;
  return ~uVar1 & (uVar1 >> 0x18 ^ uVar2);
}

