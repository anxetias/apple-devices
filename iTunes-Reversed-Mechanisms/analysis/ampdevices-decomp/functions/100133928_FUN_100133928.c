// name: FUN_100133928
// address: 100133928

void FUN_100133928(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
joined_r0x00010013393a:
  if (plVar4 == plVar2) {
    return;
  }
  plVar1 = plVar4 + -6;
  *(long **)(param_1 + 0x10) = plVar1;
  plVar3 = (long *)plVar4[-2];
  if (plVar3 != plVar1) goto code_r0x000100133950;
  lVar5 = 0x20;
  goto LAB_100133961;
code_r0x000100133950:
  lVar5 = 0x28;
  plVar4 = plVar1;
  if (plVar3 != (long *)0x0) {
LAB_100133961:
    (**(code **)(*plVar3 + lVar5))();
    plVar4 = *(long **)(param_1 + 0x10);
  }
  goto joined_r0x00010013393a;
}

