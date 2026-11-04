// name: FUN_10031c065
// address: 10031c065

void FUN_10031c065(long param_1,int *param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x4f4c5354)) && (param_2[1] != 0)) &&
     (uVar5 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
     uVar5 != 0)) {
    lVar4 = 4;
    uVar3 = 0;
    do {
      if (((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) &&
         ((lVar1 = *(long *)(param_2 + 2),
          uVar2 = (*(long *)(param_2 + 4) - lVar1 >> 3) * 0x6db6db6db6db6db7,
          uVar3 <= uVar2 && uVar2 - uVar3 != 0 &&
          ((*(int *)(lVar1 + lVar4) != 0 && *(int *)(lVar1 + -4 + lVar4) == *(int *)(param_1 + 0x88)
           && (lVar1 = FUN_1002f950a(), lVar1 != 0)))))) {
        *(uint *)(lVar1 + 0xc2) = *(uint *)(lVar1 + 0xc2) & 0xfffffeff | (uint)(param_3 & 1) << 8;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar5 != uVar3);
  }
  return;
}

