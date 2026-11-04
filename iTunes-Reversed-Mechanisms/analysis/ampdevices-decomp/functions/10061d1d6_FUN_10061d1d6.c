// name: FUN_10061d1d6
// address: 10061d1d6

uint FUN_10061d1d6(long param_1,long param_2,char param_3)

{
  short sVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  
  sVar1 = *(short *)(param_2 + 0x10);
  if (sVar1 == 0x23) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  if (sVar1 == 0x20) {
    if (*(char *)(lVar3 + 0x31c) == '\0') {
      return 0;
    }
    if (*(char *)(lVar3 + 0xd30) == '\0') {
      return 0;
    }
    cVar4 = FUN_100537825();
    if (cVar4 == '\0') {
      return 0;
    }
    if ((*(byte *)(param_2 + 0x331) & 8) != 0) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x3a8) != '\0') {
      return 0;
    }
    if (*(char *)(lVar2 + 0x38a) == '\0') {
      if (*(char *)(lVar2 + 0x394) == '\0') {
        return 0;
      }
      if (*(char *)(lVar3 + 0x28b) != '\x01') {
        if (*(char *)(lVar3 + 0x28b) != '\x02') {
          return 0;
        }
        cVar4 = FUN_1002be216(*(undefined8 *)(lVar3 + 0x7c8),*(undefined8 *)(param_2 + 0x60));
        if (cVar4 == '\0') {
          return 0;
        }
      }
      return 0xfe182321;
    }
    if (param_3 == '\0' && *(char *)(lVar3 + 0x28b) == '\x01') {
      return 0xfe182763;
    }
    if (*(char *)(lVar3 + 0x28b) != '\x02') {
      return 0;
    }
    cVar4 = FUN_1002be216(*(undefined8 *)(lVar3 + 0x7c8),*(undefined8 *)(param_2 + 0x60));
    if (cVar4 != '\0') {
      return 0xfe182763;
    }
    return 0;
  }
  if (sVar1 == 10) {
    if (*(char *)(lVar3 + 0xd31) == '\0') {
      return 0;
    }
    return (uint)(*(char *)(lVar3 + 0x2da) != '\0') << 2;
  }
  if (*(char *)(lVar3 + 0xd30) == '\0') {
    uVar5 = 0;
    goto LAB_10061d708;
  }
  uVar5 = 0;
  if (*(char *)(lVar3 + 0x31c) != '\0') {
    if (*(char *)(lVar3 + 0x36) == '\0') {
      uVar5 = 0xfe182321;
      if ((*(byte *)(param_2 + 0x240) & 4) == 0) {
        if (*(char *)(lVar3 + 0x28b) == '\x02') {
          cVar4 = FUN_1002be199(param_2,*(undefined8 *)(lVar3 + 0x7c8),param_3,
                                *(undefined1 *)(lVar2 + 0x372));
          uVar5 = 0;
          if (cVar4 != '\0') {
            cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,1,0xfe182321,
                                  (uint)(*(char *)(lVar2 + 0x39b) == '\0') << 0x10 | 0xe61cde);
            goto LAB_10061d44a;
          }
        }
        else {
          uVar5 = 0;
          if (*(char *)(lVar3 + 0x28b) == '\x01') {
            cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,1,0xfe182321,
                                  (uint)(*(char *)(lVar2 + 0x39b) == '\0') << 0x10 | 0xe61cde);
LAB_10061d44a:
            uVar5 = 0;
            if (cVar4 != '\0') {
              uVar5 = 0xfe182321;
            }
          }
        }
      }
    }
    else if ((*(char *)(lVar3 + 0x40) == '\0') &&
            (uVar5 = 0x100000, (*(byte *)(param_2 + 0x240) & 4) == 0)) {
      if (*(char *)(lVar3 + 0x3a4) == '\x02') {
        cVar4 = FUN_1002be216(*(undefined8 *)(lVar3 + 0x7c8),*(undefined8 *)(param_2 + 0x60));
        uVar5 = 0;
        if (cVar4 != '\0') {
          cVar4 = FUN_1002bdfcb(param_2,0,1,1,0x100000,0);
          goto LAB_10061d49a;
        }
      }
      else {
        uVar5 = 0;
        if (*(char *)(lVar3 + 0x3a4) == '\x01') {
          cVar4 = FUN_1002bdfcb(param_2,0,1,1,0x100000,0);
LAB_10061d49a:
          uVar5 = (uint)(cVar4 != '\0') << 0x14;
        }
      }
    }
  }
  if ((*(char *)(lVar3 + 0x318) != '\0') && (*(char *)(lVar3 + 0x38) == '\0')) {
    if ((*(byte *)(param_2 + 0x240) & 4) == 0) {
      if (*(char *)(lVar3 + 0x319) == '\x01') {
        cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,2,0x402,0x218004);
        if (cVar4 != '\0') {
          uVar5 = uVar5 | 0x402;
        }
      }
      else {
        cVar4 = FUN_1002be199(param_2,*(undefined8 *)(lVar3 + 0x7f0),param_3,
                              *(undefined1 *)(lVar2 + 0x372));
        if (cVar4 != '\0') {
          cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,2,0x402,0x218004);
          if (cVar4 != '\0') {
            uVar5 = uVar5 | 0x402;
          }
        }
      }
    }
    else {
      uVar5 = uVar5 | 0x402;
    }
  }
  if ((*(char *)(lVar3 + 0x328) != '\0') && (*(char *)(lVar3 + 0x3a) == '\0')) {
    if ((*(byte *)(param_2 + 0x240) & 4) == 0) {
      if (((*(char *)(lVar3 + 0x329) == '\x01') && (*(char *)(lVar3 + 0x32a) == '\0')) &&
         (*(char *)(lVar3 + 0x32b) == '\0')) {
        cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,2,0x40,0x18000);
        if (cVar4 != '\0') {
          uVar5 = uVar5 | 0x40;
        }
      }
      else {
        cVar4 = FUN_1002be199(param_2,*(undefined8 *)(lVar3 + 0x810),param_3,
                              *(undefined1 *)(lVar2 + 0x372));
        if (cVar4 != '\0') {
          cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,2,0x40,0x18000);
          if (cVar4 != '\0') {
            uVar5 = uVar5 | 0x40;
          }
        }
      }
    }
    else {
      uVar5 = uVar5 | 0x40;
    }
  }
  if ((*(char *)(lVar3 + 0x39c) != '\0') && (*(char *)(lVar3 + 0x3f) == '\0')) {
    if ((*(byte *)(param_2 + 0x240) & 4) == 0) {
      if (*(char *)(lVar3 + 0x39d) == '\x01') {
        cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,8,8,0);
        if (cVar4 != '\0') {
          uVar5 = uVar5 | 8;
        }
      }
      else {
        cVar4 = FUN_1002be199(param_2,*(undefined8 *)(lVar3 + 0x838),param_3,
                              *(undefined1 *)(lVar2 + 0x372));
        if (cVar4 != '\0') {
          cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),1,8,8,0);
          if (cVar4 != '\0') {
            uVar5 = uVar5 | 8;
          }
        }
      }
    }
    else {
      uVar5 = (uint)(*(char *)(*(long *)(param_1 + 0x10) + 0x39e) != '\0') << 0x17 | uVar5 | 8;
    }
  }
  if (((*(char *)(lVar3 + 0x39e) != '\0') && (*(char *)(lVar3 + 0x42) == '\0')) &&
     ((*(byte *)(param_2 + 0x240) & 4) != 0)) {
    uVar5 = uVar5 | 0xc00000;
  }
LAB_10061d708:
  if (((*(char *)(lVar3 + 0xd31) != '\0') && (*(char *)(lVar3 + 0x2da) != '\0')) &&
     (((*(char *)(lVar3 + 0x2d9) == '\x01' &&
       ((*(char *)(lVar3 + 0x2db) == '\0' && (*(char *)(lVar3 + 0x31b) == '\0')))) ||
      (cVar4 = FUN_1002be199(param_2,*(undefined8 *)(lVar3 + 0x828),param_3,
                             *(undefined1 *)(lVar2 + 0x372)), cVar4 != '\0')))) {
    cVar4 = FUN_1002bdfcb(param_2,*(undefined1 *)(lVar2 + 0x372),*(undefined1 *)(lVar2 + 0x346),4,4,
                          0x200000);
    if (cVar4 != '\0') {
      uVar5 = uVar5 | 4;
    }
  }
  if (*(char *)(lVar2 + 0x379) != '\0') {
    uVar5 = uVar5 | (*(uint *)(param_2 + 0x240) & 4) << 0xd;
  }
  if (*(char *)(lVar2 + 0x39b) != '\0') {
    uVar5 = uVar5 | (*(uint *)(param_2 + 0x240) & 4) << 0xe;
  }
  return uVar5;
}

