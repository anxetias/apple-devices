// name: FUN_1004cfffa
// address: 1004cfffa

undefined8 FUN_1004cfffa(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[6] != 0) {
    lVar1 = FUN_100309333(*param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1004cfdd1(lVar1,param_1[6]);
      return uVar2;
    }
  }
  return 0;
}

