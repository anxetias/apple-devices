// name: FUN_100185d23
// address: 100185d23

void FUN_100185d23(long param_1)

{
  if ((*(long *)(param_1 + 0xa8) != 0) && (*(char *)(param_1 + 0x8e) != '\0')) {
    FUN_1001ecf9f();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if ((*(long *)(param_1 + 0xb0) != 0) && (*(char *)(param_1 + 0x8f) != '\0')) {
    FUN_1001ecf9f();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}

