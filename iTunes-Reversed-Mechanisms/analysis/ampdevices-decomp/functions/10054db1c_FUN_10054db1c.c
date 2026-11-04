// name: FUN_10054db1c
// address: 10054db1c

int FUN_10054db1c(long param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 local_e8;
  long local_e0;
  int local_d8;
  undefined8 local_d0;
  byte local_c8;
  byte local_c7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_74;
  int local_70;
  int local_6c;
  long local_68;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_5c = param_3;
  FUN_1001c62d9(&local_108,0x78);
  if (*(long *)(param_1 + 0x1020) == -1) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mMoovOffset != (UInt64)-1";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_10054e176;
  }
  if (*(long *)(param_1 + 0x720) == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_4a = "mMoovCache.headerAtom != nullptr";
LAB_10054dcb7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10054dcdc:
    FUN_1001782e9(0,0);
    if ((local_5c & 0x10) != 0) goto LAB_10054dd83;
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    iVar6 = -0x32;
    if (cVar5 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
      goto LAB_10054e056;
    }
  }
  else {
    if (*(long *)(param_1 + 0x750) == 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_4a = "mTrackCache.headerAtom != nullptr";
        goto LAB_10054dcb7;
      }
      goto LAB_10054dcdc;
    }
    if (*(long *)(param_1 + 0x778) == 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_4a = "mTrackCache.mediaCache.headerAtom != nullptr";
        goto LAB_10054dcb7;
      }
      goto LAB_10054dcdc;
    }
    FUN_100177cff(&local_74);
    lVar4 = *(long *)(param_1 + 0x720);
    uVar7 = (ulong)(int)local_74;
    uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    if (*(char *)(lVar4 + 8) == '\x01') {
      *(ulong *)(lVar4 + 0x14) = uVar7;
    }
    else {
      *(uint *)(lVar4 + 0x10) =
           local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
           local_74 << 0x18;
    }
    lVar4 = *(long *)(param_1 + 0x750);
    if (*(char *)(lVar4 + 8) == '\x01') {
      *(ulong *)(lVar4 + 0x14) = uVar7;
    }
    else {
      *(uint *)(lVar4 + 0x10) =
           local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
           local_74 << 0x18;
    }
    lVar4 = *(long *)(param_1 + 0x778);
    if (*(char *)(lVar4 + 8) == '\x01') {
      *(ulong *)(lVar4 + 0x14) = uVar7;
    }
    else {
      *(uint *)(lVar4 + 0x10) =
           local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
           local_74 << 0x18;
    }
LAB_10054dd83:
    lVar4 = param_1 + 0x710;
    iVar6 = FUN_10015cd83(lVar4,&local_6c);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        iVar6 = FUN_10015ce0a(lVar4,&local_68,&local_70,FUN_1001c8fe3,param_1);
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            if (local_70 == local_6c) {
              local_108 = *(undefined8 *)(param_1 + 0x1020);
              uStack_100 = *(undefined8 *)(param_1 + 0x1028);
              local_e8 = *(undefined1 *)(param_1 + 0x1038);
              local_e0 = local_68;
              local_d8 = local_70;
              local_c8 = (byte)(local_5c >> 1) & 1;
              local_c7 = (byte)local_5c >> 2 & 1;
              local_88 = *(undefined4 *)(param_1 + 0x38);
              uStack_84 = *(undefined4 *)(param_1 + 0x3c);
              uStack_80 = *(undefined4 *)(param_1 + 0x40);
              uStack_7c = *(undefined4 *)(param_1 + 0x44);
              if (*(long *)(param_1 + 0x40) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              local_f8 = param_2;
              local_d0 = param_4;
              iVar6 = FUN_1005d649b(&local_88,&local_108);
              plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar2 = plVar1 + 1;
                lVar3 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar3 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar6 != -0x80) {
                if (iVar6 == 0) {
                  iVar6 = FUN_10015cc72(lVar4);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  *(undefined8 *)(param_1 + 0x710) = 0;
                  if (*(long *)(param_1 + 0x718) != 0) {
                    FUN_1001c64c1();
                    FUN_1001c62d9(param_1 + 0x718,0x20);
                  }
                  FUN_1005da7d9(param_1 + 0x7f8);
                  FUN_1001c62d9(param_1 + 0x7f8,0x48);
                  iVar6 = FUN_10015c62d(local_68,lVar4,0,0);
                  if (iVar6 != -0x80) {
                    if (iVar6 == 0) {
                      iVar6 = FUN_10054bb72(param_1,(local_5c & 0x18) << 5);
                      if ((iVar6 != -0x80) && (iVar6 != 0)) {
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar5 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                          goto LAB_10054e056;
                        }
                      }
                    }
                    else {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_10054e056:
                        local_4c = 0x400;
                        local_54 = "Assertion failure";
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                    goto LAB_10054e056;
                  }
                }
              }
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "newMoovSize == newSize";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar6 = -0x32;
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              goto LAB_10054e056;
            }
          }
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          goto LAB_10054e056;
        }
      }
    }
  }
  if (local_68 != 0) {
    if (*(long *)(param_1 + 0x718) == local_68) {
      *(undefined8 *)(param_1 + 0x718) = 0;
    }
    FUN_1001c64c1();
  }
LAB_10054e176:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

