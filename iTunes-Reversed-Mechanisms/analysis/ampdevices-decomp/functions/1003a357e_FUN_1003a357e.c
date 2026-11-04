// name: FUN_1003a357e
// address: 1003a357e

undefined8 FUN_1003a357e(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[5] != 0) {
    lVar1 = FUN_100309333(*param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1003a3354(lVar1,param_1[5]);
      return uVar2;
    }
  }
  return 0;
}

