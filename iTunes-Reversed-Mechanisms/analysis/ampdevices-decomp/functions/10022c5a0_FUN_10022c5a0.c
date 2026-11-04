// name: FUN_10022c5a0
// address: 10022c5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10022c5a0(long *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 local_94;
  undefined8 local_90;
  long local_88;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  char acStack_60 [4];
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pvVar1 = (void *)param_1[0x4a];
  lVar15 = param_1[0x4c];
  pvVar12 = pvVar1;
  local_80 = param_1;
  if ((ulong)(lVar15 - (long)pvVar1) < 0x11) {
    lVar2 = param_1[0x4b];
    pvVar12 = operator_new(0x18);
    lVar15 = (long)pvVar12 + 0x18;
    _memcpy(pvVar12,pvVar1,lVar2 - (long)pvVar1);
    param_1[0x4a] = (long)pvVar12;
    param_1[0x4b] = (long)pvVar12 + (lVar2 - (long)pvVar1);
    param_1[0x4c] = lVar15;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
      pvVar12 = (void *)param_1[0x4a];
      lVar15 = param_1[0x4c];
    }
  }
  plVar17 = local_80;
  if (lVar15 - (long)pvVar12 != 0x18) {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x20fd;
      uStack_68 = 0x7b;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar9 = -0x6c;
    goto LAB_10022d7d8;
  }
  local_80[8] = *(long *)(param_2 + 0x18);
  *(undefined4 *)(local_80 + 7) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_2 + 0x44);
  iVar9 = (**(code **)(*local_80 + 0x38))(local_80,(double *)(param_2 + 0x70));
  if (iVar9 == -0x80) goto LAB_10022d7d8;
  if (iVar9 == 0) {
    *(int *)(plVar17 + 5) = (int)(long)*(double *)(param_2 + 0x70);
    uVar18 = (ulong)*(uint *)(plVar17 + 6);
    if (*(uint *)(plVar17 + 6) == 0) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0x2123;
        uStack_68 = 0x7b;
        uStack_66 = 1;
        uStack_64 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined4 *)(local_80 + 6) = 0x400;
      uVar18 = 0x400;
      plVar17 = local_80;
    }
    uVar16 = *(uint *)((long)plVar17 + 0x2c) >> 1;
    *(int *)((long)plVar17 + 0x244) = (int)(uVar16 / uVar18);
    if (uVar16 < (uint)uVar18) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0x2133;
        uStack_68 = 0x7b;
        uStack_66 = 1;
        uStack_64 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined4 *)((long)local_80 + 0x244) = 0x15;
      plVar17 = local_80;
    }
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (uVar16 = *(uint *)(*(long *)(param_2 + 0x68) + 0x1014), uVar16 != 0)) {
      fVar20 = _DAT_100718f00;
      if (*(uint *)((long)plVar17 + 0x2c) != 0) {
        fVar20 = (float)*(uint *)((long)plVar17 + 0x2c);
      }
      uVar18 = (ulong)((fVar20 * DAT_100700b28) / (float)*(uint *)(plVar17 + 6));
      uVar19 = 0x15;
      if ((int)uVar18 != 0) {
        uVar19 = uVar18 & 0xffffffff;
      }
      iVar9 = (int)(long)((float)uVar16 * ((fVar20 / (float)*(uint *)(plVar17 + 6)) / DAT_100717f3c)
                         );
      *(int *)(plVar17 + 0xf) = ((int)((iVar9 + 1) / uVar19) + iVar9) * 4 + 0xeea;
    }
    lVar15 = *(long *)(param_2 + 0x20);
    plVar17[9] = lVar15;
    plVar17[10] = *(long *)(param_2 + 0x28);
    plVar17[0xb] = 0;
    if (lVar15 != 0 || plVar17[8] != 0) {
      local_88 = 0;
      local_78 = (undefined4)_DAT_100718e20;
      uStack_74 = (undefined4)((ulong)_DAT_100718e20 >> 0x20);
      uStack_70 = (undefined4)_UNK_100718e28;
      uStack_6c = (undefined2)((ulong)_UNK_100718e28 >> 0x20);
      uStack_6a = (undefined2)((ulong)_UNK_100718e28 >> 0x30);
      uStack_68 = (undefined2)s_M4A_mp42isom_100718e30._0_4_;
      uStack_66 = SUB42(s_M4A_mp42isom_100718e30._0_4_,2);
      uStack_64 = (undefined2)s_M4A_mp42isom_100718e30._4_4_;
      uStack_62 = SUB42(s_M4A_mp42isom_100718e30._4_4_,2);
      acStack_60[0] = s_M4A_mp42isom_100718e30[8];
      acStack_60[1] = s_M4A_mp42isom_100718e30[9];
      acStack_60[2] = s_M4A_mp42isom_100718e30[10];
      acStack_60[3] = s_M4A_mp42isom_100718e30[0xb];
      uStack_5c = ram0x000100718e3c;
      iVar9 = FUN_10022fa2a(plVar17,0x20);
      if (iVar9 == -0x80) goto LAB_10022d7d2;
      if (iVar9 != 0) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
          goto LAB_10022d44f;
        }
        goto LAB_10022ceac;
      }
      if ((*(byte *)(local_80 + 2) & 2) != 0) goto LAB_10022d71c;
      if (local_80[8] == 0) {
        if (local_80[9] != 0) {
          local_80[0xc] = local_80[0xb];
        }
      }
      else {
        iVar9 = FUN_10017cfbe(local_80[8],local_80 + 0xc);
        if (iVar9 == -0x80) goto LAB_10022d7d2;
        if (iVar9 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
            goto LAB_10022d44f;
          }
          goto LAB_10022ceac;
        }
      }
      lVar15 = local_80[0xc];
      lVar2 = local_80[0xf];
      uVar18 = FUN_1001c661d();
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar18;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = lVar15 + (int)lVar2 + 8;
      uVar16 = *(uint *)(local_80 + 0xf);
      if (SUB168(auVar4 % auVar3,0) != 0) {
        uVar16 = uVar16 + ((int)uVar18 - SUB164(auVar4 % auVar3,0));
        *(uint *)(local_80 + 0xf) = uVar16;
      }
      local_90 = CONCAT44(0x65657266,
                          uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                          uVar16 << 0x18);
      iVar9 = FUN_10022fa2a(local_80,8);
      if (iVar9 == -0x80) goto LAB_10022d7d2;
      if (iVar9 != 0) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
          goto LAB_10022d44f;
        }
        goto LAB_10022ceac;
      }
      if (local_80[8] != 0) {
        iVar9 = FUN_10017cfbe(local_80[8],&local_88);
        if (iVar9 == -0x80) goto LAB_10022d7d2;
        if (iVar9 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
            goto LAB_10022d44f;
          }
          goto LAB_10022ceac;
        }
        lVar15 = local_88;
        if (local_80[8] == 0) goto LAB_10022d67e;
        FUN_10017d2da();
        uVar18 = (local_88 + (int)local_80[0xf]) - 8;
        if (local_80[8] == 0) goto LAB_10022d68a;
        iVar9 = FUN_10017cf3c(local_80[8],uVar18);
        if (iVar9 != -0x80) {
          if (iVar9 != 0) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 == '\0') goto LAB_10022ceac;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
            goto LAB_10022d44f;
          }
          iVar9 = FUN_10017d068(local_80[8],uVar18);
          if (iVar9 == -0x80) goto LAB_10022d7d2;
          if (iVar9 == 0) goto LAB_10022d71c;
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
            goto LAB_10022d44f;
          }
          goto LAB_10022ceac;
        }
