// name: FUN_100427fb0
// address: 100427fb0

undefined1 FUN_100427fb0(long param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  if ((0xc < param_2 && param_1 != 0) && (cVar1 = FUN_100427e21(param_1 + 1), cVar1 != '\0')) {
    uVar2 = 0xffffffff;
    if ((*(char *)(param_1 + 4) == 'i') &&
       (((*(char *)(param_1 + 5) == 'T' && (*(char *)(param_1 + 6) == 'u')) &&
        (*(char *)(param_1 + 7) == 'n')))) {
      uVar3 = 0;
      uVar4 = 0;
      if (*(char *)(param_1 + 0xc) == '\0') {
        uVar3 = *(uint *)(param_1 + 8);
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar4 = 1;
        uVar2 = 0xd;
      }
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
    }
    *param_3 = uVar3;
    *param_4 = uVar2;
    return uVar4;
  }
  return 0;
}

