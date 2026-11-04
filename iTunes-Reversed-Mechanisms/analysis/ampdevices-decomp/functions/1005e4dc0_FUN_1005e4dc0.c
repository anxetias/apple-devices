// name: FUN_1005e4dc0
// address: 1005e4dc0

int FUN_1005e4dc0(long param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "artistInfo != nullptr";
      goto LAB_1005e511f;
    }
  }
  else {
    *param_4 = 0;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x80) == 0x74646174) {
        if (param_2 != 0) {
LAB_1005e4e9a:
          lVar5 = *(long *)(param_2 + 0x10);
          if (lVar5 != 0) {
            local_70 = lVar5;
            if ((*(byte *)(lVar5 + 0x1bb5) & 0x80) != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "trackTrackData->dontGroupTracksInArtistInfos == false";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            local_68 = *(int *)(param_2 + 0xe0);
            if (local_68 == 0) {
              local_68 = *(int *)(param_2 + 0xdc);
              local_5c = *(undefined4 *)(param_2 + 0x1b0);
              if (local_68 != 0) {
                local_80 = local_70 + 0x1cb0;
                local_60 = local_68;
                FUN_1001dccc7();
                iVar3 = FUN_100477ba5(param_2,&local_88,&local_64);
                goto LAB_1005e4faf;
              }
              uVar2 = FUN_100474865(param_2);
              iVar7 = 0;
              uVar6 = 0;
LAB_1005e53c5:
              iVar3 = 0;
              FUN_1005e3ab6(param_1,iVar7,uVar6,0,0,uVar2,param_4);
            }
            else {
              local_5c = *(undefined4 *)(param_2 + 0x1b4);
              local_80 = local_70 + 0x1cb0;
              local_60 = local_68;
              FUN_1001dccc7();
              iVar3 = FUN_1004781bb(param_2,&local_88,&local_64);
LAB_1005e4faf:
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  if (local_70 != param_1) {
                    FUN_1001dccc7(param_1 + 0x1cb0);
                  }
                  local_78 = param_1;
                  if ((param_3 == 0) ||
                     (cVar1 = FUN_1005e4bb6(param_3,param_2,local_88,local_64), lVar5 = param_3,
                     cVar1 == '\0')) {
                    for (lVar5 = FUN_1004d02cc(param_1); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0xe0)
                        ) {
                      if ((lVar5 != param_3) &&
                         (cVar1 = FUN_1005e4bb6(lVar5,param_2,local_88,local_64), cVar1 != '\0'))
                      goto LAB_1005e522f;
                      if (*(int *)(lVar5 + 0x58) != 0x61747369) {
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure (expected to be true)";
                          local_4c = 0x822;
                          local_4a = "inArtistInfo->mMagic == kArtistInfoMagic";
                          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        cVar1 = FUN_1001782e9(0,1);
                        param_1 = local_78;
                        if (cVar1 != '\0') goto LAB_1005e5068;
LAB_1005e51b6:
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "ArtistInfo::IsValid(artistInfo)";
                          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        break;
                      }
LAB_1005e5068:
                      if (*(long *)(lVar5 + 8) == 0) goto LAB_1005e51b6;
                    }
                  }
                  else {
LAB_1005e522f:
                    FUN_1005e35f0(lVar5);
                    *param_4 = lVar5;
                  }
                  lVar5 = local_80;
                  FUN_1001dcd18(local_80);
                  if (local_70 == param_1) {
                    if (*param_4 != 0) goto LAB_1005e532a;
                    iVar3 = FUN_1001dcecf(param_1 + 0x1cb0,local_60);
                    if ((iVar3 != -0x80) && (iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    iVar3 = FUN_1001dcecf(param_1 + 0x24d0,local_5c);
                    if ((iVar3 != -0x80) && (iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        goto LAB_1005e5526;
                      }
                    }
                  }
                  else {
                    FUN_1001dcd18(param_1 + 0x1cb0);
                    if (*param_4 != 0) {
LAB_1005e532a:
                      iVar3 = 0;
                      goto LAB_1005e4f4a;
                    }
                    iVar3 = FUN_1001de586(lVar5,local_60,param_1 + 0x1cb0,&local_68);
                    if ((iVar3 != -0x80) && (iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    iVar3 = FUN_1001de586(local_70 + 0x24d0,local_5c,local_78 + 0x24d0);
                    if ((iVar3 != -0x80) && (iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1005e5526:
                        local_4c = 0x400;
                        local_54 = "Assertion failure";
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                  }
                  uVar6 = local_5c;
                  iVar7 = local_68;
                  uVar2 = FUN_100474865(param_2);
                  param_1 = local_78;
                  goto LAB_1005e53c5;
                }
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              FUN_1001dcd18(local_80);
            }
            goto LAB_1005e4f4a;
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if ((param_2 != 0) && (cVar1 != '\0')) goto LAB_1005e4e9a;
      }
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(artistInfoTrackData) && TrackInfoIsValid(trackInfo)";
LAB_1005e511f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1005e4f4a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

