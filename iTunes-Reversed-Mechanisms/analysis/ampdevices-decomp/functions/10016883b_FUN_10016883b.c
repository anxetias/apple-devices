// name: FUN_10016883b
// address: 10016883b

bool FUN_10016883b(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong local_10;
  
  if (param_3 != 0 || param_4 != 0) {
    local_10 = param_3 >> 0x38 | (param_3 & 0xff000000000000) >> 0x28 |
               (param_3 & 0xff0000000000) >> 0x18 | (param_3 & 0xff00000000) >> 8 |
               (param_3 & 0xff000000) << 8 | (param_3 & 0xff0000) << 0x18 |
               (param_3 & 0xff00) << 0x28 | param_3 << 0x38;
    FUN_100168878(param_1,param_2,&local_10,8);
  }
  return param_3 != 0 || param_4 != 0;
}

