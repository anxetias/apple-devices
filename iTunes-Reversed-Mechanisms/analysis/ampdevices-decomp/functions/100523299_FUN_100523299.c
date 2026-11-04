// name: FUN_100523299
// address: 100523299

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100523299(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x35b) == '\0') {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_58[0] = 0x8220202;
      local_58[1] = 0x7a0a90;
      local_58[2] = 1;
      local_4c = 0x822;
      local_4a = "handlerData->deviceInfo.needsShadowDB";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar7 = 0;
  if ((((*(char *)(lVar4 + 0x6abd) == '\0') || (*(long *)(lVar4 + 0x30) == 0)) ||
      (*(char *)(lVar4 + 0x6ad7) == '\0')) ||
     (cVar6 = FUN_10017cbd0(lVar4 + 0x6b40), iVar7 = 0, cVar6 == '\0')) goto LAB_1005237e7;
  if ((char)param_1[0x156] != '\0') {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_58[0] = 0x8220202;
      local_58[1] = 0x7a0a90;
      local_58[2] = 1;
      local_4c = 0x822;
      local_4a = "shadowDBFileData->bufferValid == false";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  plVar1 = param_1 + 0x157;
  iVar7 = FUN_1001601fd(plVar1,0x20000);
  if (iVar7 != -0x80) {
    if (iVar7 == 0) {
      iVar7 = FUN_1003eb10f(lVar4,plVar1);
      if (iVar7 != -0x80) {
        if (iVar7 == 0) {
          FUN_1001e04f5("iTunesSD",param_1 + 0x1e4);
          _memcpy(param_1 + 0x160,(void *)(lVar4 + 0x75e0),0x420);
          *(undefined1 *)(param_1 + 0x156) = 1;
          iVar7 = 0;
          if (*(short *)(lVar4 + 0x3b4) != 2) goto LAB_1005237e7;
          if ((char)param_1[0x1fcb] != '\0') {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              local_58[0] = 0x8220202;
              local_58[1] = 0x7a0a90;
              local_58[2] = 1;
              local_4c = 0x822;
              local_4a = "shadowPlayCountsFileData->bufferValid == false";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          plVar2 = param_1 + 0x1fcc;
          lVar12 = *(long *)(lVar4 + 0x30);
          if (lVar12 == 0) {
LAB_10052372c:
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              local_58[0] = 0x8220202;
              local_58[1] = 0x7a0a90;
              local_58[2] = 1;
              local_4c = 0x822;
              local_4a = "TrackDataIsValid(handlerData->trackData)";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar7 = -0x32;
          }
          else {
            if (*(int *)(lVar12 + 0x80) != 0x74646174) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                local_58[0] = 0x8220202;
                local_58[1] = 0x7ab58c;
                local_58[2] = 1;
                local_4c = 0x822;
                local_4a = "trackData->magic == \'tdat\'";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16)
                ;
              }
              cVar6 = FUN_1001782e9(0,1);
              if (cVar6 == '\0') goto LAB_10052372c;
              lVar12 = *(long *)(lVar4 + 0x30);
            }
            uVar3 = *(uint *)(lVar12 + 0x9c);
            uVar13 = uVar3 << 5 | 8;
            puVar9 = (uint *)FUN_1001c6429(uVar13);
            auVar16._8_8_ = extraout_XMM1_Qb;
            auVar16._0_8_ = extraout_XMM1_Qa;
            if (puVar9 == (uint *)0x0) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                local_58[0] = 0x8220202;
                local_58[1] = 0x7a0a90;
                local_58[2] = 1;
                local_4c = 0x822;
                local_4a = "playCountsData != nullptr";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              iVar7 = -0x6c;
            }
            else {
              *puVar9 = uVar3;
              auVar5 = _DAT_100700430;
              if (uVar3 != 0) {
                lVar12 = (ulong)uVar3 - 1;
                auVar14._8_4_ = (int)lVar12;
                auVar14._0_8_ = lVar12;
                auVar14._12_4_ = (int)((ulong)lVar12 >> 0x20);
                puVar10 = puVar9 + 0x1a;
                uVar11 = 0;
                auVar16 = pmovsxbq(auVar16,_DAT_100753526);
                auVar17 = pmovsxbq(in_XMM2,_DAT_100753528);
                auVar14 = auVar14 ^ _DAT_100700430;
                do {
                  auVar18._8_4_ = (int)uVar11;
                  auVar18._0_8_ = uVar11;
                  auVar18._12_4_ = (int)(uVar11 >> 0x20);
                  auVar19 = (auVar18 | auVar17) ^ auVar5;
                  iVar7 = auVar14._4_4_;
                  iVar15 = auVar14._12_4_;
                  if ((bool)(~(auVar19._4_4_ == iVar7 && auVar14._0_4_ < auVar19._0_4_ ||
                              iVar7 < auVar19._4_4_) & 1)) {
                    puVar10[-0x18] = 0x20;
                  }
                  if (auVar19._12_4_ <= iVar15 &&
                      (auVar19._12_4_ != iVar15 || auVar19._8_4_ <= auVar14._8_4_)) {
                    puVar10[-0x10] = 0x20;
                  }
                  auVar18 = (auVar18 | auVar16) ^ auVar5;
                  if (auVar18._4_4_ <= iVar7 &&
                      (auVar18._4_4_ != iVar7 || auVar18._0_4_ <= auVar14._0_4_)) {
                    puVar10[-8] = 0x20;
                  }
                  if (auVar18._12_4_ <= iVar15 &&
                      (auVar18._12_4_ != iVar15 || auVar18._8_4_ <= auVar14._8_4_)) {
                    *puVar10 = 0x20;
                  }
                  uVar11 = uVar11 + 4;
                  puVar10 = puVar10 + 0x20;
                } while (((ulong)uVar3 + 3 & 0xfffffffffffffffc) != uVar11);
              }
              iVar7 = FUN_1001601fd(plVar2,uVar13);
              if (iVar7 == 0) {
                local_58[1] = 0;
                local_58[0] = uVar13;
                iVar7 = FUN_100160894(plVar2,local_58,puVar9);
              }
              else {
                if (iVar7 == -0x80) {
                  FUN_1001c64c1(puVar9);
                  iVar7 = -0x80;
                  goto LAB_1005237ca;
                }
                uVar8 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar8,0x10);
                if (cVar6 != '\0') {
                  local_58[0] = 0x8220202;
                  local_58[1] = 0x7a0a90;
                  local_58[2] = 1;
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_58,0x12
                                     );
                }
              }
              FUN_1001c64c1(puVar9);
              if (iVar7 == 0) {
                FUN_1001e04f5("iTunesStats",param_1 + 0x2059);
                _memcpy(param_1 + 0x1fd5,(void *)(lVar4 + 0x75e0),0x420);
                *(undefined1 *)(param_1 + 0x1fcb) = 1;
                iVar7 = 0;
                goto LAB_1005237d3;
              }
            }
          }
LAB_1005237ca:
          FUN_10016013b(plVar2);
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar8,0x10);
          if (cVar6 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
            goto LAB_1005236c6;
          }
        }
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
LAB_1005236c6:
        local_4c = 0x400;
        local_58[2] = 1;
        local_58[1] = 0x7a0a90;
        local_58[0] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_58,0x12);
      }
    }
  }
LAB_1005237d3:
  if ((char)param_1[0x156] == '\0') {
    FUN_10016013b(plVar1);
  }
LAB_1005237e7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

