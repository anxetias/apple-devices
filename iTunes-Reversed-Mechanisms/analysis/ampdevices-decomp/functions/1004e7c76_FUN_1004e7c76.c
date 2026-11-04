// name: FUN_1004e7c76
// address: 1004e7c76

ulong FUN_1004e7c76(long param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  cVar1 = *(char *)(DAT_1008c76a0 + 0x1a91);
  if ((cVar1 == '\0') && (*(char *)(DAT_1008c76a0 + 0x1a92) == '\0')) {
    bVar4 = *(char *)(DAT_1008c76a0 + 0x1a93) == '\0';
  }
  else {
    bVar4 = false;
  }
  if (*(char *)(param_1 + 0x35c) == '\0') {
    uVar3 = 0x20000093f;
    if (*(char *)(param_1 + 0x33b) == '\0') {
      uVar3 = 0x1f;
    }
    uVar2 = uVar3 + 0x40;
    if (*(char *)(param_1 + 0x34e) == '\0') {
      uVar2 = uVar3;
    }
    uVar3 = uVar2 + 0x80;
    if (*(char *)(param_1 + 0x34f) == '\0') {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 + 0x14000;
    if (*(char *)(param_1 + 0x353) == '\0') {
      uVar2 = uVar3;
    }
  }
  else {
    uVar2 = 0x20000000001f;
  }
  uVar3 = uVar2 | 0xa000;
  if (*(char *)(param_1 + 0x33c) == '\0') {
    uVar3 = uVar2;
  }
  if ((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(param_1 + 0x15218) != '\0')) {
    uVar2 = 0xf000800000;
    if (*(char *)(param_1 + 0x6684) == '\0') {
      uVar2 = 0x800000;
    }
    uVar3 = uVar3 | uVar2;
  }
  if ((*(char *)(param_1 + 0x35a) != '\0') && (*(char *)(DAT_1008c76a0 + 0x1a94) == '\0')) {
    if (cVar1 != '\0') goto LAB_1004e7d93;
    if (((*(char *)(DAT_1008c76a0 + 0x1a92) == '\0') && (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0'))
       && (0x3ff < *(ushort *)(param_1 + 100))) {
      uVar3 = uVar3 | 0x3000000;
    }
  }
  if (((cVar1 == '\0' && *(char *)(param_1 + 0x359) != '\0') &&
      (*(char *)(DAT_1008c76a0 + 0x1a92) == '\0')) && (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0')) {
    uVar3 = uVar3 | 0x4000000;
  }
LAB_1004e7d93:
  if ((((*(char *)(param_1 + 0x333) != '\0') || (*(char *)(param_1 + 0x334) != '\0')) ||
      ((*(char *)(param_1 + 0x335) != '\0' ||
       ((*(char *)(param_1 + 0x336) != '\0' || (*(char *)(param_1 + 0x337) != '\0')))))) &&
     (((bool)(*(char *)(param_1 + 0x14cd8) != '\0' & bVar4) &&
      (cVar1 = FUN_10043193e(param_1), cVar1 == '\0')))) {
    uVar3 = (ulong)(*(char *)(param_1 + 0x37c) != '\0') << 0x2f | uVar3 | 0x80000;
  }
  uVar2 = uVar3 | 0x1000;
  if (*(char *)(param_1 + 0x39c) == '\0') {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 | 0x980000000;
  if (*(char *)(param_1 + 0x379) == '\0') {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 | 0x10000000;
  if (*(char *)(param_1 + 0x6ac4) == '\0') {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 | 0x20000000;
  if (!bVar4) {
    uVar3 = uVar2;
  }
  if (*(char *)(param_1 + 0x6ac6) == '\0') {
    uVar3 = uVar2;
  }
  if ((*(char *)(param_1 + 900) != '\0') || (*(char *)(param_1 + 0x385) != '\0')) {
    uVar3 = uVar3 | 0x10000000000;
  }
  uVar2 = uVar3 | 0x40000000000;
  if (*(char *)(param_1 + 0x38b) == '\0') {
    uVar2 = uVar3;
  }
  if ((*(char *)(param_1 + 0x3a2) == '\0') || (*(char *)(param_1 + 0x16847) == '\0')) {
    cVar1 = FUN_1004e7efc(param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (ulong)((uint)uVar2 & 0x7000007);
  }
  return uVar2;
}

