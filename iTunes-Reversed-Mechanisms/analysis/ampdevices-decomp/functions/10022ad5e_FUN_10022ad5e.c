// name: FUN_10022ad5e
// address: 10022ad5e

void FUN_10022ad5e(long param_1)

{
  void *pvVar1;
  
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x7c0));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x7c8));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 2000));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x7d8));
  FUN_1002c13ab(*(undefined8 *)(param_1 + 0x7e0));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x7e8));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x7f0));
  FUN_1002c13ab(*(undefined8 *)(param_1 + 0x7f8));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x800));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x808));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x810));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x818));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x820));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x828));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x830));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x838));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x840));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x848));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x850));
  FUN_1002c0bbc(*(undefined8 *)(param_1 + 0x858));
  FUN_10017060f(*(undefined8 *)(param_1 + 0xd60));
  FUN_1001b7a50(param_1 + 0xd20);
  pvVar1 = *(void **)(param_1 + 0xd08);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xd10) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001a85d4(param_1 + 0x8d8);
  pvVar1 = *(void **)(param_1 + 0x8b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x8b8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x890);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x898) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x870);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x878) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

