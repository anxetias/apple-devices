// name: FUN_100323ff4
// address: 100323ff4

int FUN_100323ff4(long param_1,long *param_2)

{
  if (*(long *)(*param_2 + 8) == **(long **)(param_1 + 8)) {
    **(undefined8 **)(param_1 + 0x10) = **(undefined8 **)(param_1 + 0x18);
  }
  return (uint)(**(long **)(param_1 + 0x10) == 0) * 0x80 + -0x80;
}

