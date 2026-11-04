// name: FUN_100277f78
// address: 100277f78

void FUN_100277f78(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_100277149();
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)FUN_10027728e(plVar1);
    FUN_1001de708(plVar1 + 0x13);
    FUN_1001de708(plVar1 + 0x17);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x1b80) = 0;
  *(undefined8 *)(param_1 + 0x1b88) = 0;
  FUN_100279190(param_1 + 0x2678);
  return;
}

