// name: FUN_1002c245f
// address: 1002c245f

uint FUN_1002c245f(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int local_f8;
  uint local_f4;
  char local_f0;
  char local_ef;
  undefined8 local_e0;
  undefined8 local_d0;
  byte local_c8 [4];
  uint local_c4;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined1 local_aa;
  char local_a9;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = param_2;
  local_b8 = param_4;
  local_b4 = param_3;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "criteriaList != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    uVar9 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001cf3f5();
    iVar4 = FUN_1001d0b82(param_1);
    uVar2 = local_b4;
    uVar9 = local_b8;
    iVar12 = 0;
    if (iVar4 == 0) {
LAB_1002c2c3b:
      local_b0 = 0;
    }
    else {
      pcVar7 = (char *)((ulong)CONCAT31((int3)(local_b8 >> 8),(byte)local_b8 >> 2) &
                       0xffffffffffffff01);
      local_aa = SUB81(pcVar7,0);
      local_b0 = 0;
      do {
        iVar5 = FUN_1001cf495(param_1,iVar12,&local_f8);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            if (local_ef != '\0') {
              local_a9 = '\0';
              uVar6 = local_d0;
              uVar10 = local_e0;
              if (local_f0 != '\0') {
LAB_1002c2547:
                pcVar7 = (char *)(ulong)local_b8;
                local_a9 = FUN_1002c245f(uVar10,uVar6,local_b4,pcVar7);
                goto LAB_1002c255e;
              }
              if (local_f8 == 0x28) {
                if ((local_f4 >> 0x19 & 1) == 0) {
                  if ((local_f4 & 0xffffff) != 1) {
                    uVar6 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar3 != '\0') {
                      local_a8 = 0x8220202;
                      local_a4 = "Assertion failure";
                      local_9c = 0x822;
                      local_9a = 
                      "(info.matchType & kCriterionMatchTypeMask) == kCriterionMatchTypeIsEqual";
                      pcVar7 = "%{public}s: (%{public}s)";
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_a8,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  iVar5 = FUN_1001d1f8e(&local_f8,&local_58);
                  if (iVar5 != -0x80) {
                    if (iVar5 == 0) {
                      lVar8 = FUN_10048b5ec(local_d0,CONCAT44(uStack_54,local_58));
                      if (lVar8 != 0) {
                        if ((*(byte *)(lVar8 + 0x298) & 1) == 0) {
                          FUN_1004919da(lVar8,&local_c4);
                          bVar14 = (local_b8 & local_c4) != 0;
                          pcVar7 = (char *)CONCAT71((int7)((ulong)pcVar7 >> 8),bVar14);
                          local_a9 = (local_b4 & local_c4) == 0 && bVar14;
                        }
                        else {
                          if (*(char *)(lVar8 + 0x299) == '\x01') {
                            uVar6 = *(undefined8 *)(lVar8 + 8);
                            uVar10 = *(undefined8 *)(lVar8 + 0x2a8);
                            goto LAB_1002c2547;
                          }
                          local_a9 = '\0';
                        }
                        goto LAB_1002c255e;
                      }
                    }
                    else {
                      local_c0 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(local_c0,0x10);
                      if (cVar3 != '\0') {
                        local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
                        goto LAB_1002c2a87;
                      }
                    }
                  }
                }
              }
              else if (local_f8 == 0x39) {
                iVar5 = FUN_1001d2147(&local_f8,&local_58);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    pcVar7 = &local_a9;
                    iVar5 = FUN_1001d146a(local_f4,local_aa,(undefined1)local_58,pcVar7);
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) goto LAB_1002c255e;
                      local_c0 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(local_c0,0x10);
                      if (cVar3 != '\0') {
                        local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
                        goto LAB_1002c2a87;
                      }
                    }
                  }
                  else {
                    local_c0 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(local_c0,0x10);
                    if (cVar3 != '\0') {
                      local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
LAB_1002c2a87:
                      local_9c = 0x400;
                      local_a4 = "Assertion failure";
                      local_a8 = 0x8220202;
                      pcVar7 = "%{public}s: err == (%d)";
                      __os_log_error_impl(0x100000000,local_c0,0x10,"%{public}s: err == (%d)",
                                          &local_a8,0x12);
                    }
                  }
                }
              }
              else if (((local_f8 == 0x3c) && ((local_f4 & 0x2000000) == 0)) &&
                      (iVar5 = FUN_1001d223d(&local_f8,&local_a8), iVar5 != -0x80)) {
                if (iVar5 == 0) {
                  uVar13 = local_f4 & 0xffffff;
                  if (((uVar13 != 1) && (uVar13 != 0x400)) && (uVar13 != 0x800)) {
                    uVar6 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar3 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x822;
                      local_4a = 
                      "matchType == kCriterionMatchTypeIsEqual || matchType == kCriterionMatchTypeBitTest || matchType == kCriterionMatchTypeBitMask"
                      ;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  uVar1 = uVar13;
                  if (uVar13 == 1) {
                    uVar1 = 0x400;
                  }
                  local_c0 = FUN_1001d235e(&local_a8);
                  pcVar7 = (char *)FUN_1001d23b7(&local_a8);
                  iVar5 = FUN_1001d12d8(uVar1,uVar9,local_c0,pcVar7,&local_a9);
                  if (iVar5 != -0x80) {
                    if (iVar5 == 0) {
                      if ((uVar13 == 0x400) && (local_a9 != '\0')) {
                        uVar6 = FUN_1001d235e(&local_a8);
                        pcVar7 = (char *)FUN_1001d23b7(&local_a8);
                        iVar5 = FUN_1001d12d8(0x2000400,uVar2,uVar6,pcVar7,&local_a9);
                        if (iVar5 != -0x80) {
                          if (iVar5 == 0) goto LAB_1002c255e;
                          uVar6 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar3 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                            goto LAB_1002c2b3e;
                          }
                        }
                      }
                      else {
LAB_1002c255e:
                        uVar6 = FUN_1001d019e(param_1,local_c8);
                        iVar5 = (int)uVar6;
                        if (iVar5 != -0x80) {
                          if (iVar5 == 0) {
                            if ((local_c8[0] & 1) == 0) {
                              if (local_a9 != '\0') {
                                local_b0 = (uint)CONCAT71((int7)((ulong)uVar6 >> 8),1);
                                break;
                              }
                            }
                            else {
                              pcVar7 = (char *)CONCAT71((int7)((ulong)pcVar7 >> 8),1);
                              local_b0 = (uint)pcVar7;
                              if (local_a9 == '\0') goto LAB_1002c2c3b;
                            }
                          }
                          else {
                            uVar6 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar3 != '\0') {
                              local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
                              goto LAB_1002c283b;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar6 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar3 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                        goto LAB_1002c2b3e;
                      }
                    }
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1002c2b3e:
                    local_4c = 0x400;
                    uStack_50 = 1;
                    uStack_54 = 0x7a0a90;
                    local_58 = 0x8220202;
                    puVar11 = &local_58;
                    goto LAB_1002c2842;
                  }
                }
              }
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
LAB_1002c283b:
              local_9c = 0x400;
              local_a4 = "Assertion failure";
              local_a8 = 0x8220202;
              puVar11 = &local_a8;
LAB_1002c2842:
              pcVar7 = "%{public}s: err == (%d)";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar11,0x12);
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar4 != iVar12);
    }
    FUN_1001cf778(param_1);
    uVar9 = local_b0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9 & 0xff;
}

