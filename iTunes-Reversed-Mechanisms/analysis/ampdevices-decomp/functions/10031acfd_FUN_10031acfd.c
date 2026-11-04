// name: FUN_10031acfd
// address: 10031acfd

int FUN_10031acfd(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint local_23c;
  int local_238 [140];
  
  iVar1 = FUN_100313af0();
  iVar2 = 0;
  if ((iVar1 == 0) && (uVar4 = (ulong)local_23c, uVar4 != 0)) {
    piVar3 = (int *)0x0;
    piVar5 = local_238;
    uVar6 = 0;
    do {
      if (piVar5[4] != 0) {
        uVar7 = piVar5[1] * *piVar5;
        bVar8 = uVar6 <= uVar7;
        if (uVar6 < uVar7) {
          uVar6 = uVar7;
        }
        if (bVar8) {
          piVar3 = piVar5;
        }
      }
      piVar5 = piVar5 + 0xe;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piVar3[4];
    }
  }
  return iVar2;
}

