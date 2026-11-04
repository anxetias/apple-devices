// name: FUN_1004e7f5c
// address: 1004e7f5c

ulong FUN_1004e7f5c(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x35c) == '\0') {
    if (*(char *)(param_1 + 0x14cda) == '\0') {
      uVar6 = 0;
      if (*(char *)(param_1 + 0x14d2a) == '\0') goto LAB_1004e7fc5;
    }
    else {
      uVar6 = 0x18e0;
      if (*(char *)(param_1 + 0x6abf) == '\0') {
        uVar6 = 0;
      }
    }
    if (*(char *)(param_1 + 0x6ac2) != '\0') {
      uVar6 = uVar6 | 0x100;
    }
  }
  else {
    uVar6 = (ulong)(*(char *)(param_1 + 0x6abf) != '\0') << 0x2d;
  }
LAB_1004e7fc5:
  if ((*(char *)(param_1 + 0x14d04) != '\0') && (*(char *)(param_1 + 0x6ac1) != '\0')) {
    uVar6 = uVar6 | 0x2000;
  }
  if (((((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(param_1 + 0x6ac3) != '\0')) &&
       (*(char *)(param_1 + 0x15218) != '\0')) && (lVar4 = FUN_1004e8236(param_1), lVar4 != 0)) &&
     (((((*(long *)(lVar4 + 0x20) != 0 && (*(char *)(*(long *)(lVar4 + 0x20) + 0x48) != '\0')) ||
        ((*(long *)(lVar4 + 0x28) != 0 && (*(char *)(*(long *)(lVar4 + 0x28) + 0x48) != '\0')))) ||
       ((*(long *)(lVar4 + 0x30) != 0 && (*(char *)(*(long *)(lVar4 + 0x30) + 0x48) != '\0')))) ||
      ((*(long *)(lVar4 + 0x38) != 0 && (*(char *)(*(long *)(lVar4 + 0x38) + 0x48) == '\x01')))))) {
    uVar6 = uVar6 | 0x800000;
  }
  FUN_1004e8318(param_1,0);
  if (((*(char *)(param_1 + 0x6af0) != '\0') && (*(char *)(param_1 + 0x151e5) == '\0')) &&
     ((((*(char *)(param_1 + 0x6abf) != '\0' ||
        ((*(char *)(param_1 + 0x6ac2) != '\0' && ((uVar6 & 0x100) != 0)))) ||
       ((*(char *)(param_1 + 0x6ac1) != '\0' &&
        ((*(long *)(param_1 + 0x14d08) != 0 && ((uVar6 & 0x2000) != 0)))))) ||
      ((*(char *)(param_1 + 0x6ac3) != '\0' && ((uVar6 & 0x800000) != 0)))))) {
    uVar6 = (uint)(*(char *)(param_1 + 0x6af1) != '\0') << 0x19 | uVar6 | 0x1000000;
  }
  if ((((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(DAT_1008c76a0 + 0x1a91) == '\0')) &&
      (*(char *)(DAT_1008c76a0 + 0x1a92) == '\0')) && (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0')) {
    uVar6 = uVar6 | 0x4000000;
  }
  if (*(char *)(param_1 + 0x379) != '\0') {
    iVar3 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x15380));
    uVar7 = uVar6 | 0x80000000;
    if (iVar3 == 0) {
      uVar7 = uVar6;
    }
    iVar3 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x15388));
    uVar5 = uVar7 | 0x100000000;
    if (iVar3 == 0) {
      uVar5 = uVar7;
    }
    iVar3 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x15390));
    uVar6 = uVar5 | 0x800000000;
    if (iVar3 == 0) {
      uVar6 = uVar5;
    }
  }
  uVar7 = uVar6 | 0x10000000;
  if (*(char *)(param_1 + 0x6ac4) == '\0') {
    uVar7 = uVar6;
  }
  if (((*(char *)(param_1 + 0x6ac6) != '\0') && (*(char *)(param_1 + 0x14cd8) != '\0')) &&
     ((*(char *)(param_1 + 0x3a2) == '\0' || ((*(byte *)(param_1 + 0x166e0) & 0xc) == 0)))) {
    uVar7 = uVar7 | 0x20000000;
  }
  if ((*(char *)(param_1 + 900) != '\0') || (*(char *)(param_1 + 0x385) != '\0')) {
    uVar7 = uVar7 | 0x10000000000;
  }
  if ((*(char *)(param_1 + 0x14dc9) != '\0') &&
     ((*(char *)(param_1 + 0x38c) == '\0' || (FUN_100537ef0(0), DAT_1008c7854 != 0)))) {
    if (*(char *)(param_1 + 0x14cda) == '\0') {
      if (*(char *)(param_1 + 0x38c) != '\0') {
        uVar1 = *(uint *)(param_1 + 0x3dc);
        cVar2 = FUN_100537ef0(0);
        if ((cVar2 == '\0') || (DAT_1008c7854 < uVar1)) goto LAB_1004e8214;
      }
    }
    else if (*(char *)(param_1 + 0x6abf) == '\0') goto LAB_1004e8214;
    uVar7 = uVar7 | 0x40000000000;
  }
LAB_1004e8214:
  uVar5 = FUN_1004e7c76(param_1);
  uVar6 = 0;
  if ((uVar5 & uVar7) != 0) {
    uVar6 = uVar5 & uVar7 | 1;
  }
  return uVar6;
}

