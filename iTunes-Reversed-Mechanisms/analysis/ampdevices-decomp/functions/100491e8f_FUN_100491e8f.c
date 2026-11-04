// name: FUN_100491e8f
// address: 100491e8f

void FUN_100491e8f(long param_1,long param_2)

{
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    *(undefined2 *)(param_2 + 10) = 0x89;
    return;
  }
  if ((*(byte *)(param_1 + 0x298) & 2) == 0) {
    if (*(char *)(param_1 + 0x2a3) != '\0') {
      *(undefined2 *)(param_2 + 10) = 0x87;
      *(undefined1 *)(param_2 + 4) = 0;
      return;
    }
    *(undefined2 *)(param_2 + 10) = 0x88;
    *(bool *)(param_2 + 5) = (*(ulong *)(*(long *)(param_1 + 8) + 0x1bb0) >> 0x21 & 1) == 0;
    return;
  }
  *(undefined2 *)(param_2 + 10) = 0x84;
  return;
}

