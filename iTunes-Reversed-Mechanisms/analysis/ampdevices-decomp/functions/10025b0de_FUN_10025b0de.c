// name: FUN_10025b0de
// address: 10025b0de

void FUN_10025b0de(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_10024f328(param_1 + 6,param_2 + 6);
  param_1[0x18] = param_2[0x18];
  FUN_10024f328(param_1 + 0x1a,param_2 + 0x1a);
  FUN_10024f328(param_1 + 0x2c,param_2 + 0x2c);
  FUN_100249ed4(param_1 + 0x3e,param_2 + 0x3e);
  FUN_100249ed4(param_1 + 0x42,param_2 + 0x42);
  _memcpy(param_1 + 0x46,param_2 + 0x46,0x420);
  FUN_100249ed4(param_1 + 0x14e,param_2 + 0x14e);
  FUN_100249ed4(param_1 + 0x152,param_2 + 0x152);
  _memcpy(param_1 + 0x156,param_2 + 0x156,0x420);
  FUN_100249ed4(param_1 + 0x25e,param_2 + 0x25e);
  FUN_100249ed4(param_1 + 0x262,param_2 + 0x262);
  _memcpy(param_1 + 0x266,param_2 + 0x266,0x420);
  return;
}