LAB_10022d7d2:
        iVar9 = -0x80;
        goto LAB_10022d7d8;
      }
      if (local_80[9] == 0) {
        lVar15 = 0;
      }
      else {
        local_88 = local_80[0xb];
        lVar15 = local_88;
      }
LAB_10022d67e:
      uVar18 = (lVar15 + (int)local_80[0xf]) - 8;
LAB_10022d68a:
      if (local_80[9] != 0) {
        if (uVar18 <= (ulong)local_80[10]) {
          local_80[0xb] = uVar18;
          goto LAB_10022d71c;
        }
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "mDestBufferCapacity >= eof";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar9 = -0x6c;
LAB_10022d6c7:
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 == '\0') goto LAB_10022d7d8;
        uStack_6a = (undefined2)iVar9;
        uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
        goto LAB_10022c80e;
      }
LAB_10022d71c:
      local_90 = 0x7461646d00000000;
      iVar9 = FUN_10022fa2a(local_80,8);
      if (iVar9 == -0x80) goto LAB_10022d7d2;
      if (iVar9 == 0) {
        if (local_80[8] != 0) {
          iVar9 = FUN_10017cfbe(local_80[8],local_80 + 0xd);
          if ((iVar9 != -0x80) && (iVar9 != 0)) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
              goto LAB_10022d44f;
            }
          }
          goto LAB_10022ceac;
        }
        lVar15 = local_80[9];
        if (lVar15 != 0) {
          local_80[0xd] = local_80[0xb];
        }
      }
      else {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
LAB_10022d44f:
          uStack_50 = 1;
          uStack_54 = 0x7a0a90;
          local_4c = 0x400;
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
LAB_10022ceac:
        if (iVar9 == -0x80) goto LAB_10022d7d8;
        if (iVar9 != 0) goto LAB_10022d6c7;
        lVar15 = local_80[9];
      }
      if (lVar15 != 0) {
        *(long *)(param_2 + 0x30) = local_80[0xb];
      }
    }
    lVar15 = *(long *)(param_2 + 0x68);
    FUN_100177cff(&local_94);
    uVar7 = _UNK_100718e4c;
    uVar6 = _UNK_100718e48;
    uVar5 = _UNK_100718e44;
    uVar11 = *(undefined4 *)((long)local_80 + 0x2c);
    *(undefined4 *)((long)local_80 + 0x7c) = _DAT_100718e40;
    *(undefined4 *)(local_80 + 0x10) = uVar5;
    *(undefined4 *)((long)local_80 + 0x84) = uVar6;
    *(undefined4 *)(local_80 + 0x11) = uVar7;
    FUN_1001c62d9((long)local_80 + 0x8c,100);
    *(undefined4 *)(local_80 + 0x12) = local_94;
    *(undefined4 *)((long)local_80 + 0x94) = local_94;
    *(undefined4 *)(local_80 + 0x13) = uVar11;
    *(undefined8 *)((long)local_80 + 0x9c) = 0x1000000000000;
    *(undefined2 *)((long)local_80 + 0xa4) = 0x100;
    *(undefined4 *)(local_80 + 0x16) = 0x10000;
    *(undefined4 *)(local_80 + 0x18) = 0x10000;
    *(undefined4 *)(local_80 + 0x1a) = 0x40000000;
    uVar6 = _UNK_100718e5c;
    uVar5 = _UNK_100718e58;
    uVar11 = _UNK_100718e54;
    *(undefined4 *)((long)local_80 + 0xec) = _DAT_100718e50;
    *(undefined4 *)(local_80 + 0x1e) = uVar11;
    *(undefined4 *)((long)local_80 + 0xf4) = uVar5;
    *(undefined4 *)(local_80 + 0x1f) = uVar6;
    *(undefined4 *)((long)local_80 + 0xfc) = 0x746b6864;
    plVar17 = local_80 + 0x20;
    FUN_1001c62d9(plVar17,0x54);
    *(undefined4 *)plVar17 = 7;
    *(undefined4 *)((long)local_80 + 0x104) = local_94;
    *(undefined4 *)(local_80 + 0x21) = local_94;
    *(undefined4 *)((long)local_80 + 0x10c) = 1;
    *(undefined4 *)((long)local_80 + 0x114) = 0;
    *(undefined2 *)((long)local_80 + 0x124) = 0x100;
    *(undefined4 *)(local_80 + 0x25) = 0x10000;
    *(undefined4 *)(local_80 + 0x27) = 0x10000;
    *(undefined4 *)(local_80 + 0x29) = 0x40000000;
    lVar2 = _UNK_100718e68;
    local_80[0x53] = _DAT_100718e60;
    local_80[0x54] = lVar2;
    local_80[0x55] = (long)PTR___mh_execute_header_100718e70;
    local_80[0x56] = 0;
    *(undefined4 *)(local_80 + 0x57) = 0x10000;
    uVar6 = _UNK_100718e8c;
    uVar5 = _UNK_100718e88;
    uVar11 = _UNK_100718e84;
    *(undefined4 *)((long)local_80 + 0x154) = _DAT_100718e80;
    *(undefined4 *)(local_80 + 0x2b) = uVar11;
    *(undefined4 *)((long)local_80 + 0x15c) = uVar5;
    *(undefined4 *)(local_80 + 0x2c) = uVar6;
    FUN_1001c62d9((long)local_80 + 0x164,0x18);
    *(undefined4 *)(local_80 + 0x2d) = local_94;
    *(undefined4 *)((long)local_80 + 0x16c) = local_94;
    *(undefined4 *)(local_80 + 0x2e) = *(undefined4 *)((long)local_80 + 0x2c);
    *(undefined4 *)((long)local_80 + 0x174) = 0;
    *(undefined2 *)(local_80 + 0x2f) = 0x55c4;
    *(undefined8 *)((long)local_80 + 0x17c) = 0x68646c7200000022;
    FUN_1001c62d9((long)local_80 + 0x184,0x1a);
    *(undefined4 *)((long)local_80 + 0x18c) = 0x736f756e;
    uVar13 = _UNK_100718e98;
    *(undefined8 *)((long)local_80 + 0x19e) = _DAT_100718e90;
    *(undefined8 *)((long)local_80 + 0x1a6) = uVar13;
    *(undefined8 *)((long)local_80 + 0x1ae) = 0;
    uVar13 = _UNK_100718ea8;
    *(undefined8 *)((long)local_80 + 0x1b6) = _DAT_100718ea0;
    *(undefined8 *)((long)local_80 + 0x1be) = uVar13;
    uVar13 = _UNK_100718eb8;
    *(undefined **)((long)local_80 + 0x1c6) = PTR___mh_execute_header_100718eb0;
    *(undefined8 *)((long)local_80 + 0x1ce) = uVar13;
    *(undefined4 *)((long)local_80 + 0x1d6) = 1;
    local_80[0x3d] = 0x7374626c00000000;
    local_80[0x3f] = DAT_100718ec0;
    local_80[0x40] = 0;
    local_80[0x43] = DAT_100718ed0;
    local_80[0x44] = 0;
    *(undefined4 *)(local_80 + 0x45) = 0;
    puVar14 = (undefined8 *)FUN_1001c6429(0x28);
    local_80[0x42] = (long)puVar14;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = DAT_100718ee0;
      puVar14[1] = 0;
      *(undefined4 *)(local_80 + 0x49) = 0;
      local_80[0x46] = DAT_100718ef0;
      local_80[0x47] = 0;
      *(int *)((long)local_80 + 0x24c) = (int)local_80[0xd];
      local_90 = 0;
      local_80[0x5a] = 0;
      iVar9 = FUN_1001c861c();
      if (iVar9 == -0x80) {
LAB_10022ceff:
        FUN_1001c8d4b(local_90,1);
      }
      else if (iVar9 == 0) {
        if (lVar15 != 0) {
          iVar9 = FUN_1003b07e0(lVar15,0,0,local_90);
          if (iVar9 == -0x80) goto LAB_10022ceff;
          if (iVar9 != 0) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              uStack_6a = (undefined2)iVar9;
              uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
              goto LAB_10022d496;
            }
            goto LAB_10022cefa;
          }
        }
        uVar16 = *(uint *)(local_80 + 2);
        plVar17 = local_80;
        if ((uVar16 & 4) == 0) {
          FUN_1001b7a44(&local_58);
          plVar17 = local_80;
          (**(code **)(*local_80 + 0x40))(&local_78,local_80);
          FUN_1001b80b2(&local_58,&local_78);
          FUN_1001b7a50(&local_78);
          cVar8 = FUN_1001b8428(&local_58);
          if (cVar8 == '\0') {
            iVar9 = FUN_1001c9b1d(local_90,&local_88);
            if (iVar9 != -0x80) {
              if (iVar9 == 0) {
                iVar9 = FUN_1001c9f0c(local_88,0xa9746f6f,0,0);
                lVar2 = local_88;
                if (iVar9 != -0x80) {
                  if (iVar9 == 0) {
                    uVar13 = FUN_1001b83ae(&local_58);
                    uVar11 = FUN_1001b83f0(&local_58);
                    iVar9 = FUN_1001cacbc(lVar2,1,1,uVar13,uVar11);
                    if (iVar9 != -0x80) {
                      plVar17 = local_80;
                      if (iVar9 == 0) goto LAB_10022cbb9;
                      uVar13 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar8 != '\0') {
                        uStack_6a = (undefined2)iVar9;
                        uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
                        goto LAB_10022d608;
                      }
                    }
                  }
                  else {
                    uVar13 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar8 != '\0') {
                      uStack_6a = (undefined2)iVar9;
                      uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
                      goto LAB_10022d608;
                    }
                  }
                }
              }
              else {
                uVar13 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  uStack_6a = (undefined2)iVar9;
                  uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
LAB_10022d608:
                  uStack_6c = 0x400;
                  uStack_70 = 1;
                  uStack_74 = 0x7a0a90;
                  local_78 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_78,
                                      0x12);
                }
              }
            }
            FUN_1001b7a50(&local_58);
            goto LAB_10022ceff;
          }
