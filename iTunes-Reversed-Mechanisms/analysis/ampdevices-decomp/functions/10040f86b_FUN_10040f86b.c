// name: FUN_10040f86b
// address: 10040f86b

int FUN_10040f86b(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 == 0x7570726d) {
    if (param_4 < 1) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (double)param_3 / (double)param_4;
    }
    *(double *)(lVar1 + 0x4b0) = dVar2;
    FUN_1001e9809(lVar1 + 0x4b8);
  }
  return (uint)(*(char *)(lVar1 + 0x60) == '\0') * 0x80 + -0x80;
}

