// name: FUN_1003ea814
// address: 1003ea814

int FUN_1003ea814(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 local_1a0;
  int local_194;
  ulong local_190;
  ulong local_188;
  undefined8 local_180;
  undefined4 local_178;
  char *local_174;
  undefined2 local_16c;
  char *local_16a;
  undefined1 local_160 [26];
  undefined1 local_146 [38];
  undefined1 local_120 [168];
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_180 = 0;
  local_190 = 0;
  iVar2 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_1a0);
  if (iVar2 == -0x80) goto LAB_1003eab62;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_178 = 0x8220202;
      local_174 = "Assertion failure";
      local_16c = 0x400;
      local_16a = (char *)CONCAT44(local_16a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_178,0x12);
    }
    goto LAB_1003eab62;
  }
  iVar2 = FUN_100160c3f(*(undefined8 *)(param_1 + 0x100000),&local_190);
  if (iVar2 == -0x80) {
LAB_1003eab3f:
    lVar3 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        puVar5 = &local_178;
        local_178 = 0x8220202;
        local_174 = "Assertion failure";
        local_16c = 0x400;
        local_16a = (char *)CONCAT44(local_16a._4_4_,iVar2);
        goto LAB_1003eac3c;
      }
      goto LAB_1003eab3f;
    }
    if (local_190 < 0x6c) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_178 = 0x8220202;
        local_174 = "Assertion failure";
        local_16c = 0x822;
        local_16a = 
        "fileSize >= ((size_t) &(((DDBFileHeader *) 0)->fpCandyV1Result[sizeof(((DDBFileHeader *) 0)->fpCandyV1Result)]))"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_178,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      iVar2 = -0x27;
    }
    else {
      FUN_1001c62d9(&local_178,0xf4);
      lVar3 = 0;
      iVar2 = FUN_100160772(*(undefined8 *)(param_1 + 0x100000),0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          local_188 = 0x6c;
          iVar2 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_188,&local_178);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              FUN_1001c62d9(local_160,8);
              FUN_1001c62d9(local_146,0x14);
              FUN_1001c62d9(local_120,0x14);
              iVar2 = FUN_1003f9677(param_1,&local_78);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  iVar2 = FUN_10009b1b0(&local_180,&local_78);
                  if (iVar2 != -0x80) {
                    if (iVar2 == 0) {
                      iVar2 = FUN_10007de00(local_180,&local_178,0x6c);
                      if (iVar2 != -0x80) {
                        if (iVar2 == 0) {
                          lVar3 = FUN_1001c63e1(0x3e800);
                          if (lVar3 == 0) {
                            uVar4 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar4,0x10);
                            if (cVar1 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x822;
                              local_4a = "readBuffer != nullptr";
                              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                                  &local_58,0x16);
                            }
                            lVar3 = 0;
                            FUN_1001782e9(0,0);
                            iVar2 = -0x6c;
                          }
                          else {
                            for (uVar6 = local_190 - 0x6c; uVar6 != 0; uVar6 = uVar6 - local_188) {
                              local_188 = 0x3e800;
                              if (uVar6 < 0x3e800) {
                                local_188 = uVar6;
                              }
                              iVar2 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_188,
                                                    lVar3);
                              if (iVar2 != 0) {
                                if (iVar2 == -0x80) goto LAB_1003eab42;
                                uVar4 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar4,0x10);
                                if (cVar1 == '\0') goto LAB_1003eab42;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                                goto LAB_1003eaf92;
                              }
                              iVar2 = FUN_10007de00(local_180,lVar3,local_188 & 0xffffffff);
                              if (iVar2 != 0) {
                                if (iVar2 == -0x80) goto LAB_1003eab42;
                                uVar4 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar4,0x10);
                                if (cVar1 == '\0') goto LAB_1003eab42;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                                goto LAB_1003eaf92;
                              }
                            }
                            if (param_2 == '\0') {
                              local_194 = 0x14;
                              iVar2 = FUN_1000a19d0(local_180,param_1 + 0x100088);
                              if (iVar2 != -0x80) {
                                if (iVar2 == 0) {
                                  iVar2 = 0;
                                  if (local_194 != 0x14) {
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 != '\0') {
                                      local_58 = 0x8220202;
                                      local_54 = "Assertion failure";
                                      local_4c = 0x822;
                                      local_4a = 
                                      "fpCandyV1ResultLength == sizeof(context->fileHeader.fpCandyV1Result)"
                                      ;
                                      __os_log_error_impl(0x100000000,uVar4,0x10,
                                                          "%{public}s: (%{public}s)",&local_58,0x16)
                                      ;
                                    }
                                    FUN_1001782e9(0,0);
                                    iVar2 = -0x32;
                                  }
                                }
                                else {
                                  uVar4 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                                  if (cVar1 != '\0') {
                                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                                    goto LAB_1003eaf92;
                                  }
                                }
                              }
                            }
                            else {
                              iVar2 = FUN_1000c2d60(local_180,param_1 + 0x100088,0x14);
                              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                                uVar4 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar4,0x10);
                                if (cVar1 != '\0') {
                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1003eaf92:
                                  local_4c = 0x400;
                                  local_54 = "Assertion failure";
                                  local_58 = 0x8220202;
                                  __os_log_error_impl(0x100000000,uVar4,0x10,
                                                      "%{public}s: err == (%d)",&local_58,0x12);
                                }
                              }
                            }
                          }
                          goto LAB_1003eab42;
                        }
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          puVar5 = &local_58;
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                          goto LAB_1003eac3c;
                        }
                      }
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        puVar5 = &local_58;
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                        goto LAB_1003eac3c;
                      }
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    puVar5 = &local_58;
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    goto LAB_1003eac3c;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar5 = &local_78;
                local_78 = 0x8220202;
                local_74 = "Assertion failure";
                local_6c = 0x400;
                local_6a = iVar2;
                goto LAB_1003eac3c;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            puVar5 = &local_78;
            local_78 = 0x8220202;
            local_74 = "Assertion failure";
            local_6c = 0x400;
            local_6a = iVar2;
LAB_1003eac3c:
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
          }
        }
        goto LAB_1003eab3f;
      }
    }
  }
LAB_1003eab42:
  FUN_100160772(*(undefined8 *)(param_1 + 0x100000),local_1a0);
  if (lVar3 != 0) {
    FUN_1001c64c1(lVar3);
  }
LAB_1003eab62:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

