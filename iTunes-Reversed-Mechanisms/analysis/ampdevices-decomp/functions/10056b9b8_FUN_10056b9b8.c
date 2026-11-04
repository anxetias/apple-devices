// name: FUN_10056b9b8
// address: 10056b9b8

int FUN_10056b9b8(long param_1,long *param_2)

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
  int local_268 [2];
  uint local_260;
  undefined1 local_20c [4];
  int local_208;
  int local_204;
  undefined4 local_200;
  ulong local_1f8;
  long *local_1f0;
  uint local_1e4;
  long local_1e0;
  int local_1d8;
  char *local_1d4;
  undefined2 local_1cc;
  undefined2 uStack_1ca;
  undefined2 uStack_1c8;
  undefined4 uStack_1c6;
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
      local_1d8 = 0x8220202;
      local_1d4 = "Assertion failure";
      local_1cc = 0x822;
      uStack_1ca = 0xbfdf;
      uStack_1c8 = 0x7c;
      uStack_1c6 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_1d8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_10056a2be(param_1,local_268,0x5c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_268[0] == 0x616d746c) {
          iVar2 = (**(code **)(*param_2 + 0x30))(param_2,0x616d746c,local_268,0x5c,0);
          if (iVar2 == 0) {
            if (local_260 != 0) {
              local_1f8 = 10000000;
              local_1e4 = 0;
              local_1f0 = param_2;
              do {
                iVar2 = FUN_10056a2be(param_1,&local_1d8,0x178);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056bb11;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056bb11;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056bad3;
                }
                if (local_1d8 != 0x616d7469) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056bb02;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  pcVar5 = "dbTrackInfo.magic == kAMLTrackInfoMagic";
                  goto LAB_10056beae;
                }
                iVar2 = (**(code **)(*param_2 + 0x30))
                                  (param_2,0x616d7469,&local_1d8,0x178,local_1e4);
                iVar10 = iVar2;
                if (iVar2 == 0x1b59) {
                  iVar10 = 0;
                }
                if (iVar10 != 0) {
                  if (iVar10 == -0x80) {
                    iVar2 = -0x80;
                    goto LAB_10056bb11;
                  }
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056bb11;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                  goto LAB_10056bad3;
                }
                bVar11 = iVar2 == 0x1b59;
                local_1e0 = lVar3;
                if (CONCAT22(uStack_1ca,local_1cc) != 0) {
                  uVar9 = 0;
                  do {
                    iVar2 = FUN_10056ec13(param_1,local_20c);
                    if (iVar2 != 0) {
                      lVar3 = local_1e0;
                      if (iVar2 == -0x80) goto LAB_10056bb11;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_1e0;
                      if (cVar1 == '\0') goto LAB_10056bb11;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056bad3;
                    }
                    uVar7 = (ulong)(uint)(local_204 - local_208);
                    lVar3 = local_1e0;
                    if ((local_1f8 < uVar7) &&
                       (lVar3 = FUN_1001c6479(local_1e0,uVar7), local_1f8 = uVar7, lVar3 == 0)) {
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
                      goto LAB_10056bb11;
                    }
                    local_1e0 = lVar3;
                    iVar2 = FUN_100569944(param_1,lVar3,uVar7);
                    if (iVar2 != 0) {
                      lVar3 = local_1e0;
                      if (iVar2 == -0x80) goto LAB_10056bb11;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_1e0;
                      if (cVar1 == '\0') goto LAB_10056bb11;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10056bad3;
                    }
                    if (!bVar11) {
                      iVar2 = (**(code **)(*local_1f0 + 0x30))
                                        (local_1f0,local_200,local_1e0,uVar7,uVar9);
                      iVar10 = iVar2;
                      if (iVar2 == 0x1b59) {
                        bVar11 = true;
                        iVar10 = 0;
                      }
                      if (iVar10 != 0) {
                        if (iVar10 == -0x80) {
                          iVar2 = -0x80;
                          lVar3 = local_1e0;
                          goto LAB_10056bb11;
                        }
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        lVar3 = local_1e0;
                        if (cVar1 == '\0') goto LAB_10056bb11;
                        piVar8 = &local_58;
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                        goto LAB_10056bad3;
                      }
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < CONCAT22(uStack_1ca,local_1cc));
                }
                lVar3 = local_1e0;
                param_2 = local_1f0;
                if ((!bVar11) &&
                   (iVar2 = (**(code **)(*local_1f0 + 0x30))(local_1f0,0x616d7469,0,0,local_1e4),
                   iVar2 != 0)) goto LAB_10056bb11;
                lVar6 = *(long *)(param_1 + 0x1c9c498) + 1;
                *(long *)(param_1 + 0x1c9c498) = lVar6;
                iVar2 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x1c9c490),0x7570726d,lVar6,
                                      *(undefined8 *)(param_1 + 0x1c9c4a0),0);
                if (iVar2 != 0) goto LAB_10056bb11;
                local_1e4 = local_1e4 + 1;
              } while (local_1e4 < local_260);
            }
            iVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_268[0],0,0,0);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            piVar8 = &local_1d8;
            local_1d8 = 0x8220202;
            local_1d4 = "Assertion failure";
            local_1cc = 0x822;
            pcVar5 = "header.magic == kAMLTrackListHeaderMagic";
LAB_10056beae:
            *(char **)((long)piVar8 + 0xe) = pcVar5;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar8,0x16);
          }
LAB_10056bb02:
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          piVar8 = &local_1d8;
          local_1d8 = 0x8220202;
          local_1d4 = "Assertion failure";
          local_1cc = 0x400;
          uStack_1ca = (undefined2)iVar2;
          uStack_1c8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056bad3:
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar8,0x12);
        }
      }
    }
LAB_10056bb11:
    FUN_1001c64c1(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

