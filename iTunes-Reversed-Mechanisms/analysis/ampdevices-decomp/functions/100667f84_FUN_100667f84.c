// name: FUN_100667f84
// address: 100667f84

void FUN_100667f84(long param_1,char param_2,undefined1 param_3)

{
  if (param_2 != '\0') {
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,
                      *(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
  }
  return;
}

