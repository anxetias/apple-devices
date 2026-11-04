// name: FUN_1003ffbab
// address: 1003ffbab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003ffbab(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  uint local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_a8,0x20);
  iVar6 = FUN_1003f16c4(param_1,local_88,0x10);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_88 = pshufb(local_88,_DAT_100718a70);
      }
      if (local_88._0_4_ == 0x736f686d) {
        if (local_88._12_4_ == 0) {
          iVar6 = 0;
        }
        else {
          uVar11 = 0;
          do {
            iVar6 = FUN_1004002e0(param_1,&local_78);
            if (iVar6 == 0) {
              uVar10 = local_74._4_4_ - (int)local_74;
              lVar8 = param_1;
              if ((uVar10 < 0x100001) || (lVar8 = FUN_1001c63e1(uVar10), lVar8 != 0)) {
                local_58[1] = 0;
                local_58[0] = uVar10;
                iVar6 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),local_58,lVar8);
                if (iVar6 != -0x80) {
                  if (iVar6 == 0) {
                    lVar9 = FUN_10016a7b8(0,lVar8,uVar10,1,0);
                    if (lVar9 == 0) {
                      uVar7 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar5 != '\0') {
                        local_58[0] = 0x8220202;
                        local_58[1] = 0x7a0a90;
                        local_58[2] = 1;
                        local_4c = 0x822;
                        local_4a = "syncOperations != nullptr";
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            local_58,0x16);
                      }
                      iVar6 = 0;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      lVar1 = local_a8;
                      lVar2 = local_a0;
                      lVar3 = local_98;
                      lVar4 = local_90;
                      switch(CONCAT22(uStack_6a,local_6c)) {
                      case 1:
                        lVar1 = lVar9;
                        if (local_a8 != 0) {
                          uVar7 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar5 != '\0') {
                            local_58[0] = 0x8220202;
                            local_58[1] = 0x7a0a90;
                            local_58[2] = 1;
                            local_4c = 0x822;
                            local_4a = "params->u.syncOperations.mediaSyncOperations == nullptr";
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          lVar2 = local_a0;
                          lVar3 = local_98;
                          lVar4 = local_90;
                        }
                        break;
                      case 2:
                        lVar2 = lVar9;
                        if (local_a0 != 0) {
                          uVar7 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar5 != '\0') {
                            local_58[0] = 0x8220202;
                            local_58[1] = 0x7a0a90;
                            local_58[2] = 1;
                            local_4c = 0x822;
                            local_4a = "params->u.syncOperations.ringtoneSyncOperations == nullptr";
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          lVar1 = local_a8;
                          lVar3 = local_98;
                          lVar4 = local_90;
                        }
                        break;
                      case 3:
                        lVar3 = lVar9;
                        if (local_98 != 0) {
                          uVar7 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar5 != '\0') {
                            local_58[0] = 0x8220202;
                            local_58[1] = 0x7a0a90;
                            local_58[2] = 1;
                            local_4c = 0x822;
                            local_4a = "params->u.syncOperations.voiceMemoSyncOperations == nullptr"
                            ;
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          lVar1 = local_a8;
                          lVar2 = local_a0;
                          lVar4 = local_90;
                        }
                        break;
                      case 4:
                        lVar4 = lVar9;
                        if (local_90 != 0) {
                          uVar7 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar5 != '\0') {
                            local_58[0] = 0x8220202;
                            local_58[1] = 0x7a0a90;
                            local_58[2] = 1;
                            local_4c = 0x822;
                            local_4a = "params->u.syncOperations.bookSyncOperations == nullptr";
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          lVar1 = local_a8;
                          lVar2 = local_a0;
                          lVar3 = local_98;
                        }
                        break;
                      default:
                        FUN_10017060f(lVar9);
                        lVar1 = local_a8;
                        lVar2 = local_a0;
                        lVar3 = local_98;
                        lVar4 = local_90;
                      }
                      local_90 = lVar4;
                      local_98 = lVar3;
                      local_a0 = lVar2;
                      local_a8 = lVar1;
                      iVar6 = 0;
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar5 != '\0') {
                      local_58[0] = 0x8220202;
                      local_58[1] = 0x7a0a90;
                      local_58[2] = 1;
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_58,
                                          0x12);
                    }
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar7,0x10);
                if (cVar5 != '\0') {
                  local_58[0] = 0x8220202;
                  local_58[1] = 0x7a0a90;
                  local_58[2] = 1;
                  local_4c = 0x822;
                  local_4a = "dataBuffer != nullptr";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar6 = -0x6c;
                lVar8 = 0;
              }
              if (lVar8 != param_1) {
                FUN_1001c64c1(lVar8);
              }
            }
            else {
              if (iVar6 == -0x80) {
                iVar6 = -0x80;
                goto LAB_10040022a;
              }
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              if (cVar5 != '\0') {
                local_58[0] = 0x8220202;
                local_58[1] = 0x7a0a90;
                local_58[2] = 1;
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_58,0x12);
              }
            }
            if (iVar6 != 0) {
              if (iVar6 == -0x80) goto LAB_10040022a;
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              if (cVar5 == '\0') goto LAB_10040022a;
              uStack_6a = (undefined2)iVar6;
              uStack_68 = (undefined2)((uint)iVar6 >> 0x10);
              goto LAB_100400157;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)local_88._12_4_);
          iVar6 = 0;
          if (local_88._12_4_ != 0) {
            (**(code **)(param_1 + 0x100020))
                      (*(undefined8 *)(param_1 + 0x100008),0x73736f70,&local_a8,
                       *(undefined8 *)(param_1 + 0x100028));
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x822;
          uStack_6a = 0xbe8e;
          uStack_68 = 0x7c;
          uStack_66 = 1;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
        iVar6 = -0xd0;
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        uStack_6a = (undefined2)iVar6;
        uStack_68 = (undefined2)((uint)iVar6 >> 0x10);
LAB_100400157:
        local_6c = 0x400;
        local_74 = "Assertion failure";
        local_78 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
  }
LAB_10040022a:
  FUN_10017060f(local_a8);
  FUN_10017060f(local_a0);
  FUN_10017060f(local_98);
  FUN_10017060f(local_90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

