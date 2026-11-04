// name: FUN_100524a2d
// address: 100524a2d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100524a2d(long *param_1)

{
  long *plVar1;
  sqlite3_int64 sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  void *pvVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  double dVar26;
  ulong local_af0;
  void *local_ae8;
  int local_adc;
  double local_ad8;
  int local_acc;
  long local_ac8;
  int local_ac0;
  int local_abc;
  long *local_ab8;
  long local_ab0;
  long *local_aa8;
  ulong local_aa0;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined2 local_a8c;
  int local_a8a;
  char local_898 [1056];
  undefined2 local_478;
  undefined2 uStack_476;
  undefined8 uStack_474;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined2 uStack_468;
  undefined2 uStack_466;
  undefined2 uStack_464;
  undefined2 uStack_462;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined2 uStack_454;
  undefined2 uStack_452;
  undefined2 uStack_450;
  undefined6 uStack_44e;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ab0 = *param_1;
  local_aa8 = param_1;
  if (*(char *)((long)param_1 + 0x113a4) != '\0') {
    if ((char)param_1[0x211e] != '\0') {
      uVar14 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      if (cVar10 != '\0') {
        local_478 = 0x202;
        uStack_476 = 0x822;
        uStack_474._0_4_ = 0x7a0a90;
        uStack_474._4_4_ = 1;
        uStack_46c = 0x822;
        uStack_46a = 0x57ad;
        uStack_468 = 0x7e;
        uStack_466 = 1;
        uStack_464 = 0;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar14 = FUN_1001fcbda(local_ab0);
    FUN_100524929(local_aa8,uVar14,"MobileSync.plist",local_aa8 + 0x211e);
    FUN_10017060f(uVar14);
  }
  local_ad8 = (double)(local_ab0 + 0x14c68);
  lVar19 = 0;
  local_aa0 = 0;
  do {
    if (*(char *)((long)local_aa8 + lVar19 + 0x18) == '\0') goto LAB_100524f06;
    if ((((lVar19 == 0) &&
         (iVar11 = FUN_1001888ba(local_aa8 + 0xd,"DBTemp",local_898,0), iVar11 == 0)) &&
        (iVar11 = FUN_100182d59(local_898,1), iVar11 != -0x80)) && (iVar11 != 0)) {
      uVar14 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      if (cVar10 != '\0') {
        local_478 = 0x202;
        uStack_476 = 0x822;
        uStack_474._0_4_ = 0x7a0a90;
        uStack_474._4_4_ = 1;
        uStack_46c = 0x400;
        uStack_46a = (undefined2)iVar11;
        uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
    lVar23 = (long)local_aa8 + lVar19 + 0x18;
    iVar11 = FUN_1005267cf(lVar23);
    if (iVar11 == -0x22) {
      iVar13 = -0x22;
      iVar11 = -0x22;
      if ((local_aa0 < 2) && (iVar12 = FUN_1001e9de0(local_ad8), iVar12 != -0x80)) {
        if (iVar12 != 0) {
          uVar14 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            local_478 = 0x202;
            uStack_476 = 0x822;
            uStack_474._0_4_ = 0x7a0a90;
            uStack_474._4_4_ = 1;
            uStack_46c = 0x400;
            uStack_46a = (undefined2)iVar12;
            uStack_468 = (undefined2)((uint)iVar12 >> 0x10);
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
          if (iVar12 != 0) goto LAB_100524e31;
        }
        if (lVar19 == 0) {
          *(undefined8 *)(local_ab0 + 0x69d0) = 0x7500000001;
        }
        iVar11 = iVar13;
        if (*(long *)(local_ab0 + 0x14cb0) == 0) {
          uVar14 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            pcVar17 = "handlerData->iTunesControlFileRefNum != ((JRFileRefNum) 0)";
LAB_10052530f:
            uStack_46c = 0x822;
            uStack_474._4_4_ = 1;
            uStack_474._0_4_ = 0x7a0a90;
            uStack_476 = 0x822;
            local_478 = 0x202;
            uStack_46a = SUB82(pcVar17,0);
            uStack_468 = (undefined2)((ulong)pcVar17 >> 0x10);
            uStack_466 = (undefined2)((ulong)pcVar17 >> 0x20);
            uStack_464 = 0;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
LAB_100524d0a:
          FUN_1001782e9(0,0);
        }
        else {
          cVar10 = FUN_100266a70(*(undefined8 *)(local_ab0 + 0x66d8));
          if ((cVar10 != '\0') &&
             (iVar13 = FUN_10017ce92(*(undefined8 *)(local_ab0 + 0x14cb0),&local_a98),
             iVar13 != -0x80)) {
            if (iVar13 == 0) {
              if (CONCAT44(uStack_a94,local_a98) == 0) {
                uVar14 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar14,0x10);
                if (cVar10 != '\0') {
                  pcVar17 = "eof != 0";
                  goto LAB_10052530f;
                }
                goto LAB_100524d0a;
              }
              iVar13 = FUN_10017cf3c(*(undefined8 *)(local_ab0 + 0x14cb0),0);
            }
            else {
              uVar14 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar14,0x10);
              if (cVar10 != '\0') {
                local_478 = 0x202;
                uStack_476 = 0x822;
                uStack_474._0_4_ = 0x7a0a90;
                uStack_474._4_4_ = 1;
                uStack_46c = 0x400;
                uStack_46a = (undefined2)iVar13;
                uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
            if (iVar13 == 0) {
              iVar11 = FUN_1005267cf(lVar23);
              FUN_100505cd3(local_ab0);
            }
          }
        }
        FUN_1001e9eb9(local_ad8);
        goto LAB_100524d5a;
      }
LAB_100524e31:
      uVar14 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      if (cVar10 != '\0') {
        local_478 = 0x202;
        uStack_476 = 0x822;
        uStack_474._0_4_ = 0x7a0a90;
        uStack_474._4_4_ = 1;
        uStack_46c = 0x400;
        uStack_46a = (undefined2)iVar11;
        uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
LAB_100524e4e:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar14 = DAT_1008c75b8;
      cVar10 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar10 != '\0') {
        FUN_1001b8dfc(&local_a98,(long)local_aa8 + lVar19 + 0x488);
        uVar22 = FUN_1001b83ae(&local_a98);
        local_478 = 0x302;
        uStack_476 = 0x822;
        uStack_474._0_4_ = (int)uVar22;
        uStack_474._4_4_ = (undefined4)((ulong)uVar22 >> 0x20);
        uStack_46c = 0x400;
        uStack_46a = (undefined2)iVar11;
        uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
        uStack_466 = 0x400;
        uStack_464 = uStack_46a;
        uStack_462 = uStack_468;
        __os_log_impl(0x100000000,uVar14,0x10,
                      "WriteIPodFileBuffer() failed for \"%{public}s\" (%d / 0x%08X)",&local_478,
                      0x18);
        FUN_1001b7a50(&local_a98);
      }
    }
    else {
LAB_100524d5a:
      if (iVar11 == -0x80) {
LAB_100524d88:
        iVar11 = FUN_1005267cf(lVar23);
      }
      else if ((iVar11 != -0x22) && (iVar11 != 0)) {
        uVar14 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar14,0x10);
        if (cVar10 != '\0') {
          local_478 = 0x202;
          uStack_476 = 0x822;
          uStack_474._0_4_ = 0x7a0a90;
          uStack_474._4_4_ = 1;
          uStack_46c = 0x400;
          uStack_46a = (undefined2)iVar11;
          uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        goto LAB_100524d88;
      }
      if (iVar11 == -0x80) goto LAB_100524e4e;
      if (iVar11 != 0) goto LAB_100524e31;
      lVar23 = (long)local_aa8 + lVar19 + 0x690;
      FUN_100189139(lVar23,0x70707);
      if (((int)local_aa0 != 3) && ((int)local_aa0 != 0)) goto LAB_100524f06;
      iVar11 = FUN_10017d477(lVar23,&local_478,0);
      if (iVar11 == -0x80) {
LAB_100524e23:
        if (lVar19 == 0) goto LAB_100524fa2;
      }
      else {
        if (iVar11 != 0) {
          uVar14 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            local_a98 = 0x8220202;
            uStack_a94 = 0x7a0a90;
            uStack_a90 = 1;
            local_a8c = 0x400;
            local_a8a = iVar11;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
          }
          if (iVar11 != 0) goto LAB_100524e23;
        }
        if (lVar19 == 0) {
          *(undefined4 *)(local_ab0 + 0x6ab8) = uStack_474._4_4_;
LAB_100524fa2:
          FUN_1001e1c39((long)local_aa8 + lVar19 + 0x488,&local_a98);
          FUN_1001e26e1(".p7b",&local_a98);
          lVar23 = (long)local_aa8 + lVar19 + 0x68;
          iVar11 = FUN_10017ecc9(lVar23,&local_a98,local_898);
          if (((iVar11 == 0) && (iVar11 = FUN_100182d4d(local_898), iVar11 != -0x80)) &&
             (iVar11 != 0)) {
            uVar14 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar14,0x10);
            if (cVar10 != '\0') {
              local_478 = 0x202;
              uStack_476 = 0x822;
              uStack_474._0_4_ = 0x7a0a90;
              uStack_474._4_4_ = 1;
              uStack_46c = 0x400;
              uStack_46a = (undefined2)iVar11;
              uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12)
              ;
            }
          }
          lVar24 = local_ab0;
          if ((*(char *)(local_ab0 + 0x35b) != '\0') && (*(short *)(local_ab0 + 0x3b4) == 2)) {
            local_ac8 = 0;
            iVar11 = FUN_1001888ba(lVar23,"iTunesPState",&local_478,0);
            lVar24 = local_ab0;
            if (iVar11 == 0) {
              iVar11 = FUN_100180bd2(&local_478,&local_ac8,&local_af0);
              if (iVar11 == 0) {
                if (0x23 < local_af0) {
                  FUN_1001c62d9(local_ac8 + 4,local_af0 - 4);
                  iVar11 = FUN_1001809f6(local_ac8,local_af0,lVar23,"iTunesPState",0,0);
                  if ((iVar11 != -0x80) && (iVar11 != 0)) {
                    uVar14 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar10 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                      goto LAB_1005255d9;
                    }
                  }
                  goto LAB_100525405;
                }
                uVar14 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar14,0x10);
                if (cVar10 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "fileSize >= sizeof(ShuffleV2PlayerState)";
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                FUN_1001c64c1(local_ac8);
                iVar11 = -0xd0;
LAB_100525465:
                uVar14 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar14,0x10);
                lVar24 = local_ab0;
                if (cVar10 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474._0_4_ = 0x7a0a90;
                  uStack_474._4_4_ = 1;
                  uStack_46c = 0x400;
                  uStack_46a = (undefined2)iVar11;
                  uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar14,0x10);
                }
              }
              else if (iVar11 == -0x80) {
                FUN_1001c64c1(local_ac8);
                lVar24 = local_ab0;
              }
              else {
                uVar14 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar14,0x10);
                if (cVar10 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
LAB_1005255d9:
                  local_4c = 0x400;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar14,0x10);
                }
LAB_100525405:
                FUN_1001c64c1(local_ac8);
                lVar24 = local_ab0;
                if ((iVar11 != -0x80) && (iVar11 != 0)) goto LAB_100525465;
              }
            }
          }
          if (*(char *)(lVar24 + 0x35f) == '\0') {
            FUN_1001e04f5("PlayCounts.plist",&local_a98);
            iVar11 = FUN_1003650b5(*(undefined4 *)(local_ab0 + 0x6ab8),lVar23,&local_a98);
            if ((iVar11 != -0x2b) && (iVar11 != 0)) {
              uVar14 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar14,0x10);
              if (cVar10 != '\0') {
                local_478 = 0x202;
                uStack_476 = 0x822;
                uStack_474._0_4_ = 0x7a0a90;
                uStack_474._4_4_ = 1;
                uStack_46c = 0x822;
                uStack_46a = 0x9c9c;
                uStack_468 = 0x7c;
                uStack_466 = 1;
                uStack_464 = 0;
                __os_log_error_impl(0x100000000,uVar14,0x10);
              }
              FUN_1001782e9(0,0);
            }
          }
        }
        else {
          *(undefined4 *)(local_ab0 + 0x14ccc) = uStack_474._4_4_;
        }
      }
    }
