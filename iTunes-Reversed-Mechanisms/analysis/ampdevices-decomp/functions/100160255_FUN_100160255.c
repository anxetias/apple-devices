// name: FUN_100160255
// address: 100160255

undefined8 FUN_100160255(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 5) == '\0') {
    uVar2 = FUN_1001d7569(*(undefined8 *)(param_1 + 8),param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(char *)(param_1 + 5) == '\0') {
      lVar1 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x30);
      goto LAB_100160281;
    }
  }
  else {
    *param_2 = *(long *)(param_1 + 0x40);
  }
  lVar1 = ~*(ulong *)(param_1 + 0x38) + *(long *)(param_1 + 0x20);
LAB_100160281:
  *param_2 = *param_2 + lVar1;
  return 0;
}

