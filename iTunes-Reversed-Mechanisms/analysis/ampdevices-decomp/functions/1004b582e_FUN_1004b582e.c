// name: FUN_1004b582e
// address: 1004b582e

int FUN_1004b582e(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 local_1b38 [5];
  undefined1 local_1b33;
  undefined1 local_1b31;
  undefined2 local_1b2c;
  undefined1 local_1b29;
  code *local_1b08;
  long local_1b00;
  undefined4 local_1ae8;
  char *local_1ae4;
  undefined2 local_1adc;
  int local_1ada;
  undefined1 local_16c8 [1056];
  undefined1 local_12a8 [1056];
  uint local_e88;
  char *local_e84;
  undefined2 local_e7c;
  int local_e7a;
  undefined1 local_e68 [512];
  uint local_c68;
  char *local_c64;
  undefined2 local_c5c;
  char *local_c5a;
  uint local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined2 local_83c;
  char *local_83a;
  undefined8 local_428 [64];
  undefined1 local_228 [504];
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x1004b5842;
  lVar7 = FUN_100108310();
  lVar7 = -lVar7;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b585c;
  cVar5 = FUN_1004aa626();
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
    if (*(int *)(param_1 + 0x1304) != 0x636f7079) {
      iVar6 = -0x32;
      if (*(int *)(param_1 + 0x1304) != 0x68747470) goto LAB_1004b5895;
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b58e4;
      iVar6 = FUN_100199809(param_1 + 0x1338);
      if (iVar6 == -0x80) goto LAB_1004b5895;
      if (iVar6 == 0) {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b58fd;
        cVar5 = FUN_1004b3506(param_1);
        iVar6 = 0;
        if (cVar5 == '\0') {
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5918;
          FUN_1001c62d9(&local_848,0x18);
          local_848 = (uint)param_1;
          uStack_844 = (undefined4)((ulong)param_1 >> 0x20);
          uVar8 = *(undefined8 *)(param_1 + 0x1338);
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5931;
          FUN_100199970(uVar8,FUN_1004b64f5,&local_848);
          if ((*(int *)(param_1 + 0x140) == 0x6d656d72) ||
             ((uVar10 = 0x100, *(int *)(param_1 + 0x140) == 0x66696c65 &&
              ((*(byte *)(param_1 + 0x7d8) & 0x20) != 0)))) {
            uVar10 = 0x104;
          }
          uVar1 = *(uint *)(param_1 + 0x144);
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5966;
          uVar8 = FUN_1001ebd46();
          *(undefined8 *)(param_1 + 0x680) = uVar8;
          *(undefined2 *)(param_1 + 0x690) = 1;
          lVar2 = *(long *)(param_1 + 0x1308);
          if (lVar2 == 0) {
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c4b;
            uVar8 = FUN_1001cc310();
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c5b;
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_c68 = 0x8220202;
              local_c64 = "Assertion failure";
              local_c5c = 0x822;
              local_c5a = "httpTransport->urlList != __null";
              *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b606a;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c68,0x16)
              ;
            }
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c6c;
            FUN_1001782e9(0,0);
            iVar6 = 0x1f4a;
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x1330);
            uVar3 = *(undefined8 *)(param_1 + 0x1338);
            uVar4 = *(undefined8 *)(param_1 + 7000);
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b59d6;
            iVar6 = FUN_10019a0d4(uVar3,param_1 + 0x1d0,
                                  uVar1 >> 0x10 & 0x400 |
                                  uVar1 >> 0xe & 0x200 | (uVar1 & 4) << 5 | uVar10,lVar2,uVar4,uVar8
                                 );
          }
        }
        goto LAB_1004b5895;
      }
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5b93;
      uVar8 = FUN_1001cc310();
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ba3;
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 == '\0') goto LAB_1004b5895;
      local_83a = (char *)CONCAT44(local_83a._4_4_,iVar6);
