// name: FUN_100169968
// address: 100169968

void FUN_100169968(ulong param_1,long param_2)

{
  ulong local_20;
  
  FUN_1001c62d9(param_2,8);
  local_20 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
             (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
             (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28
             | param_1 << 0x38;
  FUN_1001c631b(&local_20,param_2 + 8,8);
  return;
}

