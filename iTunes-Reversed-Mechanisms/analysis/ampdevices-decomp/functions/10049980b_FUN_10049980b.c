// name: FUN_10049980b
// address: 10049980b

int FUN_10049980b(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  char **ppcVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  undefined8 local_10a8;
  undefined8 local_10a0;
  char **local_1098;
  uint *local_1090;
  int local_1084;
  char *local_1080;
  char *local_1078 [2];
  long local_1068;
  uint local_105c;
  uint local_1058;
  char *local_1054;
  undefined2 local_104c;
  char *local_104a;
  undefined1 local_458 [12];
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100499823;
  auVar14 = FUN_100108310();
  lVar1 = -auVar14._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
LAB_100499905:
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10049990a;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10049991a;
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    if (cVar3 != '\0') {
      local_1058 = 0x8220202;
      local_1054 = "Assertion failure";
      local_104c = 0x822;
      local_104a = "ITImageInstanceIsValid(imageInstance)";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1004999f6;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_1058,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10049992b;
    FUN_1001782e9(0,0);
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10049985d;
    cVar3 = FUN_100495380(uVar11);
    if (cVar3 == '\0') goto LAB_100499905;
    if (param_2 == 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10049995f;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10049996f;
      cVar3 = _os_log_type_enabled(uVar11,0x10);
      if (cVar3 != '\0') {
        local_1058 = 0x8220202;
        local_1054 = "Assertion failure";
        local_104c = 0x822;
        local_104a = "outFileSpec != nullptr";
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100499b65;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_1058,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100499980;
      FUN_1001782e9(0,0);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100499876;
      lVar7 = FUN_100499456(param_1);
      if (lVar7 != 0) {
        local_1068 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100499899;
        FUN_1001dccc7(lVar7);
        iVar5 = *(int *)(param_1 + 0x44);
        iVar6 = -0x2b;
        if (iVar5 == 0) {
LAB_100499df7:
          iVar5 = *(int *)(param_1 + 0x478);
          uVar4 = 1;
          if (iVar5 != 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499e1f;
            iVar5 = FUN_1001de13c(lVar7,iVar5,local_1078,&local_1098);
            if (iVar5 == 0 && (int)local_1098 != 0) {
              if (*local_1078[0] == '/') {
                local_1058 = local_1058 & 0xffffff00;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499e59;
                FUN_1001df266(local_1078[0],(ulong)local_1098 & 0xffffffff,&local_1058,0xbfe);
LAB_100499e59:
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499e6a;
                iVar6 = FUN_10018ddf7(&local_1058,param_2,0);
                uVar4 = 1;
                uVar2 = 1;
                if (iVar6 == 0) goto LAB_100499e78;
              }
              else if (*(char *)(local_1068 + 0xb70) == '\0') {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f1d;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f2d;
                cVar3 = _os_log_type_enabled(uVar11,0x10);
                if (cVar3 != '\0') {
                  local_458._0_4_ = 0x8220202;
                  local_458._4_8_ = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = "imageLibrary->libraryFolderValid";
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100499fed;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f3a;
                FUN_1001782e9(0,0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100499eba;
                iVar6 = FUN_1001823de(local_1068 + 0x750,&local_1058,0xbfe);
                if (iVar6 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ecd;
                  sVar10 = _strlen((char *)&local_1058);
                  if (((int)sVar10 != 0) &&
                     (*(char *)((long)&local_1058 + (ulong)((int)sVar10 - 1)) != '/')) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ef5;
                    FUN_1001df1e7("/",&local_1058,0xbfe);
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f13;
                  FUN_1001df266(local_1078[0],(ulong)local_1098 & 0xffffffff,&local_1058,0xbfe);
                  goto LAB_100499e59;
                }
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1004998c1;
          iVar5 = FUN_1001de13c(lVar7,iVar5,&local_1090,&local_105c);
          if (iVar5 != 0 || local_105c == 0) goto LAB_100499df7;
          local_105c = local_105c >> 1;
          if ((short)*local_1090 == 0x2f) {
            pcVar13 = (char *)(local_1068 + 0xb78);
            goto LAB_100499cc5;
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499a0c;
          FUN_1001e37e4(local_1090,local_105c,&local_1058,0x3ff);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499a2c;
          FUN_10018a652(&local_1058,local_105c,&local_10a8,&local_1084);
          iVar6 = local_1084;
          local_105c = local_105c - local_1084;
          local_1090 = &local_1058;
          if (*(long *)(local_1068 + 0x2488) == 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499a6a;
            plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
            if (plVar8 != (long *)0x0) {
              plVar8[1] = 0;
              plVar8[2] = 0;
              *plVar8 = (long)(plVar8 + 1);
              *(long **)(local_1068 + 0x2488) = plVar8;
              goto LAB_100499a92;
            }
            *(undefined8 *)(local_1068 + 0x2488) = 0;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499c5c;
            uVar11 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499c6c;
            cVar3 = _os_log_type_enabled(uVar11,0x10);
            if (cVar3 != '\0') {
              local_458._0_4_ = 0x8220202;
              local_458._4_8_ = "Assertion failure";
              local_44c = 0x822;
              local_44a = "imageLibrary->volumeNameToFileSpecMap != nullptr";
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10049a03e;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_458,0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499c7d;
            FUN_1001782e9(0,0);
            iVar6 = -0x6c;
            uVar4 = 1;
            goto LAB_100499f3a;
          }
LAB_100499a92:
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499aa8;
          FUN_1001b7e14(local_1078,local_10a8,iVar6);
          uVar11 = *(undefined8 *)(local_1068 + 0x2488);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ac2;
          lVar9 = FUN_10020e3d6(uVar11,local_1078);
          if (lVar9 == *(long *)(local_1068 + 0x2488) + 8) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499b8b;
            iVar6 = FUN_10017d64f(0,local_10a8,local_1084,local_458,0,0);
            if (iVar6 != 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ba3;
              FUN_1001c62d9(local_458,0x420);
            }
            uVar11 = *(undefined8 *)(local_1068 + 0x2488);
            local_1098 = local_1078;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499bc7;
            lVar9 = FUN_10049c7d4(uVar11);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499bdf;
            _memcpy((void *)(lVar9 + 0x30),local_458,0x420);
            if (iVar6 == 0) {
              uVar11 = *(undefined8 *)(local_1068 + 0x2488);
              local_1098 = local_1078;
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100499caf;
              lVar9 = FUN_10049c7d4(uVar11);
              pcVar13 = (char *)(lVar9 + 0x30);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100499cc2;
              FUN_1001b7a50(local_1078);
              goto LAB_100499cc5;
            }
            ppcVar12 = local_1078;
LAB_100499df2:
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499df7;
            FUN_1001b7a50(ppcVar12);
            goto LAB_100499df7;
          }
          pcVar13 = (char *)(lVar9 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499aec;
          uVar4 = FUN_10017cbd0(pcVar13);
          local_1080 = (char *)CONCAT71(local_1080._1_7_,uVar4);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499afe;
          FUN_1001b7a50(local_1078);
          if ((char)local_1080 == '\0') {
            iVar6 = -0x23;
            goto LAB_100499df7;
          }
LAB_100499cc5:
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ce7;
          local_1080 = pcVar13;
          iVar6 = FUN_10017d64f(pcVar13,local_1090,local_105c,param_2,0,0);
          if (iVar6 == -0x80) {
LAB_100499d1d:
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10049a056;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            local_10a0 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d43;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar3 == '\0') goto LAB_100499df7;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d5e;
            FUN_10017dd60(local_458,local_1080);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d6a;
            local_1080 = (char *)FUN_1001b83ae(local_458);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d8a;
            FUN_1001b7e14(local_1078,local_1090,local_105c);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d96;
            local_104a = (char *)FUN_1001b83ae(local_1078);
            local_1058 = 0x8200202;
            local_1054 = local_1080;
            local_104c = 0x820;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499ddf;
            __os_log_impl(0x100000000,local_10a0,0x10,"rootFolderSpec %s, %s",&local_1058,0x16);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499deb;
            FUN_1001b7a50(local_1078);
            ppcVar12 = (char **)local_458;
            goto LAB_100499df2;
          }
          if (iVar6 != 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d01;
            local_10a0 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100499d15;
            cVar3 = _os_log_type_enabled(local_10a0,0x10);
            if (cVar3 != '\0') {
              local_1058 = 0x8220202;
              local_1054 = "Assertion failure";
              local_104c = 0x400;
              local_104a = (char *)CONCAT44(local_104a._4_4_,iVar6);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f9c;
              __os_log_error_impl(0x100000000,local_10a0,0x10,"%{public}s: err == (%d)",&local_1058,
                                  0x12);
            }
            goto LAB_100499d1d;
          }
          uVar2 = 0;
LAB_100499e78:
          uVar4 = uVar2;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100499e8a;
          iVar6 = FUN_100188aa6(param_2,param_2,0,0,0);
        }
LAB_100499f3a:
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100499f42;
        FUN_1001dcd18(lVar7);
        if (auVar14._8_8_ != (undefined1 *)0x0) {
          *auVar14._8_8_ = uVar4;
        }
        goto LAB_100499931;
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100499987;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100499997;
      cVar3 = _os_log_type_enabled(uVar11,0x10);
      if (cVar3 != '\0') {
        local_1058 = 0x8220202;
        local_1054 = "Assertion failure";
        local_104c = 0x822;
        local_104a = "stringCache != nullptr";
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100499c40;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_1058,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1004999a8;
      FUN_1001782e9(0,0);
    }
  }
  iVar6 = -0x32;
LAB_100499931:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar1) = &UNK_10049a060;
  ___stack_chk_fail();
}

