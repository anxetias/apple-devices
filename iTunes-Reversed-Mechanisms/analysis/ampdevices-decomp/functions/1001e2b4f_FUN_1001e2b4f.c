// name: FUN_1001e2b4f
// address: 1001e2b4f

undefined1 FUN_1001e2b4f(byte *param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 uVar13;
  uint local_13c;
  char local_138;
  byte abStack_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc50f(uVar6);
    }
    goto LAB_1001e30a2;
  }
  FUN_1001c62d9(param_2,4);
  if (param_1 == (byte *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc499(uVar6);
    }
    goto LAB_1001e30a2;
  }
  pcVar2 = _strchr((char *)param_1,0x2e);
  if (pcVar2 == (char *)0x0) {
    uVar13 = 0;
    goto LAB_1001e30ae;
  }
  local_138 = '\0';
  bVar7 = *param_1;
  if (bVar7 != 0) {
    local_138 = (char)pcVar2 - (char)param_1;
    lVar9 = 0;
    do {
      if (local_138 == (char)lVar9) goto LAB_1001e2be8;
      abStack_137[lVar9] = bVar7;
      bVar7 = param_1[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (bVar7 != 0);
    local_138 = (char)lVar9;
  }
LAB_1001e2be8:
  local_13c = 0;
  FUN_1001e3108(&local_138,&local_13c);
  if (0xff < local_13c) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc1d5(uVar6);
    }
    goto LAB_1001e30a2;
  }
  param_2[3] = (char)local_13c;
  pbVar12 = (byte *)(pcVar2 + 1);
  pcVar3 = _strchr((char *)pbVar12,0x2e);
  if (pcVar3 != (char *)0x0) {
    local_138 = '\0';
    bVar7 = *pbVar12;
    if (bVar7 != 0) {
      local_138 = (char)pcVar3 - (char)pbVar12;
      lVar9 = 0;
      do {
        if (local_138 == (char)lVar9) goto LAB_1001e2c6e;
        abStack_137[lVar9] = bVar7;
        bVar7 = pcVar2[lVar9 + 2];
        lVar9 = lVar9 + 1;
      } while (bVar7 != 0);
      local_138 = (char)lVar9;
    }
LAB_1001e2c6e:
    local_13c = 0;
    FUN_1001e3108(&local_138,&local_13c);
    if (local_13c < 0x10) {
      cVar1 = (char)local_13c;
      param_2[2] = cVar1 << 4;
      pbVar12 = (byte *)(pcVar3 + 1);
      pcVar2 = _strchr((char *)pbVar12,0x2e);
      if (pcVar2 != (char *)0x0) {
        param_2[2] = cVar1;
        local_138 = '\0';
        bVar7 = *pbVar12;
        if (bVar7 != 0) {
          local_138 = (char)pcVar2 - (char)pbVar12;
          lVar9 = 0;
          do {
            if (local_138 == (char)lVar9) goto LAB_1001e2cfb;
            abStack_137[lVar9] = bVar7;
            bVar7 = pcVar3[lVar9 + 2];
            lVar9 = lVar9 + 1;
          } while (bVar7 != 0);
          local_138 = (char)lVar9;
        }
LAB_1001e2cfb:
        local_13c = 0;
        FUN_1001e3108(&local_138,&local_13c);
        param_2[1] = (undefined1)local_13c;
        sVar4 = _strlen((char *)param_1);
        local_138 = '\0';
        bVar7 = pcVar2[1];
        if (bVar7 != 0) {
          local_138 = ((char)param_1 - ((char)pcVar2 + '\x01')) + (char)sVar4;
          lVar9 = 0;
          do {
            if (local_138 == (char)lVar9) goto LAB_1001e2d6b;
            abStack_137[lVar9] = bVar7;
            bVar7 = pcVar2[lVar9 + 2];
            lVar9 = lVar9 + 1;
          } while (bVar7 != 0);
          local_138 = (char)lVar9;
        }
LAB_1001e2d6b:
        local_13c = 0;
        FUN_1001e3108(&local_138,&local_13c);
        *param_2 = (undefined1)local_13c;
        uVar13 = 1;
        goto LAB_1001e30ae;
      }
      uVar11 = 0;
      while( true ) {
        uVar8 = pbVar12[uVar11] - 0x61;
        if (((uVar8 < 6) && ((0x2bU >> (uVar8 & 0x1f) & 1) != 0)) || (pbVar12[uVar11] == 0)) break;
        uVar11 = uVar11 + 1;
      }
      local_138 = '\0';
      bVar7 = *pbVar12;
      if (bVar7 != 0) {
        uVar5 = 0;
        uVar10 = uVar11 & 0xffffffff;
        do {
          cVar1 = (char)uVar10;
          uVar10 = (ulong)(byte)(cVar1 - 1);
          if (cVar1 == '\0') {
            uVar5 = uVar11 & 0xffffffff;
            break;
          }
          abStack_137[uVar5] = bVar7;
          bVar7 = pcVar3[uVar5 + 2];
          uVar5 = uVar5 + 1;
        } while (bVar7 != 0);
        local_138 = (char)uVar5;
      }
      local_13c = 0;
      FUN_1001e3108(&local_138,&local_13c);
      if (local_13c < 0x10) {
        pbVar12 = pbVar12 + uVar11;
        param_2[2] = param_2[2] | (byte)local_13c;
        goto LAB_1001e2f7f;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006bc2c1(uVar6);
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006bc24b(uVar6);
      }
    }
    goto LAB_1001e30a2;
  }
  uVar11 = 0;
  while( true ) {
    uVar8 = pbVar12[uVar11] - 0x61;
    if (((uVar8 < 6) && ((0x2bU >> (uVar8 & 0x1f) & 1) != 0)) || (pbVar12[uVar11] == 0)) break;
    uVar11 = uVar11 + 1;
  }
  local_138 = '\0';
  bVar7 = *pbVar12;
  if (bVar7 != 0) {
    uVar5 = 0;
    uVar10 = uVar11 & 0xffffffff;
    do {
      cVar1 = (char)uVar10;
      uVar10 = (ulong)(byte)(cVar1 - 1);
      if (cVar1 == '\0') {
        uVar5 = uVar11 & 0xffffffff;
        break;
      }
      abStack_137[uVar5] = bVar7;
      bVar7 = pcVar2[uVar5 + 2];
      uVar5 = uVar5 + 1;
    } while (bVar7 != 0);
    local_138 = (char)uVar5;
  }
  local_13c = 0;
  FUN_1001e3108(&local_138,&local_13c);
  if (0xf < local_13c) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc337(uVar6);
    }
    goto LAB_1001e30a2;
  }
  pbVar12 = pbVar12 + uVar11;
  param_2[2] = (char)local_13c << 4;
