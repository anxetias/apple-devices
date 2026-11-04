// name: FUN_100586196
// address: 100586196

ulong FUN_100586196(int *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint7 uVar10;
  undefined7 uVar11;
  long lVar9;
  uint *puVar12;
  ulong uVar13;
  bool bVar14;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4b8;
  long local_4a8;
  ulong local_4a0;
  undefined8 local_498;
  uint *local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 local_46c;
  char *local_46a;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  short local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100586229:
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      local_46c = 0x822;
      local_46a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10058624f:
    uVar13 = 0xffffffce;
    goto LAB_100586255;
  }
  if (*param_1 != 0x706c7374) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7ab58c;
      uStack_470 = 1;
      local_46c = 0x822;
      local_46a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_100586229;
  }
  if ((*(byte *)(param_1 + 0xa6) & 1) == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      local_46c = 0x822;
      local_46a = "playlist->isSmartPlaylist";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10058624f;
  }
  if ((short)param_1[4] == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      local_46c = 0x822;
      local_46a = "playlist->distinguishedPlaylistKind != kDistinguishedPlaylistKind_None";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10058624f;
  }
  uVar7 = FUN_1005815a8(param_1 + 0xa8,&local_4d0);
  uVar13 = (ulong)uVar7;
  if (uVar7 == 0xffffff80) goto LAB_100586255;
  if (uVar7 != 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      local_46c = 0x400;
      local_46a = (char *)CONCAT44(local_46a._4_4_,uVar7);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
    goto LAB_100586255;
  }
  local_4a8 = *(long *)(param_1 + 2);
  local_238[0] = 0;
  cVar4 = param_2;
  if (((*(byte *)(local_4a8 + 0x1bb0) & 1) == 0) &&
     (cVar4 = '\x01', *(int *)(*(long *)(param_1 + 0x1e) + 0x18) != 0)) {
    cVar4 = param_2;
  }
  FUN_1001c62d9(local_258,0x20);
  FUN_1001c62d9(local_278,0x20);
  uVar7 = param_1[0x90];
  param_1[0x90] = uVar7 | 0x40;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 0x10;
  sVar1 = (short)param_1[4];
  uVar13 = 0xffffffce;
  switch(sVar1) {
  case 0x2f:
    param_1[0x90] = uVar7 | 0x240;
    FUN_1001c34b7(0x2328001f,local_238);
    local_4a0 = 0x20;
    goto LAB_100586697;
  case 0x30:
    param_1[0x90] = uVar7 | 0x240;
    FUN_1001c34b7(0x23280021,local_238);
    local_4a0 = 0x400;
    goto LAB_100586697;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x44:
    goto switchD_10058633e_caseD_31;
  case 0x3c:
    FUN_1001c34b7(0x23280022,local_238);
    local_4a0 = 0xc00000;
    break;
  case 0x3d:
    bVar14 = true;
    uVar10 = (uint7)(uint3)(uVar7 >> 8);
LAB_100586739:
    local_488 = CONCAT71(uVar10,1);
    local_498 = 0;
    local_490 = (uint *)CONCAT71(uVar10,1);
    local_480 = 0;
    local_4a0 = 0;
    bVar3 = false;
    goto LAB_1005868d7;
  case 0x40:
    param_1[0x90] = uVar7 | 0x240;
    FUN_1001c34b7(0x23280020,local_238);
    local_4a0 = 0x42;
LAB_100586697:
    local_490 = (uint *)CONCAT71((int7)(local_4a0 >> 8),1);
    local_498 = 0x218004;
    goto LAB_1005868be;
  case 0x41:
    param_1[0x90] = uVar7 | 0x240;
    FUN_1001c34b7(0x2328004a,local_238);
    local_4a0 = 0x1021b1;
    local_490 = (uint *)0x102101;
    local_498 = 0x208004;
    goto LAB_1005868be;
  case 0x42:
    FUN_1001c34b7(0x2328004a,local_238);
    local_4a0 = 2;
    break;
  case 0x43:
    FUN_1001c34b7(0x2328004a,local_238);
LAB_1005867c7:
    local_4a0 = 0x40;
    break;
  case 0x45:
    param_1[0x90] = uVar7 | 0x240;
    FUN_1001c34b7(0x2328004a,local_238);
    local_4a0 = 0x8042;
    local_490 = (uint *)0x8001;
    local_498 = 0x202004;
    goto LAB_1005868be;
  case 0x46:
    uVar8 = FUN_1001c34b7(0x2328004b,local_238);
    uVar11 = (undefined7)((ulong)uVar8 >> 8);
    local_488 = CONCAT71(uVar11,1);
    local_498 = 0;
    local_490 = (uint *)CONCAT71(uVar11,1);
    local_480 = 0;
    local_4a0 = 0;
    goto LAB_1005868d4;
  default:
    puVar12 = &switchD_100586463::switchdataD_100586e28;
    switch(sVar1) {
    case 1:
      FUN_1001c34b7(0x2328001b,local_238);
      local_4a0 = 0xc42;
      break;
    case 2:
      iVar2 = *(int *)(local_4a8 + 0x84);
      FUN_1001c34b7(0x2328001c,local_238);
      local_4a0 = (ulong)(iVar2 == 0x646f5069) << 10 | 2;
      break;
    case 3:
      FUN_1001c34b7(0x2328001d,local_238);
      goto LAB_1005867c7;
    case 4:
      FUN_1001c34b7(0x2328001e,local_238);
      local_4a0 = 0x1021b1;
      local_490 = (uint *)0x102101;
      local_498 = 0x208004;
      if (cVar4 == '\0') {
        for (lVar9 = FUN_1004cf9b5(local_4a8); lVar9 != 0; lVar9 = FUN_1005e386a(lVar9)) {
          cVar4 = FUN_1005e3f38(lVar9);
          puVar12 = (uint *)CONCAT71((int7)((ulong)puVar12 >> 8),1);
          local_490 = puVar12;
          if (cVar4 != '\0') {
            cVar4 = '\x01';
            goto LAB_1005868be;
          }
        }
        cVar4 = '\0';
      }
      goto LAB_1005868be;
    case 5:
      FUN_1001c34b7(0x23280024,local_238);
      local_4a0 = 8;
      break;
    case 6:
      FUN_1001c34b7(0x23280027,local_238);
      local_4a0 = 0x1004000;
      break;
    case 7:
      param_1[0x90] = uVar7 | 0x240;
      FUN_1001c34b7(0x23280028,local_238);
      local_4a0 = 0x42;
      local_480 = 0x8000;
      local_488 = 0x8001;
      if (*(int *)(local_4a8 + 0x84) != 0x2062696c) {
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 0x80;
      }
      local_498 = 0;
      local_490 = (uint *)0x0;
      goto LAB_1005868d4;
    default:
      if (sVar1 == 0x1a) {
        FUN_10015805a(&local_478);
        local_478 = 0x854ac0;
        uStack_474 = 1;
        local_4d0 = 0x1000100;
        local_4b8 = FUN_100158922(&local_478,PTR_cf_geniusLimitValue_100854a90);
        FUN_1001c34b7(0x23280041,local_238);
        uVar8 = FUN_10015811a(&local_478);
        cVar4 = '\x01';
        bVar14 = false;
        uVar10 = (uint7)((ulong)uVar8 >> 8);
        goto LAB_100586739;
      }
      goto switchD_10058633e_caseD_31;
    }
  }
  local_490 = (uint *)CONCAT71((int7)(local_4a0 >> 8),1);
  local_498 = 0x20a004;
