// name: FUN_1005dcc41
// address: 1005dcc41

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005dcc41(ulong *param_1,uint param_2,ulong *param_3,undefined4 param_4,ulong *param_5,
                 uint *param_6,char param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong *puVar22;
  undefined1 auVar23 [16];
  uint local_250;
  int local_24c;
  ulong *local_248;
  uint local_23c;
  ulong local_238;
  ulong *local_230;
  ulong *local_228;
  ulong *local_220;
  int local_214;
  ulong *local_210;
  ulong *local_208;
  ulong local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  ulong *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  uint local_158;
  char *local_154;
  undefined2 local_14c;
  char *local_14a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1e0 = 0x7472616b;
  *param_5 = 0;
  *param_6 = 0;
  local_168 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  uVar19 = (uint)*param_1;
  uVar21 = (uVar19 & 0xff0000) >> 8;
  uVar1 = (uVar19 & 0xff00) << 8;
  uVar3 = uVar19 >> 0x18 | uVar21 | uVar1 | uVar19 << 0x18;
  uVar16 = *(uint *)((long)param_1 + 4);
  local_1f8 = CONCAT44(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18,uVar3);
  if (uVar16 == 0x766f6f6d) {
    if (uVar3 == param_2) {
      if (0x10 < param_2 && (uVar19 >> 0x18 & 0xfffffff8 | uVar21 | uVar1 | uVar19 << 0x18) != 8) {
        puVar9 = (ulong *)((long)param_1 + (ulong)uVar3);
        puVar12 = param_1 + 1;
        lVar17 = -8;
        uVar8 = 0x10;
        do {
          uVar18 = uVar8;
          uVar19 = *(uint *)((long)param_1 + (uVar18 - 4));
          if (uVar19 == 0x6b617274) {
            uVar19 = *(uint *)((long)param_1 + (uVar18 - 8));
            puVar14 = (ulong *)(ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 |
                                       (uVar19 & 0xff00) << 8 | uVar19 << 0x18);
            puVar22 = (ulong *)((long)param_1 - lVar17);
            puVar13 = (ulong *)((long)puVar22 + (long)puVar14);
            puVar6 = puVar13;
            goto joined_r0x0001005dceb5;
          }
          lVar17 = lVar17 + -1;
          uVar8 = uVar18 + 1;
        } while ((ulong)uVar3 != uVar18 + 1);
        uVar16 = *(uint *)((long)param_1 + (uVar18 - 8));
        local_1f8 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                             uVar19 << 0x18,
                             uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                             uVar16 << 0x18);
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_14a = "trakBufferPos != nullptr";
LAB_1005dd04d:
        local_14c = 0x822;
        local_154 = "Assertion failure";
        local_158 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_14a = "moovSize == originalMoovLength";
        goto LAB_1005dd04d;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_14a = "atomHeader.type == \'moov\'";
      goto LAB_1005dd04d;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1005dce11:
  lVar17 = 0;
  uVar8 = 0;
  uVar18 = 0;
  goto LAB_1005dce16;
joined_r0x0001005dceb5:
  if (puVar9 <= puVar6) goto LAB_1005dcef5;
  uVar19 = (uint)*puVar6;
  uVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
  uVar19 = *(uint *)((long)puVar6 + 4);
  local_1f8 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                       uVar19 << 0x18,uVar16);
  if (uVar19 == 0x6b617274) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      local_14a = "(atomHeader.type != \'trak\')";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
    }
    FUN_1001782e9(0x400,0);
    iVar4 = -0xd0;
    goto LAB_1005dce11;
  }
  puVar6 = (ulong *)((long)puVar6 + (ulong)uVar16);
  goto joined_r0x0001005dceb5;
  while (puVar12 = (ulong *)((long)puVar12 + (ulong)uVar19), puVar12 < puVar9) {
LAB_1005dcef5:
    uVar19 = (uint)*puVar12;
    uVar16 = *(uint *)((long)puVar12 + 4);
    uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    local_1e8 = param_5;
    if (uVar16 == 0x61746475) {
      local_1f8 = CONCAT44(0x75647461,uVar19);
      if (puVar22 <= puVar12) {
        puVar13 = (ulong *)(ulong)uVar19;
LAB_1005dd07a:
        if (uVar19 < 0x11 || ((uint)puVar13 & 0xfffffff8) == 8) goto LAB_1005dd202;
        puVar6 = (ulong *)0x0;
        goto LAB_1005dd0aa;
      }
      local_1f0 = CONCAT44(local_1f0._4_4_,param_4);
      local_230 = puVar14;
      local_228 = puVar13;
      local_210 = puVar9;
      local_208 = param_3;
      lVar17 = FUN_1001c63e1();
      if (lVar17 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_1005dd298;
        local_14a = "trak != nullptr";
        goto LAB_1005dd273;
      }
      if (local_210 < local_228) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_158 = 0x8220202;
          local_154 = "Assertion failure";
          local_14c = 0x822;
          local_14a = "trakBufferPos + trakSize <= moovEnd";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
        }
        FUN_1001782e9(0,0);
        lVar7 = lVar17;
      }
      else {
        FUN_1001c631b(puVar22,lVar17,local_230);
        puVar9 = (ulong *)(ulong)uVar19;
        lVar7 = FUN_1001c63e1(puVar9);
        if (lVar7 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 == '\0') goto LAB_1005dd298;
          local_14a = "udta != nullptr";
          goto LAB_1005dd273;
        }
        if ((ulong *)((long)puVar12 + (long)puVar9) <= local_210) {
          local_228 = puVar9;
          FUN_1001c631b(puVar12,lVar7);
          puVar9 = local_230;
          FUN_1001c631b(lVar17,puVar12,local_230);
          puVar12 = (ulong *)((long)puVar12 + (long)puVar9);
          FUN_1001c631b(lVar7,puVar12,local_228);
          FUN_1001c64c1(lVar17);
          FUN_1001c64c1(lVar7);
          param_3 = local_208;
          puVar13 = local_228;
          puVar9 = local_210;
          param_4 = (uint)local_1f0;
          goto LAB_1005dd07a;
        }
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_158 = 0x8220202;
          local_154 = "Assertion failure";
          local_14c = 0x822;
          local_14a = "udtaBufferPos + udtaSize <= moovEnd";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(lVar17);
      }
      FUN_1001c64c1(lVar7);
      goto LAB_1005dd22b;
    }
  }
  local_1f8 = CONCAT44(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18,uVar19);
  uVar5 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar5,0x10);
  if (cVar2 != '\0') {
    local_158 = 0x8220202;
    local_154 = "Assertion failure";
    local_14c = 0x822;
    local_14a = "(atomHeader.type == \'udta\')";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
  }
  FUN_1001782e9(0x400,0);
  iVar4 = -0xd0;
  goto LAB_1005dd2aa;
  while (puVar6 = (ulong *)((long)puVar6 + 1), puVar13 + -2 != puVar6) {
LAB_1005dd0aa:
    uVar19 = *(uint *)((long)(puVar12 + 1) + (long)puVar6);
    uVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    uVar19 = *(uint *)((long)puVar12 + 0xc + (long)puVar6);
    local_1f8 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18,uVar16);
    if (uVar19 == 0x6174656d) {
      local_1f0 = CONCAT44(local_1f0._4_4_,param_4);
      uVar8 = (ulong)uVar16 - 0x14;
      if (0x14 < uVar16 && uVar8 < 0xfffffffffffffff8) {
        lVar17 = (long)param_1 + ((-0x8014 - (long)puVar12) - (long)puVar6);
        puVar13 = (ulong *)((long)puVar6 + 0x14);
        goto LAB_1005dd1cc;
      }
      break;
    }
  }
  goto LAB_1005dd202;
  while( true ) {
    puVar13 = (ulong *)((long)puVar13 + 1);
    lVar17 = lVar17 + -1;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
LAB_1005dd1cc:
    uVar19 = *(uint *)((long)puVar12 + (long)puVar13);
    uVar21 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    uVar19 = *(uint *)((long)puVar12 + 4 + (long)puVar13);
    local_1f8 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18,uVar21);
    if (uVar19 == 0x74736c69) {
      local_230 = puVar6;
      local_228 = puVar13;
      local_210 = puVar9;
      local_208 = param_3;
      iVar4 = FUN_1005de45e((long)puVar12 + (long)puVar13,uVar21,local_1d8);
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_1005dd2aa;
        local_14a = (char *)CONCAT44(local_14a._4_4_,iVar4);
        goto LAB_1005dd783;
      }
      local_200 = CONCAT44(local_200._4_4_,uVar21);
      if (local_208 == (ulong *)0x0) goto LAB_1005dd630;
      if (local_208 < (ulong *)((long)local_208 + ((local_1f0 & 0xffffffff) - 8)) &&
          7 < (uint)local_1f0) {
        lVar7 = (local_1f0 & 0xffffffff) - 8;
        puVar9 = local_208;
        goto LAB_1005dd4e4;
      }
      break;
    }
  }
  goto LAB_1005dd202;
