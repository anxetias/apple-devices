// name: FUN_1002dd4d9
// address: 1002dd4d9

undefined8
FUN_1002dd4d9(undefined2 *param_1,int param_2,undefined2 *param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_38;
  
  if (param_1 == param_3 && param_2 == param_4) {
    return 0;
  }
  local_38 = (ulong)param_5;
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    do {
      uVar4 = FUN_1001e39bb(*param_1);
      bVar6 = (uVar4 & 0x3c) == 0;
      bVar1 = !bVar6;
      if (bVar6) {
        local_38 = CONCAT44(param_2,param_5);
        break;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  while( true ) {
    if (param_4 == 0) {
      if (bVar1) {
        return 0;
      }
      return 0xffffffff;
    }
    uVar4 = FUN_1001e39bb(*param_3);
    if ((uVar4 & 0x3c) == 0) break;
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  }
  if (bVar1) {
    return 1;
  }
  iVar2 = FUN_1001e39bb(*param_1);
  iVar3 = FUN_1001e39bb(*param_3);
  if (iVar2 == 2 && iVar3 != 2) {
    return 1;
  }
  if (iVar2 != 2 && iVar3 == 2) {
    return 0xffffffff;
  }
  uVar5 = FUN_1001e43b6(param_1,local_38._4_4_,param_3,param_4,local_38 & 0xffffffff);
  return uVar5;
}

