// name: FUN_10017848a
// address: 10017848a

void FUN_10017848a(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 + 0x9e3779b97f4a7c15;
  *param_1 = (uVar1 >> 2) + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + param_3 ^ uVar1;
  return;
}

