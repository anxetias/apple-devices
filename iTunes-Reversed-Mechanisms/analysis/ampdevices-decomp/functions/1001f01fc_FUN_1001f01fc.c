// name: FUN_1001f01fc
// address: 1001f01fc

undefined8 FUN_1001f01fc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x140) != 0) {
      FUN_1001f023e(param_1);
    }
    (**(code **)((long)param_1 + 0x28))
              (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x60));
    _free(param_1);
    return 0;
  }
  return 0xffffff9a;
}

