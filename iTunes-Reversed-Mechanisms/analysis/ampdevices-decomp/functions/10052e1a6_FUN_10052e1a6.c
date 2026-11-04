// name: FUN_10052e1a6
// address: 10052e1a6

undefined8 FUN_10052e1a6(long param_1)

{
  if (*(long *)(param_1 + 0x550) != 0) {
    if (*(char *)(param_1 + 0x558) == '\0') {
      FUN_1001d5da8();
    }
    *(undefined8 *)(param_1 + 0x550) = 0;
  }
  return 0;
}