LAB_1001e2f7f:
  switch(*pbVar12) {
  case 0x61:
    param_2[1] = 0x40;
    break;
  case 0x62:
    param_2[1] = 0x60;
    break;
  case 99:
  case 0x65:
switchD_1001e2f99_caseD_63:
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc3ad(uVar6);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001e2fcb;
  case 100:
    param_2[1] = 0x20;
    break;
  case 0x66:
    param_2[1] = 0x80;
    if (pbVar12[1] == 99) {
      pbVar12 = pbVar12 + 1;
    }
    break;
  default:
    if (*pbVar12 != 0) goto switchD_1001e2f99_caseD_63;
LAB_1001e2fcb:
    param_2[1] = 0x80;
  }
  uVar13 = 1;
  if (*pbVar12 != 0) {
    sVar4 = _strlen((char *)(pbVar12 + 1));
    local_138 = '\0';
    bVar7 = pbVar12[1];
    if (bVar7 != 0) {
      lVar9 = 0;
      do {
        local_138 = (char)sVar4;
        if ((char)sVar4 == (char)lVar9) goto LAB_1001e305e;
        abStack_137[lVar9] = bVar7;
        bVar7 = pbVar12[lVar9 + 2];
        lVar9 = lVar9 + 1;
      } while (bVar7 != 0);
      local_138 = (char)lVar9;
    }
LAB_1001e305e:
    local_13c = 0;
    FUN_1001e3108(&local_138,&local_13c);
    if (local_13c < 0x100) {
      *param_2 = (char)local_13c;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006bc423(uVar6);
      }
LAB_1001e30a2:
      uVar13 = 0;
      FUN_1001782e9(0,0);
    }
  }
LAB_1001e30ae:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

