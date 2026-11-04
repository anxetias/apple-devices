// name: FUN_10056ab78
// address: 10056ab78

int FUN_10056ab78(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_180 [2];
  uint local_178;
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
  lVar3 = FUN_1001c63e1(10000000);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_e8 = 0x8220202;
      local_e4 = "Assertion failure";
      local_dc = 0x822;
      uStack_da = 0xbfdf;
      uStack_d8 = 0x7c;
      uStack_d6 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_10056a2be(param_1,local_180,100);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_180[0] == 0x616d416c) {
          iVar2 = (**(code **)(*param_2 + 0x20))(param_2,0x616d416c,local_180,100,0);
          if (iVar2 == 0) {
            if (local_178 != 0) {
              local_108 = 10000000;
              local_f4 = 0;
              local_100 = param_2;
              do {
                iVar2 = FUN_10056a2be(param_1,&local_e8,0x84);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056acd1;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056acd1;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056ac93;
                }
                if (local_e8 != 0x616d4169) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056acc2;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  pcVar5 = "dbArtistInfo.magic == kAMLArtistInfoMagic";
                  goto LAB_10056b06e;
                }
                iVar2 = (**(code **)(*param_2 + 0x20))(param_2,0x616d4169,&local_e8,0x84,local_f4);
                iVar10 = iVar2;
                if (iVar2 == 0x1b59) {
                  iVar10 = 0;
                }
                if (iVar10 != 0) {
                  if (iVar10 == -0x80) {
                    iVar2 = -0x80;
                    goto LAB_10056acd1;
                  }
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056acd1;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                  goto LAB_10056ac93;
                }
                bVar11 = iVar2 == 0x1b59;
                local_f0 = lVar3;
                if (CONCAT22(uStack_da,local_dc) != 0) {
                  uVar9 = 0;
                  do {
                    iVar2 = FUN_10056ec13(param_1,local_11c);
                    if (iVar2 != 0) {
                      lVar3 = local_f0;
                      if (iVar2 == -0x80) goto LAB_10056acd1;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_f0;
                      if (cVar1 == '\0') goto LAB_10056acd1;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056ac93;
                    }
                    uVar7 = (ulong)(uint)(local_114 - local_118);
                    lVar3 = local_f0;
                    if ((local_108 < uVar7) &&
                       (lVar3 = FUN_1001c6479(local_f0,uVar7), local_108 = uVar7, lVar3 == 0)) {
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
                      goto LAB_10056acd1;
                    }
                    local_f0 = lVar3;
                    iVar2 = FUN_100569944(param_1,lVar3,uVar7);
                    if (iVar2 != 0) {
                      lVar3 = local_f0;
                      if (iVar2 == -0x80) goto LAB_10056acd1;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_f0;
                      if (cVar1 == '\0') goto LAB_10056acd1;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056ac93;
                    }
                    if (!bVar11) {
                      iVar2 = (**(code **)(*local_100 + 0x20))
                                        (local_100,local_110,local_f0,uVar7,uVar9);
                      iVar10 = iVar2;
                      if (iVar2 == 0x1b59) {
                        bVar11 = true;
                        iVar10 = 0;
                      }
                      if (iVar10 != 0) {
                        if (iVar10 == -0x80) {
                          iVar2 = -0x80;
                          lVar3 = local_f0;
                          goto LAB_10056acd1;
                        }
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        lVar3 = local_f0;
                        if (cVar1 == '\0') goto LAB_10056acd1;
                        piVar8 = &local_58;
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                        goto LAB_10056ac93;
                      }
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < CONCAT22(uStack_da,local_dc));
                }
                lVar3 = local_f0;
                param_2 = local_100;
                if ((!bVar11) &&
                   (iVar2 = (**(code **)(*local_100 + 0x20))(local_100,0x616d4169,0,0,local_f4),
                   iVar2 != 0)) goto LAB_10056acd1;
                lVar6 = *(long *)(param_1 + 0x1c9c498) + 1;
                *(long *)(param_1 + 0x1c9c498) = lVar6;
                iVar2 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x1c9c490),0x7570726d,lVar6,
                                      *(undefined8 *)(param_1 + 0x1c9c4a0),0);
                if (iVar2 != 0) goto LAB_10056acd1;
                local_f4 = local_f4 + 1;
              } while (local_f4 < local_178);
            }
            iVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_180[0],0,0,0);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            piVar8 = &local_e8;
            local_e8 = 0x8220202;
            local_e4 = "Assertion failure";
            local_dc = 0x822;
            pcVar5 = "header.magic == kAMLArtistListHeaderMagic";
LAB_10056b06e:
            *(char **)((long)piVar8 + 0xe) = pcVar5;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar8,0x16);
          }
LAB_10056acc2:
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          piVar8 = &local_e8;
          local_e8 = 0x8220202;
          local_e4 = "Assertion failure";
          local_dc = 0x400;
          uStack_da = (undefined2)iVar2;
          uStack_d8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056ac93:
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar8,0x12);
        }
      }
    }
LAB_10056acd1:
    FUN_1001c64c1(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

