// name: FUN_100432caa
// address: 100432caa

undefined8 * FUN_100432caa(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  }
  else {
    FUN_10022bc70(param_1 + 2,param_2[2],param_2[3],
                  ((long)(param_2[3] - param_2[2]) >> 2) * -0x5555555555555555);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    FUN_10022c282(param_1 + 6,param_2[6],param_2[7],
                  ((long)(param_2[7] - param_2[6]) >> 2) * -0x5555555555555555);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    FUN_10022c282(param_1 + 10,param_2[10],param_2[0xb],
                  ((long)(param_2[0xb] - param_2[10]) >> 2) * -0x5555555555555555);
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  FUN_1001a7ad8(param_1 + 0xf,param_2 + 0xf);
  _memcpy(param_1 + 0x11,param_2 + 0x11,0x420);
  if (param_1 != param_2) {
    FUN_10022c00c(param_1 + 0x95,param_2[0x95],param_2[0x96],
                  ((long)(param_2[0x96] - param_2[0x95]) >> 2) * -0x7f01fc07f01fc07f);
  }
  FUN_1001b8172(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}