LAB_1005dd630:
  uVar8 = local_200 & 0xffffffff;
  local_238 = ((long)puVar12 - (long)param_1) + (long)local_228;
  lVar7 = 0;
  uVar19 = 0;
  do {
    if (*(uint **)(local_1d8 + lVar7 * 8) != (uint *)0x0) {
      uVar21 = **(uint **)(local_1d8 + lVar7 * 8);
      uVar19 = uVar19 + (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                        uVar21 << 0x18);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  local_23c = uVar19 + 8;
  iVar4 = local_23c - (int)local_200;
  local_1f0 = 0;
  local_208 = (ulong *)(ulong)(0x80000 - uVar16);
  if (0x80000 < uVar16) {
    local_208 = (ulong *)0x0;
  }
  iVar20 = (int)local_208;
  uVar16 = iVar20 - iVar4;
  if (uVar16 == 0 || iVar20 < iVar4) {
    if ((int)uVar16 < 0) {
      if (iVar4 < 1) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_158 = 0x8220202;
          local_154 = "Assertion failure";
          local_14c = 0x822;
          local_14a = "ilstAdjustment > 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar16 = (uint)local_208;
      local_1f0 = 0;
      local_208 = (ulong *)(ulong)(iVar4 + uVar16);
    }
    else {
      uVar16 = 0;
    }
  }
  else if (uVar16 < 8) {
    local_208 = (ulong *)(ulong)(iVar20 + 8);
    local_1f0 = 0;
  }
  else {
    local_1f0 = FUN_1005de75e(uVar16);
    if (local_1f0 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_14a = "newFreeAtom != nullptr";
LAB_1005dd273:
        local_14c = 0x822;
        local_154 = "Assertion failure";
        local_158 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
LAB_1005dd298:
      FUN_1001782e9(0,0);
      iVar4 = -0x6c;
      goto LAB_1005dd2aa;
    }
  }
  puVar6 = (ulong *)FUN_1005de2fc(param_1,local_210,"kartaidmfnimlbtsdstssmrd",0x73696e66,&local_250
                                 );
  puVar9 = puVar6;
  if ((puVar6 == (ulong *)0x0) &&
     (puVar9 = (ulong *)FUN_1005de2fc(param_1,local_210,"kartaidmfnimlbtsdstsa4pm",0x70696e66,
                                      &local_250), puVar9 == (ulong *)0x0)) {
    local_200 = 0;
    local_248 = (ulong *)0x0;
    puVar9 = (ulong *)0x0;
  }
  else {
    local_200 = FUN_1005de826(puVar6 != (ulong *)0x0);
    if (local_200 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "cleanSinfAtom != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      lVar17 = 0;
      FUN_1001782e9(0,0);
      iVar4 = -0x6c;
      uVar8 = local_1f0;
      uVar18 = 0;
      param_5 = local_1e8;
      goto LAB_1005dce16;
    }
    local_248 = (ulong *)((ulong)local_250 + (long)puVar9);
  }
  local_214 = 0x8000 - local_250;
  iVar20 = 0;
  if (puVar9 != (ulong *)0x0) {
    iVar20 = local_214;
  }
  local_220 = puVar9;
  lVar7 = FUN_1005de2fc(param_1,local_210,"kartaidmfnimlbts",0x7374636f,&local_1f8);
  if (lVar7 == 0) {
LAB_1005ddd50:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      puVar15 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar10 = "bufferPos != nullptr";
LAB_1005dde94:
      *(char **)((long)puVar15 + 0xe) = pcVar10;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar15,0x16);
    }
LAB_1005ddd6d:
    lVar17 = 0;
LAB_1005ddd70:
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    uVar8 = local_1f0;
    uVar18 = local_200;
    param_5 = local_1e8;
    goto LAB_1005dce16;
  }
  if ((param_7 != '\0') &&
     (iVar4 = FUN_1005de37b(lVar7,local_210,(int)local_208 + iVar20), iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_14a = (char *)CONCAT44(local_14a._4_4_,iVar4);
LAB_1005de074:
      local_14c = 0x400;
      local_154 = "Assertion failure";
      local_158 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_158,0x12);
    }
