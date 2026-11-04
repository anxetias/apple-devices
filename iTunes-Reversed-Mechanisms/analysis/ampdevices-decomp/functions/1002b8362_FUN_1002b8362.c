// name: FUN_1002b8362
// address: 1002b8362

long * FUN_1002b8362(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = operator_new(0x18);
  *plVar2 = (long)&PTR_FUN_1008459d8;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  iVar1 = FUN_1002b844c(plVar2,param_1);
  iVar3 = 0;
  if ((iVar1 != -0xa41a) && (iVar1 != 0x2383)) {
    (**(code **)*plVar2)(plVar2);
    iVar3 = iVar1;
    if (iVar1 == 0) {
      iVar3 = 0;
      goto LAB_1002b83d5;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  plVar2 = (long *)0x0;
LAB_1002b83d5:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  return plVar2;
}

