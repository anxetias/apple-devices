// name: FUN_100555860
// address: 100555860

int FUN_100555860(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  undefined1 local_198 [8];
  ulong local_190;
  ulong local_188;
  uint local_180;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined1 local_140 [8];
  ulong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  undefined1 local_e0 [4];
  uint local_dc;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  uint local_ac;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  local_150 = 0;
  local_f0 = 0;
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      uStack_8a = 0x74e8;
      local_88 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      if ((*(int *)(param_1 + 0x850) != 0x6d703461) && (*(int *)(param_1 + 0x850) != 0x64726d73)) {
        iVar5 = -4;
        local_100 = 0;
        lVar9 = 0;
        lVar8 = 0;
        goto LAB_10055653e;
      }
      local_e8 = 0;
      local_138 = 0;
      local_dc = 0;
      local_120 = 0;
      local_118 = 0;
      iVar5 = FUN_1001c861c();
      if (iVar5 == -0x80) goto LAB_10055608c;
      if (iVar5 != 0) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10055608c;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        goto LAB_100556079;
      }
      iVar5 = FUN_1001c9b1d(local_e8,&local_110);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          iVar5 = FUN_1001c9f0c(local_110,0x2d2d2d2d,"com.apple.iTunes",0x10);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              iVar5 = FUN_1001ca240(local_110,"iTunSMPB",8);
              if (iVar5 != -0x80) {
                if (iVar5 == 0) {
                  FUN_1001c62d9(&local_98,0x40);
                  local_88 = (undefined6)*(undefined8 *)(param_2 + 0x1c);
                  uStack_82 = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x30);
                  local_80 = *(undefined8 *)(param_2 + 0x28);
                  local_78 = *(undefined4 *)(param_2 + 0x18);
                  local_74 = 0;
                  piVar3 = *(int **)(param_2 + 0x38);
                  if (piVar3 == (int *)0x0) {
LAB_100555c75:
                    bVar10 = false;
                  }
                  else {
                    local_1a8 = piVar3[0xc];
                    local_1d8 = *piVar3;
                    iStack_1d4 = piVar3[1];
                    iStack_1d0 = piVar3[2];
                    iStack_1cc = piVar3[3];
                    local_1c8 = *(undefined8 *)(piVar3 + 4);
                    uStack_1c0 = *(undefined8 *)(piVar3 + 6);
                    local_1b8 = *(undefined8 *)(piVar3 + 8);
                    uStack_1b0 = *(undefined8 *)(piVar3 + 10);
                    if (*piVar3 != 0x6954756e) goto LAB_100555c75;
                    bVar10 = piVar3[1] == 0x4e4f524d;
                  }
                  iVar5 = FUN_1003a95c2(&local_98,&local_120,&local_130);
                  if (iVar5 != -0x80) {
                    if (iVar5 == 0) {
                      iVar5 = FUN_1001cacbc(local_110,1,1,local_120,local_130);
                      if (iVar5 != -0x80) {
                        if (iVar5 == 0) {
                          if ((bVar10) &&
                             (iVar5 = FUN_1001c9b1d(local_e8,&local_108), iVar5 != -0x80)) {
                            if (iVar5 == 0) {
                              iVar5 = FUN_1001c9f0c(local_108,0x2d2d2d2d,"com.apple.iTunes",0x10);
                              if (iVar5 != -0x80) {
                                if (iVar5 == 0) {
                                  iVar5 = FUN_1001ca240(local_108,"iTunNORM",8);
                                  if (iVar5 != -0x80) {
                                    if (iVar5 == 0) {
                                      iVar5 = FUN_1003a97ad(&local_1d8,&local_118,&local_12c);
                                      if (iVar5 != -0x80) {
                                        if (iVar5 == 0) {
                                          iVar5 = FUN_1001cacbc(local_108,1,1,local_118,local_12c);
                                          if ((iVar5 != -0x80) && (iVar5 != 0)) {
                                            uVar6 = FUN_1001cc310();
                                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar4 != '\0') {
                                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                              goto LAB_100555ff7;
                                            }
                                          }
                                        }
                                        else {
                                          uVar6 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                                          if (cVar4 != '\0') {
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_100555ff7:
                                            local_4c = 0x400;
                                            local_54 = "Assertion failure";
                                            local_58 = 0x8220202;
                                            __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                "%{public}s: err == (%d)",&local_58,
                                                                0x12);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar6 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar6,0x10);
                                      if (cVar4 != '\0') {
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                        goto LAB_100555ff7;
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar6 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar4 != '\0') {
                                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                    goto LAB_100555ff7;
                                  }
                                }
                              }
                            }
                            else {
                              uVar6 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar4 != '\0') {
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                goto LAB_100555ff7;
                              }
                            }
                          }
                          iVar5 = FUN_1001c8ed3(local_e8,&local_138,&local_dc);
                          if ((iVar5 != -0x80) && (iVar5 != 0)) {
                            uVar6 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar4 != '\0') {
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                              goto LAB_100556079;
                            }
                          }
                        }
                        else {
                          uVar6 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar4 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                            goto LAB_100556079;
                          }
                        }
                      }
                    }
                    else {
                      uVar6 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar4 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_100556079:
                        local_4c = 0x400;
                        local_54 = "Assertion failure";
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_100556079;
                  }
                }
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_100556079;
              }
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            goto LAB_100556079;
          }
        }
      }
