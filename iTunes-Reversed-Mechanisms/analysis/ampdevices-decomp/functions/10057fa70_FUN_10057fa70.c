// name: FUN_10057fa70
// address: 10057fa70

void FUN_10057fa70(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xb0);
  if (plVar2 == plVar1) {
LAB_10057faa4:
    if (plVar2 != plVar1) {
      lVar3 = (long)plVar1 - (long)(plVar2 + 2);
      if (lVar3 != 0) {
        _memmove(plVar2,plVar2 + 2,lVar3 - 3);
      }
      *(long *)(param_1 + 0xb0) = (long)plVar2 + lVar3;
    }
  }
  else {
    do {
      if (*plVar2 == *(long *)(param_2 + 0x20)) goto LAB_10057faa4;
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar1);
  }
  return;
}

