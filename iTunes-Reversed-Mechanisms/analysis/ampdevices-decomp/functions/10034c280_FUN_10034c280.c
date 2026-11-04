// name: FUN_10034c280
// address: 10034c280

uint FUN_10034c280(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x16710));
  uVar3 = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 0x16718) < lVar1) {
    uVar4 = *(uint *)(param_1 + 0x166f8);
  }
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x16748));
  if (*(long *)(param_1 + 0x16750) < lVar1) {
    uVar3 = *(uint *)(param_1 + 0x16730);
  }
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x16780));
  uVar5 = 0;
  uVar2 = 0;
  if (*(long *)(param_1 + 0x16788) < lVar1) {
    uVar2 = *(uint *)(param_1 + 0x16768);
  }
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x167b8));
  if (*(long *)(param_1 + 0x167c0) < lVar1) {
    uVar5 = *(uint *)(param_1 + 0x167a0);
  }
  uVar5 = uVar3 | uVar4 | uVar2 | uVar5;
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x167c8));
  uVar4 = uVar5 | 0x10;
  if (lVar1 < 1) {
    uVar4 = uVar5;
  }
  if (*(char *)(param_1 + 0x337) != '\0') {
    if (*(uint *)(param_1 + 0x166d8) == 0) {
      if ((uVar4 & 0x1b) != 0) {
        uVar4 = uVar4 | 0x20;
      }
    }
    else {
      uVar4 = uVar4 | *(uint *)(param_1 + 0x166d8) & 0x20;
    }
  }
  return uVar4;
}

