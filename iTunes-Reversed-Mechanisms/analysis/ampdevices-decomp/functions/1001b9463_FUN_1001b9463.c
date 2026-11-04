// name: FUN_1001b9463
// address: 1001b9463

uint FUN_1001b9463(byte *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  
  if (param_1 == (byte *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1e76(uVar5);
    }
LAB_1001b94c9:
    FUN_1001782e9(0,0);
    *param_3 = 0;
    return 0xfffd;
  }
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1e00(uVar5);
    }
    goto LAB_1001b94c9;
  }
  bVar1 = *param_1;
  uVar8 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    *param_3 = 1;
    return (uint)bVar1;
  }
  if (bVar1 < 0xe0) {
    if (param_2 == 1 || bVar1 < 0xc2) goto LAB_1001b967f;
    if (SBORROW1('\0',param_1[1] & 0xc0)) {
      *param_3 = 2;
      return param_1[1] & 0x3f | (uVar8 & 0x1f) << 6;
    }
  }
  else if (bVar1 < 0xf0) {
    if (param_2 < 3) {
LAB_1001b967f:
      *param_3 = 1;
      if (param_2 == 1) {
        return 0xfffd;
      }
      goto LAB_1001b9695;
    }
    if ((SBORROW1('\0',param_1[1] & 0xc0)) && (SBORROW1('\0',param_1[2] & 0xc0))) {
      *param_3 = 3;
      uVar3 = (bVar1 & 0xf) << 0xc;
      uVar6 = (param_1[1] & 0x3f) << 6;
      uVar7 = uVar6 | uVar3;
      uVar4 = param_1[2] & 0x3f | uVar7;
      if (uVar8 != 0xe0 && bVar1 < 0xed) {
        return uVar4;
      }
      if ((uVar6 & 0xf800 | uVar3) != 0xd800 && 0x7ff < uVar7) {
        if (uVar4 < 0xfdd0) {
          return uVar4;
        }
        if ((~uVar4 & 0xfffe) != 0 && 0xfdef < uVar4) {
          return uVar4;
        }
      }
    }
  }
  else {
    if (param_2 < 4 || 0xf4 < bVar1) goto LAB_1001b967f;
    if (((SBORROW1('\0',param_1[1] & 0xc0)) && (SBORROW1('\0',param_1[2] & 0xc0))) &&
       (SBORROW1('\0',param_1[3] & 0xc0))) {
      *param_3 = 4;
      uVar8 = (param_1[1] & 0x3f) << 0xc | (uVar8 & 7) << 0x12;
      if ((0xffff < uVar8) &&
         (uVar4 = (param_1[2] & 0x3f) << 6, uVar3 = param_1[3] & 0x3f | uVar4 | uVar8,
         (uVar4 & 0x1ff800 | uVar8) != 0xd800)) {
        if (uVar3 < 0xfdd0) {
          return uVar3;
        }
        if ((uVar8 < 0x110000) && ((uVar3 & 0xfffe) != 0xfffe)) {
          return uVar3;
        }
      }
    }
  }
  *param_3 = 1;
LAB_1001b9695:
  uVar9 = 2;
  do {
    if (!SBORROW1('\0',param_1[uVar9 - 1] & 0xc0)) {
      return 0xfffd;
    }
    *param_3 = uVar9;
    bVar10 = uVar9 != param_2;
    uVar9 = uVar9 + 1;
  } while (bVar10);
  return 0xfffd;
}

