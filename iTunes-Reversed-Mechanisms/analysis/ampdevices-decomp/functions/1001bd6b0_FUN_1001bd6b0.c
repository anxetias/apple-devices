// name: FUN_1001bd6b0
// address: 1001bd6b0

void FUN_1001bd6b0(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6 >> 4) < param_4) {
    FUN_1001bd884(param_1);
    if (param_4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001dea6c(param_1);
    }
    uVar4 = param_1[2] - *param_1 >> 3;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0xfffffffffffffff;
    }
    FUN_10013eab2(param_1,uVar4);
    plVar1 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = *param_2;
      *plVar1 = lVar6;
      lVar3 = param_2[1];
      plVar1[1] = lVar3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      plVar1 = plVar1 + 2;
    }
    param_1[1] = (long)plVar1;
  }
  else {
    lVar3 = param_1[1];
    lVar5 = lVar3 - lVar6;
    if ((ulong)(lVar5 >> 4) < param_4) {
      plVar1 = (long *)((long)param_2 + lVar5);
      if (lVar3 != lVar6) {
        do {
          FUN_1001b8172(lVar6,param_2);
          param_2 = param_2 + 2;
          lVar6 = lVar6 + 0x10;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
        lVar3 = param_1[1];
      }
      if (plVar1 != param_3) {
        lVar6 = 0;
        do {
          lVar5 = *(long *)((long)plVar1 + lVar6);
          *(long *)(lVar3 + lVar6) = lVar5;
          lVar2 = *(long *)((long)plVar1 + lVar6 + 8);
          *(long *)(lVar3 + 8 + lVar6) = lVar2;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            lVar2 = *(long *)(lVar3 + 8 + lVar6);
          }
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          lVar2 = lVar6 + 0x10;
          lVar5 = lVar6 + 0x10;
          lVar6 = lVar2;
        } while ((long *)((long)plVar1 + lVar5) != param_3);
        lVar3 = lVar2 + lVar3;
      }
      param_1[1] = lVar3;
    }
    else {
      lVar5 = lVar6;
      if (param_2 != param_3) {
        do {
          FUN_1001b8172(lVar5,param_2);
          param_2 = param_2 + 2;
          lVar5 = lVar5 + 0x10;
          lVar6 = lVar6 + 0x10;
        } while (param_2 != param_3);
        lVar3 = param_1[1];
      }
      while (lVar3 != lVar5) {
        lVar3 = lVar3 + -0x10;
        FUN_1001b811c(lVar3);
      }
      param_1[1] = lVar6;
    }
  }
  return;
}

