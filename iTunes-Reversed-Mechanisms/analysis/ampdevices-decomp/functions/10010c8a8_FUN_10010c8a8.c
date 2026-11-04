// name: FUN_10010c8a8
// address: 10010c8a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c8a8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  lVar1 = 0;
  fVar3 = DAT_100700c38;
  do {
    uVar2 = _sinf(fVar3 * _DAT_100700c3c);
    *(undefined4 *)(param_1 + 0x1db48 + lVar1 * 4) = uVar2;
    fVar3 = fVar3 + DAT_100700b50;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  lVar1 = 0;
  fVar3 = DAT_100700b50;
  do {
    uVar2 = _sinf(fVar3 * _DAT_100700c40);
    *(undefined4 *)(param_1 + 0x1db5c + lVar1 * 4) = uVar2;
    fVar3 = fVar3 + DAT_100700b50;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  *(undefined4 *)(param_1 + 0x1db58) = 0;
  lVar1 = 0;
  fVar3 = DAT_100700c44;
  do {
    uVar2 = _sinf(fVar3 * _DAT_100700c48);
    *(undefined4 *)(param_1 + 0x1db68 + lVar1 * 4) = uVar2;
    fVar3 = fVar3 + DAT_100700b50;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  lVar1 = 0;
  fVar3 = DAT_100700b50;
  do {
    uVar2 = _sinf(fVar3 * _DAT_100700c4c);
    *(undefined4 *)(param_1 + 0x1db8c + lVar1 * 4) = uVar2;
    fVar3 = fVar3 + DAT_100700b50;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 7);
  *(undefined4 *)(param_1 + 0x1db88) = 0;
  return;
}

