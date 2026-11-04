// name: FUN_1003d43a8
// address: 1003d43a8

ulong FUN_1003d43a8(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  int local_8b4;
  long local_8b0;
  undefined4 local_8a4;
  undefined1 local_8a0 [1056];
  undefined1 local_480 [1056];
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_8b0 = *(long *)(param_1 + 0x10);
  local_60 = 0;
  FUN_1001c62d9(local_480,0x420);
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x2b4) == '\0') {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context->prefs->devicePrefs.syncPhotos";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar11 = 0xffffffce;
    FUN_1001782e9(0,0);
    goto LAB_1003d4a89;
  }
  if (DAT_1008c5d64 != 0) {
    DAT_1008c5d68 = 1;
  }
  uVar8 = FUN_100602456(param_1);
  uVar11 = uVar8 & 0xffffffff;
  local_8a4 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
  iVar7 = (int)uVar8;
  if (iVar7 != -0x80) {
    if (iVar7 == 0) {
      if (*(long *)(param_1 + 0x3e0) != 0) {
        uVar9 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar9,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "context->desktopPhotoLibrary == nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (*(long *)(param_1 + 0x3e0) != 0) {
          *(undefined8 *)(param_1 + 0x3e0) = 0;
        }
      }
      bVar2 = true;
      if (((*(byte *)(*(long *)(local_8b0 + 0x30) + 0x2be0) & 0x20) == 0) &&
         (cVar3 = FUN_100402ecf(), cVar3 == '\0')) {
        *(int *)(local_8b0 + 0x69bc) = *(int *)(local_8b0 + 0x69bc) + 1;
        bVar2 = false;
      }
      FUN_100602d40(param_1,0x696d7074,0);
      *(undefined2 *)(param_1 + 0x3f2) = 0x100;
      uVar5 = FUN_10060274a(param_1,FUN_1003d23c9,"");
      uVar11 = (ulong)uVar5;
      if (uVar5 != 0xffffff80) {
        if (uVar5 == 0) {
          uVar5 = FUN_100602806(param_1);
          uVar11 = (ulong)uVar5;
          if (uVar5 != 0xffffff80) {
            if (uVar5 == 0) {
              if (*(long *)(param_1 + 0x3e0) == 0) {
                uVar9 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar9,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "context->desktopPhotoLibrary != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                uVar5 = *(uint *)(param_1 + 0x30);
                if (uVar5 == 0) {
                  uVar9 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "context->syncStatus != noErr";
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar5 = *(uint *)(param_1 + 0x30);
                }
                uVar11 = 0xffffffce;
                if (uVar5 != 0) {
                  uVar11 = (ulong)uVar5;
                }
              }
              else {
                uVar5 = FUN_1003d3d76(local_480);
                uVar11 = (ulong)uVar5;
                if (uVar5 != 0xffffff80) {
                  if (uVar5 == 0) {
                    if (*(char *)(local_8b0 + 0x3a2) == '\0') {
                      uVar5 = FUN_1002441f8(*(undefined4 *)(local_8b0 + 0x66b0),local_8b0 + 0x6b40,
                                            0x70696374,1,local_8a0);
                      uVar11 = (ulong)uVar5;
                      if (uVar5 != 0xffffff80) {
                        if (uVar5 == 0) {
                          FUN_100602d40(param_1,0x72647068,0);
                          uVar5 = FUN_10060274a(param_1,FUN_1003d54c2,"");
                          uVar11 = (ulong)uVar5;
                          if (uVar5 != 0xffffff80) {
                            if (uVar5 == 0) {
                              uVar5 = FUN_100602806(param_1);
                              uVar11 = (ulong)uVar5;
                              if (uVar5 != 0xffffff80) {
                                if (uVar5 == 0) {
                                  uVar5 = FUN_1003d5593(local_8b0,param_1 + 0x410);
                                  uVar11 = (ulong)uVar5;
                                  if (uVar5 != 0xffffff80) {
                                    if (uVar5 == 0) {
                                      uVar5 = FUN_100601f45(param_1);
                                      uVar11 = (ulong)uVar5;
                                      if (uVar5 != 0xffffff80) {
                                        if (uVar5 == 0) {
                                          if (((*(byte *)(*(long *)(local_8b0 + 0x30) + 0x2be0) &
                                               0x20) == 0) &&
                                             (cVar3 = FUN_100402ecf(), cVar3 != '\0')) {
                                            uVar5 = FUN_100602998(*(undefined8 *)(local_8b0 + 0x30))
                                            ;
                                            uVar11 = (ulong)uVar5;
                                            if (uVar5 != 0xffffff80) {
                                              if (uVar5 == 0) {
                                                if ((*(byte *)(*(long *)(local_8b0 + 0x30) + 0x2be0)
                                                    & 0x20) == 0) {
                                                  uVar9 = FUN_1001cc310();
                                                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                                                  if (cVar3 != '\0') {
                                                    local_58 = 0x8220202;
                                                    local_54 = "Assertion failure";
                                                    local_4c = 0x822;
                                                    local_4a = 
                                                  "handlerData->trackData->runningCopyFiber";
                                                  __os_log_error_impl(0x100000000,uVar9,0x10,
                                                                      "%{public}s: (%{public}s)",
                                                                      &local_58,0x16);
                                                  }
                                                  FUN_1001782e9(0,0);
                                                }
                                                goto LAB_1003d4d36;
                                              }
                                              uVar9 = FUN_1001cc310();
                                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                                              if (cVar3 != '\0') {
                                                local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                                goto LAB_1003d47e0;
                                              }
                                            }
                                          }
                                          else {
LAB_1003d4d36:
                                            FUN_1003d59f1(param_1);
                                            if ((*(byte *)(*(long *)(local_8b0 + 0x30) + 0x2be0) &
                                                0x20) == 0) {
                                              bVar12 = false;
LAB_1003d4d59:
                                              if (bVar2) {
                                                *(int *)(local_8b0 + 0x69bc) =
                                                     *(int *)(local_8b0 + 0x69bc) + 1;
                                              }
                                              if (bVar12) {
                                                FUN_100602d40(param_1,0x696d7074,0);
                                              }
                                              goto LAB_1003d4555;
                                            }
                                            if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
                                              *(undefined1 *)(param_1 + 0x3f7) = 1;
                                              uVar11 = 0;
                                              uVar5 = FUN_1003d5b3e(param_1,0,&local_8b4);
                                              if (uVar5 != 0x2349) {
                                                uVar11 = (ulong)uVar5;
                                              }
                                              *(undefined1 *)(param_1 + 0x3f7) = 0;
                                              iVar7 = (int)uVar11;
                                              if (iVar7 != -0x80) {
                                                if (iVar7 == 0) {
                                                  bVar12 = uVar5 == 0;
                                                  goto LAB_1003d530a;
                                                }
                                                uVar9 = FUN_1001cc310();
                                                cVar3 = _os_log_type_enabled(uVar9,0x10);
                                                if (cVar3 != '\0') {
                                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
                                                  goto LAB_1003d47e0;
                                                }
                                              }
                                            }
                                            else {
                                              bVar12 = false;
LAB_1003d530a:
                                              uVar5 = FUN_100602bb3(*(undefined8 *)
                                                                     (*(long *)(param_1 + 0x10) +
                                                                     0x30));
                                              uVar11 = (ulong)uVar5;
                                              if (uVar5 != 0xffffff80) {
                                                if (uVar5 == 0) goto LAB_1003d4d59;
                                                uVar9 = FUN_1001cc310();
                                                cVar3 = _os_log_type_enabled(uVar9,0x10);
                                                if (cVar3 != '\0') {
                                                  local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                                  goto LAB_1003d47e0;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          uVar9 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar9,0x10);
                                          if (cVar3 != '\0') {
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                            goto LAB_1003d47e0;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar9 = FUN_1001cc310();
                                      cVar3 = _os_log_type_enabled(uVar9,0x10);
                                      if (cVar3 != '\0') {
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                        goto LAB_1003d47e0;
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar9 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                                  if (cVar3 != '\0') {
                                    local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                    goto LAB_1003d47e0;
                                  }
                                }
                              }
                            }
                            else {
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 != '\0') {
                                local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                goto LAB_1003d47e0;
                              }
                            }
                          }
                        }
                        else {
                          uVar9 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar3 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                            goto LAB_1003d47e0;
                          }
                        }
                      }
                    }
                    else {
LAB_1003d4555:
                      local_8b4 = 0;
                      if ((*(char *)(local_8b0 + 0x456d) == '\0') &&
                         (*(char *)(local_8b0 + 0x3a2) == '\0')) {
LAB_1003d45a3:
                        uVar5 = 0;
                        iVar7 = -1;
                        while( true ) {
                          FUN_10029b5df(*(undefined8 *)(param_1 + 0x3e0),
                                        *(long *)(param_1 + 0x10) + 0x4578,
                                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x4570),0);
                          if (*(char *)(local_8b0 + 0x3a2) == '\0') {
                            uVar6 = FUN_1003d5ce0(param_1);
                            uVar11 = (ulong)uVar6;
                            if (uVar6 != 0) {
                              if (uVar6 == 0xffffff80) goto LAB_1003d4915;
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 == '\0') goto LAB_1003d4915;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar6);
                              goto LAB_1003d47e0;
                            }
                          }
                          if (*(char *)(*(long *)(param_1 + 0x20) + 0x14) != '\0') {
                            FUN_1003d6541(*(undefined8 *)(param_1 + 0x3e0));
                          }
                          if (*(char *)(local_8b0 + 0x3a2) != '\0') {
                            if (*(long *)(local_8b0 + 0x16860) != 0) {
                              FUN_100495a1c();
                            }
                            *(undefined8 *)(local_8b0 + 0x16860) = *(undefined8 *)(param_1 + 0x3e0);
                            *(undefined8 *)(param_1 + 0x3e0) = 0;
                            if (*(char *)(*(long *)(param_1 + 0x20) + 0x3b0) == '\0') {
                              uVar4 = 0xff;
                            }
                            else {
                              uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x374);
                            }
                            uVar5 = FUN_100390d60(local_8b0,0,uVar4);
                            uVar11 = (ulong)uVar5;
                            if ((uVar5 == 0xffffff80) || (uVar5 == 0)) goto LAB_1003d4915;
                            uVar9 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar9,0x10);
                            if (cVar3 == '\0') goto LAB_1003d4915;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                            goto LAB_1003d47e0;
                          }
                          uVar6 = FUN_1003d5b3e(param_1,0,&local_8b4);
                          uVar11 = (ulong)uVar6;
                          if (uVar6 != 0) {
                            if (uVar6 == 0xffffff80) goto LAB_1003d4915;
                            uVar9 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar9,0x10);
                            if (cVar3 == '\0') goto LAB_1003d4915;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar6);
                            goto LAB_1003d47e0;
                          }
                          if ((((*(char *)(local_8b0 + 0x456d) != '\x01') || (local_8b4 == 0)) ||
                              (local_8b4 == iVar7)) || (99 < uVar5)) {
                            uVar5 = FUN_1003d745e(param_1);
                            uVar11 = (ulong)uVar5;
                            if (uVar5 == 0xffffff80) goto LAB_1003d4915;
                            if (uVar5 != 0) {
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 == '\0') goto LAB_1003d4915;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                              goto LAB_1003d47e0;
                            }
                            if (*(long *)(param_1 + 0x48) == 0) {
                              local_8a4 = 0;
                              uVar11 = 0;
                            }
                            else {
                              local_8a4 = 0;
                              FUN_1003d75e2(local_8b0);
                              uVar11 = 0;
                            }
                            goto LAB_1003d491f;
                          }
                          uVar6 = FUN_1003d6736(param_1);
                          uVar11 = (ulong)uVar6;
                          if (uVar6 != 0) break;
                          if (*(char *)(*(long *)(param_1 + 0x20) + 0x14) != '\0') {
                            FUN_1003d6541(*(undefined8 *)(param_1 + 0x3e0));
                          }
                          if (*(long *)(param_1 + 0x28) != 0) {
                            *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x15) = 0;
                          }
                          uVar5 = uVar5 + 1;
                          iVar7 = local_8b4;
                        }
                        uVar9 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar3 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,uVar6);
                          goto LAB_1003d47e0;
                        }
                      }
                      else {
                        uVar5 = FUN_1003d5b3e(param_1,1,0);
                        uVar11 = (ulong)uVar5;
                        if (uVar5 != 0xffffff80) {
                          if (uVar5 == 0) goto LAB_1003d45a3;
                          uVar9 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar3 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                            goto LAB_1003d47e0;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar9 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar3 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                      goto LAB_1003d47e0;
                    }
                  }
                }
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                goto LAB_1003d47e0;
              }
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
LAB_1003d47e0:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_1003d4915:
      local_8a4 = 0;
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_1003d491f:
  lVar10 = *(long *)(param_1 + 0x3e0);
  if (lVar10 == 0) {
LAB_1003d496e:
    lVar10 = *(long *)(local_8b0 + 0x16860);
    if (lVar10 != 0) goto LAB_1003d4981;
  }
  else {
    if (*(long *)(local_8b0 + 0x16860) != 0) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "context->desktopPhotoLibrary == nullptr || handlerData->airTrafficDesktopPhotoLibrary == nullptr"
        ;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar10 = *(long *)(param_1 + 0x3e0);
      if (lVar10 == 0) goto LAB_1003d496e;
    }
LAB_1003d4981:
    iVar7 = FUN_10038ef22(lVar10,0,0);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    FUN_100496f8c(lVar10,0);
    if (((lVar10 == *(long *)(local_8b0 + 0x16860)) &&
        (iVar7 = FUN_100394b5b(local_8b0,local_8b0 + 0x16868), iVar7 != -0x80)) && (iVar7 != 0)) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)(param_1 + 1000) != 0) {
    FUN_1001c64c1();
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_100495a1c();
    *(undefined8 *)(param_1 + 0x3e0) = 0;
  }
  if (*(char *)(local_8b0 + 0x3a2) == '\0') {
    FUN_1004ded16(local_8b0,0);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar10 + 0x6750);
  if (lVar1 != 0) {
    FUN_100529664(lVar1,0,0);
  }
  *(undefined2 *)(lVar10 + 0x67bc) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (*(long *)(local_8b0 + 0x30) != 0) {
    FUN_100321e5c();
  }
  if ((char)local_8a4 == '\0') {
    FUN_1006024ff(*(undefined8 *)(param_1 + 0x10));
  }
LAB_1003d4a89:
  FUN_1003d3c28(local_480);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

