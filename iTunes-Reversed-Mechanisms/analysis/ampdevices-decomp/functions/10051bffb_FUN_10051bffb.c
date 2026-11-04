// name: FUN_10051bffb
// address: 10051bffb

/* WARNING: Removing unreachable block (ram,0x00010051c1a7) */
/* WARNING: Removing unreachable block (ram,0x00010051c1b9) */

void FUN_10051bffb(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_1b48;
  undefined8 uStack_1b40;
  undefined4 local_1b38 [2];
  undefined1 local_1b30 [8];
  undefined8 local_1b28;
  undefined8 local_1b20;
  undefined4 local_1b18 [129];
  undefined4 local_1914;
  undefined4 local_1910;
  undefined1 local_1900 [1056];
  undefined1 local_14e0 [52];
  undefined4 local_14ac;
  undefined8 local_14a0;
  undefined1 local_1498 [1056];
  undefined1 local_1078 [1056];
  undefined1 local_c58 [3069];
  undefined1 local_5b;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10051c013;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c02d;
  lVar6 = FUN_1004de449();
  local_1b28 = 0;
  local_1b20 = 0;
  local_14a0 = 0;
  local_1b38[0] = 0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c062;
  FUN_1001c62d9(local_1b30,8);
  if (lVar6 == 0) {
LAB_10051c3d3:
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c3d8;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c3e8;
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_10051c453:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c478;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(lVar6 + 8) != 0x64756c63) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c07a;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c08a;
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c530;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c09e;
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10051c3d3;
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x66d8);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c0b2;
    cVar3 = FUN_100266bdc(uVar7);
    if (cVar3 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c0c9;
      cVar3 = FUN_10051de77(lVar6,"software-update-automation-device-id");
      if (cVar3 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c0e4;
        cVar3 = FUN_1001cd899("software-update-automation-bundle-path",&local_1b20);
        if (cVar3 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c109;
          cVar3 = _CFStringGetCString(local_1b20,local_c58,0xbfe,0x8000100);
          if (cVar3 != '\0') {
            local_5b = 0;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c12d;
            iVar4 = FUN_10018dd66(local_c58,local_1078,0);
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c153;
                FUN_1001c62d9(local_1b18,0x680);
                uVar7 = *(undefined8 *)(lVar6 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c15f;
                cVar3 = FUN_1002669ba(uVar7);
                uVar1 = *(undefined4 *)(lVar6 + 0x66b0);
                *(undefined1 **)(&stack0xffffffffffffffd0 + lVar5) = local_1498;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c198;
                iVar4 = FUN_1002253a4(cVar3 != '\0',uVar1,local_1078,0,0);
                if (iVar4 != -0x80) {
                  if (iVar4 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c1df;
                    uVar7 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c1ef;
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c5eb;
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                    if (iVar4 != 0) goto LAB_10051c563;
                  }
                  local_1b18[0] = 2;
                  local_1914 = *(undefined4 *)(lVar6 + 0x284);
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c238;
                  local_1910 = param_1;
                  _memcpy(local_1900,local_1498,0x420);
                  local_14ac = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c257;
                  iVar4 = FUN_100220e39(local_1078,local_1b38);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
LAB_10051c28a:
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c2a2;
                      iVar4 = FUN_10024a018(local_1b38,local_14e0,0x20);
                      if ((iVar4 != -0x80) && (iVar4 != 0)) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c53a;
                        uVar7 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c54a;
                        cVar3 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar3 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c679;
                          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                        }
                        goto LAB_10051c552;
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c26d;
                      uVar7 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c27d;
                      cVar3 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar3 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c632;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                      if (iVar4 == 0) goto LAB_10051c28a;
                    }
                    if (iVar4 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c2c1;
                      plVar8 = (long *)FUN_10039a28c();
                      pcVar2 = *(code **)(*plVar8 + 0x48);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c2d8;
                      iVar4 = (*pcVar2)(plVar8,local_1b18,&local_1b28);
                      if (iVar4 != -0x80) {
                        if (iVar4 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c2ee;
                          uVar7 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c2fe;
                          cVar3 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar3 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x400;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c6c0;
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                                &local_58,0x12);
                          }
                          if (iVar4 != 0) goto LAB_10051c552;
                        }
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c314;
                        plVar8 = (long *)FUN_10039a28c();
                        pcVar2 = *(code **)(*plVar8 + 8);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c324;
                        iVar4 = (*pcVar2)(plVar8,local_1b28);
                        if (iVar4 != -0x80) {
                          if (iVar4 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c33a;
                            uVar7 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c34a;
                            cVar3 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar3 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x400;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c707;
                              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                                  &local_58,0x12);
                            }
                            if (iVar4 != 0) goto LAB_10051c552;
                          }
                          *(undefined1 *)(DAT_1008c76a0 + 0x1a58) = 2;
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c36e;
                          plVar8 = (long *)FUN_10039a28c();
                          local_1b48 = 0;
                          uStack_1b40 = 0;
                          pcVar2 = *(code **)(*plVar8 + 0x20);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c386;
                          iVar4 = (*pcVar2)(plVar8,&local_1b48,0);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c395;
                          FUN_100205d70(&local_1b48);
                          if (iVar4 != -0x80) {
                            if (iVar4 != 0) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c3ad;
                              uVar7 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c3bd;
                              cVar3 = _os_log_type_enabled(uVar7,0x10);
                              if (cVar3 != '\0') {
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x400;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c74e;
                                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)"
                                                    ,&local_58,0x12);
                              }
                              if (iVar4 != 0) goto LAB_10051c552;
                            }
                            goto LAB_10051c563;
                          }
                        }
                      }
                    }
                  }
LAB_10051c552:
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c563;
                  FUN_100182d59(local_1498,1);
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c48b;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c49b;
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c4e5;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
          }
        }
      }
LAB_10051c563:
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c56f;
      FUN_10017060f(local_1b20);
      goto LAB_10051c56f;
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c41b;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c42b;
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "ITIPodIsAppleIOSDevice(handlerData->podRef)";
      goto LAB_10051c453;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c481;
  FUN_1001782e9(0,0);
LAB_10051c56f:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c57b;
  FUN_100249fca(local_1b38);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10051c583;
  FUN_10026340c(&local_14a0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_10051c758;
  ___stack_chk_fail();
}

