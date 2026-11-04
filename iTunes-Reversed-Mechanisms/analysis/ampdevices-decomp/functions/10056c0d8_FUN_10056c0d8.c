// name: FUN_10056c0d8
// address: 10056c0d8

int FUN_10056c0d8(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  int local_258 [2];
  uint local_250;
  undefined1 local_1fc [4];
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  ulong local_1e8;
  long *local_1e0;
  uint local_1d4;
  long local_1d0;
  int local_1c8;
  char *local_1c4;
  undefined2 local_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined4 uStack_1b6;
  char local_179;
  char local_178;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001c63e1(10000000);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_1c8 = 0x8220202;
      local_1c4 = "Assertion failure";
      local_1bc = 0x822;
      uStack_1ba = 0xbfdf;
      uStack_1b8 = 0x7c;
      uStack_1b6 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_1c8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_10056a2be(param_1,local_258,0x5c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_258[0] == 0x616d506c) {
          iVar2 = (**(code **)(*param_2 + 0x38))(param_2,0x616d506c,local_258,0x5c,0);
          if (iVar2 == 0) {
            if (local_250 != 0) {
              local_1e8 = 10000000;
              local_1d4 = 0;
              local_1e0 = param_2;
              do {
                iVar2 = FUN_10056a2be(param_1,&local_1c8,0x170);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056c231;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056c231;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056c1f0;
                }
                if (local_1c8 != 0x616d706c) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056c222;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  pcVar5 = "dbPlaylist.magic == kAMLPlaylistMagic";
                  goto LAB_10056c5e7;
                }
                cVar1 = local_179;
                if (local_178 != '\0') {
                  cVar1 = local_178;
                }
                bVar10 = true;
                local_1d0 = lVar3;
                if (cVar1 != '\x06') {
                  iVar2 = (**(code **)(*local_1e0 + 0x38))
                                    (local_1e0,0x616d706c,&local_1c8,0x170,local_1d4);
                  bVar10 = iVar2 == 0x1b59;
                  iVar6 = iVar2;
                  if (bVar10) {
                    iVar6 = 0;
                  }
                  if (iVar6 != 0) {
                    if (iVar6 == -0x80) {
                      iVar2 = -0x80;
                      lVar3 = local_1d0;
                      goto LAB_10056c231;
                    }
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    lVar3 = local_1d0;
                    if (cVar1 == '\0') goto LAB_10056c231;
                    piVar8 = &local_58;
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                    goto LAB_10056c1f0;
                  }
                }
                if (CONCAT22(uStack_1ba,local_1bc) != 0) {
                  uVar9 = 0;
                  do {
                    iVar2 = FUN_10056ec13(param_1,local_1fc);
                    if (iVar2 != 0) {
                      lVar3 = local_1d0;
                      if (iVar2 == -0x80) goto LAB_10056c231;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_1d0;
                      if (cVar1 == '\0') goto LAB_10056c231;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056c1f0;
                    }
                    uVar7 = (ulong)(uint)(local_1f4 - local_1f8);
                    lVar3 = local_1d0;
                    if ((local_1e8 < uVar7) &&
                       (lVar3 = FUN_1001c6479(local_1d0,uVar7), local_1e8 = uVar7, lVar3 == 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "objectBuffer != nullptr";
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                      iVar2 = -0x6c;
                      lVar3 = 0;
                      goto LAB_10056c231;
                    }
                    local_1d0 = lVar3;
                    iVar2 = FUN_100569944(param_1,lVar3,uVar7);
                    if (iVar2 != 0) {
                      lVar3 = local_1d0;
                      if (iVar2 == -0x80) goto LAB_10056c231;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_1d0;
                      if (cVar1 == '\0') goto LAB_10056c231;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056c1f0;
                    }
                    if (!bVar10) {
                      iVar2 = (**(code **)(*local_1e0 + 0x38))
                                        (local_1e0,local_1f0,local_1d0,uVar7,uVar9);
                      bVar10 = iVar2 == 0x1b59;
                      iVar6 = iVar2;
                      if (bVar10) {
                        iVar6 = 0;
                      }
                      if (iVar6 != 0) {
                        if (iVar6 == -0x80) {
                          iVar2 = -0x80;
                          lVar3 = local_1d0;
                        }
                        else {
                          uVar4 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar4,0x10);
                          lVar3 = local_1d0;
                          if (cVar1 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x400;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                                &local_58,0x12);
                            lVar3 = local_1d0;
                          }
                        }
                        goto LAB_10056c231;
                      }
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < CONCAT22(uStack_1ba,local_1bc));
                }
                param_2 = local_1e0;
                if ((!bVar10) &&
                   (iVar2 = (**(code **)(*local_1e0 + 0x38))(local_1e0,local_1c8,0,0,local_1d4),
                   lVar3 = local_1d0, iVar2 != 0)) goto LAB_10056c231;
                lVar3 = *(long *)(param_1 + 0x1c9c498) + 1;
                *(long *)(param_1 + 0x1c9c498) = lVar3;
                iVar2 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x1c9c490),0x7570726d,lVar3,
                                      *(undefined8 *)(param_1 + 0x1c9c4a0),0);
                lVar3 = local_1d0;
                if (iVar2 != 0) goto LAB_10056c231;
                local_1d4 = local_1d4 + 1;
              } while (local_1d4 < local_250);
            }
            iVar2 = (**(code **)(*param_2 + 0x38))(param_2,local_258[0],0,0,0);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            piVar8 = &local_1c8;
            local_1c8 = 0x8220202;
            local_1c4 = "Assertion failure";
            local_1bc = 0x822;
            pcVar5 = "header.magic == kAMLPlaylistsListHeaderMagic";
LAB_10056c5e7:
            *(char **)((long)piVar8 + 0xe) = pcVar5;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar8,0x16);
          }
LAB_10056c222:
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          piVar8 = &local_1c8;
          local_1c8 = 0x8220202;
          local_1c4 = "Assertion failure";
          local_1bc = 0x400;
          uStack_1ba = (undefined2)iVar2;
          uStack_1b8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056c1f0:
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar8,0x12);
        }
      }
    }
LAB_10056c231:
    FUN_1001c64c1(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

