// name: FUN_1005b0998
// address: 1005b0998

long * FUN_1005b0998(long *param_1,uint param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar7 = param_1 + 1;
    plVar6 = plVar7;
  }
  else {
    do {
      while( true ) {
        plVar7 = plVar5;
        uVar1 = *(uint *)(plVar7 + 4);
        bVar3 = param_2 < uVar1;
        if (uVar1 == param_2) {
          bVar3 = param_3 < (ulong)plVar7[5];
        }
        if (!bVar3) break;
        plVar5 = (long *)*plVar7;
        plVar6 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_1005b0a16;
      }
      bVar3 = uVar1 < param_2;
      if (uVar1 == param_2) {
        bVar3 = (ulong)plVar7[5] < param_3;
      }
      if (!bVar3) {
        return plVar7;
      }
      plVar5 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
    plVar6 = plVar7 + 1;
  }
LAB_1005b0a16:
  plVar4 = operator_new(0x38);
  lVar2 = param_4[1];
  plVar4[4] = *param_4;
  plVar4[5] = lVar2;
  plVar4[6] = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)plVar7;
  *plVar6 = (long)plVar4;
  plVar5 = plVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar5 = (long *)*plVar6;
  }
  FUN_1001ad344(param_1[1],plVar5);
  param_1[2] = param_1[2] + 1;
  return plVar4;
}

