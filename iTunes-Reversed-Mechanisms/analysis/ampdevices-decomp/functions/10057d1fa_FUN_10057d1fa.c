// name: FUN_10057d1fa
// address: 10057d1fa

undefined8 FUN_10057d1fa(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0x16) {
    if (param_3 < 0x12) {
      if (param_3 == 5) {
        *(undefined1 *)(param_1 + 0x22) = 1;
        FUN_10057d2b4(param_2,0xffffffd5,param_1 + 0x1d8);
        return 1;
      }
      if (param_3 == 9) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        return 1;
      }
      if (param_3 == 0xc) {
        return 0;
      }
    }
    else if (param_3 - 0x12U < 2) {
LAB_10057d251:
      *(undefined1 *)(param_1 + 0x20) = 1;
      param_1 = param_1 + 0x1a8;
      goto LAB_10057d2a8;
    }
  }
  else if (param_3 < 0x40) {
    if (param_3 == 0x16) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (param_3 == 0x35) goto LAB_10057d251;
    if (param_3 == 0x36) {
      *(undefined1 *)(param_1 + 8) = 1;
      param_1 = param_1 + 0xe8;
      param_3 = 0x36;
      goto LAB_10057d2a8;
    }
  }
  else if (param_3 - 0x40U < 2) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    param_1 = param_1 + 0x1c0;
    goto LAB_10057d2a8;
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1 = param_1 + 400;
LAB_10057d2a8:
  FUN_10057d4aa(param_2,param_3,param_1);
  return 1;
}

