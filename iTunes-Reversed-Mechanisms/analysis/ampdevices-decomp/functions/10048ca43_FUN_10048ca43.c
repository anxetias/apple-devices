// name: FUN_10048ca43
// address: 10048ca43

void FUN_10048ca43(long param_1,int *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x4f4c5354)) && (param_2[1] != 0)) &&
     (uVar4 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
     uVar4 != 0)) {
    lVar5 = 0x10;
    uVar3 = 0;
    do {
      if (((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) &&
         ((lVar1 = *(long *)(param_2 + 2),
          uVar2 = (*(long *)(param_2 + 4) - lVar1 >> 3) * 0x6db6db6db6db6db7,
          uVar3 <= uVar2 && uVar2 - uVar3 != 0 &&
          ((*(int *)(lVar1 + lVar5) != 0 && *(int *)(lVar1 + -4 + lVar5) == *(int *)(param_1 + 0x58)
           && (lVar1 = FUN_1004839f2(), lVar1 != 0)))))) {
        FUN_1004861af(lVar1,param_3);
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x38;
    } while (uVar4 != uVar3);
  }
  return;
}

