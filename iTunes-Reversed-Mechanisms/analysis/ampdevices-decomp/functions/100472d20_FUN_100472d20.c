// name: FUN_100472d20
// address: 100472d20

long * FUN_100472d20(long param_1,undefined1 param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100472f07:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_100472fcd:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100472f07;
    }
    uVar1 = *(uint *)(param_1 + 0x9c);
    if (uVar1 < 0x7fffffff) {
      uVar9 = 100;
      if (999 < uVar1) {
        uVar9 = 2000;
        if (uVar1 / 10 < 2000) {
          uVar9 = uVar1 / 10;
        }
      }
      FUN_1001c585c(*(undefined8 *)(param_1 + 0x1bc0),uVar9);
      FUN_1001c585c(*(undefined8 *)(param_1 + 0x1bc8),uVar9);
      FUN_1001c585c(*(undefined8 *)(param_1 + 0x1bd0),uVar9 >> 1);
      FUN_1001c585c(*(undefined8 *)(param_1 + 0x1bd8),uVar9 >> 1);
      plVar7 = (long *)FUN_1001c58d5(*(undefined8 *)(param_1 + 0x1bc0));
      if (plVar7 != (long *)0x0) {
        *plVar7 = 0;
        *(undefined4 *)(plVar7 + 1) = 0;
        FUN_1001aa318(plVar7 + 0x2c);
        plVar7[0x3c] = 0;
        plVar7[0x3d] = 0;
        plVar7[0x30] = 0;
        plVar7[0x31] = 0;
        plVar7[2] = param_1;
        lVar8 = FUN_1001c6588();
        plVar7[0xe] = lVar8;
        lVar8 = FUN_1001c6588();
        plVar7[0xf] = lVar8;
        lVar8 = FUN_1001c6588();
        plVar7[0x10] = lVar8;
        lVar8 = FUN_1001c6588();
        plVar7[0x11] = lVar8;
        uVar4 = FUN_1001ea5dc();
        *(undefined4 *)(plVar7 + 1) = uVar4;
        if (param_3 == (long *)0x0) {
          lVar8 = FUN_1002fa216(param_1);
          *plVar7 = lVar8;
          *(undefined1 *)((long)plVar7 + 0xcd) = param_2;
          *(undefined4 *)(plVar7 + 0x1a) = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
          *(byte *)((long)plVar7 + 0xc5) = *(byte *)((long)plVar7 + 0xc5) & 0xef;
          local_68 = 0;
LAB_100473057:
          lVar8 = plVar7[2];
          uVar3 = FUN_100474865(plVar7);
          cVar2 = FUN_100276fe0(lVar8,uVar3);
          if (cVar2 == '\0') {
            local_68 = FUN_100276e24(param_1);
            if ((local_68 == 0) || (local_68 != *(long *)(param_1 + 0x1b78))) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "(albumInfo != nullptr) && (albumInfo == trackData->unassignedAlbumInfo)"
                ;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
          }
          else {
            iVar5 = FUN_100274af4(param_1,plVar7,1,&local_68,0);
            if ((iVar5 != -0x80) && (iVar5 != 0)) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
LAB_100473142:
          if (local_68 == 0) {
LAB_100473172:
            if (param_3 == (long *)0x0) {
              local_60 = 0;
LAB_100473196:
              lVar8 = plVar7[2];
              uVar3 = FUN_100474865(plVar7);
              cVar2 = FUN_1004cfafa(lVar8,uVar3);
              if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x1bb5) & 0x80) != 0)) {
                local_60 = FUN_1004d0068(param_1);
                if ((local_60 == 0) || (local_60 != *(long *)(param_1 + 0x1b90))) {
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = 
                    "(artistInfo != nullptr) && (artistInfo == trackData->unassignedArtistInfo)";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
              }
              else {
                iVar5 = FUN_1005e4dc0(param_1,plVar7,0,&local_60);
                if ((iVar5 != -0x80) && (iVar5 != 0)) {
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
            }
            else {
              local_60 = param_3[1];
              if (local_60 == 0) goto LAB_100473196;
              FUN_1005e35f0();
            }
            if (local_60 != 0) {
              iVar5 = FUN_1005e565a(local_60,plVar7);
              FUN_1005e37a3(local_60);
              if (iVar5 == -0x80) goto LAB_100473392;
              if (iVar5 != 0) {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                  goto LAB_10047346c;
                }
                goto LAB_100473389;
              }
            }
            FUN_100473489(plVar7);
            *(byte *)((long)plVar7 + 0xc2) = *(byte *)((long)plVar7 + 0xc2) | 1;
            goto LAB_100472ffd;
          }
          iVar5 = FUN_1003a371d(plVar7);
          FUN_1003a040b(local_68);
          if (iVar5 == -0x80) goto LAB_100473392;
          if (iVar5 == 0) goto LAB_100473172;
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10047346c:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
LAB_100473389:
          if (iVar5 == 0) goto LAB_100472ffd;
        }
        else {
          lVar8 = param_3[3];
          if (lVar8 == 0) {
            lVar8 = FUN_1002fa216(param_1);
          }
          uVar4 = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
          *plVar7 = lVar8;
          *(undefined1 *)((long)plVar7 + 0xcd) = param_2;
          *(undefined4 *)(plVar7 + 0x1a) = uVar4;
          *(uint *)((long)plVar7 + 0xc2) =
               *(uint *)((long)plVar7 + 0xc2) & 0xefffffff | (int)param_3[6] << 0x1c;
          if ((int)param_3[4] == 0) {
LAB_100472eed:
            local_68 = *param_3;
            if (local_68 == 0) goto LAB_100473057;
            FUN_1003a0291();
            goto LAB_100473142;
          }
          lVar8 = FUN_1002ae502(plVar7,(int)param_3[4],(int)param_3[2],param_3[5]);
          if (lVar8 != 0) goto LAB_100472eed;
        }
LAB_100473392:
        FUN_10047086e(plVar7);
        plVar7 = (long *)0x0;
        goto LAB_100472ffd;
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "allocation != nullptr";
        goto LAB_100472fcd;
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "trackData->numTracks < 0x7FFFFFFF";
        goto LAB_100472fcd;
      }
    }
  }
  plVar7 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_100472ffd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

