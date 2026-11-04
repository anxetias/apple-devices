// name: FUN_10012c508
// address: 10012c508

void FUN_10012c508(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0x10);
  plVar1 = (long *)**(long **)(param_1 + 8);
LAB_10012c51d:
  if (plVar4 == plVar1) {
    return;
  }
  plVar2 = (long *)plVar4[-4];
  plVar4 = plVar4 + -8;
  if (plVar4 != plVar2) goto code_r0x00010012c52f;
  lVar3 = 0x20;
  goto LAB_10012c540;
code_r0x00010012c52f:
  lVar3 = 0x28;
  if (plVar2 != (long *)0x0) {
LAB_10012c540:
    (**(code **)(*plVar2 + lVar3))();
  }
  goto LAB_10012c51d;
}

