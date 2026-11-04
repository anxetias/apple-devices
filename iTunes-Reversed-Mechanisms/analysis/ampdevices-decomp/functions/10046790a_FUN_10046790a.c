// name: FUN_10046790a
// address: 10046790a

void FUN_10046790a(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  if ((int)param_2 != 0) {
    FUN_1001d26f2(param_1,param_2,FUN_10046975e,param_3);
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0xc) = 100;
    if ((int)param_2 != 1) {
      iVar5 = 100;
      uVar4 = 1;
      do {
        iVar2 = FUN_1002dfd64(lVar3,param_1[uVar4],param_3,0);
        iVar1 = iVar5 + 100;
        if (iVar2 == 0) {
          iVar1 = iVar5;
        }
        iVar5 = iVar1;
        lVar3 = param_1[uVar4];
        *(int *)(lVar3 + 0xc) = iVar5;
        uVar4 = uVar4 + 1;
      } while ((param_2 & 0xffffffff) != uVar4);
    }
  }
  return;
}

