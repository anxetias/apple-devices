// name: FUN_1005f7fd6
// address: 1005f7fd6

void FUN_1005f7fd6(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = FUN_10017076e();
  if (0 < lVar1) {
    uVar3 = lVar1 + 1;
    do {
      uVar2 = FUN_10016499b(param_1,uVar3 - 2);
      lVar1 = FUN_100167d88(uVar2,PTR_cf_GUID_10088fbf0);
      if (lVar1 == param_2) {
        FUN_100170bed(param_1,uVar3 - 2);
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}

