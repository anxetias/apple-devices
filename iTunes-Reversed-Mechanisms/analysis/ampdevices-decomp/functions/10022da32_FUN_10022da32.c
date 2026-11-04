// name: FUN_10022da32
// address: 10022da32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10022da32(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  int iVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined1 auVar18 [16];
  undefined1 local_c4 [4];
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  ulong local_70;
  undefined4 local_64;
  undefined4 local_40;
  undefined1 local_3c [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  if (param_1[0x3c] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_1002e9f72(param_1[0x3c],*(undefined4 *)((long)param_1 + 0x14),0x6954756e,param_2 + 1
                          ,param_2);
    if ((iVar9 != -0x80) && (iVar9 != 0)) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x400;
        local_7a = (undefined2)iVar9;
        uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
    }
  }
  if (param_1[8] == 0) {
    if (param_1[9] != 0) {
      local_c0 = param_1[0xb];
LAB_10022db3e:
      param_1[0xe] = local_c0 - param_1[0xd];
      iVar9 = (**(code **)(*param_1 + 0x50))(param_1);
      if (iVar9 == -0x80) goto LAB_10022e974;
      if (iVar9 != 0) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 == '\0') goto LAB_10022e974;
        local_7a = (undefined2)iVar9;
        uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
        uVar4 = local_7a;
        uVar6 = uStack_78;
        goto LAB_10022e6f1;
      }
      iVar9 = 0;
      if ((ulong)*(uint *)((long)param_1 + 0x204) == 0) {
        iVar11 = 0;
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
        do {
          iVar11 = iVar11 + *(int *)(param_1[0x4a] + 4 + uVar16 * 8) *
                            *(int *)(param_1[0x4a] + uVar16 * 8);
          uVar16 = uVar16 + 1;
        } while (*(uint *)((long)param_1 + 0x204) != uVar16);
      }
      iVar10 = iVar11 - ((int)param_1[0x58] + *(int *)((long)param_1 + 700));
      *(int *)(param_1 + 0x59) = iVar10;
      *(int *)((long)param_1 + 0x9c) = iVar11;
      *(int *)((long)param_1 + 0x114) = iVar11;
      *(int *)((long)param_1 + 0x174) = iVar11;
      *(int *)(param_1 + 0x56) = iVar10;
      *(int *)((long)param_1 + 0x2b4) = *(int *)((long)param_1 + 700);
      local_b8 = 0;
      param_1[0x5b] = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      lVar2 = param_1[0x5a];
      if (lVar2 != 0) {
        if ((param_1[0x3c] == 0) || ((*(byte *)(param_1 + 2) & 0x10) == 0)) {
LAB_10022dfca:
          if (iVar10 == 0) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_88 = 0x8220202;
              local_84 = "Assertion failure";
              local_7c = 0x822;
              local_7a = 0x22b0;
              uStack_78 = 0x7b;
              uStack_76 = 1;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_88,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if ((*(int *)((long)param_1 + 700) == 0) && ((int)param_1[0x58] == 0)) {
LAB_10022e137:
            (**(code **)(*param_1 + 0x48))(param_1,&local_b8,&local_40);
            if (local_b8 == 0) {
LAB_10022e229:
              iVar9 = FUN_1001c8ed3(param_1[0x5a],param_1 + 0x5b,param_1 + 0x5c);
              if ((iVar9 != -0x80) && (iVar9 != 0)) {
                uVar13 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  puVar17 = &local_88;
                  local_88 = 0x8220202;
                  local_84 = "Assertion failure";
                  local_7c = 0x400;
                  local_7a = (undefined2)iVar9;
                  uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                  goto LAB_10022e624;
                }
              }
            }
            else {
              iVar9 = FUN_1001c9b1d(param_1[0x5a],&local_b0);
              if (iVar9 != -0x80) {
                if (iVar9 == 0) {
                  iVar9 = FUN_1001c9f0c(local_b0,0x2d2d2d2d,"com.apple.iTunes",0x10);
                  if (iVar9 != -0x80) {
                    if (iVar9 == 0) {
                      iVar9 = FUN_1001ca240(local_b0,"Encoding Params",0xf);
                      if (iVar9 != -0x80) {
                        if (iVar9 == 0) {
                          iVar9 = FUN_1001cacbc(local_b0,1,0,local_b8,local_40);
                          if (iVar9 != -0x80) {
                            if (iVar9 == 0) {
                              FUN_1001c64c1(local_b8);
                              local_b8 = 0;
                              goto LAB_10022e229;
                            }
                            uVar13 = FUN_1001cc310();
                            cVar8 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar8 != '\0') {
                              puVar17 = &local_88;
                              local_88 = 0x8220202;
                              local_84 = "Assertion failure";
                              local_7c = 0x400;
                              local_7a = (undefined2)iVar9;
                              uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                              goto LAB_10022e624;
                            }
                          }
                        }
                        else {
                          uVar13 = FUN_1001cc310();
                          cVar8 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar8 != '\0') {
                            puVar17 = &local_88;
                            local_88 = 0x8220202;
                            local_84 = "Assertion failure";
                            local_7c = 0x400;
                            local_7a = (undefined2)iVar9;
                            uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                            goto LAB_10022e624;
                          }
                        }
                      }
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar8 != '\0') {
                        puVar17 = &local_88;
                        local_88 = 0x8220202;
                        local_84 = "Assertion failure";
                        local_7c = 0x400;
                        local_7a = (undefined2)iVar9;
                        uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                        goto LAB_10022e624;
                      }
                    }
                  }
                }
                else {
                  uVar13 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    puVar17 = &local_88;
                    local_88 = 0x8220202;
                    local_84 = "Assertion failure";
                    local_7c = 0x400;
                    local_7a = (undefined2)iVar9;
                    uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                    goto LAB_10022e624;
                  }
                }
              }
            }
          }
          else {
            iVar9 = FUN_1001c9b1d(param_1[0x5a],&local_b0);
            if (iVar9 != -0x80) {
              if (iVar9 == 0) {
                iVar9 = FUN_1001c9f0c(local_b0,0x2d2d2d2d,"com.apple.iTunes",0x10);
                if (iVar9 != -0x80) {
                  if (iVar9 == 0) {
                    iVar9 = FUN_1001ca240(local_b0,"iTunSMPB",8);
                    if (iVar9 != -0x80) {
                      if (iVar9 == 0) {
                        FUN_1001c62d9(&local_88,0x40);
                        uVar13 = *(undefined8 *)((long)param_1 + 700);
                        uStack_78 = (undefined2)uVar13;
                        uStack_76 = (undefined4)((ulong)uVar13 >> 0x10);
                        uStack_72 = (undefined2)((ulong)uVar13 >> 0x30);
                        local_70 = (ulong)*(uint *)(param_1 + 0x59);
                        local_64 = 0;
                        iVar9 = FUN_1003a95c2(&local_88,&local_b8,&local_40);
                        if (iVar9 != -0x80) {
                          if (iVar9 == 0) {
                            iVar9 = FUN_1001cacbc(local_b0,1,1,local_b8,local_40);
                            if (iVar9 != -0x80) {
                              if (iVar9 == 0) {
                                FUN_1001c64c1(local_b8);
                                local_b8 = 0;
                                goto LAB_10022e137;
                              }
                              uVar13 = FUN_1001cc310();
                              cVar8 = _os_log_type_enabled(uVar13,0x10);
                              if (cVar8 != '\0') {
                                puVar17 = &local_a8;
                                local_a8 = 0x8220202;
                                uStack_a4 = 0x7a0a90;
                                uStack_a0 = 1;
                                local_9c = 0x400;
                                local_9a = iVar9;
                                goto LAB_10022e624;
                              }
                            }
                          }
                          else {
                            uVar13 = FUN_1001cc310();
                            cVar8 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar8 != '\0') {
                              puVar17 = &local_a8;
                              local_a8 = 0x8220202;
                              uStack_a4 = 0x7a0a90;
                              uStack_a0 = 1;
                              local_9c = 0x400;
                              local_9a = iVar9;
                              goto LAB_10022e624;
                            }
                          }
                        }
                      }
                      else {
                        uVar13 = FUN_1001cc310();
                        cVar8 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar8 != '\0') {
                          puVar17 = &local_a8;
                          local_a8 = 0x8220202;
                          uStack_a4 = 0x7a0a90;
                          uStack_a0 = 1;
                          local_9c = 0x400;
                          local_9a = iVar9;
                          goto LAB_10022e624;
                        }
                      }
                    }
                  }
                  else {
                    uVar13 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar8 != '\0') {
                      puVar17 = &local_a8;
                      local_a8 = 0x8220202;
                      uStack_a4 = 0x7a0a90;
                      uStack_a0 = 1;
                      local_9c = 0x400;
                      local_9a = iVar9;
                      goto LAB_10022e624;
                    }
                  }
                }
              }
              else {
                uVar13 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  puVar17 = &local_a8;
                  local_a8 = 0x8220202;
                  uStack_a4 = 0x7a0a90;
                  uStack_a0 = 1;
                  local_9c = 0x400;
                  local_9a = iVar9;
LAB_10022e624:
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",puVar17,0x12
                                     );
                }
              }
            }
          }
        }
        else {
          local_a8 = 0;
          uStack_a4 = 0;
          local_b0 = 0;
          iVar9 = FUN_1002e9f72(param_1[0x3c],*(undefined4 *)((long)param_1 + 0x14),0x6954756e,
                                &local_a8,local_c4);
          if (iVar9 != -0x80) {
            if (iVar9 == 0) {
              iVar9 = FUN_1001c9b1d(lVar2,&local_b0);
              if (iVar9 != -0x80) {
                if (iVar9 == 0) {
                  iVar9 = FUN_1001c9f0c(local_b0,0x2d2d2d2d,"com.apple.iTunes",0x10);
                  if (iVar9 != -0x80) {
                    if (iVar9 == 0) {
                      puVar14 = (ulong *)FUN_100170f3b(CONCAT44(uStack_a4,local_a8));
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = *puVar14;
                      auVar18 = pshufb(auVar18,_DAT_10070e4b0);
                      *puVar14 = auVar18._0_8_;
                      FUN_1001c631b(puVar14,&local_40,4);
                      FUN_1001c631b((long)puVar14 + 4,local_3c,4);
                      iVar9 = FUN_1001ca240(local_b0,&local_40,8);
                      if (iVar9 != -0x80) {
                        if (iVar9 == 0) {
                          iVar9 = FUN_1001cacbc(local_b0,1,1,(long)puVar14 + 0xc,(int)puVar14[1]);
                          if ((iVar9 != -0x80) && (iVar9 != 0)) {
                            uVar13 = FUN_1001cc310();
                            cVar8 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar8 != '\0') {
                              local_7a = (undefined2)iVar9;
                              uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                              goto LAB_10022df8c;
                            }
                          }
                        }
                        else {
                          uVar13 = FUN_1001cc310();
                          cVar8 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar8 != '\0') {
                            local_7a = (undefined2)iVar9;
                            uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
LAB_10022df8c:
                            local_7c = 0x400;
                            local_84 = "Assertion failure";
                            local_88 = 0x8220202;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                &local_88,0x12);
                          }
                        }
                      }
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar8 != '\0') {
                        local_7a = (undefined2)iVar9;
                        uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                        goto LAB_10022df8c;
                      }
                    }
                  }
                }
                else {
                  uVar13 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    local_7a = (undefined2)iVar9;
                    uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                    goto LAB_10022df8c;
                  }
                }
              }
            }
            else {
              uVar13 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_7a = (undefined2)iVar9;
                uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
                goto LAB_10022df8c;
              }
            }
          }
          if (CONCAT44(uStack_a4,local_a8) != 0) {
            FUN_10017060f();
          }
          if (iVar9 != -0x80) {
            if (iVar9 == 0) {
              iVar10 = (int)param_1[0x59];
              goto LAB_10022dfca;
            }
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 == '\0') goto LAB_10022e637;
            puVar17 = &local_88;
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            local_7a = (undefined2)iVar9;
            uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
            goto LAB_10022e624;
          }
        }
      }
