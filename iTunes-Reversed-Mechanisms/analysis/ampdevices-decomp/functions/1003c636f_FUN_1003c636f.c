// name: FUN_1003c636f
// address: 1003c636f

undefined8 FUN_1003c636f(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  char *pcVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  long local_1108;
  int local_1100;
  int local_10fc;
  int local_10dc [2];
  long local_10d4;
  undefined2 local_10cc;
  int local_10ca;
  int local_10b8;
  cfstringStruct *local_10b4;
  undefined2 local_10ac;
  cfstringStruct *local_10aa;
  undefined2 local_10a2;
  int local_10a0;
  int local_c98;
  cfstringStruct *local_c94;
  undefined4 local_878;
  int local_874;
  undefined2 uStack_870;
  undefined2 uStack_86e;
  undefined2 uStack_86c;
  undefined8 local_86a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1003c6387;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003c6425:
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c642a;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c643a;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1003c64ab:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c64d0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c63b3;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c63c3;
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure (expected to be true)";
        local_44c = 0x822;
        local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6e39;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c63d7;
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003c6425;
    }
    if (*(char *)(param_1 + 0x37c) != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x66b0);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c640d;
      local_10dc[0] = FUN_1002441f8(uVar1,param_1 + 0x6b40,0x70757263,0,&local_458);
      if (local_10dc[0] == 0) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c64f3;
        lVar5 = FUN_1003c703a(param_1,&local_458);
        if (lVar5 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d7b;
          uVar4 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d8b;
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_878 = 0x8220202;
            local_874 = 0x7a0a90;
            uStack_870 = 1;
            uStack_86e = 0;
            uStack_86c = 0x822;
            local_86a = "assetsInfoDict != nullptr";
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6faf;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d9f;
          FUN_1001782e9(0,0);
          goto LAB_1003c641e;
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6512;
        lVar6 = FUN_100166844(lVar5,&cf_assetOrdering);
        if (lVar6 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6da9;
          uVar4 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6db9;
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_86a = "assetArray != nullptr";
LAB_1003c6fdb:
            uStack_86c = 0x822;
            uStack_86e = 0;
            uStack_870 = 1;
            local_874 = 0x7a0a90;
            local_878 = 0x8220202;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c7000;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
          }
LAB_1003c6f12:
          lVar7 = 0;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6f1e;
          FUN_1001782e9(0,0);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6532;
          lVar7 = FUN_100172e65(0,0,PTR__kCFTypeSetCallBacks_10082e148);
          if (lVar7 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6efa;
            uVar4 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6f0a;
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_86a = "assetFileNameSet != nullptr";
              goto LAB_1003c6fdb;
            }
            goto LAB_1003c6f12;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c654a;
          lVar8 = FUN_10017076e(lVar6);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c7018;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c656f;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_878 = 0x4000100;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c65a6;
            local_874 = (int)lVar8;
            __os_log_impl(0x100000000,uVar4,1,
                          "sync> cleaning up %d total purchased assets on device",&local_878,8);
          }
          if (0 < lVar8) {
            uVar15 = lVar8 + 1;
            local_1108 = 0;
            local_10fc = 0;
            local_1100 = 0;
            do {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c65eb;
              lVar8 = FUN_10016499b(lVar6,uVar15 - 2);
              if (lVar8 == 0) {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6699;
                uVar4 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c66a9;
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_878 = 0x8220202;
                  local_874 = 0x7a0a90;
                  uStack_870 = 1;
                  uStack_86e = 0;
                  uStack_86c = 0x822;
                  local_86a = "assetInfoDict != nullptr";
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6a08;
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_878,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c66ba;
                FUN_1001782e9(0,0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c660d;
                pcVar9 = (cfstringStruct *)FUN_100166c1b(lVar8,&cf_relativeMediaAssetPath);
                if (pcVar9 == (cfstringStruct *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c66c4;
                  uVar4 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c66d4;
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_878 = 0x8220202;
                    local_874 = 0x7a0a90;
                    uStack_870 = 1;
                    uStack_86e = 0;
                    uStack_86c = 0x822;
                    local_86a = "assetFileName != nullptr";
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6cb1;
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_878
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c66e5;
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6ce1;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6707;
                  cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar2 != '\0') {
                    local_878 = 0x8420102;
                    local_874 = 0x87e8b0;
                    uStack_870 = 1;
                    uStack_86e = 0;
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c674f;
                    __os_log_impl(0x100000000,uVar4,0x10,
                                  "sync> missing %{public}@ key in purchased asset info dictionary",
                                  &local_878,0xc);
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6624;
                  cVar2 = FUN_100172e6f(lVar7,pcVar9);
                  if (cVar2 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c675f;
                    FUN_100172f53(lVar7,pcVar9);
                  }
                  else {
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6cc9;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar4 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c664e;
                    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar2 != '\0') {
                      local_878 = 0x8420102;
                      local_874 = (int)pcVar9;
                      uStack_870 = (undefined2)((ulong)pcVar9 >> 0x20);
                      uStack_86e = (undefined2)((ulong)pcVar9 >> 0x30);
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c668f;
                      __os_log_impl(0x100000000,uVar4,1,
                                    "sync> found duplicate purchased asset file \"%{public}@\"",
                                    &local_878,0xc);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6777;
                  local_10dc[0] = FUN_100188845(&local_458,pcVar9,&local_878,0);
                  if (local_10dc[0] == -0x2b) {
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6795;
                    pcVar10 = (cfstringStruct *)FUN_100166c1b(lVar8,&cf_relativeTrackPropertiesPath)
                    ;
                    if (pcVar10 == (cfstringStruct *)0x0) {
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d11;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar4 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c68a1;
                      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar2 != '\0') {
                        local_c98 = 0x8420102;
                        local_c94 = &cf_relativeTrackPropertiesPath;
                        pcVar12 = "sync> missing %{public}@ key in purchased asset info dictionary";
                        piVar13 = &local_c98;
                        uVar14 = 0xc;
LAB_1003c6ade:
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6ae3;
                        __os_log_impl(0x100000000,uVar4,1,pcVar12,piVar13,uVar14);
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c67c0;
                      local_10dc[0] = FUN_100188845(&local_458,pcVar10,&local_c98,0);
                      if (local_10dc[0] == 0) {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c68f8;
                        lVar11 = FUN_1003c7696(&local_c98,local_10dc);
                        if (DAT_1008c75c0 != -1) {
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d41;
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c692c;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (lVar11 == 0) {
                          if (cVar2 != '\0') {
                            local_10b8 = 0x8420102;
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6a4e;
                            local_10b4 = pcVar9;
                            __os_log_impl(0x100000000,uVar4,1,
                                          "sync> failed to find purchased asset file \"%{public}@\""
                                          ,&local_10b8,0xc);
                          }
                        }
                        else {
                          if (cVar2 != '\0') {
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6953;
                            local_10aa = (cfstringStruct *)
                                         FUN_100166c1b(lVar11,PTR_cf_itemName_100852750);
                            local_10b8 = 0x8420202;
                            local_10ac = 0x842;
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c69a0;
                            local_10b4 = pcVar9;
                            __os_log_impl(0x100000000,uVar4,1,
                                          "sync> failed to find purchased asset file \"%{public}@\" for track \"%{public}@\""
                                          ,&local_10b8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c69ac;
                          FUN_10017060f(lVar11);
                        }
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6a5a;
                        local_10dc[0] = FUN_100182d4d(&local_c98);
                        if (local_10dc[0] == 0) {
                          local_10fc = local_10fc + 1;
                        }
                        else {
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d59;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar4 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6a8a;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar2 != '\0') {
                            local_10b8 = 0x8420202;
                            local_10ac = 0x400;
                            local_10aa = (cfstringStruct *)CONCAT44(local_10aa._4_4_,local_10dc[0]);
                            pcVar12 = "sync> failed to delete metadata file \"%{public}@\" (%d)";
                            piVar13 = &local_10b8;
                            uVar14 = 0x12;
                            local_10b4 = pcVar10;
                            goto LAB_1003c6ade;
                          }
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6cf9;
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c67fb;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar2 != '\0') {
                          local_10b8 = 0x8420302;
                          local_10ac = 0x842;
                          local_10a2 = 0x400;
                          local_10a0 = local_10dc[0];
                          pcVar12 = 
                          "sync> failed to find metadata file \"%{public}@\"for purchased asset file \"%{public}@\" (%d)"
                          ;
                          piVar13 = &local_10b8;
                          uVar14 = 0x1c;
                          local_10b4 = pcVar10;
                          local_10aa = pcVar9;
                          goto LAB_1003c6ade;
                        }
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6af2;
                    lVar8 = FUN_100166c1b(lVar8,&cf_relativeArtworkAssetPath);
                    if (lVar8 == 0) {
                      piVar13 = &local_10b8;
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d29;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar4 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6bdb;
                      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar2 != '\0') {
                        local_10b8 = 0x8420102;
                        local_10b4 = &cf_relativeArtworkAssetPath;
                        pcVar12 = "sync> missing %{public}@ key in purchased asset info dictionary";
                        uVar14 = 0xc;
LAB_1003c6c16:
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6c1b;
                        __os_log_impl(0x100000000,uVar4,1,pcVar12,piVar13,uVar14);
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6b19;
                      local_10dc[0] = FUN_100188845(&local_458,lVar8,&local_10b8,0);
                      if (local_10dc[0] == 0) {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6b2f;
                        local_10dc[0] = FUN_100182d4d(&local_10b8);
                        if (local_10dc[0] == 0) {
                          local_1100 = local_1100 + 1;
                        }
                        else {
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6d71;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar4 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6b5f;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar2 != '\0') {
                            local_10dc[1] = 0x8420202;
                            local_10cc = 0x400;
                            local_10ca = local_10dc[0];
                            pcVar12 = "sync> failed to delete artwork file \"%{public}@\" (%d)";
                            piVar13 = local_10dc + 1;
                            uVar14 = 0x12;
                            local_10d4 = lVar8;
                            goto LAB_1003c6c16;
                          }
                        }
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6c41;
                    FUN_100170bed(lVar6,uVar15 - 2);
                    local_1108 = local_1108 + 1;
                  }
                }
              }
              uVar15 = uVar15 - 1;
            } while (1 < uVar15);
            if (0 < local_1108) {
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c7030;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6e74;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                local_878 = 0x4000300;
                local_874 = local_10fc;
                uStack_870 = 0x400;
                uStack_86e = (undefined2)local_1100;
                uStack_86c = (undefined2)((uint)local_1100 >> 0x10);
                local_86a._0_6_ = CONCAT42((int)local_1108,0x400);
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6ed4;
                __os_log_impl(0x100000000,uVar4,1,
                              "sync> deleted %d orphaned metadata files and %d orphaned artwork files for %d missing purchased assets"
                              ,&local_878,0x14);
              }
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6eed;
              local_10dc[0] = FUN_1003c7866(param_1,lVar5,&local_458);
            }
          }
        }
      }
      else {
LAB_1003c641e:
        lVar7 = 0;
        lVar5 = 0;
      }
      uVar4 = 0;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6f2d;
      FUN_10017060f(lVar7);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6f35;
      FUN_10017060f(lVar5);
      goto LAB_1003c6f35;
    }
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6470;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c6480;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "handlerData->deviceInfo.supportsStore";
      goto LAB_1003c64ab;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar3) = 0x1003c64d9;
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1003c6f35:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar3) = FUN_1003c703a;
    ___stack_chk_fail();
  }
  return uVar4;
}

