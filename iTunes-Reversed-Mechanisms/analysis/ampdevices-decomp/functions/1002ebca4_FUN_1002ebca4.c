// name: FUN_1002ebca4
// address: 1002ebca4

undefined8 FUN_1002ebca4(long param_1)

{
  undefined8 uVar1;
  
  if (((((*(long *)(param_1 + 0x20) == 0) ||
        (uVar1 = 1, *(char *)(*(long *)(param_1 + 0x20) + 0x49) == '\0')) &&
       ((*(long *)(param_1 + 0x28) == 0 ||
        (uVar1 = 1, *(char *)(*(long *)(param_1 + 0x28) + 0x49) == '\0')))) &&
      ((*(long *)(param_1 + 0x30) == 0 ||
       (uVar1 = 1, *(char *)(*(long *)(param_1 + 0x30) + 0x49) == '\0')))) &&
     ((*(long *)(param_1 + 0x38) == 0 ||
      (uVar1 = 1, *(char *)(*(long *)(param_1 + 0x38) + 0x49) == '\0')))) {
    uVar1 = 0;
  }
  return uVar1;
}

