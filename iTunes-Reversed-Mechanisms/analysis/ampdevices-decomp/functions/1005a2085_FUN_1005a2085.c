// name: FUN_1005a2085
// address: 1005a2085

undefined1 FUN_1005a2085(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  
  uVar1 = 1;
  if ((ulong)*(uint *)(param_2 + 0x10) != 0) {
    uVar3 = 0;
LAB_1005a20b8:
    piVar4 = (int *)(uVar3 * 0x78 + param_2 + 0x18);
    puVar5 = &DAT_10075a37c;
    lVar2 = 0;
    do {
      lVar6 = 0;
      do {
        if ((((*(int *)(param_1 + 0x234) == puVar5[lVar6]) &&
             (*piVar4 == (&DAT_10075a370)[lVar2 * 7])) &&
            (*(short *)((long)piVar4 + 0x1a) == (&DAT_10075a374)[lVar2 * 0xe])) &&
           (((short)piVar4[6] == (&DAT_10075a376)[lVar2 * 0xe] &&
            (piVar4[5] == (&DAT_10075a378)[lVar2 * 7])))) {
          uVar3 = uVar3 + 1;
          if (uVar3 == *(uint *)(param_2 + 0x10)) {
            return 1;
          }
          goto LAB_1005a20b8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      lVar2 = lVar2 + 1;
      puVar5 = puVar5 + 7;
    } while (lVar2 != 0x28);
    uVar1 = 0;
  }
  return uVar1;
}