LAB_10022cbb9:
          FUN_1001b7a50(&local_58);
          uVar16 = *(uint *)(plVar17 + 2);
        }
        if (((uVar16 & 8) != 0) && (*(int *)((long)plVar17 + 0x2ec) != 0)) {
          iVar9 = FUN_1001c9b1d(local_90,&local_88);
          if (iVar9 != -0x80) {
            if (iVar9 == 0) {
              iVar9 = FUN_1001c9f0c(local_88,0x2d2d2d2d,"com.apple.iTunes",0x10);
              if (iVar9 != -0x80) {
                if (iVar9 == 0) {
                  iVar9 = FUN_1001ca240(local_88,"tool",4);
                  if (iVar9 != -0x80) {
                    if (iVar9 == 0) {
                      uVar16 = *(uint *)((long)local_80 + 0x2ec);
                      uVar10 = *(uint *)(local_80 + 0x5e);
                      local_58 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 |
                                 (uint)(((ulong)uVar16 << 0x20) >> 0x18) & 0xff0000 |
                                 (uint)(((ulong)uVar16 << 0x20) >> 8);
                      uStack_54 = uVar10 >> 0x18 | uVar10 >> 8 & 0xff00 |
                                  (uint)((((ulong)uVar10 & 0xff00) << 0x28) >> 0x20) |
                                  (uint)((ulong)(CONCAT44(uVar16,uVar10) << 0x38) >> 0x20);
                      iVar9 = FUN_1001cacbc(local_88,1,0x15,&local_58,8);
                      if (iVar9 != -0x80) {
                        if (iVar9 == 0) goto LAB_10022cca7;
                        uVar13 = FUN_1001cc310();
                        cVar8 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar8 != '\0') {
                          uStack_6a = (undefined2)iVar9;
                          uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
                          goto LAB_10022d496;
                        }
                      }
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar8 != '\0') {
                        uStack_6a = (undefined2)iVar9;
                        uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
                        goto LAB_10022d496;
                      }
                    }
                  }
                }
                else {
                  uVar13 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    uStack_6a = (undefined2)iVar9;
                    uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
                    goto LAB_10022d496;
                  }
                }
              }
            }
            else {
              uVar13 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                uStack_6a = (undefined2)iVar9;
                uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
LAB_10022d496:
                uStack_70 = 1;
                uStack_74 = 0x7a0a90;
                uStack_6c = 0x400;
                local_78 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_78,0x12
                                   );
              }
            }
          }
          goto LAB_10022cefa;
        }
