// name: FUN_1001bd628
// address: 1001bd628

void FUN_1001bd628(long param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_4 != 0) {
    FUN_10013eab2(param_1,param_4);
    plVar2 = *(long **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar1 = *param_2;
      *plVar2 = lVar1;
      lVar3 = param_2[1];
      plVar2[1] = lVar3;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        lVar3 = plVar2[1];
      }
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      plVar2 = plVar2 + 2;
    }
    *(long **)(param_1 + 8) = plVar2;
  }
  return;
}