LAB_1005ddacf:
    lVar17 = 0;
    uVar8 = local_1f0;
    uVar18 = local_200;
    param_5 = local_1e8;
    goto LAB_1005dce16;
  }
  uVar21 = *(uint *)((long)(puVar12 + 1) + (long)local_230);
  iVar4 = (int)local_208;
  uVar21 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18) +
           iVar4;
  *(uint *)((long)(puVar12 + 1) + (long)local_230) =
       uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 * 0x1000000;
  *(undefined4 *)((long)puVar12 + 0xc + (long)local_230) =
       *(undefined4 *)((long)puVar12 + 0xc + (long)local_230);
  uVar21 = (uint)*puVar12;
  uVar21 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18) +
           iVar4;
  *(uint *)puVar12 =
       uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 * 0x1000000;
  *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar12 + 4);
  uVar21 = (uint)*param_1;
  uVar1 = *(uint *)((long)param_1 + 4);
  uVar21 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18) +
           iVar4;
  local_1f8 = CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18,uVar21);
  *(uint *)param_1 =
       uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 * 0x1000000;
  *(uint *)((long)param_1 + 4) = uVar1;
  if ((param_7 == '\0') && (iVar4 = FUN_1005de37b(lVar7,local_210), iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_14a = (char *)CONCAT44(local_14a._4_4_,iVar4);
      goto LAB_1005de074;
    }
    goto LAB_1005ddacf;
  }
  if ((local_220 != (ulong *)0x0) && (iVar20 != 0)) {
    if (local_24c == 0x70696e66) {
LAB_1005ddafd:
      lVar7 = FUN_1005de923(param_1,local_210,"kartaidmfnimlbtsdsts",0x6d703461,&local_1f8,local_214
                           );
      if (lVar7 == 0) goto LAB_1005ddd50;
    }
    else {
      if (local_24c != 0x73696e66) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_158 = 0x8220202;
          local_154 = "Assertion failure";
          local_14c = 0x822;
          local_14a = "sinfAtomHeader.type == \'pinf\'";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1005ddafd;
      }
      lVar7 = FUN_1005de923(param_1,local_210,"kartaidmfnimlbtsdsts",0x64726d73,&local_1f8,local_214
                           );
      if (lVar7 == 0) goto LAB_1005ddafd;
    }
    lVar7 = FUN_1005de923(param_1,local_210,"kartaidmfnimlbts",0x73747364,&local_1f8,local_214);
    if ((((lVar7 == 0) ||
         (lVar7 = FUN_1005de923(param_1,local_210,"kartaidmfnim",0x7374626c,&local_1f8,local_214),
         lVar7 == 0)) ||
        (lVar7 = FUN_1005de923(param_1,local_210,"kartaidm",0x6d696e66,&local_1f8,local_214),
        lVar7 == 0)) ||
       (((lVar7 = FUN_1005de923(param_1,local_210,&local_1e0,0x6d646961,&local_1f8,local_214),
         lVar7 == 0 ||
         (lVar7 = FUN_1005de9f8(param_1,local_210,0x7472616b,&local_1f8,local_214), lVar7 == 0)) ||
        (lVar7 = FUN_1005de9f8(param_1,local_210,0x6d6f6f76,&local_1f8,local_214), lVar7 == 0))))
    goto LAB_1005ddd50;
  }
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_1;
  auVar23 = pshufb(auVar23,_DAT_100718a70);
  local_1f8 = auVar23._0_8_;
  uVar18 = (ulong)auVar23._0_4_;
  puVar9 = (ulong *)FUN_1001c63e1(uVar18);
  if (puVar9 == (ulong *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      puVar15 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar10 = "cleanHeader != nullptr";
LAB_1005de104:
      *(char **)((long)puVar15 + 0xe) = pcVar10;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar15,0x16);
    }
