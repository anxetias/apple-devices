// name: FUN_100490af0
// address: 100490af0

undefined8 FUN_100490af0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_1004909fc();
    if (lVar1 != 0) {
      uVar2 = FUN_1004839f2(lVar1,*(undefined4 *)(param_1 + 0x10));
      return uVar2;
    }
  }
  return 0;
}

