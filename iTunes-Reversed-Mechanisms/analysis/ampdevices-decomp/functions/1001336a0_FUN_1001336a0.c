// name: FUN_1001336a0
// address: 1001336a0

void FUN_1001336a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0x10);
  plVar1 = (long *)**(long **)(param_1 + 8);
LAB_1001336b5:
  if (plVar4 == plVar1) {
    return;
  }
  plVar2 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar2) goto code_r0x0001001336c7;
  lVar3 = 0x20;
  goto LAB_1001336d8;
code_r0x0001001336c7:
  lVar3 = 0x28;
  if (plVar2 != (long *)0x0) {
LAB_1001336d8:
    (**(code **)(*plVar2 + lVar3))();
  }
  goto LAB_1001336b5;
}

