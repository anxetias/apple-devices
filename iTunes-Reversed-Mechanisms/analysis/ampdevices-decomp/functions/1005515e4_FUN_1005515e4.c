// name: FUN_1005515e4
// address: 1005515e4

int FUN_1005515e4(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined4 local_178;
  undefined4 local_174;
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
  local_170 = 0;
  if ((param_4 == (byte *)0x0) || (*param_4 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_148 = 0x8220202;
      local_144 = "Assertion failure";
      local_13c = 0x822;
      local_13a = "ownerID != nullptr && ownerID[0] != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_100551aa6;
  }
  iVar3 = FUN_10054d4e4();
  local_180 = param_1;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_1005d872c(param_1 + 0x710,0,0,&local_170);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        local_188 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(local_188,0x10);
        if (cVar2 != '\0') {
          local_148 = 0x8220202;
          local_144 = "Assertion failure";
          local_13c = 0x400;
          local_13a = (char *)CONCAT44(local_13a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,local_188,0x10,"%{public}s: err == (%d)",&local_148,0x12);
        }
      }
      if (local_170 != 0) {
        iVar3 = FUN_10015cd83(param_1 + 0x710,&local_178);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            local_148 = 0x44494655;
            FUN_1001c631b(param_4 + 1,&local_144,*param_4);
            bVar1 = *param_4;
            iVar3 = FUN_1001c8e4e(local_170,&local_174);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                iVar3 = FUN_1001c97e8(local_170,0x2d2d2d2d,"com.apple.iTunes",0x10,&local_148,
                                      bVar1 + 4,&local_190);
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
                    if (local_190 == 0) {
                      iVar3 = 0;
                    }
                    else {
                      iVar3 = FUN_1001caeb4(local_190,1);
                      if (iVar3 != -0x80) {
                        if (iVar3 == 0) {
                          iVar3 = FUN_1001cbf54(local_170,local_174,1);
                          if (iVar3 != -0x80) {
                            if (iVar3 == 0) {
                              iVar3 = FUN_10054db1c(local_180,local_178,param_5,param_6);
                            }
                            else {
                              uVar4 = FUN_1001cc310(local_180);
                              cVar2 = _os_log_type_enabled(uVar4,0x10);
                              if (cVar2 != '\0') {
                                puVar5 = &local_168;
                                local_168 = 0x8220202;
                                local_164 = "Assertion failure";
                                local_15c = 0x400;
                                local_15a = iVar3;
                                goto LAB_1005519b3;
                              }
                            }
                          }
                        }
                        else {
                          uVar4 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar4,0x10);
                          if (cVar2 != '\0') {
                            puVar5 = &local_168;
                            local_168 = 0x8220202;
                            local_164 = "Assertion failure";
                            local_15c = 0x400;
                            local_15a = iVar3;
                            goto LAB_1005519b3;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      puVar5 = &local_168;
                      local_168 = 0x8220202;
                      local_164 = "Assertion failure";
                      local_15c = 0x400;
                      local_15a = iVar3;
                      goto LAB_1005519b3;
                    }
                  }
                }
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar5 = &local_168;
                  local_168 = 0x8220202;
                  local_164 = "Assertion failure";
                  local_15c = 0x400;
                  local_15a = iVar3;
                  goto LAB_1005519b3;
                }
              }
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              puVar5 = &local_148;
              local_148 = 0x8220202;
              local_144 = "Assertion failure";
              local_13c = 0x400;
              local_13a = (char *)CONCAT44(local_13a._4_4_,iVar3);
LAB_1005519b3:
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
            }
          }
        }
        if (local_170 != 0) {
          FUN_1001c8d4b(local_170,0);
        }
      }
    }
    else {
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
  }
  FUN_10054d72e(local_180);
LAB_100551aa6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

