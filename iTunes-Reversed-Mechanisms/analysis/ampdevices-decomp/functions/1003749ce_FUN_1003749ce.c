// name: FUN_1003749ce
// address: 1003749ce

undefined8 FUN_1003749ce(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char local_158 [4];
  int local_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined2 local_14c;
  int local_14a;
  undefined2 uStack_146;
  undefined2 uStack_144;
  undefined6 uStack_142;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar10 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar10,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_158,"\x02\x02\"\b",4);
      local_154 = 0x7a0a90;
      uStack_150 = 1;
      uStack_14e = 0;
      local_14c = 0x822;
      local_14a = 0x7c58fd;
      uStack_146 = 1;
      uStack_144 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_158,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 0xffffffce;
    goto LAB_100375014;
  }
  lVar4 = FUN_10036f8fa(param_1[6]);
  if (lVar4 == 0) {
    uVar10 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar10,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_158,"\x02\x02\"\b",4);
      local_154 = 0x7a0a90;
      uStack_150 = 1;
      uStack_14e = 0;
      local_14c = 0x822;
      local_14a = 0x7c589d;
      uStack_146 = 1;
      uStack_144 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_158,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 0xffffffdd;
    goto LAB_100375014;
  }
  iVar3 = -4;
  if (*(char *)(lVar4 + 0x6b8) == '\x02') {
LAB_100374b8d:
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    iVar2 = iVar3;
  }
  else {
    lVar5 = FUN_10036d2f1(lVar4,0);
    if (lVar5 == 0) {
      uVar10 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar10,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_158,"\x02\x02\"\b",4);
        local_154 = 0x7a0a90;
        uStack_150 = 1;
        uStack_14e = 0;
        local_14c = 0x822;
        local_14a = 0x7c5917;
        uStack_146 = 1;
        uStack_144 = 0;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_158,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x17ffbfe9;
      goto LAB_100374b8d;
    }
    lVar6 = FUN_10036e72b(param_1);
    if (lVar6 == 0) {
      uVar10 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar10,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_158,"\x02\x02\"\b",4);
        local_154 = 0x7a0a90;
        uStack_150 = 1;
        uStack_14e = 0;
        local_14c = 0x822;
        local_14a = 0x7a0ee9;
        uStack_146 = 1;
        uStack_144 = 0;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_158,0x16);
      }
      lVar7 = 0;
      FUN_1001782e9(0,0);
      lVar6 = 0;
      iVar2 = -0x17ffbffd;
    }
    else {
      lVar7 = _AFCOperationCreateGetSizeOfPathContents(DAT_1008c4d90,lVar6,0,0);
      if (lVar7 == 0) {
        *(undefined1 *)(lVar4 + 0x6b8) = 2;
        lVar7 = 0;
        iVar2 = iVar3;
      }
      else {
        iVar2 = FUN_10036ed41(lVar5,lVar7);
        if (iVar2 == -0x17ffbffa) {
          *(undefined1 *)(lVar4 + 0x6b8) = 2;
          iVar2 = iVar3;
        }
        else {
          *(undefined1 *)(lVar4 + 0x6b8) = 1;
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              uVar10 = _AFCOperationGetResultObject(lVar7);
              lVar8 = FUN_1001705e9(uVar10);
              lVar9 = _CFDictionaryGetTypeID();
              if (lVar8 != lVar9) {
                uVar10 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar10,0x10);
                if (cVar1 != '\0') {
                  builtin_strncpy(local_158,"\x02\x02\"\b",4);
                  local_154 = 0x7a0a90;
                  uStack_150 = 1;
                  uStack_14e = 0;
                  local_14c = 0x822;
                  local_14a = 0x7c6250;
                  uStack_146 = 1;
                  uStack_144 = 0;
                  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_158,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar2 = -0x17ffbfe9;
                goto LAB_100374fec;
              }
              if (param_2 == 0) {
LAB_100374c75:
                if (param_3 == (long *)0x0) {
                  iVar2 = 0;
                }
                else {
                  cVar1 = FUN_100167064(uVar10,&cf_st_blocks,local_158,0x100);
                  if (cVar1 == '\0') {
                    uVar10 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar1 != '\0') {
                      local_4a = 
                      "JRCFDictionaryGetCString( result, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"st_blocks\" \"\")), str, sizeof(str) )"
                      ;
                      goto LAB_1003750af;
                    }
                    goto LAB_100374f51;
                  }
                  iVar3 = _sscanf(local_158,"%llu",param_3);
                  if (iVar3 != 1) {
                    uVar10 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar1 != '\0') {
                      local_4a = "sscanf( str, \"%llu\", physicalSize ) == 1";
                      goto LAB_1003750fd;
                    }
                    goto LAB_100374fcf;
                  }
                  *param_3 = *param_3 << 9;
                  iVar2 = 0;
                }
              }
              else {
                cVar1 = FUN_100167064(uVar10,&cf_st_size,local_158,0x100);
                if (cVar1 == '\0') {
                  uVar10 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar1 != '\0') {
                    local_4a = 
                    "JRCFDictionaryGetCString( result, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"st_size\" \"\")), str, sizeof(str) )"
                    ;
LAB_1003750fd:
                    local_4c = 0x822;
                    local_54 = "Assertion failure";
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
LAB_100374fcf:
                  FUN_1001782e9(0,0);
                  iVar2 = -0x17ffbff9;
                }
                else {
                  iVar3 = _sscanf(local_158,"%llu",param_2);
                  if (iVar3 == 1) goto LAB_100374c75;
                  uVar10 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar1 != '\0') {
                    local_4a = "sscanf( str, \"%llu\", logicalSize ) == 1";
LAB_1003750af:
                    local_4c = 0x822;
                    local_54 = "Assertion failure";
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
LAB_100374f51:
                  FUN_1001782e9(0,0);
                  iVar2 = -0x17ffbff9;
                }
              }
              goto LAB_100374fec;
            }
            uVar10 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar10,0x10);
            if (cVar1 != '\0') {
              builtin_strncpy(local_158,"\x02\x02\"\b",4);
              local_154 = 0x7a0a90;
              uStack_150 = 1;
              uStack_14e = 0;
              local_14c = 0x400;
              local_14a = iVar2;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",local_158,0x12);
            }
          }
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            local_158[0] = '\x02';
            local_158[1] = '\x03';
            local_158[2] = '\0';
            local_158[3] = '\x04';
            uStack_150 = 0x842;
            uStack_14e = (undefined2)lVar6;
            local_14c = (undefined2)((ulong)lVar6 >> 0x10);
            local_14a = (int)((ulong)lVar6 >> 0x20);
            uStack_146 = 0x800;
            uStack_144 = (undefined2)lVar5;
            uStack_142 = (undefined6)((ulong)lVar5 >> 0x10);
            local_154 = iVar2;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AFC GetSizeOfPathContents failed (0x%08X) for \"%{public}@\" with connection %p"
                                ,local_158,0x1c);
          }
        }
      }
    }
  }
LAB_100374fec:
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar4);
  uVar10 = FUN_10036db97(iVar2);
LAB_100375014:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