LAB_10022e637:
      if (local_b8 != 0) {
        FUN_1001c64c1();
      }
      if (param_1[0x5a] != 0) {
        FUN_1001c8d4b(param_1[0x5a],1);
        param_1[0x5a] = 0;
      }
      if (iVar9 == -0x80) goto LAB_10022e974;
      if (iVar9 != 0) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 == '\0') goto LAB_10022e974;
        local_7a = (undefined2)iVar9;
        uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
        uVar4 = local_7a;
        uVar6 = uStack_78;
        goto LAB_10022e6f1;
      }
      *(undefined4 *)(param_1 + 0x43) = 0x14;
      iVar9 = (int)param_1[0x45];
      if (iVar9 < 1) {
        iVar9 = 0x1c;
      }
      else {
        *(int *)(param_1 + 0x43) = iVar9 * 4 + 0x14;
        iVar9 = iVar9 * 4 + 0x1c;
      }
      piVar3 = (int *)param_1[0x42];
      *piVar3 = 0x10;
      iVar11 = 0x10;
      iVar10 = 0x10;
      if (0 < piVar3[3]) {
        iVar10 = piVar3[3] * 0xc + 0x10;
        *piVar3 = iVar10;
      }
      *(undefined4 *)(param_1 + 0x46) = 0x10;
      if (0 < *(int *)((long)param_1 + 0x23c)) {
        iVar11 = *(int *)((long)param_1 + 0x23c) * 4 + 0x10;
        *(int *)(param_1 + 0x46) = iVar11;
      }
      *(undefined4 *)(param_1 + 0x3f) = 0x10;
      if (*(int *)((long)param_1 + 0x204) < 1) {
        iVar15 = 0x10;
      }
      else {
        iVar15 = ((int)param_1[0x4b] - (int)param_1[0x4a] & 0xfffffff8U) + 0x10;
        *(int *)(param_1 + 0x3f) = iVar15;
      }
      *(undefined4 *)(param_1 + 0x3d) = 8;
      uVar12 = *(uint *)param_1[0x3e];
      iVar9 = iVar10 + iVar9 + iVar11 + iVar15 +
              (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18);
      *(int *)(param_1 + 0x3d) = iVar9;
      iVar9 = *(int *)((long)param_1 + 0x1b6) + iVar9 + *(int *)((long)param_1 + 0x1a6) + 8;
      *(int *)((long)param_1 + 0x19e) = iVar9;
      iVar9 = iVar9 + *(int *)((long)param_1 + 0x15c);
      iVar11 = iVar9 + *(int *)((long)param_1 + 0x17c);
      *(int *)((long)param_1 + 0x154) = *(int *)((long)param_1 + 0x17c) + iVar9 + 8;
      *(int *)(param_1 + 0x1e) = (int)param_1[0x1f] + 0x10 + iVar11;
      uVar12 = *(int *)((long)param_1 + 0x84) + (int)param_1[0x1f] + iVar11 + 0x18;
      *(uint *)((long)param_1 + 0x7c) = uVar12;
      if (param_1[0x5b] != 0) {
        uVar12 = uVar12 + (int)param_1[0x5c] + 8;
        *(uint *)((long)param_1 + 0x7c) = uVar12;
      }
      if ((*(byte *)(param_1 + 2) & 2) == 0) {
        uVar1 = *(uint *)(param_1 + 0xf);
        if ((uVar1 <= uVar12 && uVar12 - uVar1 != 0) || (uVar1 - uVar12 < 8 && uVar12 < uVar1)) {
          *(undefined1 *)((long)param_1 + 0x2e4) = 1;
          *(uint *)(param_1 + 0x5d) = uVar12 - uVar1;
        }
      }
      else if (param_1[8] == 0) {
        if (param_1[9] != 0) {
          param_1[0xc] = param_1[0xb];
        }
      }
      else {
        iVar9 = FUN_10017cfbe(param_1[8],param_1 + 0xc);
        if (iVar9 == -0x80) goto LAB_10022e974;
        if (iVar9 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          uVar7 = uStack_78;
          uVar5 = local_7a;
          local_7a = (undefined2)iVar9;
          uVar4 = local_7a;
          uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
          uVar6 = uStack_78;
          if (cVar8 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            uVar5 = local_7a;
            uVar7 = uStack_78;
          }
          uStack_78 = uVar7;
          local_7a = uVar5;
          if (iVar9 != 0) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 == '\0') goto LAB_10022e974;
            goto LAB_10022e6f1;
          }
        }
      }
      iVar9 = FUN_10022ea30(param_1);
      if ((iVar9 != -0x80) && (iVar9 != 0)) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x400;
          local_7a = (undefined2)iVar9;
          uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
      }
    }
    if (param_1[0x3c] != 0) {
      FUN_1002ea25a();
      param_1[0x3c] = 0;
    }
    *(long *)(param_2 + 3) = param_1[0xb];
    lVar2 = param_1[0xe];
    *(long *)(param_2 + 5) = param_1[0xd];
    *(long *)(param_2 + 7) = lVar2;
  }
  else {
    local_c0 = 0;
    iVar9 = FUN_10017cfbe();
    if (iVar9 == -0x80) goto LAB_10022e974;
    if (iVar9 == 0) goto LAB_10022db3e;
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 == '\0') goto LAB_10022e974;
    local_7a = (undefined2)iVar9;
    uStack_78 = (undefined2)((uint)iVar9 >> 0x10);
    uVar4 = local_7a;
    uVar6 = uStack_78;
LAB_10022e6f1:
    uStack_78 = uVar6;
    local_7a = uVar4;
    local_7c = 0x400;
    local_84 = "Assertion failure";
    local_88 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_88,0x12);
  }
LAB_10022e974:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

