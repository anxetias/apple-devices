// name: FUN_10017850c
// address: 10017850c

void FUN_10017850c(ulong *param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  
  uVar1 = param_2 + 0x9e3779b97f4a7c15;
  uVar1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_3 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_4 ^ uVar1;
  *param_1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_5 ^ uVar1;
  return;
}

