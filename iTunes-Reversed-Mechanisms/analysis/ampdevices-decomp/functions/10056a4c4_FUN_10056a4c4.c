// name: FUN_10056a4c4
// address: 10056a4c4

int FUN_10056a4c4(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  int local_14c [2];
  uint local_144;
  undefined1 local_11c [4];
  int local_118;
  int local_114;
  undefined4 local_110;
  ulong local_108;
  long *local_100;
  uint local_f4;
  long local_f0;
  int local_e8;
  char *local_e4;
  undefined2 local_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1001c63e1(10000000);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_e8 = 0x8220202;
      local_e4 = "Assertion failure";
      local_dc = 0x822;
      uStack_da = 0xbfdf;
      uStack_d8 = 0x7c;
      uStack_d6 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_10056a2be(param_1,local_14c,0x30);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_14c[0] == 0x616d616c) {
          iVar2 = (**(code **)(*param_2 + 0x18))(param_2,0x616d616c,local_14c,0x30,0);
          if (iVar2 == 0) {
            if (local_144 != 0) {
              local_108 = 10000000;
              local_f4 = 0;
              local_100 = param_2;
              do {
                iVar2 = FUN_10056a2be(param_1,&local_e8,0x8c);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056a61d;
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 == '\0') goto LAB_10056a61d;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056a5dc;
                }
                if (local_e8 != 0x616d6169) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 == '\0') goto LAB_10056a60e;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  pcVar6 = "dbAlbumInfo.magic == kAMLAlbumInfoMagic";
                  goto LAB_10056a96a;
                }
                iVar2 = (**(code **)(*param_2 + 0x18))(param_2,0x616d6169,&local_e8,0x8c,local_f4);
                iVar3 = iVar2;
                if (iVar2 == 0x1b59) {
                  iVar3 = 0;
                }
                if (iVar3 != 0) {
                  if (iVar3 == -0x80) {
                    iVar2 = -0x80;
                    goto LAB_10056a61d;
                  }
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 == '\0') goto LAB_10056a61d;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_10056a5dc;
                }
                bVar11 = iVar2 == 0x1b59;
                local_f0 = lVar4;
                if (CONCAT22(uStack_da,local_dc) == 0) {
                  iVar3 = 0;
                }
                else {
                  uVar9 = 0;
                  do {
                    iVar2 = FUN_10056ec13(param_1,local_11c);
                    if (iVar2 != 0) {
                      lVar4 = local_f0;
                      if (iVar2 == -0x80) goto LAB_10056a61d;
                      uVar5 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar5,0x10);
                      lVar4 = local_f0;
                      if (cVar1 == '\0') goto LAB_10056a61d;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056a5dc;
                    }
                    uVar10 = (ulong)(uint)(local_114 - local_118);
                    lVar4 = local_f0;
                    if ((local_108 < uVar10) &&
                       (lVar4 = FUN_1001c6479(local_f0,uVar10), local_108 = uVar10, lVar4 == 0)) {
                      uVar5 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar1 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "objectBuffer != nullptr";
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                      iVar2 = -0x6c;
                      lVar4 = 0;
                      goto LAB_10056a61d;
                    }
                    local_f0 = lVar4;
                    iVar2 = FUN_100569944(param_1,lVar4,uVar10);
                    if (iVar2 != 0) {
                      lVar4 = local_f0;
                      if (iVar2 == -0x80) goto LAB_10056a61d;
                      uVar5 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar5,0x10);
                      lVar4 = local_f0;
                      if (cVar1 == '\0') goto LAB_10056a61d;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056a5dc;
                    }
                    iVar3 = 0;
                    if ((!bVar11) &&
                       (iVar3 = (**(code **)(*local_100 + 0x18))
                                          (local_100,local_110,local_f0,uVar10,uVar9),
                       iVar3 == 0x1b59)) {
                      bVar11 = true;
                      iVar3 = 0;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < CONCAT22(uStack_da,local_dc));
                }
                lVar4 = local_f0;
                param_2 = local_100;
                if (!bVar11) {
                  iVar2 = (**(code **)(*local_100 + 0x18))(local_100,0x616d6169,0,0,local_f4);
                  iVar3 = 0;
                  if (iVar2 != 0) goto LAB_10056a61d;
                }
                iVar2 = iVar3;
                lVar7 = *(long *)(param_1 + 0x1c9c498) + 1;
                *(long *)(param_1 + 0x1c9c498) = lVar7;
                iVar3 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x1c9c490),0x7570726d,lVar7,
                                      *(undefined8 *)(param_1 + 0x1c9c4a0),0);
                if (iVar3 != 0) goto LAB_10056a61d;
                local_f4 = local_f4 + 1;
              } while (local_f4 < local_144);
            }
            iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_14c[0],0,0,0);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            piVar8 = &local_e8;
            local_e8 = 0x8220202;
            local_e4 = "Assertion failure";
            local_dc = 0x822;
            pcVar6 = "header.magic == kAMLAlbumListHeaderMagic";
LAB_10056a96a:
            *(char **)((long)piVar8 + 0xe) = pcVar6;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",piVar8,0x16);
          }
LAB_10056a60e:
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          piVar8 = &local_e8;
          local_e8 = 0x8220202;
          local_e4 = "Assertion failure";
          local_dc = 0x400;
          uStack_da = (undefined2)iVar2;
          uStack_d8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056a5dc:
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",piVar8,0x12);
        }
      }
    }
LAB_10056a61d:
    FUN_1001c64c1(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

