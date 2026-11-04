// name: FUN_1002bcf4c
// address: 1002bcf4c

bool FUN_1002bcf4c(undefined8 param_1,char param_2,char param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar1 = FUN_1004744bf(param_1,0);
  if ((uVar1 & 0x1004000) != 0) {
    bVar3 = false;
    lVar2 = FUN_100597c13(param_1,0);
    if (lVar2 != 0) {
      if (((param_2 == '\0') && ((uVar1 >> 0xe & 1) != 0)) &&
         (*(long *)(*(long *)(lVar2 + 0x10) + 8) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = (uVar1 >> 0x18 & 1) == 0 || param_3 != '\0';
      }
    }
  }
  return bVar3;
}

