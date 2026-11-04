// name: FUN_100284088
// address: 100284088

long * FUN_100284088(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 != param_2) {
    plVar6 = param_1 + 4;
    do {
      plVar4 = param_3;
      *(int *)(plVar4 + 1) = (int)plVar6[-3];
      *plVar4 = plVar6[-4];
      FUN_1001a8c4a(plVar4 + 2,plVar6 + -2);
      if (plVar4 != plVar6 + -4) {
        FUN_100284118(plVar4 + 3,plVar6[-1],*plVar6,*plVar6 - plVar6[-1] >> 3);
      }
      uVar1 = *(undefined4 *)((long)plVar6 + 0x14);
      lVar3 = plVar6[3];
      uVar2 = *(undefined4 *)((long)plVar6 + 0x1c);
      *(int *)(plVar4 + 6) = (int)plVar6[2];
      *(undefined4 *)((long)plVar4 + 0x34) = uVar1;
      *(int *)(plVar4 + 7) = (int)lVar3;
      *(undefined4 *)((long)plVar4 + 0x3c) = uVar2;
      plVar5 = plVar6 + 4;
      param_3 = plVar4 + 8;
      plVar6 = plVar6 + 8;
    } while (plVar5 != param_2);
    param_3 = plVar4 + 8;
  }
  return param_3;
}

