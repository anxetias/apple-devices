// name: FUN_1005a2140
// address: 1005a2140

int FUN_1005a2140(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)FUN_1005b0928();
  plVar6 = param_1 + 1;
  if (plVar4 == plVar6) {
    plVar4 = (long *)*plVar6;
    while (plVar7 = plVar6, plVar4 != (long *)0x0) {
      while( true ) {
        plVar6 = plVar4;
        uVar1 = *(uint *)(plVar6 + 4);
        bVar2 = param_2 < uVar1;
        if (uVar1 == param_2) {
          bVar2 = param_3 < (ulong)plVar6[5];
        }
        if (bVar2) break;
        bVar2 = uVar1 < param_2;
        if (uVar1 == param_2) {
          bVar2 = (ulong)plVar6[5] < param_3;
        }
        if (!bVar2) goto LAB_1005a2221;
        plVar4 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 1;
          goto LAB_1005a21d8;
        }
      }
      plVar4 = (long *)*plVar6;
    }
LAB_1005a21d8:
    puVar5 = operator_new(0x38);
    *(uint *)(puVar5 + 4) = param_2;
    puVar5[5] = param_3;
    *(undefined4 *)(puVar5 + 6) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = plVar6;
    *plVar7 = (long)puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*plVar7;
    }
    FUN_1001ad344(param_1[1],puVar5);
    param_1[2] = param_1[2] + 1;
LAB_1005a2221:
    iVar3 = 1;
  }
  else {
    iVar3 = (int)plVar4[6] + 1;
    *(int *)(plVar4 + 6) = iVar3;
  }
  return iVar3;
}

