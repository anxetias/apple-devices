// name: FUN_1001b7a5c
// address: 1001b7a5c

void FUN_1001b7a5c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = param_1[1];
  }
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}

