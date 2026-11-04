// name: FUN_10049c7d4
// address: 10049c7d4

undefined8 * FUN_10049c7d4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar6 = param_1 + 1;
  plVar2 = param_1 + 1;
  plVar3 = (long *)param_1[1];
joined_r0x00010049c7fe:
  do {
    if (plVar3 == (long *)0x0) {
LAB_10049c846:
      uVar1 = *param_3;
      puVar5 = operator_new(0x450);
      FUN_1001b7a5c(puVar5 + 4,uVar1);
      ___bzero(puVar5 + 6,0x420);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = plVar6;
      *plVar2 = (long)puVar5;
      puVar7 = puVar5;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar7 = (undefined8 *)*plVar2;
      }
      FUN_1001ad344(param_1[1],puVar7);
      param_1[2] = param_1[2] + 1;
      return puVar5;
    }
    iVar4 = FUN_1001b9c66(param_2,plVar3 + 4);
    plVar6 = plVar3;
    if (iVar4 < 0) {
      plVar2 = plVar3;
      plVar3 = (long *)*plVar3;
      goto joined_r0x00010049c7fe;
    }
    iVar4 = FUN_1001b9c66(plVar3 + 4,param_2);
    if (-1 < iVar4) {
      if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
        return (undefined8 *)*plVar2;
      }
      goto LAB_10049c846;
    }
    plVar2 = plVar3 + 1;
    plVar3 = (long *)plVar3[1];
  } while( true );
}

