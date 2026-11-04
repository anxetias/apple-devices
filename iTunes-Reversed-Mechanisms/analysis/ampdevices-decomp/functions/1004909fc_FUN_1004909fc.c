// name: FUN_1004909fc
// address: 1004909fc

undefined8 FUN_1004909fc(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[3] == 0) {
    puVar3 = (undefined8 *)FUN_100490a47(param_1);
    if (puVar3 != (undefined8 *)0x0) {
      return *puVar3;
    }
  }
  else if ((*param_1 != 0) && (lVar1 = FUN_100314a6c(), lVar1 != 0)) {
    uVar2 = FUN_10048b3c0(lVar1,param_1[3]);
    return uVar2;
  }
  return 0;
}

