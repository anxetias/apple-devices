// name: FUN_1005d1c19
// address: 1005d1c19

bool FUN_1005d1c19(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_1004744bf(param_1,0);
  if (((((uVar2 & 0xd61c72) == 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x3c) != 0x44574e4c)) &&
      ((*(uint *)(param_1 + 0xc2) >> 0xb & 1) == 0)) &&
     (*(char *)(*(long *)(param_1 + 0x58) + 0x45) == '\0')) {
    if (((*(uint *)(param_1 + 0xc2) >> 0x19 & 1) != 0) &&
       (uVar2 = FUN_100474dd0(param_1,0), (uVar2 & 0x200004) != 0)) {
      return false;
    }
    lVar3 = FUN_1005974ad(param_1,0);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x58);
    }
    cVar1 = FUN_1002b630e(lVar3);
    return cVar1 == '\0';
  }
  return false;
}

