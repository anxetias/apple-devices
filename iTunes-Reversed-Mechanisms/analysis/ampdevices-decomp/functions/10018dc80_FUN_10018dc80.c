// name: FUN_10018dc80
// address: 10018dc80

int FUN_10018dc80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 local_68 [80];
  
  iVar1 = FUN_10018dce1();
  if (iVar1 == 0) {
    iVar1 = _mkpath_np((char *)(param_2 + 0x19),0x1ff);
  }
  iVar1 = FUN_1001eb020(iVar1);
  if ((iVar1 == 0) && (iVar1 = FUN_10017d477(param_2,local_68,0), iVar1 == 0)) {
    return 0;
  }
  ___bzero(param_2,0x420);
  return iVar1;
}

