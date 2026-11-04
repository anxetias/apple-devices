// name: FUN_100550e60
// address: 100550e60

int FUN_100550e60(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long param_5,
                 int param_6,uint param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 local_190;
  undefined4 local_18c;
  long local_188;
  long local_180;
  char local_171;
  long local_170;
  undefined4 local_168;
  char *local_164;
  undefined2 local_15c;
  int local_15a;
  undefined4 local_148;
  char *local_144;
  undefined2 local_13c;
  char *local_13a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_180 = 0;
  if ((param_4 == (byte *)0x0) || (*param_4 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_13a = "ownerID != nullptr && ownerID[0] != 0";
LAB_10055118a:
      local_13c = 0x822;
      local_144 = "Assertion failure";
      local_148 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
    }
  }
  else if (param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_13a = "buffer != nullptr";
      goto LAB_10055118a;
    }
  }
  else {
    if (param_6 != 0) {
      iVar3 = FUN_10054d4e4();
      if (iVar3 == -0x80) {
LAB_1005511d8:
        if (local_180 != 0) {
          FUN_1001c8d4b(local_180,0);
        }
      }
      else {
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_148 = 0x8220202;
            local_144 = "Assertion failure";
            local_13c = 0x400;
            local_13a = (char *)CONCAT44(local_13a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_148,0x12);
          }
          goto LAB_1005511d8;
        }
        lVar5 = param_1 + 0x710;
        local_170 = param_1;
        iVar3 = FUN_10015cd83(lVar5,&local_190);
        param_1 = local_170;
        if (iVar3 == -0x80) goto LAB_1005511d8;
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          param_1 = local_170;
          if (cVar2 != '\0') {
            puVar6 = &local_148;
            local_148 = 0x8220202;
            local_144 = "Assertion failure";
            local_13c = 0x400;
            local_13a = (char *)CONCAT44(local_13a._4_4_,iVar3);
            goto LAB_100551315;
          }
          goto LAB_1005511d8;
        }
        iVar3 = FUN_1005d872c(lVar5,param_7 & 1,&local_171,&local_180);
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_148 = 0x8220202;
            local_144 = "Assertion failure";
            local_13c = 0x400;
            local_13a = (char *)CONCAT44(local_13a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_148,0x12);
          }
        }
        param_1 = local_170;
        if (local_180 != 0) {
          local_148 = 0x44494655;
          FUN_1001c631b(param_4 + 1,&local_144,*param_4);
          bVar1 = *param_4;
          iVar3 = FUN_1001c8e4e(local_180,&local_18c);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              iVar3 = FUN_1001c97e8(local_180,0x2d2d2d2d,"com.apple.iTunes",0x10,&local_148,
                                    bVar1 + 4,&local_188);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  if (local_188 == 0) {
                    iVar3 = FUN_1001c9b1d(local_180,&local_188);
                    if (iVar3 != -0x80) {
                      if (iVar3 == 0) {
                        iVar3 = FUN_1001c9f0c(local_188,0x2d2d2d2d,"com.apple.iTunes",0x10);
                        if (iVar3 != -0x80) {
                          if (iVar3 == 0) {
                            iVar3 = FUN_1001ca240(local_188,&local_148,bVar1 + 4);
                            param_1 = local_170;
                            if (iVar3 != -0x80) {
                              if (iVar3 == 0) goto LAB_10055100a;
                              uVar4 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar4,0x10);
                              param_1 = local_170;
                              if (cVar2 != '\0') {
                                puVar6 = &local_168;
                                local_168 = 0x8220202;
                                local_164 = "Assertion failure";
                                local_15c = 0x400;
                                local_15a = iVar3;
                                goto LAB_100551315;
                              }
                            }
                          }
                          else {
                            uVar4 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar4,0x10);
                            param_1 = local_170;
                            if (cVar2 != '\0') {
                              puVar6 = &local_168;
                              local_168 = 0x8220202;
                              local_164 = "Assertion failure";
                              local_15c = 0x400;
                              local_15a = iVar3;
                              goto LAB_100551315;
                            }
                          }
                        }
                      }
                      else {
                        uVar4 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar4,0x10);
                        param_1 = local_170;
                        if (cVar2 != '\0') {
                          puVar6 = &local_168;
                          local_168 = 0x8220202;
                          local_164 = "Assertion failure";
                          local_15c = 0x400;
                          local_15a = iVar3;
                          goto LAB_100551315;
                        }
                      }
                    }
                  }
                  else {
LAB_10055100a:
                    iVar3 = FUN_1001cacbc(local_188,1,1,param_5,param_6);
                    if (iVar3 != -0x80) {
                      if (iVar3 == 0) {
                        if (local_171 == '\0') {
                          iVar3 = FUN_1001cbf54(local_180,local_18c,1);
                          if (iVar3 != -0x80) {
                            if (iVar3 == 0) goto LAB_100551041;
                            uVar4 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar4,0x10);
                            param_1 = local_170;
                            if (cVar2 != '\0') {
                              puVar6 = &local_168;
                              local_168 = 0x8220202;
                              local_164 = "Assertion failure";
                              local_15c = 0x400;
                              local_15a = iVar3;
                              goto LAB_100551315;
                            }
                          }
                        }
                        else {
LAB_100551041:
                          iVar3 = FUN_10054db1c(param_1,local_190,param_7,param_8);
                        }
                      }
                      else {
                        uVar4 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar4,0x10);
                        param_1 = local_170;
                        if (cVar2 != '\0') {
                          puVar6 = &local_168;
                          local_168 = 0x8220202;
                          local_164 = "Assertion failure";
                          local_15c = 0x400;
                          local_15a = iVar3;
                          goto LAB_100551315;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  param_1 = local_170;
                  if (cVar2 != '\0') {
                    puVar6 = &local_168;
                    local_168 = 0x8220202;
                    local_164 = "Assertion failure";
                    local_15c = 0x400;
                    local_15a = iVar3;
                    goto LAB_100551315;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              param_1 = local_170;
              if (cVar2 != '\0') {
                puVar6 = &local_168;
                local_168 = 0x8220202;
                local_164 = "Assertion failure";
                local_15c = 0x400;
                local_15a = iVar3;
LAB_100551315:
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar6,0x12);
                param_1 = local_170;
              }
            }
          }
          goto LAB_1005511d8;
        }
      }
      FUN_10054d72e(param_1);
      goto LAB_10055108a;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_13a = "bufferSize != 0";
      goto LAB_10055118a;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10055108a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

