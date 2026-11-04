// name: FUN_1002bd244
// address: 1002bd244

bool FUN_1002bd244(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar1 = FUN_1004744bf(param_1,0);
  if ((uVar1 & 0x818000) == 0x800000) {
    bVar3 = false;
    lVar2 = FUN_100597c13(param_1,0);
    if (lVar2 != 0) {
      bVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x58) != 0;
    }
  }
  return bVar3;
}