LAB_1005dddb6:
    lVar17 = 0;
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
    uVar8 = local_1f0;
    uVar18 = local_200;
    param_5 = local_1e8;
    goto LAB_1005dce16;
  }
  local_230 = puVar9;
  if (local_220 != (ulong *)0x0) {
    uVar11 = (long)local_220 - (long)param_1;
    if (-1 < (long)uVar11) {
      if (uVar11 <= uVar18) {
        local_238 = uVar11 + (long)puVar9;
        local_208 = (ulong *)(uVar18 + (long)puVar9);
        FUN_1001c631b(param_1,puVar9);
        puVar6 = (ulong *)(local_238 + 0x8000);
        if (puVar6 <= local_208) {
          FUN_1001c631b(local_200,local_238,0x8000);
          if (((long)puVar12 - (long)local_248) + (long)local_228 < 0) goto LAB_1005dde27;
          local_220 = (ulong *)((long)puVar9 + (long)local_220 + (-lVar17 - (long)local_248));
          param_1 = local_248;
          if (local_220 <= local_208) goto LAB_1005ddf30;
        }
      }
LAB_1005ddde1:
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_1005ddd6d;
      puVar15 = &local_158;
LAB_1005dde05:
      *puVar15 = 0x8220202;
      *(char **)(puVar15 + 1) = "Assertion failure";
      *(undefined2 *)(puVar15 + 3) = 0x822;
      pcVar10 = "(cleanHeaderPos + byteCountToWrite) <= (cleanHeader + cleanHeaderLength)";
      goto LAB_1005dde94;
    }
LAB_1005dde27:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      puVar15 = &local_158;
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      pcVar10 = "byteCountToWrite >= 0";
      goto LAB_1005dde94;
    }
    goto LAB_1005ddd6d;
  }
  if ((long)local_238 < 0) goto LAB_1005dde27;
  if (uVar18 < local_238) goto LAB_1005ddde1;
  local_220 = (ulong *)(local_238 + (long)puVar9);
  puVar6 = puVar9;
