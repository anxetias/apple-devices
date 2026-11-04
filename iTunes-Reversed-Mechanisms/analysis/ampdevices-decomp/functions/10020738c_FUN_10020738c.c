// name: FUN_10020738c
// address: 10020738c

void FUN_10020738c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  
  *param_1 = &PTR_FUN_10083d9a0;
  plVar3 = (long *)param_1[0x36];
  while (plVar3 != param_1 + 0x37) {
    lVar1 = plVar3[7];
    FUN_1001c4b9c(lVar1);
    FUN_1001c64c1(lVar1);
    plVar2 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar5 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar5);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_1002075bc(param_1[0x37]);
  param_1[0x36] = param_1 + 0x37;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_1002075bc(0);
  FUN_1002dd1fa(param_1);
  return;
}

