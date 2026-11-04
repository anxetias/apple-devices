// name: FUN_10013338c
// address: 10013338c

void FUN_10013338c(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)*param_1;
  if ((ulong)((param_1[2] - (long)plVar4 >> 4) * -0x5555555555555555) < param_4) {
    FUN_100133548(param_1);
    if (0x555555555555555 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_10012c430(param_1);
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (param_4 < uVar5) {
      param_4 = uVar5;
    }
    uVar5 = 0x555555555555555;
    if ((ulong)(lVar3 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar5 = param_4;
    }
    FUN_1001335b8(param_1,uVar5);
    lVar3 = FUN_1001335fe(param_1 + 2,param_2,param_3,param_1[1]);
    param_1[1] = lVar3;
  }
  else {
    plVar7 = (long *)param_1[1];
    lVar3 = (long)plVar7 - (long)plVar4;
    if ((ulong)((lVar3 >> 4) * -0x5555555555555555) < param_4) {
      lVar1 = param_2 + lVar3;
      if (plVar7 != plVar4) {
        do {
          FUN_1001c128c(plVar4,param_2);
          param_2 = param_2 + 0x30;
          plVar4 = plVar4 + 6;
          lVar3 = lVar3 + -0x30;
        } while (lVar3 != 0);
        plVar7 = (long *)param_1[1];
      }
      lVar3 = FUN_1001335fe(param_1 + 2,lVar1,param_3,plVar7);
      param_1[1] = lVar3;
    }
    else {
      plVar6 = plVar4;
      if (param_2 != param_3) {
        do {
          FUN_1001c128c(plVar6,param_2);
          param_2 = param_2 + 0x30;
          plVar6 = plVar6 + 6;
          plVar4 = plVar4 + 6;
        } while (param_2 != param_3);
        plVar7 = (long *)param_1[1];
      }
LAB_100133512:
      if (plVar7 != plVar6) {
        plVar2 = (long *)plVar7[-2];
        plVar7 = plVar7 + -6;
        if (plVar7 != plVar2) goto code_r0x0001001334fb;
        lVar3 = 0x20;
        goto LAB_10013350c;
      }
      param_1[1] = (long)plVar4;
    }
  }
  return;
code_r0x0001001334fb:
  lVar3 = 0x28;
  if (plVar2 != (long *)0x0) {
LAB_10013350c:
    (**(code **)(*plVar2 + lVar3))();
  }
  goto LAB_100133512;
}

