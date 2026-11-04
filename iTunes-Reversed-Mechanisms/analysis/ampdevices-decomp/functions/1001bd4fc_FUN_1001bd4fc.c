// name: FUN_1001bd4fc
// address: 1001bd4fc

void FUN_1001bd4fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_1001b811c(plVar1 + 2);
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}

