// name: FUN_1003d23c9
// address: 1003d23c9

void FUN_1003d23c9(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  bool bVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x3e0) != 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context->desktopPhotoLibrary == nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(param_1 + 0x4de) == '\0') {
    iVar5 = 2;
  }
  else if (*(char *)(param_1 + 0x3f6) == '\0') {
    iVar5 = 0;
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context->estimatingTotals == false || (context->saveDesktopImageLibrary == false)"
      ;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar5 = 0;
    FUN_1001782e9(0,0);
  }
  iVar7 = iVar5 + 4;
  if (*(char *)(param_1 + 0x3f5) == '\0') {
    iVar7 = iVar5;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3e0);
  lVar12 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar12 + 0x2b5) == '\x02') {
    if (*(char *)(lVar12 + 0x8d0) != '\0') {
      if (*(char *)(lVar12 + 0x8c8) == '\x01') {
        lVar9 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar9 == 0) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "folderNamesDictionary != nullptr";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          lVar9 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          lVar10 = *(long *)(lVar12 + 0xd10) - *(long *)(lVar12 + 0xd08);
          if (lVar10 != 0) {
            lVar10 = (lVar10 >> 2) * -0x7f01fc07f01fc07f;
            uVar8 = *(undefined8 *)PTR__kCFNull_10082e0c8;
            lVar10 = lVar10 + (ulong)(lVar10 == 0);
            lVar14 = 6;
            do {
              lVar11 = *(long *)(lVar12 + 0xd08);
              if (*(char *)(lVar11 + -6 + lVar14) != '\0') {
                lVar11 = FUN_1001734b1(DAT_1008c4d90,lVar11 + lVar14,
                                       *(undefined2 *)(lVar11 + -2 + lVar14));
                if (lVar11 == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "folderNameString != nullptr";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  FUN_10017060f(lVar9);
                  lVar9 = 0;
                  break;
                }
                FUN_1001714de(lVar9,lVar11,uVar8);
                FUN_10017060f(lVar11);
              }
              lVar14 = lVar14 + 0x204;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
      }
      else {
        lVar9 = 0;
      }
      cVar4 = (*(char *)(*(long *)(param_1 + 0x20) + 0x17) == '\0') * '\b';
      cVar13 = cVar4 + '\x06';
      cVar3 = cVar13;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (cVar3 = cVar4 + '\x16', *(char *)(*(long *)(param_1 + 0x10) + 0x343) == '\0')) {
        cVar3 = cVar13;
      }
      iVar5 = FUN_10045dd57(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar7,
                            *(undefined1 *)(param_1 + 0x3f6),cVar3,*(long *)(param_1 + 0x20) + 0x8e8
                            ,param_1 + 0x410,lVar9,puVar1);
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      FUN_10017060f(lVar9);
      goto LAB_1003d288e;
    }
    iVar5 = 0x450;
LAB_1003d28f4:
    lVar12 = *(long *)(param_1 + 0x20);
LAB_1003d28f8:
    if (iVar5 == -0x80) goto LAB_1003d29bd;
    iVar7 = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(lVar12 + 0x14) != '\0') {
        FUN_1003d6541(*puVar1);
      }
      iVar5 = 0;
      if (*(int *)(param_1 + 4) != 0x69545620) {
        uVar8 = *puVar1;
        FUN_100177d5c(&local_58);
        for (lVar12 = FUN_100496019(uVar8); lVar12 != 0; lVar12 = FUN_1004960d0(lVar12)) {
          if (*(int *)(lVar12 + 0xa4) != 0) {
            *(undefined4 *)(lVar12 + 0x98) = local_58;
          }
        }
      }
      goto LAB_1003d29bd;
    }
  }
  else {
    iVar5 = -0x32;
    if (*(char *)(lVar12 + 0x2b5) != '\x06') goto LAB_1003d28f4;
    iVar5 = (uint)(*(char *)(param_1 + 0x3f6) != '\0') * 0x20;
    bVar15 = *(char *)(param_1 + 0x3f1) != '\0';
    uVar2 = iVar5 + 4 + (uint)bVar15;
    if (*(char *)(param_1 + 0x3f2) == '\0') {
      uVar2 = iVar5 + (uint)bVar15;
    }
    uVar6 = uVar2 + 8;
    if (*(char *)(param_1 + 0x3f3) == '\0') {
      uVar6 = uVar2;
    }
    iVar5 = FUN_1005617a2(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar7,
                          (uint)(*(char *)(lVar12 + 0x17) == '\0') << 0x10 |
                          (uint)(*(char *)(param_1 + 0x4df) != '\0') << 0xe |
                          (uint)(*(char *)(param_1 + 0x4de) != '\0') << 8 |
                          (uint)(*(char *)(param_1 + 0x3f4) != '\0') << 6 | uVar6 | 0xa402,
                          param_1 + 0x410,puVar1);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar7 = FUN_100497044(*puVar1);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
LAB_1003d288e:
    if (iVar5 == 0) {
      iVar5 = FUN_1003d6736(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_1003d28f4;
      }
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar7 = 0x456;
    if ((iVar5 != -0x22) &&
       ((lVar12 = *(long *)(param_1 + 0x20), 5 < iVar5 - 0x6b8U ||
        (iVar7 = 0x45c, *(char *)(lVar12 + 0x2b5) != '\x06')))) goto LAB_1003d28f8;
  }
  iVar5 = iVar7;
  uVar8 = FUN_1001cc310();
  cVar4 = _os_log_type_enabled(uVar8,0x10);
  if (cVar4 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1003d29bd:
  if (*(int *)(param_1 + 0x30) == 0) {
    *(int *)(param_1 + 0x30) = iVar5;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0 || *(char *)(param_1 + 0x4de) == '\0') {
    if ((*(char *)(param_1 + 0x4de) == '\0') && (*(int *)(param_1 + 4) != 0x69545620)) {
      FUN_1001e9809(param_1 + 0x4c8);
    }
  }
  else {
    *(undefined1 *)(lVar12 + 0x16675) = 0;
    if (*(char *)(lVar12 + 0x16676) == '\0') {
      *(undefined1 *)(lVar12 + 0x16674) = 0;
    }
    FUN_1003d2bbb(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

