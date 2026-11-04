// name: FUN_1002e23b8
// address: 1002e23b8

undefined8 FUN_1002e23b8(long param_1,int param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x330);
  *(uint *)(param_1 + 0x330) = uVar2 & 0xfffffff7;
  if (param_2 == 0x43442020) {
    *(uint *)(param_1 + 0x330) = uVar2 | 8;
    return 0;
  }
  if (param_2 == 0x48545450) {
    return 0;
  }
  if (param_2 != 0x46494c45) {
    return 0xffffffce;
  }
  cVar1 = FUN_10041520b(param_3);
  if (cVar1 != '\0') {
    return 0xffffffce;
  }
  if (*(int *)(param_3 + 0x420) == 0x6469736b) {
    return 0;
  }
  if (*(int *)(param_3 + 0x420) == 0x666f6c64) {
    return 0;
  }
  cVar1 = FUN_10017cbd0(param_3);
  lVar3 = param_3;
  if (cVar1 == '\0') {
    lVar3 = 0;
  }
  uVar2 = FUN_100536871(lVar3,0,*(undefined4 *)(param_3 + 0x420),1);
  if ((int)uVar2 < 0x4000) {
    if ((int)uVar2 < 0x80) {
      if (0x10 < uVar2) {
        return 0xffffffce;
      }
      if ((0x10114U >> (uVar2 & 0x1f) & 1) == 0) {
        return 0xffffffce;
      }
      return 0;
    }
    if (0xfff < (int)uVar2) {
      if (uVar2 == 0x1000) {
        return 0;
      }
      if (uVar2 != 0x2000) {
        return 0xffffffce;
      }
      return 0;
    }
    if (uVar2 == 0x80) {
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 8;
      return 0;
    }
    if (uVar2 != 0x100) {
      return 0xffffffce;
    }
    return 0;
  }
  if ((int)uVar2 < 0x80000) {
    if (0x1ffff < (int)uVar2) {
      if (uVar2 != 0x20000) {
        if (uVar2 != 0x40000) {
          return 0xffffffce;
        }
        return 0;
      }
      if (*(int *)(lVar4 + 0x84) != 0x646f5069) {
        return 0xffffffce;
      }
      lVar4 = FUN_1004de07b(lVar4);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x6acf) != '\0') {
          return 0xffffffce;
        }
        if (*(int *)(lVar4 + 0x6b0c) != 0) {
          return 0xffffffce;
        }
        return 0;
      }
      return 0;
    }
    if (uVar2 == 0x4000) {
      return 0;
    }
    if (uVar2 != 0x8000) {
      return 0xffffffce;
    }
    if (*(int *)(lVar4 + 0x84) != 0x646f5069) {
      return 0xffffffce;
    }
    lVar3 = FUN_1004de07b(lVar4);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x6acf) != '\0') {
        return 0xffffffce;
      }
      if (*(int *)(lVar3 + 0x6b0c) != 0) {
        return 0xffffffce;
      }
    }
    if (*(long *)(lVar4 + 0x2d10) == 0) {
      return 0xffffffce;
    }
    cVar1 = *(char *)(*(long *)(lVar4 + 0x2d10) + 0x31a);
  }
  else {
    if (0x7fffff < (int)uVar2) {
      if (uVar2 != 0x800000) {
        if (uVar2 != 0x1000000) {
          return 0xffffffce;
        }
        if (*(int *)(lVar4 + 0x84) != 0x646f5069) {
          return 0xffffffce;
        }
        return 0;
      }
      if (*(int *)(lVar4 + 0x84) != 0x2062696c) {
        return 0xffffffce;
      }
      bVar5 = (bool)(*(byte *)(param_1 + 0x240) >> 2 & 1);
      goto LAB_1002e2661;
    }
    if (uVar2 == 0x80000) {
      return 0;
    }
    if (uVar2 != 0x100000) {
      return 0xffffffce;
    }
    if (*(int *)(lVar4 + 0x84) != 0x646f5069) {
      return 0xffffffce;
    }
    lVar3 = FUN_1004de07b(lVar4);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x6acf) != '\0') {
        return 0xffffffce;
      }
      if (*(int *)(lVar3 + 0x6b0c) != 0) {
        return 0xffffffce;
      }
    }
    if (*(long *)(lVar4 + 0x2d10) == 0) {
      return 0xffffffce;
    }
    cVar1 = *(char *)(*(long *)(lVar4 + 0x2d10) + 0x32d);
  }
  bVar5 = cVar1 != '\0';
LAB_1002e2661:
  if (bVar5 == false) {
    return 0xffffffce;
  }
  return 0;
}

