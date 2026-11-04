// name: FUN_1004fe690
// address: 1004fe690

long FUN_1004fe690(long param_1,long param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  cfstringStruct *pcVar16;
  long lVar17;
  long local_3b0;
  long local_3a8;
  long local_388;
  long local_378;
  long local_370;
  long local_360;
  long local_358;
  long local_348;
  long local_340;
  char local_338 [4];
  cfstringStruct *local_334;
  char local_238 [256];
  char local_138 [4];
  char *local_134;
  undefined2 local_12c;
  char *local_12a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004fed29:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_12a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1004fedaf:
      local_12c = 0x822;
      local_134 = "Assertion failure";
      builtin_strncpy(local_138,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_138,0x16);
    }
LAB_1004fedd4:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        builtin_strncpy(local_138,"\x02\x02\"\b",4);
        local_134 = "Assertion failure (expected to be true)";
        local_12c = 0x822;
        local_12a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_138,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_1004fed29;
    }
    if (param_2 == 0) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_12a = "backupList != nullptr";
        goto LAB_1004fedaf;
      }
      goto LAB_1004fedd4;
    }
    lVar7 = FUN_10017076e(param_2);
    if (0 < lVar7) {
      pcVar13 = local_138;
      FUN_1001dfbb3((cfstringStruct *)(param_1 + 0x6210),pcVar13,0x100);
      if (local_138[0] != '\0') {
        pcVar11 = local_138;
        cVar5 = local_138[0];
        do {
          pcVar11 = pcVar11 + 1;
          if ((byte)(cVar5 - 0x30U) < 10) {
            *pcVar13 = cVar5;
            pcVar13 = pcVar13 + 1;
          }
          cVar5 = *pcVar11;
        } while (cVar5 != '\0');
      }
      *pcVar13 = '\0';
      pcVar13 = local_238;
      FUN_1001dfbb3(param_1 + 0x62b0,pcVar13,0x100);
      if (local_238[0] != '\0') {
        pcVar11 = local_238;
        cVar5 = local_238[0];
        do {
          pcVar11 = pcVar11 + 1;
          if ((byte)(cVar5 - 0x30U) < 10) {
            *pcVar13 = cVar5;
            pcVar13 = pcVar13 + 1;
          }
          cVar5 = *pcVar11;
        } while (cVar5 != '\0');
      }
      *pcVar13 = '\0';
      pcVar1 = (cfstringStruct *)(param_1 + 0x144);
      pcVar2 = (cfstringStruct *)(param_1 + 0x6250);
      pcVar13 = (char *)(param_1 + 0x62f0);
      local_358 = -1;
      local_3a8 = 0;
      local_348 = -1;
      local_378 = 0;
      local_340 = -1;
      local_370 = 0;
      local_360 = -1;
      local_3b0 = 0;
      local_388 = -1;
      lVar17 = 0;
      lVar14 = 0;
      do {
        lVar8 = FUN_10016499b(param_2,lVar17);
        lVar15 = lVar14;
        lVar4 = local_388;
        if (lVar8 != 0) {
          cVar5 = FUN_100167dd2(lVar8,&cf_DefaultSelection,0);
          if (cVar5 != '\0') goto LAB_1004fede4;
          lVar9 = FUN_100166a07(lVar8,&cf_LastBackupDate);
          if (((((char)pcVar1->field0_0x0 != '\0') &&
               (cVar5 = FUN_100167064(lVar8,&cf_SerialNumber,local_338,0x100), cVar5 != '\0')) &&
              (cVar5 = FUN_1001df957(local_338,pcVar1,1), cVar5 != '\0')) &&
             ((local_358 == -1 ||
              ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_3a8,0), lVar10 == 1)))))) {
            local_3a8 = lVar9;
            local_358 = lVar17;
          }
          if (((char)pcVar2->field0_0x0 != '\0') || (*pcVar13 != '\0')) {
            cVar5 = FUN_100167064(lVar8,&cf_ICCID,local_338,0x100);
            if (((cVar5 != '\0') &&
                ((((char)pcVar2->field0_0x0 != '\0' &&
                  (cVar5 = FUN_1001df957(local_338,pcVar2,1), cVar5 != '\0')) ||
                 ((*pcVar13 != '\0' && (cVar5 = FUN_1001df957(local_338,pcVar13,1), cVar5 != '\0')))
                 ))) && ((local_348 == -1 ||
                         ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_378,0), lVar10 == 1))))
                        )) {
              local_378 = lVar9;
              local_348 = lVar17;
            }
            cVar5 = FUN_100167064(lVar8,&cf_ICCID2,local_338,0x100);
            if (((cVar5 != '\0') &&
                ((((char)pcVar2->field0_0x0 != '\0' &&
                  (cVar5 = FUN_1001df957(local_338,pcVar2,1), cVar5 != '\0')) ||
                 ((*pcVar13 != '\0' && (cVar5 = FUN_1001df957(local_338,pcVar13,1), cVar5 != '\0')))
                 ))) && ((local_348 == -1 ||
                         ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_378,0), lVar10 == 1))))
                        )) {
              local_378 = lVar9;
              local_348 = lVar17;
            }
          }
          if (local_238[0] != '\0' || local_138[0] != '\0') {
            cVar5 = FUN_100167064(lVar8,&cf_PhoneNumber,local_338,0x100);
            if (cVar5 != '\0') {
              pcVar11 = local_338;
              if (local_338[0] != '\0') {
                pcVar12 = local_338;
                cVar5 = local_338[0];
                do {
                  pcVar12 = pcVar12 + 1;
                  if ((byte)(cVar5 - 0x30U) < 10) {
                    *pcVar11 = cVar5;
                    pcVar11 = pcVar11 + 1;
                  }
                  cVar5 = *pcVar12;
                } while (cVar5 != '\0');
              }
              *pcVar11 = '\0';
              if ((((local_138[0] != '\0') &&
                   (cVar5 = FUN_1001df957(local_338,local_138,1), cVar5 != '\0')) ||
                  ((local_238[0] != '\0' &&
                   (cVar5 = FUN_1001df957(local_338,local_238,1), cVar5 != '\0')))) &&
                 ((local_340 == -1 ||
                  ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_370,0), lVar10 == 1)))))) {
                local_370 = lVar9;
                local_340 = lVar17;
              }
            }
            cVar5 = FUN_100167064(lVar8,&cf_PhoneNumber2,local_338,0x100);
            if (cVar5 != '\0') {
              pcVar11 = local_338;
              if (local_338[0] != '\0') {
                pcVar12 = local_338;
                cVar5 = local_338[0];
                do {
                  pcVar12 = pcVar12 + 1;
                  if ((byte)(cVar5 - 0x30U) < 10) {
                    *pcVar11 = cVar5;
                    pcVar11 = pcVar11 + 1;
                  }
                  cVar5 = *pcVar12;
                } while (cVar5 != '\0');
              }
              *pcVar11 = '\0';
              if ((((local_138[0] != '\0') &&
                   (cVar5 = FUN_1001df957(local_338,local_138,1), cVar5 != '\0')) ||
                  ((local_238[0] != '\0' &&
                   (cVar5 = FUN_1001df957(local_338,local_238,1), cVar5 != '\0')))) &&
                 ((local_340 == -1 ||
                  ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_370,0), lVar10 == 1)))))) {
                local_370 = lVar9;
                local_340 = lVar17;
              }
            }
          }
          lVar8 = FUN_100166c1b(lVar8,&cf_ProductType);
          if (lVar8 != 0) {
            cVar5 = FUN_1001dfa62((cfstringStruct *)(param_1 + 0x106),lVar8,0);
            if ((cVar5 != '\0') &&
               ((local_360 == -1 ||
                ((lVar9 != 0 && (lVar10 = FUN_10017123b(lVar9,local_3b0,0), lVar10 == 1)))))) {
              local_3b0 = lVar9;
              local_360 = lVar17;
            }
            iVar3 = *(int *)(param_1 + 0x66b0);
            if (iVar3 < 0x69506f64) {
              if (iVar3 == 0x69506164) {
                pcVar16 = &cf_iPad;
              }
              else {
                if (iVar3 != 0x6950686e) goto LAB_1004feca7;
                pcVar16 = &cf_iPhone;
              }
            }
            else {
              pcVar16 = &cf_iPod;
              if ((iVar3 != 0x69506f64) && (pcVar16 = &cf_iPod, iVar3 != 0x69506f74)) {
LAB_1004feca7:
                pcVar16 = (cfstringStruct *)0x0;
              }
            }
            cVar5 = FUN_100173f7c(lVar8,pcVar16);
            if (((cVar5 != '\0') && (lVar15 = lVar9, lVar4 = lVar17, local_388 != -1)) &&
               ((lVar9 == 0 || (lVar8 = FUN_10017123b(lVar9,lVar14,0), lVar8 != 1)))) {
              lVar15 = lVar14;
              lVar4 = local_388;
            }
          }
        }
        local_388 = lVar4;
        lVar17 = lVar17 + 1;
        lVar14 = lVar15;
      } while (lVar17 != lVar7);
      if (-1 < local_358) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        lVar17 = local_358;
        if (cVar5 != '\0') {
          builtin_strncpy(local_338,"\x02\x01\"\b",4);
          local_334 = pcVar1;
          __os_log_impl(0x100000000,uVar6,1,"backup> found backup with serial number \"%{public}s\""
                        ,local_338,0xc);
        }
        goto LAB_1004fede4;
      }
      if (-1 < local_348) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        lVar17 = local_348;
        if (cVar5 != '\0') {
          builtin_strncpy(local_338,"\x02\x01\"\b",4);
          local_334 = pcVar2;
          __os_log_impl(0x100000000,uVar6,1,"backup> found backup with ICCID \"%{public}s\"",
                        local_338,0xc);
        }
        goto LAB_1004fede4;
      }
      if (-1 < local_340) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        lVar17 = local_340;
        if (cVar5 != '\0') {
          builtin_strncpy(local_338,"\x02\x01\"\b",4);
          local_334 = (cfstringStruct *)(param_1 + 0x6210);
          __os_log_impl(0x100000000,uVar6,1,"backup> found backup with phone number \"%{public}s\"",
                        local_338,0xc);
        }
        goto LAB_1004fede4;
      }
      if (-1 < local_360) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        lVar17 = local_360;
        if (cVar5 != '\0') {
          builtin_strncpy(local_338,"\x02\x01\"\b",4);
          local_334 = (cfstringStruct *)(param_1 + 0x106);
          __os_log_impl(0x100000000,uVar6,1,"backup> found backup with product type \"%{public}s\"",
                        local_338,0xc);
        }
        goto LAB_1004fede4;
      }
      if (local_388 < 0) goto LAB_1004feddd;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      lVar17 = local_388;
      if (cVar5 == '\0') goto LAB_1004fede4;
      iVar3 = *(int *)(param_1 + 0x66b0);
      if (iVar3 < 0x69506f64) {
        if (iVar3 == 0x69506164) {
          local_334 = &cf_iPad;
        }
        else {
          if (iVar3 != 0x6950686e) goto LAB_1004ff0ba;
          local_334 = &cf_iPhone;
        }
      }
      else {
        local_334 = &cf_iPod;
        if ((iVar3 != 0x69506f64) && (iVar3 != 0x69506f74)) {
LAB_1004ff0ba:
          local_334 = (cfstringStruct *)0x0;
        }
      }
      builtin_strncpy(local_338,"\x02\x01B\b",4);
      __os_log_impl(0x100000000,uVar6,1,"backup> found backup with device class \"%{public}@\"",
                    local_338,0xc);
      goto LAB_1004fede4;
    }
  }
LAB_1004feddd:
  lVar17 = -1;
LAB_1004fede4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar17;
}

