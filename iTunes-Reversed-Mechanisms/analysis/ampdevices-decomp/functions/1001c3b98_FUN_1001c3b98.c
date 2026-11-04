// name: FUN_1001c3b98
// address: 1001c3b98

long * FUN_1001c3b98(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  plVar3 = param_1 + 1;
  if (plVar3 == param_2) {
LAB_1001c3bb4:
    plVar2 = (long *)*param_2;
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar5 = plVar2;
      if (plVar2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar7 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar7);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      iVar1 = *param_5;
      if (iVar1 <= (int)plVar6[4]) {
        param_2 = plVar3;
        plVar2 = (long *)*plVar3;
        while (plVar2 != (long *)0x0) {
          plVar3 = plVar2;
          if (iVar1 < (int)plVar2[4]) {
            param_2 = plVar2;
            plVar2 = (long *)*plVar2;
          }
          else {
            if (iVar1 <= (int)plVar2[4]) break;
            param_2 = plVar2 + 1;
            plVar2 = (long *)plVar2[1];
          }
        }
        goto LAB_1001c3cb1;
      }
    }
    if (plVar2 == (long *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    iVar1 = *param_5;
    if (iVar1 < (int)param_2[4]) goto LAB_1001c3bb4;
    if (iVar1 <= (int)param_2[4]) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar2 = (long *)param_2[1];
    plVar6 = param_2;
    plVar4 = plVar2;
    if (plVar2 == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar7 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar7);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    if ((plVar5 == plVar3) || (iVar1 < (int)plVar5[4])) {
      if (plVar2 != (long *)0x0) {
        *param_3 = (long)plVar5;
        return plVar5;
      }
      *param_3 = (long)param_2;
      return param_2 + 1;
    }
    param_2 = plVar3;
    plVar2 = (long *)*plVar3;
    while (plVar2 != (long *)0x0) {
      plVar3 = plVar2;
      if (iVar1 < (int)plVar2[4]) {
        param_2 = plVar2;
        plVar2 = (long *)*plVar2;
      }
      else {
        if (iVar1 <= (int)plVar2[4]) break;
        param_2 = plVar2 + 1;
        plVar2 = (long *)plVar2[1];
      }
    }
LAB_1001c3cb1:
    *param_3 = (long)plVar3;
  }
  return param_2;
}

