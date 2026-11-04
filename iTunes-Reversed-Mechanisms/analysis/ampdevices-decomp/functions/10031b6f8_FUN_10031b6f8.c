// name: FUN_10031b6f8
// address: 10031b6f8

undefined8 FUN_10031b6f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 8) != 0) && (lVar1 = FUN_100306d2e(), lVar1 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return *(undefined8 *)(lVar1 + 0x58);
    }
    uVar2 = FUN_10031b5dd(lVar1);
    return uVar2;
  }
  return 0;
}

