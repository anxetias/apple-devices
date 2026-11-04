// name: FUN_10056fa98
// address: 10056fa98

long FUN_10056fa98(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (0 < lVar1) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x20);
    do {
      if ((*(int *)(param_1 + 0x10) * param_2) / (long)param_3 < *plVar2 + plVar2[-1]) {
        return (long)(int)plVar2[-4] + plVar2[-2];
      }
      plVar2 = plVar2 + 5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return -1;
}

