// name: FUN_1001905bb
// address: 1001905bb

undefined8 FUN_1001905bb(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_10018ee88(param_1,0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_10018ee88(param_1,0x40000);
    if (cVar1 == '\0') {
      return 0xfffffffc;
    }
    iVar2 = _renamex_np(param_1 + 0x19,param_2 + 0x19,2);
  }
  else {
    iVar2 = _exchangedata((char *)(param_1 + 0x19),(char *)(param_2 + 0x19),1);
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = ___error();
  uVar4 = FUN_1001eb020(*piVar3);
  return uVar4;
}

