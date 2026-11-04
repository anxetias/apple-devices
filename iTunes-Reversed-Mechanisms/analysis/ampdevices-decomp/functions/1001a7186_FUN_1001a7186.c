// name: FUN_1001a7186
// address: 1001a7186

long FUN_1001a7186(undefined8 param_1,FILE *param_2,off_t param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -1;
  if (param_4 < 3) {
    iVar1 = _fseeko(param_2,param_3,param_4);
    lVar2 = -(ulong)(iVar1 != 0);
  }
  return lVar2;
}

