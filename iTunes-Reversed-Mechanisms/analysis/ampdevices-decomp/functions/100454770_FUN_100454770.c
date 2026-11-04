// name: FUN_100454770
// address: 100454770

void FUN_100454770(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar7 = param_1 + 1;
  puVar4 = operator_new(0x38);
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(*param_2);
  puVar4[4] = uVar5;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_2[1]);
  puVar4[5] = uVar5;
  puVar4[6] = param_2[2];
  puVar3 = PTR_s_compare__10088d300;
  puVar2 = PTR__objc_msgSend_10082c770;
  plVar8 = (long *)*plVar7;
  plVar10 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_10045483a:
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = plVar10;
    *plVar7 = (long)puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*plVar7;
    }
    FUN_1001ad344(param_1[1],puVar4);
    param_1[2] = param_1[2] + 1;
    return;
  }
  do {
    lVar6 = (*(code *)puVar2)(uVar5,puVar3,plVar8[5]);
    bVar1 = lVar6 == -1;
    if (lVar6 == 0) {
      bVar1 = (ulong)puVar4[4] < (ulong)plVar8[4];
    }
    plVar10 = plVar8;
    if (bVar1) {
      plVar9 = (long *)*plVar8;
      plVar7 = plVar8;
      if (plVar9 == (long *)0x0) goto LAB_10045483a;
    }
    else {
      plVar9 = (long *)plVar8[1];
      if (plVar9 == (long *)0x0) {
        plVar7 = plVar8 + 1;
        goto LAB_10045483a;
      }
    }
    uVar5 = puVar4[5];
    plVar8 = plVar9;
  } while( true );
}

