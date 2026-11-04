// name: FUN_1003a18fc
// address: 1003a18fc

long FUN_1003a18fc(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 7) {
    if (((*(int *)(param_1 + 0x10) == 2) && (lVar1 = FUN_1003a1848(param_1,1), lVar1 != 0)) &&
       (*(short *)(lVar1 + 0x142) != 0)) {
      return lVar1;
    }
    lVar1 = FUN_1003a1848(param_1,0);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
    FUN_10055ea6a(param_1);
  }
  return *(long *)(param_1 + 0x60);
}

