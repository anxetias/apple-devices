// name: FUN_10010a6be
// address: 10010a6be

void FUN_10010a6be(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  **(undefined8 **)(param_1 + 0x48) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x50) + 8) = param_4;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) = param_5;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18) = param_6;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20) = param_7;
  *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x28) = param_8;
  return;
}

