// name: FUN_1004aa6e0
// address: 1004aa6e0

void FUN_1004aa6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  if (*(char *)(param_1 + 0x778) != '\0') {
    for (lVar1 = FUN_1004aa784(); lVar1 != 0; lVar1 = FUN_1004ab52d(lVar1)) {
      FUN_1004aa6e0(lVar1,param_2);
    }
  }
  return;
}

