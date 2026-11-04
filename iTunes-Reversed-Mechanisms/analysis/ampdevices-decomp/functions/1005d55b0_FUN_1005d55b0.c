// name: FUN_1005d55b0
// address: 1005d55b0

undefined4 FUN_1005d55b0(ulong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  byte bVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10015fc81(param_1,8);
  uVar17 = 0xffffff30;
  if (cVar2 != '\x03') goto LAB_1005d5eaa;
  FUN_10015fdc6(param_1);
  FUN_10015fb9a(param_1,0x10);
  cVar2 = FUN_10015fd4e(param_1);
  cVar3 = FUN_10015fd4e(param_1);
  FUN_10015fd4e(param_1);
  FUN_10015fc81(param_1,5);
  if (cVar2 == '\x01') {
    FUN_10015fb9a(param_1,0x10);
  }
  if (cVar3 == '\x01') {
    for (cVar2 = FUN_10015fc81(param_1,8); cVar2 != '\0'; cVar2 = cVar2 + -1) {
      FUN_10015fc81(param_1,8);
    }
  }
  if (param_1[1] <= *param_1) goto LAB_1005d5e82;
  ___bzero(param_2,0x1e0);
  cVar2 = FUN_10015fc81(param_1,8);
  if (cVar2 != '\x04') goto LAB_1005d5eaa;
  uVar4 = FUN_10015fdc6(param_1);
  *param_2 = uVar4;
  uVar4 = FUN_10015fc81(param_1,8);
  param_2[1] = uVar4;
  uVar4 = FUN_10015fc81(param_1,6);
  param_2[2] = uVar4;
  uVar4 = FUN_10015fd4e(param_1);
  param_2[3] = uVar4;
  FUN_10015fd4e(param_1);
  iVar7 = FUN_10015fb9a(param_1,0x10);
  uVar8 = FUN_10015fb9a(param_1,8);
  *(uint *)(param_2 + 4) = uVar8 | iVar7 << 8;
  iVar7 = FUN_10015fb9a(param_1,0x10);
  uVar8 = FUN_10015fb9a(param_1,0x10);
  *(uint *)(param_2 + 8) = uVar8 | iVar7 << 0x10;
  iVar7 = FUN_10015fb9a(param_1,0x10);
  uVar8 = FUN_10015fb9a(param_1,0x10);
  *(uint *)(param_2 + 0xc) = uVar8 | iVar7 << 0x10;
  if (param_1[1] <= *param_1) goto LAB_1005d5e82;
  cVar2 = FUN_10015fc81(param_1,8);
  if (cVar2 != '\x05') goto LAB_1005d5eaa;
  uVar4 = FUN_10015fdc6(param_1);
  param_2[0x10] = uVar4;
  uVar4 = FUN_10015fc81(param_1,5);
  param_2[0x11] = uVar4;
  iVar7 = FUN_1005d6010(param_1,param_2 + 0x13);
  *(int *)(param_2 + 0x14) = iVar7;
  if (iVar7 == 0) goto LAB_1005d5eaa;
  cVar2 = FUN_10015fc81(param_1,4);
  param_2[0x12] = cVar2;
  uVar16 = *param_1;
  uVar12 = param_1[1];
  if (uVar12 <= uVar16) goto LAB_1005d5e82;
  bVar5 = param_2[0x11];
  if ((4 < bVar5 - 1) && (uVar17 = 0xffffff30, bVar5 != 0x1d)) goto LAB_1005d5e7d;
  uVar4 = FUN_10015fd4e(param_1);
  param_2[0x1d0] = uVar4;
  cVar3 = FUN_10015fd4e(param_1);
  param_2[0x1d1] = cVar3;
  if (cVar3 != '\0') {
    uVar6 = FUN_10015fb9a(param_1,0xe);
    *(undefined2 *)(param_2 + 0x1d2) = uVar6;
  }
  uVar4 = FUN_10015fd4e(param_1);
  param_2[0x1d4] = uVar4;
  if (cVar2 == '\0') {
    uVar17 = 0xffffff30;
    if (0xfb < (byte)(bVar5 - 5)) {
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0x34] = uVar4;
      uVar4 = FUN_10015fc81(param_1,2);
      param_2[0x35] = uVar4;
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0x36] = uVar4;
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0x37] = uVar4;
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0x58] = uVar4;
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0x79] = uVar4;
      uVar4 = FUN_10015fc81(param_1,2);
      param_2[0x9a] = uVar4;
      uVar4 = FUN_10015fc81(param_1,3);
      param_2[0x9f] = uVar4;
      uVar4 = FUN_10015fc81(param_1,4);
      param_2[0xa8] = uVar4;
      cVar2 = FUN_10015fd4e(param_1);
      param_2[0xc9] = cVar2;
      if (cVar2 != '\0') {
        uVar4 = FUN_10015fc81(param_1,4);
        param_2[0xca] = uVar4;
      }
      cVar2 = FUN_10015fd4e(param_1);
      param_2[0xcb] = cVar2;
      if (cVar2 != '\0') {
        uVar4 = FUN_10015fc81(param_1,4);
        param_2[0xcc] = uVar4;
      }
      cVar2 = FUN_10015fd4e(param_1);
      param_2[0xcd] = cVar2;
      if (cVar2 != '\0') {
        uVar4 = FUN_10015fc81(param_1,2);
        param_2[0xce] = uVar4;
        uVar4 = FUN_10015fd4e(param_1);
        param_2[0xcf] = uVar4;
      }
      if (param_2[0x37] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fd4e(param_1);
          param_2[uVar16 + 0x38] = uVar4;
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0x48] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0x37]);
      }
      if (param_2[0x58] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fd4e(param_1);
          param_2[uVar16 + 0x59] = uVar4;
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0x69] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0x58]);
      }
      if (param_2[0x79] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fd4e(param_1);
          param_2[uVar16 + 0x7a] = uVar4;
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0x8a] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0x79]);
      }
      if (param_2[0x9a] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0x8a] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0x9a]);
      }
      if (param_2[0x9f] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0xa0] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0x9f]);
      }
      if (param_2[0xa8] != '\0') {
        uVar16 = 0;
        do {
          uVar4 = FUN_10015fd4e(param_1);
          param_2[uVar16 + 0xa9] = uVar4;
          uVar4 = FUN_10015fc81(param_1,4);
          param_2[uVar16 + 0xb9] = uVar4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (byte)param_2[0xa8]);
      }
      FUN_10015fe19(param_1,0);
      cVar2 = FUN_10015fc81(param_1,8);
      param_2[0xd0] = cVar2;
      if (cVar2 != '\0') {
        bVar15 = 1;
        do {
          uVar4 = FUN_10015fc81(param_1,8);
          param_2[(ulong)bVar15 + 0xd0] = uVar4;
          bVar15 = bVar15 + 1;
        } while (bVar15 <= (byte)param_2[0xd0]);
      }
      if (*param_1 <= param_1[1]) goto switchD_1005d588c_default;
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "bitstream->cur <= bitstream->end";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    goto LAB_1005d5e76;
  }
  uVar4 = param_2[0x13];
  puVar1 = param_2 + 0x34;
  FUN_1001c62d9(puVar1,0x19c);
  param_2[0x34] = 0;
  param_2[0x35] = bVar5;
  param_2[0x36] = uVar4;
  lVar9 = 0x14;
  lVar11 = 4;
  lVar13 = 3;
  switch(cVar2) {
  case '\x01':
    uVar4 = 0;
    break;
  case '\x02':
    goto LAB_1005d5c5e;
  case '\x03':
    *(undefined2 *)(param_2 + 0x37) = 2;
    lVar9 = 0x15;
    uVar4 = 1;
    lVar11 = 5;
    lVar13 = 0x14;
    cVar2 = '\0';
    break;
  case '\x04':
    *(undefined2 *)(param_2 + 0x37) = 2;
    *(undefined2 *)(param_2 + 0x48) = 0;
    param_2[0x39] = 1;
    uVar4 = 0;
    goto LAB_1005d5c28;
  case '\x05':
    *(undefined2 *)(param_2 + 0x37) = 2;
    *(undefined2 *)(param_2 + 0x48) = 0;
    param_2[0x39] = 1;
    uVar4 = 1;
LAB_1005d5c28:
    cVar2 = '\x01';
    lVar13 = 0x45;
    lVar11 = 0x46;
    lVar9 = 0x56;
    uVar14 = 1;
    goto LAB_1005d5c9e;
  case '\x06':
    *(undefined2 *)(param_2 + 0x37) = 2;
    *(undefined2 *)(param_2 + 0x48) = 0;
    param_2[0x39] = 1;
    *(undefined2 *)(param_2 + 0x79) = 0x101;
    lVar9 = 0x67;
    lVar11 = 0x66;
    lVar13 = 0x56;
LAB_1005d5c5e:
    cVar2 = '\x01';
    uVar14 = 0;
    uVar4 = 1;
    goto LAB_1005d5c9e;
  case '\a':
    *(undefined2 *)(param_2 + 0x37) = 2;
    uVar4 = 1;
    param_2[0x39] = 1;
    param_2[0x48] = 0;
    *(undefined2 *)(param_2 + 0x58) = 0x101;
    param_2[0x69] = 1;
    *(undefined2 *)(param_2 + 0x79) = 0x101;
    lVar9 = 0x67;
    lVar11 = 0x66;
    cVar2 = '\x02';
    lVar13 = 0x56;
    break;
  default:
    goto switchD_1005d588c_default;
  }
  uVar14 = 0;
