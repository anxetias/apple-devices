// name: FUN_1001784be
// address: 1001784be

void FUN_1001784be(ulong *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = param_2 + 0x9e3779b97f4a7c15;
  uVar1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_3 ^ uVar1;
  *param_1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_4 ^ uVar1;
  return;
}

