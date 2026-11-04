// name: FUN_10051d07c
// address: 10051d07c

undefined8 FUN_10051d07c(long param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  
  param_2 = (undefined8 *)*param_2;
  uVar2 = FUN_1004744bf(param_2,0);
  if ((uVar2 & 0x21800c) == 8) {
    cVar1 = FUN_1002be216(*(undefined8 *)(*(long *)(param_1 + 8) + 0x15360),*param_2);
    if (cVar1 == '\0') {
      if (**(char **)(param_1 + 0x10) != '\x01') {
        **(char **)(param_1 + 0x10) = '\x02';
      }
      FUN_1002c0f3a(*(undefined8 *)(*(long *)(param_1 + 8) + 0x15360),*param_2);
    }
  }
  return 0;
}

