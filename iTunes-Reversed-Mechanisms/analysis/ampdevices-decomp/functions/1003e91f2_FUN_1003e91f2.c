// name: FUN_1003e91f2
// address: 1003e91f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e91f2(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long local_e8;
  int local_e0 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_d8,0x20);
  iVar3 = (**(code **)(param_1 + 0x100020))
                    (*(undefined8 *)(param_1 + 0x100008),0x67736f70,&local_d8,
                     *(undefined8 *)(param_1 + 0x100028));
  if (iVar3 == -0x80) goto LAB_1003e968b;
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      iStack_80 = 1;
      uStack_7c = 0x400;
      uStack_7a = (undefined2)iVar3;
      uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
    goto LAB_1003e968b;
  }
  FUN_1001705fc(local_d8);
  FUN_1001705fc(local_d0);
  FUN_1001705fc(local_c8);
  FUN_1001705fc(local_c0);
  iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_e8);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      FUN_1001c62d9(&local_88,0x60);
      local_88 = 0x6473686d;
      uStack_84 = 0x60;
      uStack_7c = 0xc;
      uStack_7a = 0;
      local_a8 = 0x60;
      uStack_a4 = 0;
      iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_a8,&local_88);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          FUN_1001c62d9(local_b8,0x10);
          local_b8._0_8_ = 0x10736f686d;
          local_b8._12_4_ = 0;
          local_a8 = 0x10;
          uStack_a4 = 0;
          iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_a8,local_b8);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              puVar1 = local_b8 + 0xc;
              iVar3 = FUN_1003f9354(param_1,local_d8,1,puVar1);
              if (iVar3 == 0) {
                iVar3 = FUN_1003f9354(param_1,local_d0,2,puVar1);
                if (iVar3 == 0) {
                  iVar3 = FUN_1003f9354(param_1,local_c8,3,puVar1);
                  if (iVar3 == 0) {
                    iVar3 = FUN_1003f9354(param_1,local_c0,4,puVar1);
                    if (iVar3 == 0) {
                      iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),local_e0);
                      if (iVar3 != -0x80) {
                        if (iVar3 == 0) {
                          iStack_80 = local_e0[0] - (int)local_e8;
                          if (*(char *)(param_1 + 0x100127) != '\0') {
                            auVar6._4_4_ = uStack_84;
                            auVar6._0_4_ = local_88;
                            auVar6._14_2_ = uStack_7a;
                            auVar6._12_2_ = uStack_7c;
                            auVar6._8_4_ = iStack_80;
                            auVar6 = pshufb(auVar6,_DAT_100718a70);
                            local_88 = auVar6._0_4_;
                            uStack_84 = auVar6._4_4_;
                            iStack_80 = auVar6._8_4_;
                            uStack_7c = auVar6._12_2_;
                            uStack_7a = auVar6._14_2_;
                          }
                          local_a8 = 0x60;
                          uStack_a4 = 0;
                          iVar3 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),local_e8,
                                                &local_a8,&local_88);
                          if (iVar3 != -0x80) {
                            if (iVar3 == 0) {
                              local_e0[0] = local_e0[0] - (int)(local_e8 + 0x60);
                              local_b8._8_4_ = local_e0[0];
                              if (*(char *)(param_1 + 0x100127) != '\0') {
                                auVar7._12_4_ = local_b8._12_4_;
                                auVar7._8_4_ = local_e0[0];
                                auVar7._0_8_ = local_b8._0_8_;
                                local_b8 = pshufb(auVar7,_DAT_100718a70);
                              }
                              local_a8 = 0x10;
                              uStack_a4 = 0;
                              iVar3 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),
                                                    local_e8 + 0x60,&local_a8,local_b8);
                              if ((iVar3 != -0x80) && (iVar3 != 0)) {
                                uVar4 = FUN_1001cc310();
                                cVar2 = _os_log_type_enabled(uVar4,0x10);
                                if (cVar2 != '\0') {
                                  puVar5 = &local_a8;
                                  local_a8 = 0x8220202;
                                  uStack_a4 = 0x7a0a90;
                                  uStack_a0 = 1;
                                  local_9c = 0x400;
                                  local_9a = iVar3;
                                  goto LAB_1003e952b;
                                }
                              }
                            }
                            else {
                              uVar4 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar4,0x10);
                              if (cVar2 != '\0') {
                                puVar5 = &local_a8;
                                local_a8 = 0x8220202;
                                uStack_a4 = 0x7a0a90;
                                uStack_a0 = 1;
                                local_9c = 0x400;
                                local_9a = iVar3;
                                goto LAB_1003e952b;
                              }
                            }
                          }
                        }
                        else {
                          uVar4 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar4,0x10);
                          if (cVar2 != '\0') {
                            puVar5 = &local_a8;
                            local_a8 = 0x8220202;
                            uStack_a4 = 0x7a0a90;
                            uStack_a0 = 1;
                            local_9c = 0x400;
                            local_9a = iVar3;
                            goto LAB_1003e952b;
                          }
                        }
                      }
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar2 != '\0') {
                        puVar5 = &local_a8;
                        local_a8 = 0x8220202;
                        uStack_a4 = 0x7a0a90;
                        uStack_a0 = 1;
                        local_9c = 0x400;
                        local_9a = iVar3;
                        goto LAB_1003e952b;
                      }
                    }
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      puVar5 = &local_a8;
                      local_a8 = 0x8220202;
                      uStack_a4 = 0x7a0a90;
                      uStack_a0 = 1;
                      local_9c = 0x400;
                      local_9a = iVar3;
                      goto LAB_1003e952b;
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    puVar5 = &local_a8;
                    local_a8 = 0x8220202;
                    uStack_a4 = 0x7a0a90;
                    uStack_a0 = 1;
                    local_9c = 0x400;
                    local_9a = iVar3;
                    goto LAB_1003e952b;
                  }
                }
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar5 = &local_a8;
                  local_a8 = 0x8220202;
                  uStack_a4 = 0x7a0a90;
                  uStack_a0 = 1;
                  local_9c = 0x400;
                  local_9a = iVar3;
                  goto LAB_1003e952b;
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                puVar5 = &local_a8;
                local_a8 = 0x8220202;
                uStack_a4 = 0x7a0a90;
                uStack_a0 = 1;
                local_9c = 0x400;
                local_9a = iVar3;
LAB_1003e952b:
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            puVar5 = &local_a8;
            local_a8 = 0x8220202;
            uStack_a4 = 0x7a0a90;
            uStack_a0 = 1;
            local_9c = 0x400;
            local_9a = iVar3;
            goto LAB_1003e952b;
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        puVar5 = &local_88;
        local_88 = 0x8220202;
        uStack_84 = 0x7a0a90;
        iStack_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar3;
        uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
        goto LAB_1003e952b;
      }
    }
  }
  FUN_10017060f(local_d8);
  FUN_10017060f(local_d0);
  FUN_10017060f(local_c8);
  FUN_10017060f(local_c0);
LAB_1003e968b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

