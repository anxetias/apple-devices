// name: FUN_1003249a6
// address: 1003249a6

void FUN_1003249a6(long param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  return;
}

