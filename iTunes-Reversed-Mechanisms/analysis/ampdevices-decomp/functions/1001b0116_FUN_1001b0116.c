// name: FUN_1001b0116
// address: 1001b0116

void FUN_1001b0116(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 100;
  uVar1 = DAT_1007115c0;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x57) = 0;
  FUN_10028593a(param_1 + 0xc);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1001dfbb3(param_3,(undefined1 *)((long)param_1 + 0xbc),0x40);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}