LAB_10022cca7:
        uVar13 = 0x800;
        if (lVar15 == 0) {
          uVar13 = 0x80000;
        }
        iVar9 = FUN_1001c9118(local_90,uVar13);
        if (iVar9 == -0x80) goto LAB_10022ceff;
        if (iVar9 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            uStack_6a = (undefined2)iVar9;
            uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
            goto LAB_10022d496;
          }
          goto LAB_10022cefa;
        }
        local_80[0x5a] = local_90;
      }
      else {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          uStack_6a = (undefined2)iVar9;
          uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
          goto LAB_10022d496;
        }
LAB_10022cefa:
        if (iVar9 != 0) goto LAB_10022ceff;
      }
      uVar16 = *(uint *)((long)local_80 + 0x14);
      if ((uVar16 < 3) && ((*(byte *)(local_80 + 2) & 0x20) == 0)) {
        iVar9 = FUN_1002e8de0((int)local_80[5],uVar16,local_80 + 0x3c);
        if (iVar9 == -0x80) goto LAB_10022d7d8;
        if (iVar9 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 == '\0') goto LAB_10022d7d8;
          uStack_6a = (undefined2)iVar9;
          uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
          goto LAB_10022c80e;
        }
        uVar16 = *(uint *)((long)local_80 + 0x14);
      }
      uVar10 = *(uint *)(param_2 + 0x90) >> 3;
      *(uint *)((long)local_80 + 0x3c) = uVar10;
      lVar15 = local_80[6];
      iVar9 = (int)lVar15;
      *(int *)(param_2 + 0x98) = iVar9;
      *(uint *)(param_2 + 0x9c) = uVar16 * iVar9 * uVar10;
      *(long *)(param_2 + 0xa0) = lVar15;
      *(undefined4 *)(param_2 + 0xb0) = 0;
      *(undefined2 *)(param_2 + 0xb4) = 0;
      *(long *)(param_2 + 0x30) = local_80[0xb];
      iVar9 = 0;
      goto LAB_10022d7d8;
    }
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x2166;
      uStack_68 = 0x7b;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    iVar9 = -0x6c;
    if (cVar8 == '\0') goto LAB_10022d7d8;
    uStack_6a = 0xff94;
    uStack_68 = 0xffff;
  }
  else {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 == '\0') goto LAB_10022d7d8;
    uStack_6a = (undefined2)iVar9;
    uStack_68 = (undefined2)((uint)iVar9 >> 0x10);
  }
LAB_10022c80e:
  uStack_70 = 1;
  uStack_74 = 0x7a0a90;
  uStack_6c = 0x400;
  local_78 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_78,0x12);
LAB_10022d7d8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

