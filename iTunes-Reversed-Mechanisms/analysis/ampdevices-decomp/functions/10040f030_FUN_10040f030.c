// name: FUN_10040f030
// address: 10040f030

void FUN_10040f030(undefined8 param_1,long param_2)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 local_908 [48];
  char local_8d8 [4];
  char *local_8d4;
  undefined4 local_888;
  char *local_884;
  undefined2 local_87c;
  int local_87a;
  undefined2 local_468 [16];
  ushort local_448 [256];
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = FUN_10017d489(*(undefined8 *)(param_2 + 0x78),local_248);
  if (iVar5 == -0x80) goto LAB_10040f7e2;
  if (iVar5 == 0) {
    psVar2 = *(short **)(param_2 + 0x88);
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      FUN_1001e1c39(psVar2,local_248);
    }
    FUN_1001ceabd(local_908,0,FUN_10040f86b,param_2,0,0);
    FUN_1001e40a7(local_248,local_448,local_468);
    if (*(char *)(param_2 + 0x61) == '\0') {
      cVar4 = *(char *)(param_2 + 0x62);
      cVar3 = FUN_1001e4e7c("epub",local_468,1);
      cVar4 = (cVar4 != '\0') * '\x02';
      if ((cVar3 == '\0') && (cVar3 = FUN_1001e4e7c("ibooks",local_468,1), cVar3 == '\0')) {
        local_468[0] = 0;
      }
    }
    else {
      cVar4 = (*(int *)(param_2 + 100) == 0x400000) << 4;
      if (*(char *)(param_2 + 0x68) == '\0') {
        FUN_1001e04f5("zip",local_468);
      }
      else {
        FUN_1001e04f5(param_2 + 0x68,local_468);
      }
    }
    piVar8 = *(int **)(param_2 + 0x80);
    if ((*piVar8 == 0x41464350) && (0x1f < local_448[0])) {
      local_448[0] = 0x1f;
    }
    if (*(int *)(param_2 + 100) == 0x1000) {
      if (*(char *)(param_2 + 0x61) != '\0') {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "context->createZipFile == false";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        piVar8 = *(int **)(param_2 + 0x80);
      }
      iVar5 = FUN_10017ecc9(piVar8,local_248,&local_888,local_8d8);
      if (iVar5 == 0) {
        if (local_8d8[0] == '\0') {
          iVar5 = FUN_100184b54(&local_888);
          if (iVar5 == -0x80) goto LAB_10040f7e2;
          if (iVar5 != 0) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 == '\0') goto LAB_10040f7e2;
            puVar9 = &local_48;
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
            goto LAB_10040f158;
          }
        }
        else {
          iVar5 = FUN_100182d59(&local_888,1);
          if (iVar5 == -0x80) goto LAB_10040f7e2;
          if (iVar5 != 0) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 == '\0') goto LAB_10040f7e2;
            puVar9 = &local_48;
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
            goto LAB_10040f158;
          }
        }
      }
    }
    else {
      iVar5 = FUN_10053600d(piVar8,local_448,local_468,local_248);
      if (iVar5 == -0x80) goto LAB_10040f7e2;
      if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto LAB_10040f7e2;
        puVar9 = &local_888;
        local_888 = 0x8220202;
        local_884 = "Assertion failure";
        local_87c = 0x400;
        local_87a = iVar5;
        goto LAB_10040f158;
      }
    }
    if (*(char *)(param_2 + 0x61) == '\0') {
      lVar1 = param_2 + 0x90;
      iVar5 = FUN_100181256(*(undefined8 *)(param_2 + 0x80),local_248,lVar1);
      if (iVar5 == -0x80) goto LAB_10040f7e2;
      if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto LAB_10040f7e2;
        puVar9 = &local_888;
        local_888 = 0x8220202;
        local_884 = "Assertion failure";
        local_87c = 0x400;
        local_87a = iVar5;
        goto LAB_10040f158;
      }
      iVar6 = FUN_1001f938c(*(undefined8 *)(param_2 + 0x78),lVar1,cVar4,local_908);
      if (iVar6 == 0) goto LAB_10040f546;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        FUN_1001b8dfc(local_8d8,local_248);
        local_884 = (char *)FUN_1001b83ae(local_8d8);
        local_888 = 0x8220202;
        local_87c = 0x400;
        local_87a = iVar6;
        __os_log_impl(0x100000000,uVar7,0x10,
                      "ZipFileExtractAllFiles() failed for \"%{public}s\" (%d)",&local_888,0x12);
        FUN_1001b7a50(local_8d8);
      }
      FUN_100182d59(lVar1,1);
      FUN_1001c62d9(lVar1,0x420);
    }
    else {
      iVar6 = FUN_1001fbe3b(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),
                            local_248,cVar4,local_908,param_2 + 0x90);
      if (iVar6 == 0) {
LAB_10040f546:
        iVar5 = FUN_10017d477(*(undefined8 *)(param_2 + 0x78),&local_888,0);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            iVar5 = FUN_10017d477(param_2 + 0x90,local_8d8,0);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                local_8d4 = local_884;
                iVar5 = FUN_100188f79(param_2 + 0x90);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    iVar6 = 0;
                    goto LAB_10040f4df;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar4 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
                    goto LAB_10040f7cc;
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
                  goto LAB_10040f7cc;
                }
              }
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
LAB_10040f7cc:
              local_3c = 0x400;
              local_44 = "Assertion failure";
              local_48 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
        iVar5 = 0;
        goto LAB_10040f7e2;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        FUN_1001b8dfc(local_8d8,local_248);
        local_884 = (char *)FUN_1001b83ae(local_8d8);
        local_888 = 0x8220202;
        local_87c = 0x400;
        local_87a = iVar6;
        __os_log_impl(0x100000000,uVar7,0x10,"ZipCreateNewFile() failed for \"%{public}s\" (%d)",
                      &local_888,0x12);
        FUN_1001b7a50(local_8d8);
      }
    }
LAB_10040f4df:
    iVar5 = -0x80;
    if (*(char *)(param_2 + 0x60) == '\0') {
      iVar5 = iVar6;
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 == '\0') goto LAB_10040f7e2;
    puVar9 = &local_888;
    local_888 = 0x8220202;
    local_884 = "Assertion failure";
    local_87c = 0x400;
    local_87a = iVar5;
LAB_10040f158:
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar9,0x12);
  }
LAB_10040f7e2:
  *(int *)(param_2 + 0x4c8) = iVar5;
  FUN_1001e9809(param_2 + 0x4b8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

