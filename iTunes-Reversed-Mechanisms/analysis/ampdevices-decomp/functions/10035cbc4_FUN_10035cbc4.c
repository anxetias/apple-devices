// name: FUN_10035cbc4
// address: 10035cbc4

void FUN_10035cbc4(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  *param_1 = &PTR_FUN_100852a58;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  if (param_2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = _strdup(param_2);
  }
  param_1[0x29] = pcVar2;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_100854a30;
  if (param_3 != 0) {
    iVar1 = FUN_100181e82(param_3);
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0xb9) = 1;
      param_1[0x32] = "/";
      FUN_100184c93(param_3,param_1 + 0x35);
      _snprintf((char *)(param_1 + 0x2a),0x40,"%sAFC%u","/",(ulong)*(uint *)(param_1 + 0x38));
      goto LAB_10035cce5;
    }
  }
  *(undefined1 *)(param_1 + 0xb9) = 0;
  param_1[0x32] = "/";
  ___bzero(param_1 + 0x35,0x420);
  *(undefined1 *)(param_1 + 0x2a) = 0;
LAB_10035cce5:
  param_1[1] = 0x3000000001;
  *(undefined4 *)(param_1 + 2) = 0x1ff;
  param_1[3] = 0;
  param_1[4] = param_1[0x29];
  param_1[5] = param_1;
  param_1[6] = FUN_10035c3c0;
  param_1[7] = FUN_10035bf3c;
  param_1[8] = FUN_10035c914;
  param_1[9] = FUN_10035ca62;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x17] = FUN_10035bee0;
  param_1[0x18] = FUN_10035bfb2;
  param_1[0x19] = FUN_10035c024;
  param_1[0x1a] = FUN_10035c312;
  param_1[0x1b] = FUN_10035c364;
  param_1[0x1c] = FUN_10035c36c;
  param_1[0x1d] = FUN_10035c386;
  param_1[0x1e] = FUN_10035c396;
  param_1[0x1f] = FUN_10035c3a2;
  param_1[0x20] = FUN_10035c3b6;
  param_1[0x21] = FUN_1002dd03c;
  param_1[0x22] = FUN_1002dd048;
  return;
}

