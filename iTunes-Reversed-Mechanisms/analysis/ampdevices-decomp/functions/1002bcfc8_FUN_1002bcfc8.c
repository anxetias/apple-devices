// name: FUN_1002bcfc8
// address: 1002bcfc8

undefined8 FUN_1002bcfc8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  short local_1a;
  
  uVar1 = FUN_1004744bf(param_1,0);
  uVar4 = 1;
  if ((uVar1 >> 0x18 & 1) == 0) {
    if (((((uVar1 >> 0xe & 1) != 0) && (lVar3 = FUN_100597c13(param_1,0), lVar3 != 0)) &&
        (*(long *)(*(long *)(lVar3 + 0x10) + 8) == 0)) &&
       (((*(uint *)(lVar3 + 100) < 0x7531 && (iVar2 = FUN_10031ab0f(lVar3,&local_1a,1), iVar2 == 0))
        && (local_1a == 0x1f6)))) {
      return 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}

