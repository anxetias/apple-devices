// name: FUN_10057fdb8
// address: 10057fdb8

void FUN_10057fdb8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  plVar1 = *(long **)(param_1 + 200);
  if (plVar2 == plVar1) {
LAB_10057fdec:
    if (plVar2 != plVar1) {
      lVar3 = (long)plVar1 - (long)(plVar2 + 2);
      if (lVar3 != 0) {
        _memmove(plVar2,plVar2 + 2,lVar3 - 3);
      }
      *(long *)(param_1 + 200) = (long)plVar2 + lVar3;
    }
  }
  else {
    do {
      if (*plVar2 == *(long *)(param_2 + 0x18)) goto LAB_10057fdec;
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar1);
  }
  return;
}

