// name: FUN_1002d7c95
// address: 1002d7c95

int FUN_1002d7c95(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong local_38;
  int local_30;
  
  iVar1 = 0;
  if (1 < param_2) {
    lVar4 = *(long *)(param_1 + 0x15418);
    if (lVar4 != 0) {
      lVar3 = param_1 + 0x15418;
      do {
        bVar5 = *(ulong *)(lVar4 + 0x20) < param_2;
        if (!bVar5) {
          lVar3 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)bVar5 * 8);
      } while (lVar4 != 0);
      if ((lVar3 != param_1 + 0x15418) && (*(ulong *)(lVar3 + 0x20) <= param_2)) {
        return *(int *)(lVar3 + 0x28);
      }
    }
    iVar1 = FUN_10041503c(0,&local_38,0);
    if (iVar1 == 0) {
      uVar2 = FUN_10041576c(local_38);
      iVar1 = FUN_1000e0dc0(uVar2,param_2,0);
      FUN_1004152d5(&local_38,0);
    }
    local_38 = param_2;
    local_30 = iVar1;
    FUN_1002dc220(param_1 + 0x15410,&local_38);
  }
  return iVar1;
}