LAB_100524f06:
    local_aa0 = local_aa0 + 1;
    lVar19 = lVar19 + 0xa98;
  } while (lVar19 != 0x11370);
  plVar1 = (long *)local_aa8[0x2271];
  local_ad8 = (double)FUN_1001ebd46();
  plVar15 = local_aa8;
  if (plVar1 == (long *)0x0) goto LAB_1005262b2;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar14 = DAT_1008c75b8;
  cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar10 != '\0') {
    local_478 = 0;
    __os_log_impl(0x100000000,uVar14,1,"genius sync>  starting",&local_478,2);
  }
  if (plVar1[2] == 0) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474._0_4_ = 0x7a0a90;
      uStack_474._4_4_ = 1;
      uStack_46c = 0x822;
      uStack_46a = 0x5834;
      uStack_468 = 0x7e;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    plVar15 = local_aa8;
    goto LAB_1005262b2;
  }
  uVar21 = plVar1[4];
  if (uVar21 == 0) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474._0_4_ = 0x7a0a90;
      uStack_474._4_4_ = 1;
      uStack_46c = 0x822;
      uStack_46a = 0x5845;
      uStack_468 = 0x7e;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    plVar15 = local_aa8;
    goto LAB_1005262b2;
  }
  local_aa0 = uVar21;
  iVar11 = FUN_1001d357f(uVar21,1);
  local_acc = iVar11;
  if (plVar1[0x15] == 0) {
LAB_100525807:
    if (*plVar1 == 0) {
      if (*(char *)((long)plVar1 + 0xb1) == '\x01') {
        iVar13 = FUN_1001d352a(local_aa0,"genius_config",0,1);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar14 = DAT_1008c75b8;
        cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar10 != '\0') {
          local_478 = 0x100;
          uStack_476 = 0x400;
          uStack_474._0_4_ = iVar13;
          __os_log_impl(0x100000000,uVar14,1,"genius sync>  config delete  (%d)",&local_478,8);
        }
        uVar21 = local_aa0;
        if (iVar13 != -0x80) {
          iVar11 = 0;
          if (iVar13 == 0) goto LAB_100525b40;
          uVar14 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          uVar21 = local_aa0;
          if (cVar10 != '\0') {
            uStack_46a = (undefined2)iVar13;
            uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
            uVar6 = uStack_46a;
            uVar7 = uStack_468;
            goto LAB_100526529;
          }
        }
      }
      else {
LAB_100525b40:
        plVar15 = (long *)plVar1[0xf];
        if (plVar15 != plVar1 + 0x10) {
          local_ab8 = plVar1 + 3;
          do {
            sVar2 = plVar15[4];
            iVar11 = _sqlite3_bind_int64((sqlite3_stmt *)plVar1[3],1,sVar2);
            iVar13 = FUN_1001d2d10(iVar11);
            if (iVar13 != 0) {
              uVar21 = local_aa0;
              if (iVar13 == -0x80) goto LAB_100526187;
              uVar14 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar14,0x10);
              uVar21 = local_aa0;
              if (cVar10 == '\0') goto LAB_100526187;
              uStack_46a = (undefined2)iVar13;
              uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
              uVar6 = uStack_46a;
              uVar7 = uStack_468;
              goto LAB_100526529;
            }
            iVar13 = FUN_100626d82(plVar1[3]);
            uVar3 = uStack_474._4_4_;
            if (iVar13 != 0) {
              uVar21 = local_aa0;
              if (iVar13 == -0x80) goto LAB_100526187;
              uVar14 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar14,0x10);
              uVar21 = local_aa0;
              if (cVar10 == '\0') goto LAB_100526187;
              uStack_46a = (undefined2)iVar13;
              uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
              uVar6 = uStack_46a;
              uVar7 = uStack_468;
              goto LAB_100526529;
            }
            uStack_474._4_4_ = (undefined4)((ulong)sVar2 >> 0x20);
            uVar4 = uStack_474._4_4_;
            uStack_474._4_4_ = uVar3;
            if (local_898[0] == '\x01') {
              iVar11 = _sqlite3_column_int((sqlite3_stmt *)plVar1[3],0);
              pvVar18 = _sqlite3_column_blob((sqlite3_stmt *)*local_ab8,1);
              local_ac0 = _sqlite3_column_bytes((sqlite3_stmt *)*local_ab8,1);
              local_adc = _sqlite3_column_int((sqlite3_stmt *)*local_ab8,2);
              local_ae8 = _sqlite3_column_blob((sqlite3_stmt *)*local_ab8,3);
              local_abc = _sqlite3_column_bytes((sqlite3_stmt *)*local_ab8,3);
              if (local_ac0 != 0 && pvVar18 != (void *)0x0) {
                iVar13 = _sqlite3_bind_int64((sqlite3_stmt *)plVar1[5],1,sVar2);
                if ((iVar13 == 0) &&
                   (iVar13 = _sqlite3_bind_int((sqlite3_stmt *)plVar1[5],2,iVar11), iVar13 == 0)) {
                  iVar13 = _sqlite3_bind_blob((sqlite3_stmt *)plVar1[5],3,pvVar18,local_ac0,
                                              (void *)0x0);
                }
                iVar13 = FUN_1001d2d10(iVar13);
                if (iVar13 != 0) {
                  uVar21 = local_aa0;
                  if (iVar13 == -0x80) goto LAB_100526187;
                  uVar14 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar14,0x10);
                  uVar21 = local_aa0;
                  if (cVar10 == '\0') goto LAB_100526187;
                  uStack_46a = (undefined2)iVar13;
                  uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                  uVar6 = uStack_46a;
                  uVar7 = uStack_468;
                  goto LAB_100526529;
                }
                iVar13 = FUN_100626d82(plVar1[5],local_898);
                if (iVar13 != 0) {
                  uVar21 = local_aa0;
                  if (iVar13 == -0x80) goto LAB_100526187;
                  uVar14 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar14,0x10);
                  uVar21 = local_aa0;
                  if (cVar10 == '\0') goto LAB_100526187;
                  uStack_46a = (undefined2)iVar13;
                  uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                  uVar6 = uStack_46a;
                  uVar7 = uStack_468;
                  goto LAB_100526529;
                }
              }
              if (local_abc != 0 && local_ae8 != (void *)0x0) {
                iVar11 = _sqlite3_bind_int64((sqlite3_stmt *)plVar1[6],1,sVar2);
                if ((iVar11 == 0) &&
                   (iVar11 = _sqlite3_bind_int((sqlite3_stmt *)plVar1[6],2,local_adc), iVar11 == 0))
                {
                  iVar11 = _sqlite3_bind_blob((sqlite3_stmt *)plVar1[6],3,local_ae8,local_abc,
                                              (void *)0x0);
                }
                iVar13 = FUN_1001d2d10(iVar11);
                if (iVar13 != 0) {
                  uVar21 = local_aa0;
                  if (iVar13 == -0x80) goto LAB_100526187;
                  uVar14 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar14,0x10);
                  uVar21 = local_aa0;
                  if (cVar10 == '\0') goto LAB_100526187;
                  uStack_46a = (undefined2)iVar13;
                  uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                  uVar6 = uStack_46a;
                  uVar7 = uStack_468;
                  goto LAB_100526529;
                }
                iVar13 = FUN_100626d82(plVar1[6],local_898);
                if (iVar13 != 0) {
                  uVar21 = local_aa0;
                  if (iVar13 == -0x80) goto LAB_100526187;
                  uVar14 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar14,0x10);
                  uVar21 = local_aa0;
                  if (cVar10 == '\0') goto LAB_100526187;
                  uStack_46a = (undefined2)iVar13;
                  uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                  uVar6 = uStack_46a;
                  uVar7 = uStack_468;
                  goto LAB_100526529;
                }
              }
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar14 = DAT_1008c75b8;
              cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar10 != '\0') {
                local_478 = 0x300;
                uStack_46c = 0x400;
                uStack_46a = (undefined2)local_ac0;
                uStack_468 = (undefined2)((uint)local_ac0 >> 0x10);
                uStack_466 = 0x400;
                uStack_464 = (undefined2)local_abc;
                uStack_462 = (undefined2)((uint)local_abc >> 0x10);
                pcVar17 = "genius sync>  copy  %12.llu    m%3u  s%5u";
                uVar22 = 0x18;
LAB_100525e8c:
                uStack_476 = 0x800;
                uStack_474._0_4_ = (int)sVar2;
                uStack_474._4_4_ = uVar4;
                __os_log_impl(0x100000000,uVar14,1,pcVar17,&local_478,uVar22);
              }
            }
            else {
              FUN_1001d352a(local_aa0,plVar1[7],plVar1[8],sVar2);
              FUN_1001d352a(local_aa0,plVar1[0xb],plVar1[0xc],sVar2);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar14 = DAT_1008c75b8;
              cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar10 != '\0') {
                local_478 = 0x100;
                pcVar17 = "genius sync>  delete  %12.llu";
                uVar22 = 0xc;
                goto LAB_100525e8c;
              }
            }
            _sqlite3_reset((sqlite3_stmt *)plVar1[3]);
            _sqlite3_clear_bindings((sqlite3_stmt *)*local_ab8);
            _sqlite3_reset((sqlite3_stmt *)plVar1[5]);
            _sqlite3_clear_bindings((sqlite3_stmt *)plVar1[5]);
            _sqlite3_reset((sqlite3_stmt *)plVar1[6]);
            _sqlite3_clear_bindings((sqlite3_stmt *)plVar1[6]);
            plVar5 = (long *)plVar15[1];
            plVar20 = plVar15;
            if ((long *)plVar15[1] == (long *)0x0) {
              do {
                plVar15 = (long *)plVar20[2];
                bVar25 = (long *)*plVar15 != plVar20;
                plVar20 = plVar15;
              } while (bVar25);
            }
            else {
              do {
                plVar15 = plVar5;
                plVar5 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
            }
          } while (plVar15 != plVar1 + 0x10);
          iVar11 = 0;
        }
        local_ab8 = (long *)CONCAT44(local_ab8._4_4_,iVar11);
        plVar15 = (long *)plVar1[0x12];
        while (plVar15 != plVar1 + 0x13) {
          lVar19 = plVar15[4];
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar14 = DAT_1008c75b8;
          cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar10 != '\0') {
            local_478 = 0x100;
            uStack_476 = 0x800;
            uStack_474._0_4_ = (int)lVar19;
            uStack_474._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
            __os_log_impl(0x100000000,uVar14,1,"genius sync>  delete  %12.llu",&local_478,0xc);
          }
          FUN_1001d352a(local_aa0,plVar1[7],plVar1[8],lVar19);
          FUN_1001d352a(local_aa0,plVar1[0xb],plVar1[0xc],lVar19);
          plVar5 = (long *)plVar15[1];
          plVar20 = plVar15;
          if ((long *)plVar15[1] == (long *)0x0) {
            do {
              plVar15 = (long *)plVar20[2];
              bVar25 = (long *)*plVar15 != plVar20;
              plVar20 = plVar15;
            } while (bVar25);
          }
          else {
            do {
              plVar15 = plVar5;
              plVar5 = (long *)*plVar15;
            } while ((long *)*plVar15 != (long *)0x0);
          }
        }
        uVar21 = local_aa0;
        iVar13 = (int)local_ab8;
      }
    }
    else {
      plVar15 = (long *)FUN_100170f3b();
      uVar16 = FUN_100170ef7(*plVar1);
      iVar13 = FUN_1001d4025(local_aa0,"genius_config",0,1,"data",uVar16 & 0xffffffff,plVar15);
      local_ab8 = plVar15;
      if (iVar13 == 0) {
        pcVar17 = _sqlite3_mprintf("UPDATE genius_config SET version=%d,default_num_results=%d,min_num_results=%d WHERE id=%d"
                                   ,(ulong)*(uint *)(plVar1 + 1),0x19,10);
        if (pcVar17 == (char *)0x0) {
          uVar14 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            local_478 = 0x202;
            uStack_476 = 0x822;
            uStack_474._0_4_ = 0x7a0a90;
            uStack_474._4_4_ = 1;
            uStack_46c = 0x822;
            uStack_46a = 0x5649;
            uStack_468 = 0x7c;
            uStack_466 = 1;
            uStack_464 = 0;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
          FUN_1001782e9(0,0);
          iVar13 = -0x6c;
        }
        else {
          iVar13 = FUN_1001d302b(local_aa0,pcVar17,0,0);
          _sqlite3_free(pcVar17);
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar21 = local_aa0;
      uVar14 = DAT_1008c75b8;
      cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar9 = uStack_450;
      uVar8 = uStack_452;
      uStack_452 = (undefined2)iVar13;
      uVar6 = uStack_452;
      uStack_450 = (undefined2)((uint)iVar13 >> 0x10);
      uVar7 = uStack_450;
      if (cVar10 != '\0') {
        local_478 = 0x600;
        uStack_476 = 0x800;
        uStack_474._0_4_ = (int)local_ab8;
        uStack_474._4_4_ = (undefined4)((ulong)local_ab8 >> 0x20);
        uStack_46c = 0x400;
        uStack_46a = (undefined2)uVar16;
        uStack_468 = (undefined2)(uVar16 >> 0x10);
        uStack_466 = 0x400;
        uStack_464 = (undefined2)(int)plVar1[1];
        uStack_462 = (undefined2)((uint)(int)plVar1[1] >> 0x10);
        uStack_460 = 0x400000000190400;
        local_458 = 10;
        uStack_454 = 0x400;
        __os_log_impl(0x100000000,uVar14,1,
                      "genius sync>  config  %p  %u  ver: %u  def: %d  min: %d  (%d)",&local_478,
                      0x2a);
        uVar8 = uStack_452;
        uVar9 = uStack_450;
      }
      uStack_450 = uVar9;
      uStack_452 = uVar8;
      if (iVar13 != -0x80) {
        if (iVar13 == 0) {
          FUN_10017060f(*plVar1);
          *plVar1 = 0;
          iVar11 = 0;
          goto LAB_100525b40;
        }
        uVar14 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar14,0x10);
        uVar21 = local_aa0;
        if (cVar10 != '\0') goto LAB_100526529;
      }
    }
  }
  else {
    iVar13 = FUN_10062b046(plVar1[0x15],1);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar21 = local_aa0;
    uVar14 = DAT_1008c75b8;
    cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar10 != '\0') {
      local_478 = 0x100;
      uStack_476 = 0x400;
      uStack_474._0_4_ = iVar13;
      __os_log_impl(0x100000000,uVar14,1,"genius sync>  deleted queued tracks (%d)",&local_478,8);
    }
    if (iVar13 != -0x80) {
      iVar11 = 0;
      if (iVar13 == 0) goto LAB_100525807;
      uVar14 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      uVar21 = local_aa0;
      if (cVar10 == '\0') goto LAB_100526187;
      uStack_46a = (undefined2)iVar13;
      uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
      uVar6 = uStack_46a;
      uVar7 = uStack_468;
LAB_100526529:
      uStack_468 = uVar7;
      uStack_46a = uVar6;
      uStack_46c = 0x400;
      uStack_474._4_4_ = 1;
      uStack_474._0_4_ = 0x7a0a90;
      uStack_476 = 0x822;
      local_478 = 0x202;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      uVar21 = local_aa0;
    }
  }
