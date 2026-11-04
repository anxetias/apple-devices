// name: FUN_1003242de
// address: 1003242de

int FUN_1003242de(long param_1,long *param_2)

{
  if (*(char *)(*param_2 + 0x22) != '\0') {
    **(undefined1 **)(param_1 + 8) = 1;
  }
  return (uint)(**(char **)(param_1 + 8) == '\0') * 0x80 + -0x80;
}

