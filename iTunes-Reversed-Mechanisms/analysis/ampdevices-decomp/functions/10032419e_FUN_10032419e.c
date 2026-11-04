// name: FUN_10032419e
// address: 10032419e

int FUN_10032419e(long param_1,long *param_2)

{
  if ((*(char *)(*param_2 + 0x22) != '\0') || (*(char *)(*param_2 + 0x23) != '\0')) {
    **(undefined1 **)(param_1 + 8) = 1;
  }
  return (uint)(**(char **)(param_1 + 8) == '\0') * 0x80 + -0x80;
}

