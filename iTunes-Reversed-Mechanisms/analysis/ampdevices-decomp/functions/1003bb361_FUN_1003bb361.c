// name: FUN_1003bb361
// address: 1003bb361

void FUN_1003bb361(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_1008c75f0 != 0) {
    FUN_1003bb782(DAT_1008c75e8);
    lVar2 = DAT_1008c75e0;
    DAT_1008c75e8 = 0;
    if (DAT_1008c75e0 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(DAT_1008c75d8 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    DAT_1008c75f0 = 0;
  }
  if (DAT_1008c7648 != 0) {
    FUN_10021ba92(&DAT_1008c7630,DAT_1008c7640);
    lVar2 = DAT_1008c7638;
    DAT_1008c7640 = 0;
    if (DAT_1008c7638 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(DAT_1008c7630 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    DAT_1008c7648 = 0;
  }
  uVar1 = DAT_1008c54c8;
  DAT_1008c54c8 = 0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