LAB_1005868be:
  local_488 = 0;
  local_480 = 0;
LAB_1005868d4:
  bVar14 = false;
  bVar3 = true;
LAB_1005868d7:
  uVar7 = *(ushort *)(param_1 + 4) - 1;
  if (uVar7 < 7) {
                    /* WARNING: Jumptable with 0 entries at 0x0001005868f5 */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&DAT_100586ea4 + *(int *)(&DAT_100586ea4 + (ulong)uVar7 * 4)))();
    return uVar13;
  }
  switch(*(ushort *)(param_1 + 4)) {
  case 0x3c:
    FUN_1005389ba(local_278,0x37);
    break;
  case 0x42:
    FUN_1005389ba(local_278,3);
    FUN_1005389ba(local_278,0x4f);
    FUN_1005389ba(local_278,0x3e);
    FUN_1005389ba(local_278,0x53);
    FUN_1005389ba(local_278,0x3f);
    FUN_1005389ba(local_278,0x40);
    FUN_1005389ba(local_278,0x41);
    break;
  case 0x43:
    FUN_1005389ba(local_278,3);
    FUN_1005389ba(local_278,0x4f);
    FUN_1005389ba(local_278,4);
    FUN_1005389ba(local_278,0x50);
    break;
  case 0x45:
  case 0x46:
    FUN_1005389ba(local_278,3);
    FUN_1005389ba(local_278,0x4f);
  }
  if (local_238[0] != 0) {
    FUN_1004870ae(param_1,&local_478);
    cVar5 = FUN_1001e3edc(local_238,&local_478,0x20);
    if (cVar5 == '\0') {
      FUN_1004872d8(param_1,local_238);
    }
  }
  if (bVar3) {
    *(byte *)((long)param_1 + 0x241) = *(byte *)((long)param_1 + 0x241) | 4;
    uVar6 = FUN_100482222(param_1,1);
    uVar8 = FUN_1004821e1(uVar6);
    FUN_100538f6e(local_258,uVar8);
    FUN_100538b99(param_1 + 0x56,local_258);
    FUN_100538b99(param_1 + 0x4e,local_258);
    FUN_100538e70(param_1 + 0x56,local_278);
    FUN_100538e70(param_1 + 0x4e,local_278);
    local_4d0._0_3_ = CONCAT12(1,(undefined2)local_4d0);
    uVar7 = FUN_1001d0a60(local_4c8);
    uVar13 = (ulong)uVar7;
    if (uVar7 != 0xffffff80) {
      if (uVar7 == 0) {
        FUN_1001d022c(local_4c8,0);
        if (local_4a0 != 0) {
          FUN_1001d0767(local_4c8,0x400,0x3c);
        }
        if ((char)local_490 == '\0') {
          FUN_1001d0801(local_4c8,0x800,0x3c,local_480,local_480);
        }
        if ((char)local_488 == '\0') {
          FUN_1001d0767(local_4c8,0x2000400,0x3c,local_498);
        }
        switch((short)param_1[4]) {
        case 0x40:
          FUN_1001d089f(local_4c8,1,0xa4,1);
          break;
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x45:
          FUN_1001d0767(local_4c8,0x400,0x85,1);
          break;
        case 0x46:
          FUN_1001d089f(local_4c8,1,0xb3,1);
          FUN_1001d089f(local_4c8,1,0xb4,1);
          FUN_1001d022c(local_4c8,1);
        }
        goto switchD_100586c1c_caseD_44;
      }
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_478 = 0x8220202;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        local_46c = 0x400;
        local_46a = (char *)CONCAT44(local_46a._4_4_,uVar7);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
  else {
switchD_100586c1c_caseD_44:
    if (!bVar14) {
      FUN_100581b2a(param_1,&local_4d0,0);
    }
    if (cVar4 == '\0') {
      bVar14 = true;
      if ((*(byte *)(local_4a8 + 0x1bb4) & 8) == 0) {
        cVar4 = FUN_100585dd7(param_1);
        bVar14 = cVar4 != '\0';
      }
      FUN_1005821b3(param_1,bVar14);
    }
    else {
      FUN_1005821b3(param_1,1);
      FUN_1005841c8(param_1,1);
    }
    uVar13 = 0;
  }
switchD_10058633e_caseD_31:
  FUN_1005814bd(&local_4d0);
LAB_100586255:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

