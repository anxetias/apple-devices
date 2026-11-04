// name: FUN_10017a632
// address: 10017a632

void FUN_10017a632(long param_1,undefined1 *param_2)

{
  FUN_1001c62d9(param_2,0x28);
  *param_2 = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 4) = 0x20;
  _CC_SHA256_Final(param_2 + 8,(CC_SHA256_CTX *)(param_1 + 0x28));
  return;
}

