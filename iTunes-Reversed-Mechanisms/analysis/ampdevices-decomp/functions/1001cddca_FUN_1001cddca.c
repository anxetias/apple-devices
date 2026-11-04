// name: FUN_1001cddca
// address: 1001cddca

undefined8 FUN_1001cddca(long param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_1001724e6(param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18));
    FUN_1001725a7(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18));
    return 0;
  }
  return 0xffffff94;
}