LAB_10055608c:
      if (local_e8 != 0) {
        FUN_1001c8d4b(local_e8,1);
      }
      if (local_120 != 0) {
        FUN_1001c64c1();
      }
      if (local_118 != 0) {
        FUN_1001c64c1();
      }
      local_100 = 0;
      uVar7 = local_100;
      if (iVar5 == 0) {
        local_100 = local_138;
        uVar7 = (ulong)local_dc;
      }
      FUN_1001c62d9(&local_190,0x28);
      local_168 = *(undefined4 *)(param_1 + 0x38);
      uStack_164 = *(undefined4 *)(param_1 + 0x3c);
      uStack_160 = *(undefined4 *)(param_1 + 0x40);
      uStack_15c = *(undefined4 *)(param_1 + 0x44);
      if (*(long *)(param_1 + 0x40) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      iVar5 = FUN_1005d77b9(&local_168,0,&local_190);
      plVar1 = (long *)CONCAT44(uStack_15c,uStack_160);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar9 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar5 == -0x80) {
LAB_10055653a:
        lVar9 = 0;
        lVar8 = 0;
      }
      else {
        if (iVar5 != 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_10055653a;
        }
        local_f8 = local_188;
        local_b8 = CONCAT71(local_b8._1_7_,local_190 < local_188);
        local_d0 = (ulong)local_180;
        local_c8 = local_190 & 0xffffffff;
        local_a8 = FUN_1001c63e1();
        if (local_a8 == 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "fileBeforeMoov != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar5 = -0x6c;
          goto LAB_10055653a;
        }
        local_a0 = FUN_1001c63e1(local_d0);
        if (local_a0 == 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "originalMoov != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar5 = -0x6c;
          lVar9 = local_a8;
          lVar8 = 0;
        }
        else {
          iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x100))
                            (*(long **)(param_1 + 0x38),&local_148);
          lVar9 = local_a8;
          lVar8 = local_a0;
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              local_d8 = (ulong)local_148;
              iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))
                                (*(long **)(param_1 + 0x38),local_c8);
              lVar9 = local_a8;
              lVar8 = local_a0;
              if (iVar5 != -0x80) {
                if (iVar5 == 0) {
                  local_c0 = local_d0;
                  iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                                    (*(long **)(param_1 + 0x38),&local_c0,local_a0);
                  if ((iVar5 == 0) && (local_c0 == local_d0)) {
                    iVar5 = FUN_1005dcc41(local_a0,local_d0,local_100,uVar7,&local_f0,&local_ac,
                                          (undefined1)local_b8);
                    lVar9 = local_a8;
                    lVar8 = local_a0;
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) {
                        uVar7 = (ulong)(uint)((int)local_d8 - ((int)local_d0 + (int)local_190));
                        local_d8 = (ulong)local_ac + local_c8 + uVar7;
                        local_b8 = FUN_1001c63e1();
                        if (local_b8 == 0) {
                          uVar6 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar4 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x822;
                            local_4a = "cleanFile != nullptr";
                            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          iVar5 = -0x6c;
                          lVar9 = local_a8;
                          lVar8 = local_a0;
                        }
                        else {
                          iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))
                                            (*(long **)(param_1 + 0x38),0);
                          if (iVar5 != -0x80) {
                            if (iVar5 == 0) {
                              if (local_190 < local_f8) {
                                local_c0 = local_c8;
                                iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                                                  (*(long **)(param_1 + 0x38),&local_c0,local_b8);
                                if ((iVar5 == 0) && (local_c0 == local_c8)) {
                                  lVar9 = local_b8 + local_c8;
                                  FUN_1001c631b(local_f0,lVar9,local_ac);
                                  local_f8 = (ulong)local_ac;
                                  iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))
                                                    (*(long **)(param_1 + 0x38),local_c8 + local_d0)
                                  ;
                                  if (iVar5 != -0x80) {
                                    if (iVar5 == 0) {
                                      local_c0 = uVar7;
                                      iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                                                        (*(long **)(param_1 + 0x38),&local_c0,
                                                         lVar9 + local_f8);
                                      if ((iVar5 != 0) || (local_c0 != uVar7)) {
                                        uVar6 = FUN_1001cc310();
                                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                                        if (cVar4 != '\0') {
                                          local_58 = 0x8220202;
                                          local_54 = "Assertion failure";
                                          local_4c = 0x822;
                                          local_4a = 
                                          "(status == noErr) && (readSize == fileAfterMoovLength)";
                                          __os_log_error_impl(0x100000000,uVar6,0x10,
                                                              "%{public}s: (%{public}s)",&local_58,
                                                              0x16);
                                        }
                                        FUN_1001782e9(0,0);
                                        goto LAB_100556b53;
                                      }
                                      *(long *)(param_2 + 0x40) = local_b8;
                                      *(ulong *)(param_2 + 0x48) = local_d8;
                                      iVar5 = FUN_10055423c(param_1,0,local_e0,local_140,&local_128)
                                      ;
                                      if (iVar5 != -0x80) {
                                        if (iVar5 == 0) {
                                          iVar5 = FUN_10055423c(param_1,0xffffffff,local_e0,
                                                                local_140,local_198);
                                          if (iVar5 != -0x80) {
                                            if (iVar5 == 0) {
                                              uVar7 = local_d8 - CONCAT44(uStack_144,local_148);
                                              goto LAB_1005569ad;
                                            }
                                            uVar6 = FUN_1001cc310();
                                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar4 != '\0') {
                                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                              goto LAB_10055684d;
                                            }
                                          }
                                        }
                                        else {
                                          uVar6 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                                          if (cVar4 != '\0') {
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                            goto LAB_10055684d;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar6 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar6,0x10);
                                      if (cVar4 != '\0') {
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                        goto LAB_10055684d;
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar6 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar4 != '\0') {
                                    local_58 = 0x8220202;
                                    local_54 = "Assertion failure";
                                    local_4c = 0x822;
                                    local_4a = 
                                    "(status == noErr) && (readSize == fileBeforeMoovLength)";
                                    __os_log_error_impl(0x100000000,uVar6,0x10,
                                                        "%{public}s: (%{public}s)",&local_58,0x16);
                                  }
                                  FUN_1001782e9(0,0);
LAB_100556b53:
                                  iVar5 = -0x24;
                                }
                              }
                              else {
                                lVar9 = local_b8;
                                if (local_188 != 0) {
                                  local_c0 = local_188;
                                  iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                                                    (*(long **)(param_1 + 0x38),&local_c0,local_b8);
                                  if ((iVar5 != 0) || (local_c0 != local_188)) {
                                    uVar6 = FUN_1001cc310();
                                    cVar4 = _os_log_type_enabled(uVar6,0x10);
                                    if (cVar4 != '\0') {
                                      local_58 = 0x8220202;
                                      local_54 = "Assertion failure";
                                      local_4c = 0x822;
                                      local_4a = 
                                      "(status == noErr) && (readSize == fileBeforeMdatLength)";
                                      __os_log_error_impl(0x100000000,uVar6,0x10,
                                                          "%{public}s: (%{public}s)",&local_58,0x16)
                                      ;
                                    }
                                    FUN_1001782e9(0,0);
                                    goto LAB_100556b53;
                                  }
                                  lVar9 = local_b8 + local_188;
                                }
                                FUN_1001c631b(local_f0,lVar9,local_ac);
                                uVar7 = local_c8 - local_188;
                                local_c0 = uVar7;
                                iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                                                  (*(long **)(param_1 + 0x38),&local_c0,
                                                   lVar9 + (ulong)local_ac);
                                if ((iVar5 != 0) || (local_c0 != uVar7)) {
                                  uVar6 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar4 != '\0') {
                                    local_58 = 0x8220202;
                                    local_54 = "Assertion failure";
                                    local_4c = 0x822;
                                    local_4a = 
                                    "(status == noErr) && (readSize == (fileBeforeMoovLength - fileBeforeMdatLength))"
                                    ;
                                    __os_log_error_impl(0x100000000,uVar6,0x10,
                                                        "%{public}s: (%{public}s)",&local_58,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                  goto LAB_100556b53;
                                }
                                *(long *)(param_2 + 0x40) = local_b8;
                                *(ulong *)(param_2 + 0x48) = local_d8;
                                iVar5 = FUN_10055423c(param_1,0,local_e0,local_140,&local_128);
                                if (iVar5 != -0x80) {
                                  if (iVar5 == 0) {
                                    uVar7 = (ulong)local_ac;
LAB_1005569ad:
                                    *(ulong *)(param_2 + 0x50) = uVar7 + local_128;
                                    iVar5 = 0;
                                    lVar9 = local_a8;
                                    lVar8 = local_a0;
                                    goto LAB_10055653e;
                                  }
                                  uVar6 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar4 != '\0') {
                                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10055684d:
                                    local_4c = 0x400;
                                    local_54 = "Assertion failure";
                                    local_58 = 0x8220202;
                                    __os_log_error_impl(0x100000000,uVar6,0x10,
                                                        "%{public}s: err == (%d)",&local_58,0x12);
                                  }
                                }
                              }
                            }
                            else {
                              uVar6 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar4 != '\0') {
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                goto LAB_10055684d;
                              }
                            }
                          }
                          FUN_1001c64c1(local_b8);
                          lVar9 = local_a8;
                          lVar8 = local_a0;
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        lVar9 = local_a8;
                        lVar8 = local_a0;
                        if (cVar4 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                          goto LAB_10055669a;
                        }
                      }
                    }
                  }
                  else {
                    uVar6 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "(status == noErr) && (readSize == originalMoovLength)";
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    iVar5 = -0x24;
                    lVar9 = local_a8;
                    lVar8 = local_a0;
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  lVar9 = local_a8;
                  lVar8 = local_a0;
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_10055669a;
                  }
                }
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              lVar9 = local_a8;
              lVar8 = local_a0;
              if (cVar4 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10055669a:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                lVar9 = local_a8;
                lVar8 = local_a0;
              }
            }
          }
        }
      }
LAB_10055653e:
      if (local_150 != 0) {
        FUN_1001c64c1();
      }
      if (lVar9 != 0) {
        FUN_1001c64c1(lVar9);
      }
      if (lVar8 != 0) {
        FUN_1001c64c1(lVar8);
      }
      if (local_f0 != 0) {
        FUN_1001c64c1();
      }
      if (local_100 != 0) {
        FUN_1001c64c1();
      }
      goto LAB_10055659d;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      uStack_8a = 0x671d;
      local_88 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar5 = -0x32;
LAB_10055659d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