LAB_1005d5c9e:
  puVar1[lVar13] = cVar2;
  puVar1[lVar11] = uVar4;
  puVar1[lVar9] = uVar14;
switchD_1005d588c_default:
  lVar9 = 0x1d5;
  uVar4 = 3;
  uVar8 = (uint)bVar5;
  if (bVar5 < 0x14) {
    if (uVar8 != 5) {
      if (uVar8 == 6) goto LAB_1005d5d0e;
      goto LAB_1005d5d1d;
    }
LAB_1005d5cd6:
    param_2[0x18] = bVar5;
    *(undefined4 *)(param_2 + 0x28) = 1;
    if (bVar5 == 0x1d) {
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
    iVar7 = FUN_1005d6010(param_1,0);
    *(int *)(param_2 + 0x1c) = iVar7;
    if (iVar7 != 0) {
      lVar9 = 0x11;
      uVar4 = 5;
      goto LAB_1005d5d0e;
    }
LAB_1005d5e70:
    uVar17 = 0xffffff30;
  }
  else {
    if (bVar5 != 0x14) {
      if (uVar8 != 0x1d) goto LAB_1005d5d1d;
      goto LAB_1005d5cd6;
    }
LAB_1005d5d0e:
    uVar4 = FUN_10015fc81(param_1,uVar4);
    param_2[lVar9] = uVar4;
LAB_1005d5d1d:
    if (param_2[0x1d4] == '\0') {
      uVar17 = 0;
    }
    else {
      if (uVar8 < 0x18) {
        if ((0x9a0000U >> (uVar8 & 0x1f) & 1) == 0) {
          if (uVar8 == 0x16) {
            uVar4 = FUN_10015fc81(param_1,5);
            param_2[0x1d6] = uVar4;
            uVar6 = FUN_10015fb9a(param_1,0xb);
            *(undefined2 *)(param_2 + 0x1d8) = uVar6;
          }
        }
        else {
          uVar4 = FUN_10015fd4e(param_1);
          param_2[0x1da] = uVar4;
          uVar4 = FUN_10015fd4e(param_1);
          param_2[0x1db] = uVar4;
          uVar4 = FUN_10015fd4e(param_1);
          param_2[0x1dc] = uVar4;
        }
      }
      cVar2 = FUN_10015fd4e(param_1);
      param_2[0x1dd] = cVar2;
      uVar17 = 0xffffff30;
      if (cVar2 == '\0') {
        uVar17 = 0;
      }
    }
    if (param_1[1] <= *param_1) {
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "bitstream->cur < bitstream->end";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005d5e70;
    }
    if ((param_2[0x11] != '\x05') && (0xf < ((int)param_1[1] - (int)*param_1) * 8 - (int)param_1[2])
       ) {
      iVar7 = FUN_10015fb9a(param_1,0xb);
      *(int *)(param_2 + 0x24) = iVar7;
      if (iVar7 == 0x2b7) {
        cVar2 = FUN_10015fc81(param_1,5);
        param_2[0x18] = cVar2;
        if (cVar2 == '\x05') {
          bVar5 = FUN_10015fd4e(param_1);
          *(uint *)(param_2 + 0x28) = (uint)bVar5;
          if (bVar5 != 0) {
            iVar7 = FUN_1005d6010(param_1,0);
            *(int *)(param_2 + 0x1c) = iVar7;
            if (iVar7 == 0) goto LAB_1005d5e70;
            if (0xb < ((int)param_1[1] - (int)*param_1) * 8 - (int)param_1[2]) {
              iVar7 = FUN_10015fb9a(param_1,0xb);
              *(int *)(param_2 + 0x2c) = iVar7;
              if (iVar7 == 0x548) {
                bVar5 = FUN_10015fd4e(param_1);
                *(uint *)(param_2 + 0x30) = (uint)bVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_1005d5e76:
  uVar16 = *param_1;
  uVar12 = param_1[1];
LAB_1005d5e7d:
  if (uVar12 <= uVar16) {
LAB_1005d5e82:
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "bitstream->cur < bitstream->end";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar17 = 0xffffff30;
  }
LAB_1005d5eaa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