LAB_1005ddf30:
  FUN_1001c631b(param_1,puVar6);
  local_1f8 = CONCAT44(0x696c7374,local_23c);
  local_158 = local_23c >> 0x18 | (local_23c & 0xff0000) >> 8 | (local_23c & 0xff00) << 8 |
              local_23c << 0x18;
  local_154 = (char *)CONCAT44(local_154._4_4_,0x74736c69);
  local_208 = local_220 + 1;
  puVar9 = (ulong *)((long)puVar9 + uVar18);
  if (puVar9 < local_208) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_1005ddd6d;
    puVar15 = &local_58;
    goto LAB_1005dde05;
  }
  FUN_1001c631b(&local_158,local_220,8);
  lVar17 = FUN_1005deafd(local_1d8);
  if (lVar17 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      puVar15 = &local_58;
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar10 = "ilstReplacementBuffer != nullptr";
      goto LAB_1005de104;
    }
    goto LAB_1005dddb6;
  }
  if (0xfffffff7 < uVar19) {
LAB_1005de24d:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "byteCountToWrite >= 0";
LAB_1005de28e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    goto LAB_1005ddd70;
  }
  puVar6 = (ulong *)((long)local_220 + (ulong)local_23c);
  if (puVar9 < puVar6) {
LAB_1005de20a:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "(cleanHeaderPos + byteCountToWrite) <= (cleanHeader + cleanHeaderLength)";
      goto LAB_1005de28e;
    }
    goto LAB_1005ddd70;
  }
  FUN_1001c631b(lVar17,local_208,(ulong)local_23c - 8);
  local_208 = puVar6;
  if (local_1f0 != 0) {
    local_208 = (ulong *)((long)puVar6 + (ulong)uVar16);
    if (puVar9 < local_208) goto LAB_1005de20a;
    FUN_1001c631b(local_1f0,puVar6);
  }
  if ((long)((long)local_210 + ((-uVar8 - (long)puVar12) - (long)local_228)) < 0)
  goto LAB_1005de24d;
  if (puVar9 < (ulong *)((long)local_210 +
                        (long)local_208 + ((-uVar8 - (long)puVar12) - (long)local_228)))
  goto LAB_1005de20a;
  FUN_1001c631b((long)puVar12 + (long)puVar13 + uVar8,local_208);
  *local_1e8 = (ulong)local_230;
  *param_6 = auVar23._0_4_;
  iVar4 = 0;
  uVar8 = local_1f0;
  uVar18 = local_200;
  goto LAB_1005dce29;
  while( true ) {
    lVar7 = lVar7 + -1;
    puVar9 = (ulong *)((long)puVar6 + 1);
    if (lVar7 == 0) break;
LAB_1005dd4e4:
    puVar6 = puVar9;
    uVar19 = *(uint *)((long)puVar6 + 4);
    if (uVar19 == 0x74736c69) {
      uVar19 = (uint)*puVar6;
      uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      local_1f8 = CONCAT44(0x696c7374,uVar19);
      iVar4 = FUN_1005de45e(puVar6,uVar19,local_1d8);
      if (iVar4 == 0) goto LAB_1005dd630;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_14a = (char *)CONCAT44(local_14a._4_4_,iVar4);
LAB_1005dd783:
        local_14c = 0x400;
        local_154 = "Assertion failure";
        local_158 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_158,0x12);
      }
      goto LAB_1005dd2aa;
    }
  }
  uVar16 = (uint)*puVar6;
  local_1f8 = CONCAT44(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                       uVar19 << 0x18,
                       uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18);
LAB_1005dd202:
  uVar5 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar5,0x10);
  if (cVar2 != '\0') {
    local_158 = 0x8220202;
    local_154 = "Assertion failure";
    local_14c = 0x822;
    local_14a = "bufferPos != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005dd22b:
  iVar4 = -0x32;
LAB_1005dd2aa:
  lVar17 = 0;
  uVar8 = 0;
  uVar18 = 0;
  param_5 = local_1e8;
LAB_1005dce16:
  if (*param_5 != 0) {
    FUN_1001c64c1();
  }
  if (lVar17 != 0) {
LAB_1005dce29:
    FUN_1001c64c1(lVar17);
  }
  if (uVar8 != 0) {
    FUN_1001c64c1(uVar8);
  }
  if (uVar18 != 0) {
    FUN_1001c64c1(uVar18);
  }
  lVar17 = 0;
  do {
    if (*(long *)(local_1d8 + lVar17 * 8) != 0) {
      FUN_1001c64c1();
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x10);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

