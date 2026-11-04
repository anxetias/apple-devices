// name: FUN_10018f904
// address: 10018f904

int FUN_10018f904(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_68 [80];
  
  iVar1 = FUN_10019206f();
  if (iVar1 == 0) {
    iVar1 = _mkdir((char *)(param_3 + 0x19),0x1ff);
    if (iVar1 != 0) {
      piVar2 = ___error();
      iVar1 = *piVar2;
      goto LAB_10018f934;
    }
  }
  else {
LAB_10018f934:
    iVar1 = FUN_1001eb020(iVar1);
    if (iVar1 != 0) goto LAB_10018f954;
  }
  iVar1 = FUN_10017d477(param_3,local_68,0);
  if (iVar1 == 0) {
    return 0;
  }
LAB_10018f954:
  ___bzero(param_3,0x420);
  return iVar1;
}

