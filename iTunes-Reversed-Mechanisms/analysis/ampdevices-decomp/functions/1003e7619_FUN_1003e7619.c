// name: FUN_1003e7619
// address: 1003e7619

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e7619(undefined1 (*param_1) [16])

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 (*local_130) [16];
  undefined1 (*local_128) [16];
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_110;
  undefined2 local_10c;
  int local_10a;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_120 = *(undefined8 *)(param_1[0x10000] + 8);
  lVar6 = FUN_1004cf9b5();
  if (lVar6 != 0) {
    do {
      lVar7 = FUN_1005e386a(lVar6);
      if (*(int *)(lVar6 + 0x84) == 0) {
        if (*(int *)(lVar6 + 0x10) != 1) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_b8 = 0x8220202;
            uStack_b4 = 0x7a0a90;
            iStack_b0 = 1;
            uStack_ac = 0x822;
            uStack_aa = 0xb4ee;
            uStack_a8 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1005e37a3(lVar6);
      }
      lVar6 = lVar7;
    } while (lVar7 != 0);
  }
  uVar8 = local_120;
  FUN_1003071cd(local_120);
  FUN_1001c62d9(&local_b8,0x60);
  local_b8 = 0x6473686d;
  uStack_b4 = 0x60;
  uStack_ac = 8;
  uStack_aa = 0;
  iVar5 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_140);
  if (iVar5 == -0x80) goto LAB_1003e80a5;
  if (iVar5 == 0) {
    local_118 = 0x60;
    uStack_114 = 0;
    iVar5 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_118,&local_b8);
    if (iVar5 == -0x80) goto LAB_1003e80a5;
    if (iVar5 == 0) {
      FUN_1001c62d9(&local_118,0x5c);
      local_118 = 0x696c686d;
      uStack_114 = 0x5c;
      iVar5 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_138);
      if (iVar5 == -0x80) goto LAB_1003e80a5;
      if (iVar5 == 0) {
        local_58 = 0x5c;
        uStack_54 = 0;
        iVar5 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_58,&local_118);
        if (iVar5 == -0x80) goto LAB_1003e80a5;
        if (iVar5 == 0) {
          lVar6 = FUN_1004cf9b5(uVar8);
          if (lVar6 != 0) {
            local_130 = param_1 + 5;
            do {
              if (*(int *)(lVar6 + 0x58) != 0x61747369) {
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7ab58c;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "inArtistInfo->mMagic == kArtistInfoMagic";
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                cVar4 = FUN_1001782e9(0,1);
                if (cVar4 != '\0') goto LAB_1003e7874;
LAB_1003e7f78:
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "ArtistInfoIsValid(artistInfo)";
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar5 = -0x32;
                uVar8 = local_120;
LAB_1003e7fab:
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 == '\0') goto LAB_1003e80a5;
                puVar10 = &local_58;
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_1003e8092;
              }
LAB_1003e7874:
              lVar7 = *(long *)(lVar6 + 8);
              if (lVar7 == 0) goto LAB_1003e7f78;
              if (*(int *)(lVar6 + 0x84) == 0) {
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "artistInfo->IsEmpty() == false";
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                lVar7 = *(long *)(lVar6 + 8);
              }
              local_128 = local_130;
              FUN_1001c62d9(param_1,0x50);
              *(undefined8 *)*param_1 = 0x506969686d;
              *(undefined4 *)param_1[1] = *(undefined4 *)(lVar6 + 0x14);
              *(undefined8 *)(param_1[1] + 4) = *(undefined8 *)(lVar6 + 0x18);
              sVar1 = *(short *)(lVar6 + 0x62);
              param_1[1][0xc] = (char)sVar1;
              if (sVar1 != 2) goto LAB_1003e7a70;
              iVar5 = FUN_1003f32d1(param_1,lVar7 + 0x1cb0,*(undefined4 *)(lVar6 + 0xf0),300,1,
                                    *(undefined4 *)(param_1[0x10013] + 8),&local_128,&local_58);
              if ((iVar5 == 0) && ((char)local_58 != '\0')) {
                *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
LAB_1003e79b7:
                iVar5 = FUN_1003f32d1(param_1,lVar7 + 0x24d0,*(undefined4 *)(lVar6 + 0x100),0x12d,1,
                                      *(undefined4 *)(param_1[0x10013] + 8),&local_128,&local_58);
                if ((iVar5 == 0) && ((char)local_58 != '\0')) {
                  *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
LAB_1003e7a70:
                  *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(lVar6 + 0xa4);
                  param_1[1][0xe] = *(undefined1 *)(lVar6 + 0x88);
                  param_1[1][0xf] = *(undefined1 *)(lVar6 + 0x89);
                  uVar11 = (long)local_128 - (long)param_1;
                  if (0x100000 < (uVar11 & 0xffffffff)) {
                    uVar8 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x822;
                      local_4a = "artistInfoSize <= (1 * 1024L * 1024L)";
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  *(int *)(*param_1 + 8) = (int)uVar11;
                  if (param_1[0x10012][7] != '\0') {
                    auVar12._8_8_ = uVar11 & 0xffffffff | (ulong)*(uint *)(*param_1 + 0xc) << 0x20;
                    auVar12._0_8_ = *(undefined8 *)*param_1;
                    auVar12 = pshufb(auVar12,_DAT_100718a70);
                    *param_1 = auVar12;
                    uVar2 = *(uint *)param_1[1];
                    *(uint *)param_1[1] =
                         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18;
                    uVar3 = *(ulong *)(param_1[1] + 4);
                    *(ulong *)(param_1[1] + 4) =
                         uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                         (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                         (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                         (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
                    uVar3 = *(ulong *)param_1[2];
                    *(ulong *)param_1[2] =
                         uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                         (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                         (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                         (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
                    uVar2 = *(uint *)(param_1[2] + 8);
                    *(uint *)(param_1[2] + 8) =
                         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18;
                  }
                  uStack_54 = 0;
                  local_58 = (int)uVar11;
                  iVar5 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_58,param_1);
                  uVar8 = local_120;
                  if ((iVar5 != -0x80) && (iVar5 != 0)) {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                      goto LAB_1003e7b9d;
                    }
                  }
                }
                else {
                  if (iVar5 == 0) goto LAB_1003e7a70;
                  if (iVar5 == -0x80) goto LAB_1003e80d2;
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  uVar8 = local_120;
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_1003e7b9d;
                  }
                }
              }
              else {
                if (iVar5 == 0) goto LAB_1003e79b7;
                if (iVar5 == -0x80) {
LAB_1003e80d2:
                  iVar5 = -0x80;
                  uVar8 = local_120;
                  goto LAB_1003e80a5;
                }
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                uVar8 = local_120;
                if (cVar4 == '\0') goto LAB_1003e7bb5;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1003e7b9d:
                local_4c = 0x400;
                uStack_50 = 1;
                uStack_54 = 0x7a0a90;
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
LAB_1003e7bb5:
              if (iVar5 != 0) {
                if (iVar5 != -0x80) goto LAB_1003e7fab;
                goto LAB_1003e80a5;
              }
              local_110 = local_110 + 1;
              lVar6 = FUN_1005e386a(lVar6);
            } while (lVar6 != 0);
          }
          iVar5 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_128);
          if (iVar5 == -0x80) goto LAB_1003e80a5;
          if (iVar5 == 0) {
            iStack_b0 = (int)local_128 - (int)local_140;
            if (param_1[0x10012][7] != '\0') {
              auVar13._4_4_ = uStack_b4;
              auVar13._0_4_ = local_b8;
              auVar13._14_2_ = uStack_aa;
              auVar13._12_2_ = uStack_ac;
              auVar13._8_4_ = iStack_b0;
              auVar12 = pshufb(auVar13,_DAT_100718a70);
              local_b8 = auVar12._0_4_;
              uStack_b4 = auVar12._4_4_;
              iStack_b0 = auVar12._8_4_;
              uStack_ac = auVar12._12_2_;
              uStack_aa = auVar12._14_2_;
            }
            local_58 = 0x60;
            uStack_54 = 0;
            iVar5 = FUN_100160a0d(*(undefined8 *)param_1[0x10000],local_140,&local_58,&local_b8);
            if (iVar5 == -0x80) goto LAB_1003e80a5;
            if (iVar5 == 0) {
              if (param_1[0x10012][7] != '\0') {
                auVar14._4_4_ = uStack_114;
                auVar14._0_4_ = local_118;
                auVar14._8_8_ = 0;
                auVar12 = pshufb(auVar14,_DAT_10070e4b0);
                local_118 = auVar12._0_4_;
                uStack_114 = auVar12._4_4_;
                local_110 = local_110 >> 0x18 | (local_110 & 0xff0000) >> 8 |
                            (local_110 & 0xff00) << 8 | local_110 << 0x18;
              }
              local_58 = 0x5c;
              uStack_54 = 0;
              iVar5 = FUN_100160a0d(*(undefined8 *)param_1[0x10000],local_138,&local_58,&local_118);
              if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_1003e80a5;
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 == '\0') goto LAB_1003e80a5;
              puVar10 = &local_58;
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 == '\0') goto LAB_1003e80a5;
              puVar10 = &local_58;
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            }
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 == '\0') goto LAB_1003e80a5;
            puVar10 = &local_58;
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 == '\0') goto LAB_1003e80a5;
          puVar10 = &local_58;
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 == '\0') goto LAB_1003e80a5;
        puVar10 = &local_58;
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 == '\0') goto LAB_1003e80a5;
      puVar10 = &local_118;
      local_118 = 0x8220202;
      uStack_114 = 0x7a0a90;
      local_110 = 1;
      local_10c = 0x400;
      local_10a = iVar5;
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 == '\0') goto LAB_1003e80a5;
    puVar10 = &local_118;
    local_118 = 0x8220202;
    uStack_114 = 0x7a0a90;
    local_110 = 1;
    local_10c = 0x400;
    local_10a = iVar5;
  }
LAB_1003e8092:
  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar10,0x12);
LAB_1003e80a5:
  FUN_100307383(uVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

