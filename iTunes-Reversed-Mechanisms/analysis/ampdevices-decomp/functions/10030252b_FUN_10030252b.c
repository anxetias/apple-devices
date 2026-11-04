// name: FUN_10030252b
// address: 10030252b

undefined8 FUN_10030252b(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (lVar1 = FUN_10031b48b(), lVar1 != 0)) {
    if (*(int *)(param_1 + 8) == 0) {
      return *(undefined8 *)(lVar1 + 0x58);
    }
    uVar2 = FUN_10031b4c4(lVar1);
    return uVar2;
  }
  return 0;
}

