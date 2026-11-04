// name: FUN_10012c572
// address: 10012c572

void FUN_10012c572(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
joined_r0x00010012c584:
  if (plVar4 == plVar2) {
    return;
  }
  plVar1 = plVar4 + -8;
  *(long **)(param_1 + 0x10) = plVar1;
  plVar3 = (long *)plVar4[-4];
  if (plVar3 != plVar1) goto code_r0x00010012c59a;
  lVar5 = 0x20;
  goto LAB_10012c5ab;
code_r0x00010012c59a:
  lVar5 = 0x28;
  plVar4 = plVar1;
  if (plVar3 != (long *)0x0) {
LAB_10012c5ab:
    (**(code **)(*plVar3 + lVar5))();
    plVar4 = *(long **)(param_1 + 0x10);
  }
  goto joined_r0x00010012c584;
}

