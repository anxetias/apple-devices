// name: FUN_10065028b
// address: 10065028b

int * FUN_10065028b(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  int *local_138;
  undefined *local_130;
  uint local_128;
  char *local_124;
  undefined2 local_11c;
  int local_11a;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_150 = (*(code *)PTR__objc_retain_10082c7b8)();
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(local_150,PTR_s_count_10088bdc0);
  iVar3 = FUN_100594adc(&local_138,uVar2);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = (long *)0x0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      lStack_1e0 = 0;
      local_148 = (*(code *)PTR__objc_retain_10082c7b8)(local_150);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_148,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1e8,
                         local_b8,0x10);
      if (lVar5 != 0) {
        local_198 = *local_1d8;
        local_190 = *(undefined8 *)PTR__AMPDeviceObjectBookKitAssetIDKey_10082b820;
        local_188 = *(undefined8 *)PTR__AMPDeviceObjectLibraryIDKey_10082b828;
        local_180 = *(undefined8 *)PTR__AMPDeviceObjectTrackIDKey_10082b840;
        local_178 = *(undefined8 *)PTR__AMPDeviceObjectTrackInstanceIDKey_10082b848;
        local_170 = *(undefined8 *)PTR__AMPDeviceObjectPlaylistIDKey_10082b830;
        local_168 = *(undefined8 *)PTR__AMPDeviceObjectPlaylistItemIDKey_10082b838;
        local_160 = *(undefined8 *)PTR__AMPDeviceObjectAlbumIDKey_10082b810;
        local_158 = *(undefined8 *)PTR__AMPDeviceObjectArtistIDKey_10082b818;
        do {
          local_130 = PTR_s_valueForKey__10088dd88;
          local_140 = PTR_s_unsignedLongLongValue_10088be80;
          lVar12 = 0;
          local_1a0 = lVar5;
          do {
            if (*local_1d8 != local_198) {
              _objc_enumerationMutation(local_148);
            }
            uVar7 = *(undefined8 *)(lStack_1e0 + lVar12 * 8);
            uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_190);
            lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (lVar5 == 0) {
              local_c8 = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              lStack_e0 = 0;
              uStack_f8 = 0;
              uStack_f6 = 0;
              lStack_f0 = 0;
              local_108 = 0;
              uStack_104 = 0;
              uStack_100 = 0;
              uStack_fc = 0;
              uStack_fa = 0;
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_188);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              local_108 = (undefined4)uVar9;
              uStack_104 = (undefined4)((ulong)uVar9 >> 0x20);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_180);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              uStack_100 = (undefined4)uVar9;
              uStack_fc = (undefined2)((ulong)uVar9 >> 0x20);
              uStack_fa = (undefined2)((ulong)uVar9 >> 0x30);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_178);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              uStack_f8 = (undefined2)uVar9;
              uStack_f6 = (undefined6)((ulong)uVar9 >> 0x10);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_170);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              lStack_f0 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_168);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              local_e8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_160);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              lStack_e0 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_140);
              (*(code *)PTR__objc_release_10082c7b0)(uVar6);
              uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_130,local_158);
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              local_d8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_140);
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
              if (local_e8 == 0) {
                if (lStack_f0 == 0) {
                  if (lStack_e0 == 0) {
                    if (local_d8 == 0) {
                      if (CONCAT62(uStack_f6,uStack_f8) == 0) {
                        lVar8 = FUN_100306d2e(&local_108);
                        if (lVar8 != 0) {
                          iVar4 = FUN_10059563f(local_138,lVar8,0);
                          if ((iVar4 != -0x80) && (iVar4 != 0)) {
                            uVar7 = FUN_1001cc310();
                            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                            cVar1 = _os_log_type_enabled(uVar7,0x10);
                            iVar3 = local_11a;
                            goto joined_r0x000100650cb8;
                          }
                          goto LAB_100650db0;
                        }
                        uVar7 = FUN_100642e20();
                        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                        cVar1 = _os_log_type_enabled(uVar7,0x10);
                        iVar3 = local_11a;
                        if (cVar1 != '\0') {
                          local_128 = local_128 & 0xffff0000;
                          pcVar10 = "failed to find track";
                          goto LAB_100650d95;
                        }
                      }
                      else {
                        lVar8 = FUN_10031b6f8(&local_108);
                        if (lVar8 == 0) {
                          uVar7 = FUN_100642e20();
                          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                          cVar1 = _os_log_type_enabled(uVar7,0x10);
                          iVar3 = local_11a;
                          if (cVar1 != '\0') {
                            local_128 = local_128 & 0xffff0000;
                            pcVar10 = "failed to find track instance";
LAB_100650d95:
                            __os_log_impl(0x100000000,uVar7,0x10,pcVar10,&local_128,2);
                            iVar3 = local_11a;
                          }
                        }
                        else {
                          iVar4 = FUN_10059571f(local_138,lVar8,0);
                          if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_100650db0;
                          uVar7 = FUN_1001cc310();
                          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                          cVar1 = _os_log_type_enabled(uVar7,0x10);
                          iVar3 = local_11a;
joined_r0x000100650cb8:
                          local_11a = iVar4;
                          if (cVar1 != '\0') {
                            local_11c = 0x400;
                            local_124 = "Assertion failure";
                            local_128 = 0x8220202;
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                                &local_128,0x12);
                            iVar3 = local_11a;
                          }
                        }
                      }
                    }
                    else {
                      lVar8 = FUN_1004cfffa(&local_108);
                      if (lVar8 != 0) {
                        iVar4 = FUN_1005966ec(local_138,lVar8,0,0);
                        if ((iVar4 != -0x80) && (iVar4 != 0)) {
                          uVar7 = FUN_1001cc310();
                          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                          cVar1 = _os_log_type_enabled(uVar7,0x10);
                          iVar3 = local_11a;
                          goto joined_r0x000100650cb8;
                        }
                        goto LAB_100650db0;
                      }
                      uVar7 = FUN_100642e20();
                      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                      cVar1 = _os_log_type_enabled(uVar7,0x10);
                      iVar3 = local_11a;
                      if (cVar1 != '\0') {
                        local_128 = local_128 & 0xffff0000;
                        pcVar10 = "failed to find artist";
                        goto LAB_100650d95;
                      }
                    }
                  }
                  else {
                    lVar8 = FUN_1003a357e(&local_108);
                    if (lVar8 != 0) {
                      iVar4 = FUN_100596544(local_138,lVar8,0,0);
                      if ((iVar4 != -0x80) && (iVar4 != 0)) {
                        uVar7 = FUN_1001cc310();
                        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                        cVar1 = _os_log_type_enabled(uVar7,0x10);
                        iVar3 = local_11a;
                        goto joined_r0x000100650cb8;
                      }
                      goto LAB_100650db0;
                    }
                    uVar7 = FUN_100642e20();
                    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                    cVar1 = _os_log_type_enabled(uVar7,0x10);
                    iVar3 = local_11a;
                    if (cVar1 != '\0') {
                      local_128 = local_128 & 0xffff0000;
                      pcVar10 = "failed to find album";
                      goto LAB_100650d95;
                    }
                  }
                }
                else {
                  lVar8 = FUN_100490ab3(&local_108);
                  if (lVar8 != 0) {
                    iVar4 = FUN_100596046(local_138,lVar8,0,0);
                    if ((iVar4 != -0x80) && (iVar4 != 0)) {
                      uVar7 = FUN_1001cc310();
                      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                      cVar1 = _os_log_type_enabled(uVar7,0x10);
                      iVar3 = local_11a;
                      goto joined_r0x000100650cb8;
                    }
                    goto LAB_100650db0;
                  }
                  uVar7 = FUN_100642e20();
                  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                  cVar1 = _os_log_type_enabled(uVar7,0x10);
                  iVar3 = local_11a;
                  if (cVar1 != '\0') {
                    local_128 = local_128 & 0xffff0000;
                    pcVar10 = "failed to find playlist";
                    goto LAB_100650d95;
                  }
                }
              }
              else {
                lVar8 = FUN_100490b28(&local_108);
                if (lVar8 != 0) {
                  iVar4 = FUN_100595808(local_138,lVar8,0,0);
                  if ((iVar4 != -0x80) && (iVar4 != 0)) {
                    uVar7 = FUN_1001cc310();
                    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                    cVar1 = _os_log_type_enabled(uVar7,0x10);
                    iVar3 = local_11a;
                    goto joined_r0x000100650cb8;
                  }
                  goto LAB_100650db0;
                }
                uVar7 = FUN_100642e20();
                uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                iVar3 = local_11a;
                if (cVar1 != '\0') {
                  local_128 = local_128 & 0xffff0000;
                  pcVar10 = "failed to find playlist item";
                  goto LAB_100650d95;
                }
              }
              local_11a = iVar3;
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
            }
            else {
              uVar7 = FUN_1003070df();
              uVar7 = FUN_1002f930c(uVar7);
              lVar8 = FUN_100230f79(uVar7,lVar5);
              while (lVar8 != 0) {
                iVar3 = FUN_10059563f(local_138,lVar8,0);
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar7 = FUN_1001cc310();
                  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                  cVar1 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar1 != '\0') {
                    local_108 = 0x8220202;
                    uStack_104 = 0x7a0a90;
                    uStack_100 = 1;
                    uStack_fc = 0x400;
                    uStack_fa = (undefined2)iVar3;
                    uStack_f8 = (undefined2)((uint)iVar3 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_108,
                                        0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
                }
                uVar7 = FUN_1002f9451(lVar8);
                lVar8 = FUN_100230f79(uVar7,lVar5);
              }
              if ((((local_138 == (int *)0x0) || (*local_138 != 0x4f4c5354)) || (local_138[1] == 0))
                 || ((int)((ulong)(*(long *)(local_138 + 4) - *(long *)(local_138 + 2)) >> 3) *
                     -0x49249249 == 0)) {
                uVar7 = FUN_100642e20();
                uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                if (cVar1 != '\0') {
                  local_108 = 0x8420102;
                  uStack_104 = (undefined4)lVar5;
                  uStack_100 = (undefined4)((ulong)lVar5 >> 0x20);
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "failed to find track with book asset id %{public}@",&local_108,0xc)
                  ;
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar7);
              }
            }
LAB_100650db0:
            (*(code *)PTR__objc_release_10082c7b0)(lVar5);
            lVar12 = lVar12 + 1;
          } while (lVar12 != local_1a0);
          lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_148,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1e8,
                             local_b8,0x10);
        } while (lVar5 != 0);
      }
      (*(code *)PTR__objc_release_10082c7b0)(local_148);
      piVar11 = local_138;
      goto LAB_100650e3f;
    }
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_108 = 0x8220202;
      uStack_104 = 0x7a0a90;
      uStack_100 = 1;
      uStack_fc = 0x400;
      uStack_fa = (undefined2)iVar3;
      uStack_f8 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_108,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  piVar11 = (int *)0x0;
LAB_100650e3f:
  (*(code *)PTR__objc_release_10082c7b0)(local_150);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar11;
}

