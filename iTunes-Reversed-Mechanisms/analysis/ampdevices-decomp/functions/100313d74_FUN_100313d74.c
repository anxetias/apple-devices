// name: FUN_100313d74
// address: 100313d74

int * FUN_100313d74(long param_1)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 4);
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar5 = (int *)(param_1 + 8);
    piVar1 = (int *)0x0;
    do {
      if (piVar5[4] != 0) {
        uVar4 = piVar5[1] * *piVar5;
        bVar6 = uVar3 <= uVar4;
        if (uVar3 < uVar4) {
          uVar3 = uVar4;
        }
        if (bVar6) {
          piVar1 = piVar5;
        }
      }
      piVar5 = piVar5 + 0xe;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return piVar1;
  }
  return (int *)0x0;
}

