// name: FUN_100416e56
// address: 100416e56

void FUN_100416e56(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar7 = param_1 + 1;
    plVar6 = plVar7;
  }
  else {
    do {
      while( true ) {
        plVar7 = plVar4;
        uVar1 = plVar7[4];
        bVar3 = param_2 < uVar1;
        if (uVar1 == param_2) {
          bVar3 = param_3 < (ulong)plVar7[5];
        }
        if (!bVar3) break;
        plVar4 = (long *)*plVar7;
        plVar6 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_100416ed4;
      }
      bVar3 = uVar1 < param_2;
      if (uVar1 == param_2) {
        bVar3 = (ulong)plVar7[5] < param_3;
      }
      if (!bVar3) {
        return;
      }
      plVar4 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
    plVar6 = plVar7 + 1;
  }
LAB_100416ed4:
  puVar5 = operator_new(0x30);
  uVar2 = param_4[1];
  puVar5[4] = *param_4;
  puVar5[5] = uVar2;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = plVar7;
  *plVar6 = (long)puVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*plVar6;
  }
  FUN_1001ad344(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  return;
}

