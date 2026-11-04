// name: FUN_10056ff02
// address: 10056ff02

undefined8 FUN_10056ff02(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1000bdde0();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return 0;
}

