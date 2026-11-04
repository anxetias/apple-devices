// name: FUN_100205f96
// address: 100205f96

void FUN_100205f96(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_100854338;
  param_1[1] = param_2;
  uVar1 = FUN_1001705fc(&cf_com_apple_Calendars);
  param_1[2] = uVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x3a) = (undefined1  [16])0x0;
  *param_1 = &PTR_FUN_10083d950;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = param_3;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x1e;
  return;
}

