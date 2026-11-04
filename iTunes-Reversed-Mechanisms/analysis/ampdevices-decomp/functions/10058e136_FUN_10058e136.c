// name: FUN_10058e136
// address: 10058e136

void FUN_10058e136(long param_1,uint param_2)

{
  long lVar1;
  
  param_2 = param_2 | *(uint *)(param_1 + 0x34);
  if (param_2 != *(uint *)(param_1 + 0x34)) {
    *(uint *)(param_1 + 0x34) = param_2;
    lVar1 = FUN_1003070df();
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x1bb1) = *(byte *)(lVar1 + 0x1bb1) | 0x80;
      FUN_10058d9b6(param_1);
      FUN_100316867(lVar1,1,1);
      return;
    }
  }
  return;
}