LAB_100526187:
  if (local_acc == 0) {
    if (iVar13 == 0) {
      FUN_1001d3605(uVar21);
      uVar21 = local_aa0;
    }
    else {
      FUN_1001d3677(uVar21);
      uVar21 = local_aa0;
    }
  }
  cVar10 = FUN_1001d39c4(uVar21,"genius_config",0,1,"data");
  *(bool *)(plVar1 + 0x16) = cVar10 != '\0';
  *(int *)((long)plVar1 + 0xc) = iVar13;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  plVar15 = local_aa8;
  uVar14 = DAT_1008c75b8;
  cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar10 != '\0') {
    local_478 = 0x100;
    uStack_476 = 0x400;
    uStack_474._0_4_ = iVar13;
    __os_log_impl(0x100000000,uVar14,1,"genius sync>  done (%d)",&local_478,8);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
  }
  uVar14 = DAT_1008c75b8;
  cVar10 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar10 != '\0') {
    dVar26 = (double)FUN_1001ebd46();
    uStack_474 = (dVar26 - local_ad8) * _DAT_100708b48;
    local_478 = 0x100;
    uStack_476 = 0x800;
    __os_log_impl(0x100000000,uVar14,1,"perf> WriteGeniusSyncData() took %.2f ms",&local_478,0xc);
    plVar15 = local_aa8;
  }
LAB_1005262b2:
  if (plVar15[0x2273] != 0) {
    local_458 = 0;
    uStack_454 = 0;
    uStack_452 = 0;
    uStack_450 = 0;
    uStack_44e = 0;
    uStack_468 = 0;
    uStack_466 = 0;
    uStack_464 = 0;
    uStack_462 = 0;
    uStack_460 = 0;
    local_478 = 0;
    uStack_476 = 0;
    uStack_474._0_4_ = 0;
    uStack_474._4_4_ = 0;
    uStack_46c = 0;
    uStack_46a = 0;
    FUN_1002ca57e(plVar15[0x2273],plVar15 + 4,&local_478,
                  3 - (uint)(*(ushort *)(local_ab0 + 0x40c) < 5));
    plVar15 = local_aa8;
  }
  FUN_1001e9809(plVar15 + 1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

