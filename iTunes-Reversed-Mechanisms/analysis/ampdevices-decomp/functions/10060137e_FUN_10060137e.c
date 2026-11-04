// name: FUN_10060137e
// address: 10060137e

void FUN_10060137e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_100854338;
  param_1[1] = param_2;
  uVar1 = FUN_1001705fc(&cf_com_apple_Contacts);
  param_1[2] = uVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x3a) = (undefined1  [16])0x0;
  *param_1 = &PTR_FUN_100870a60;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

