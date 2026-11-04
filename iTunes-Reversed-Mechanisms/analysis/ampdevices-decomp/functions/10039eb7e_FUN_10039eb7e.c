// name: FUN_10039eb7e
// address: 10039eb7e

void FUN_10039eb7e(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  
  if (param_4 != param_5) {
    param_5 = (long *)*param_5;
    if (param_1 != param_3) {
      lVar2 = 1;
      for (plVar1 = param_4; param_5 != plVar1; plVar1 = (long *)plVar1[1]) {
        lVar2 = lVar2 + 1;
      }
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - lVar2;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar2;
    }
    plVar1 = (long *)param_5[1];
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_5;
    param_5[1] = (long)param_2;
  }
  return;
}

