// name: FUN_1005a56fe
// address: 1005a56fe

undefined8 FUN_1005a56fe(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x15a2) != '\0') {
    cVar1 = FUN_100537ef0(0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1002f5394(*(undefined8 *)(param_1 + 0x1598));
      return uVar2;
    }
  }
  return 0;
}