LAB_1004b5bdd:
      uStack_840 = 1;
      uStack_844 = 0x7a0a90;
      local_83c = 0x400;
      local_848 = 0x8220202;
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5bf0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_848,0x12);
      goto LAB_1004b5895;
    }
    *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b59e6;
    cVar5 = FUN_1004aa626(param_1);
    if ((cVar5 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5a16;
      _memcpy(local_12a8,(void *)(param_1 + 0x1308),0x420);
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5a2a;
      iVar6 = FUN_1004b013c(param_1,1,local_16c8);
      if (iVar6 == -0x80) goto LAB_1004b5895;
      if (iVar6 != 0) {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5bfa;
        uVar8 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c0a;
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 == '\0') goto LAB_1004b5895;
        local_83a = (char *)CONCAT44(local_83a._4_4_,iVar6);
        goto LAB_1004b5bdd;
      }
      if ((*(byte *)(param_1 + 0x7d8) & 0x40) != 0) {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5a60;
        _memcpy(&local_848,(void *)(param_1 + 0x1308),0x420);
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5a74;
        iVar6 = FUN_1004b013c(param_1,1,&local_c68);
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5a9b;
            iVar6 = FUN_10017d489(&local_848,local_228);
            if (iVar6 != -0x80) {
              if (iVar6 != 0) {
                *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ccc;
                uVar8 = FUN_1001cc310();
                *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5cdc;
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                goto joined_r0x0001004b5c8e;
              }
              *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ac2;
              cVar5 = FUN_10017ec13(&local_848,&local_c68);
              if (cVar5 != '\0') {
                *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ae7;
                iVar6 = FUN_10017cc65(&local_848,0x64617461,2,local_428);
                if (iVar6 == 0) {
                  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5afb;
                  FUN_10017cdfb(local_428[0]);
                  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5b21;
                  iVar6 = FUN_10017fc85(&local_848,&local_c68,local_228,1,&local_1ae8);
                  if (iVar6 == 0) {
                    *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5b38;
                    FUN_1004a9316(param_1,&local_1ae8);
                    goto LAB_1004b5ce9;
                  }
                }
              }
            }
          }
          else {
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c7c;
            uVar8 = FUN_1001cc310();
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5c8c;
            cVar5 = _os_log_type_enabled(uVar8,0x10);
joined_r0x0001004b5c8e:
            if (cVar5 != '\0') {
              local_1adc = 0x400;
              local_1ae4 = "Assertion failure";
              local_1ae8 = 0x8220202;
              *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b6159;
              local_1ada = iVar6;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_1ae8,0x12)
              ;
            }
            if (iVar6 == 0) {
LAB_1004b5ce9:
              *(undefined1 *)(param_1 + 0x178) = 1;
              *(byte *)(param_1 + 0x1b50) = *(byte *)(param_1 + 0x1b50) | 1;
              *(undefined8 *)(param_1 + 0x1b78) = *(undefined8 *)(param_1 + 0x1b60);
            }
          }
        }
      }
      if (*(char *)(param_1 + 0x178) == '\0') {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d9a;
        FUN_1001c62d9(local_1b38,0x50);
        local_1b29 = 0;
        local_1b08 = FUN_1004baff2;
        local_1b2c = 0x101;
        local_1b33 = 1;
        local_1b31 = 1;
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5de1;
        local_1b00 = param_1;
        iVar6 = FUN_100182f89(1,local_12a8,local_16c8,&local_1ae8,local_1b38);
        if ((((*(char *)(param_1 + 0x178) == '\0') &&
             (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) &&
            (*(char *)(param_1 + 0x778) == '\0')) &&
           (((*(int *)(param_1 + 0x140) != 0x66696c65 || (*(int *)(param_1 + 0x1304) == 0x636f7079))
            || (-1 < *(int *)(param_1 + 0x7d8))))) {
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5fab;
          FUN_1004adcd2(lVar2,local_16c8);
          *(undefined1 *)(param_1 + 0x640) = 0;
        }
        if (iVar6 == -0x80) goto LAB_1004b5895;
        if (iVar6 != 0) {
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5e09;
          uVar8 = FUN_1001cc310();
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5e19;
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 == '\0') goto LAB_1004b5895;
          local_83a = (char *)CONCAT44(local_83a._4_4_,iVar6);
          goto LAB_1004b5bdd;
        }
      }
      local_848 = 0;
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d2e;
      FUN_10018906f(&local_1ae8,&local_848);
      local_848 = local_848 | 4;
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d3f;
      FUN_100189139(&local_1ae8);
      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d47;
      cVar5 = FUN_1004aa626(param_1);
      if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d5d;
        uVar8 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d6d;
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_848 = 0x8220202;
          uStack_844 = 0x7a0a90;
          uStack_840 = 1;
          local_83c = 0x822;
          local_83a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b60bb;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_848,0x16);
        }
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5d7e;
        FUN_1001782e9(0,0);
      }
      else if (*(short *)(param_1 + 0xe08) != 0) {
        *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5e79;
        iVar6 = FUN_10017d489(&local_1ae8,local_228);
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5eb1;
            FUN_1001e40a7(local_228,local_e68,local_428);
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ebe;
            cVar5 = FUN_1001e3edc(param_1 + 0xe08,local_428,0);
            if (cVar5 == '\0') {
              *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5ed9;
              iVar6 = FUN_10017d5ba(&local_1ae8,&local_848);
              if (iVar6 != -0x80) {
                if (iVar6 == 0) {
                  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5f0a;
                  iVar6 = FUN_10053600d(&local_848,local_e68,param_1 + 0xe08,local_228);
                  if (iVar6 != -0x80) {
                    if (iVar6 == 0) {
                      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5f38;
                      iVar6 = FUN_1001894bc(&local_1ae8,local_228,&local_c68);
                      if (iVar6 != -0x80) {
                        if (iVar6 == 0) {
                          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5f5b;
                          FUN_1004a9316(param_1,&local_c68);
                        }
                        else {
                          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b61b7;
                          uVar8 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b61c7;
                          cVar5 = _os_log_type_enabled(uVar8,0x10);
                          if (cVar5 != '\0') {
                            puVar9 = &local_e88;
                            local_e88 = 0x8220202;
                            local_e84 = "Assertion failure";
                            local_e7c = 0x400;
                            local_e7a = iVar6;
                            goto LAB_1004b6006;
                          }
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b6163;
                      uVar8 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b6173;
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        puVar9 = &local_c68;
                        local_c68 = 0x8220202;
                        local_c64 = "Assertion failure";
                        local_c5c = 0x400;
                        local_c5a = (char *)CONCAT44(local_c5a._4_4_,iVar6);
                        goto LAB_1004b6006;
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b60c5;
                  uVar8 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b60d5;
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    puVar9 = &local_c68;
                    local_c68 = 0x8220202;
                    local_c64 = "Assertion failure";
                    local_c5c = 0x400;
                    local_c5a = (char *)CONCAT44(local_c5a._4_4_,iVar6);
LAB_1004b6006:
                    *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b6019;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",puVar9,0x12
                                       );
                  }
                }
              }
            }
          }
          else {
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5fbc;
            uVar8 = FUN_1001cc310();
            *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5fcc;
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              puVar9 = &local_848;
              local_848 = 0x8220202;
              uStack_844 = 0x7a0a90;
              uStack_840 = 1;
              local_83c = 0x400;
              local_83a = (char *)CONCAT44(local_83a._4_4_,iVar6);
              goto LAB_1004b6006;
            }
          }
        }
      }
      iVar6 = 0;
      goto LAB_1004b5895;
    }
  }
  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b586e;
  uVar8 = FUN_1001cc310();
  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b587e;
  cVar5 = _os_log_type_enabled(uVar8,0x10);
  if (cVar5 != '\0') {
    local_848 = 0x8220202;
    uStack_844 = 0x7a0a90;
    uStack_840 = 1;
    local_83c = 0x822;
    local_83a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
    *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b5b89;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_848,0x16);
  }
  *(undefined8 *)((long)&local_28 + lVar7) = 0x1004b588f;
  FUN_1001782e9(0,0);
  iVar6 = 0x1faa;
LAB_1004b5895:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_28 + lVar7) = FUN_1004b620b;
  ___stack_chk_fail();
}

