// name: FUN_1001a79c8
// address: 1001a79c8

void FUN_1001a79c8(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  void *local_40;
  void *local_38;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1001a8200(&local_40,param_3);
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)((long)local_40 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      lVar1 = lVar1 + 8;
    } while (param_3 << 3 != lVar1);
  }
  FUN_1001a7932(param_1,local_40,(long)local_38 - (long)local_40 >> 3);
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  return;
}

