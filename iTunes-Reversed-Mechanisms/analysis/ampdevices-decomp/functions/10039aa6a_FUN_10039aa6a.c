// name: FUN_10039aa6a
// address: 10039aa6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039aa6a(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [8];
  int local_280 [4];
  float local_270 [4];
  double local_260;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_58,"UpdateIPod");
  FUN_1001cc232(local_288,&local_58);
  FUN_1001b7a50(&local_58);
  cVar4 = (**(code **)(*param_1 + 0x28))(param_1,0,0,0,0);
  if (cVar4 == '\0') {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "IsRestoreOrUpdateInProgress()";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    FUN_1001c334a(local_270,((int)param_1[0x155] == 1) + 0x10cf004f);
    FUN_1001b8dfc(local_280,(long)param_1 + 0x466);
    FUN_1001bbec4(&local_58,local_270,local_280);
    FUN_1001bb41a(&local_58,local_258);
    FUN_1001b7a50(&local_58);
    FUN_1001b7a50(local_280);
    FUN_1001b7a50(local_270);
    local_2e8 = *param_2;
    uStack_2e4 = param_2[1];
    uStack_2e0 = param_2[2];
    uStack_2dc = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar11 = *plVar11 + 1;
      UNLOCK();
    }
    FUN_1001ceb3c(&local_2e8,0x7570726d,0xffffffffffffffff,0xffffffffffffffff,local_258);
    plVar11 = (long *)CONCAT44(uStack_2dc,uStack_2e0);
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_260 = (double)FUN_1001ebd46();
    if (*(char *)((long)param_1 + 0x464) == '\x01') {
      local_260 = local_260 + DAT_10070e580;
      uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
      do {
        dVar14 = (double)FUN_1001ebd46();
        if (local_260 <= dVar14) break;
        FUN_1001727b4((int)DAT_100712580,uVar10,0);
        local_2d8 = *param_2;
        uStack_2d4 = param_2[1];
        uStack_2d0 = param_2[2];
        uStack_2cc = param_2[3];
        if (*(long *)(param_2 + 2) != 0) {
          LOCK();
          plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
          *plVar11 = *plVar11 + 1;
          UNLOCK();
        }
        FUN_1001cebc4(&local_2d8,0,0xffffffffffffffff,0);
        plVar11 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
        }
      } while (*(char *)((long)param_1 + 0x464) != '\0');
    }
    *(undefined1 *)(param_1 + 0x154) = 1;
    iVar5 = FUN_1001ee6ff(FUN_10039bc84,param_1,0xfffffffe,0,0,"");
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        if ((char)param_1[0x154] == '\x01') {
          uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
          local_260 = (double)CONCAT44(local_260._4_4_,DAT_100700b24);
          do {
            local_270[0] = 0.0;
            iVar5 = _VVVGetProgress(param_1[1],param_1[0x87],local_270);
            if (iVar5 != 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "result == eVVVUpdateSuccess";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            if ((local_270[0] != local_260._0_4_) || (NAN(local_270[0]) || NAN(local_260._0_4_))) {
              lVar12 = 0;
              if (local_270[0] != DAT_10070bcfc) {
                lVar12 = (long)(local_270[0] * DAT_100717f3c);
              }
              if (NAN(local_270[0]) || NAN(DAT_10070bcfc)) {
                lVar12 = (long)(local_270[0] * DAT_100717f3c);
              }
              local_2c8 = *param_2;
              uStack_2c4 = param_2[1];
              uStack_2c0 = param_2[2];
              uStack_2bc = param_2[3];
              if (*(long *)(param_2 + 2) != 0) {
                LOCK();
                plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
                *plVar11 = *plVar11 + 1;
                UNLOCK();
              }
              FUN_1001ceb3c(&local_2c8,0x7570726d,lVar12,
                            -(ulong)(-(uint)(local_270[0] == DAT_10070bcfc) & 1) | 1000,local_258);
              plVar11 = (long *)CONCAT44(uStack_2bc,uStack_2c0);
              if (plVar11 != (long *)0x0) {
                LOCK();
                plVar1 = plVar11 + 1;
                lVar12 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar12 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  std::__shared_weak_count::__release_weak();
                }
              }
              local_260 = (double)CONCAT44(local_260._4_4_,local_270[0]);
            }
            FUN_1001727b4((int)DAT_100712580,uVar10,0);
            local_2b8 = *param_2;
            uStack_2b4 = param_2[1];
            uStack_2b0 = param_2[2];
            uStack_2ac = param_2[3];
            if (*(long *)(param_2 + 2) != 0) {
              LOCK();
              plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
              *plVar11 = *plVar11 + 1;
              UNLOCK();
            }
            FUN_1001cebc4(&local_2b8,0,0xffffffffffffffff,0);
            plVar11 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar1 = plVar11 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                std::__shared_weak_count::__release_weak();
              }
            }
          } while ((char)param_1[0x154] != '\0');
        }
        iVar5 = 0;
        if (*(int *)((long)param_1 + 0xaa4) == 0) {
          if ((int)param_1[0x8c] != 1) {
            uVar13 = 0xffffffffffffffff;
            do {
              iVar5 = 0;
              if (uVar13 == 9) goto LAB_10039af83;
              uVar2 = uVar13 + 1;
              piVar3 = &DAT_1007462c8 + uVar13;
              uVar13 = uVar2;
            } while (*piVar3 != (int)param_1[0x8c]);
            if (9 < uVar2) goto LAB_10039af83;
          }
          local_260 = (double)FUN_1001ebd46();
          local_2a8 = *param_2;
          uStack_2a4 = param_2[1];
          uStack_2a0 = param_2[2];
          uStack_29c = param_2[3];
          if (*(long *)(param_2 + 2) != 0) {
            LOCK();
            plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
            *plVar11 = *plVar11 + 1;
            UNLOCK();
          }
          FUN_1001ceb3c(&local_2a8,0x7570726d,0,0xffffffffffffffff,0);
          plVar11 = (long *)CONCAT44(uStack_29c,uStack_2a0);
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              std::__shared_weak_count::__release_weak();
            }
          }
          iVar5 = 0;
          if (*(char *)((long)param_1 + 0x464) == '\0') {
            local_260 = local_260 + _DAT_100710490;
            uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
            do {
              dVar14 = (double)FUN_1001ebd46();
              iVar5 = 0;
              if (local_260 <= dVar14) break;
              FUN_1001727b4((int)DAT_100712580,uVar10,0);
              local_298 = *param_2;
              uStack_294 = param_2[1];
              uStack_290 = param_2[2];
              uStack_28c = param_2[3];
              if (*(long *)(param_2 + 2) != 0) {
                LOCK();
                plVar11 = (long *)(*(long *)(param_2 + 2) + 8);
                *plVar11 = *plVar11 + 1;
                UNLOCK();
              }
              FUN_1001cebc4(&local_298,0xffffffffffffffff,0xffffffffffffffff,0);
              plVar11 = (long *)CONCAT44(uStack_28c,uStack_290);
              if (plVar11 != (long *)0x0) {
                LOCK();
                plVar1 = plVar11 + 1;
                lVar12 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar12 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  std::__shared_weak_count::__release_weak();
                }
              }
            } while (*(char *)((long)param_1 + 0x464) == '\0');
          }
        }
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
LAB_10039af83:
  iVar8 = (int)param_1[0x155];
  if ((int)param_1[0x8a] != 0) {
    uVar10 = FUN_1005e9a2c();
    FUN_1005f24a4(uVar10,(int)param_1[0x8a]);
    *(undefined4 *)(param_1 + 0x8a) = 0;
  }
  *(undefined4 *)(param_1 + 0x155) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)((long)param_1 + 0xaa4);
  }
  iVar6 = FUN_100189d0b(param_1 + 0xd0,1);
  if (iVar6 != 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "::JRFileSpecScheduleDeleteDirectory(&mExtractedFirmwareBundleFolderSpec, kDeleteLockedFiles) == noErr"
      ;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar6 = (int)param_1[0x89];
  if (iVar6 == 0) {
    iVar6 = *(int *)((long)param_1 + 0x44c);
  }
  plVar11 = (long *)FUN_10039a28c();
  uVar10 = (**(code **)(*plVar11 + 0x58))(plVar11);
  FUN_1001c6987(uVar10,0x7375726d,iVar6,(long)iVar5,0);
  if (iVar5 == 0) {
    if ((param_1[1] != 0) && (param_1[0x87] != 0)) {
      iVar7 = _VVVGetCompletionInstructions(param_1[1],param_1[0x87],local_280);
      if (iVar7 != 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "result == eVVVUpdateSuccess";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        local_280[0] = 0;
      }
      lVar12 = FUN_10026450d(param_1[0x8b]);
      if (((lVar12 != 0) && (iVar7 = FUN_100266eca(lVar12), iVar7 != -0x80)) && (iVar7 != 0)) {
        local_260 = (double)FUN_1001cc310();
        cVar4 = _os_log_type_enabled(local_260,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
          __os_log_error_impl(0x100000000,local_260,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      FUN_1001b7a44(local_270);
      iVar7 = local_280[0];
      if (local_280[0] == 0) {
        iVar8 = (uint)(iVar8 == 1) * 3 + 0x10cc00f6;
LAB_10039b5a6:
        uVar10 = FUN_100416f20(0x69506f64,iVar8);
        FUN_1001b81f2(local_270,uVar10);
      }
      else {
        if (local_280[0] == 2) {
          iVar8 = (uint)(iVar8 == 1) * 3 + 0x10cc00f5;
          goto LAB_10039b5a6;
        }
        if (local_280[0] == 1) {
          iVar8 = (uint)(iVar8 == 1) * 3 + 0x10cc00f4;
          goto LAB_10039b5a6;
        }
      }
      cVar4 = FUN_1001b8428(local_270);
      if (cVar4 == '\0') {
        if (iVar7 == 0) {
          FUN_1001b7a44(&local_58);
          FUN_100398718(local_270,&local_58);
          FUN_1001b7a50(&local_58);
        }
        else {
          FUN_100450c38(local_270);
        }
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220302;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "0";
          local_42 = 0x822;
          local_40 = "Unrecognized iPod software update / restore completion instructions!";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: %{public}s (%{public}s)",
                              &local_58,0x20);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1001b7a50(local_270);
      goto LAB_10039b275;
    }
    uVar10 = FUN_1001cc310();
  }
  else {
    if ((iVar5 + 0x80U & 0xffffff7f) != 0) {
      if (iVar5 < 0x581) {
        if ((iVar5 != 0x462) && (iVar5 != 0x465)) {
LAB_10039b1f3:
          FUN_100216f84(1,(uint)(iVar8 == 1) * 5 + 0x10eb,(long)param_1 + 0x466,iVar5,param_1 + 0xcd
                        ,0);
        }
      }
      else if (1 < iVar5 - 0x581U) {
        if (iVar5 != 0x594) goto LAB_10039b1f3;
        uVar10 = FUN_100416f20(0x69506f64,iVar8 == 1 | 0x10cc00a8);
        FUN_1001b7eb0(&local_58,uVar10);
        FUN_1001b8dfc(local_270,(long)param_1 + 0x466);
        FUN_100450a08(&local_58,local_270,param_1 + 0xcd);
        FUN_1001b7a50(local_270);
        FUN_1001b7a50(&local_58);
      }
    }
    if ((param_1[1] != 0) && (param_1[0x87] != 0)) {
      lVar12 = FUN_10026450d(param_1[0x8b]);
      if (lVar12 != 0) {
        FUN_100265fff(lVar12);
      }
      goto LAB_10039b275;
    }
    uVar10 = FUN_1001cc310();
  }
  cVar4 = _os_log_type_enabled(uVar10,0x10);
  if (cVar4 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "IsIPodSet()";
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10039b275:
  iVar8 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar8 != 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "UnsetDevice() == noErr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  plVar11 = (long *)FUN_10039a28c();
  uVar10 = (**(code **)(*plVar11 + 0x58))(plVar11);
  FUN_1001c6987(uVar10,0x65727573,iVar6,(long)iVar5,0);
  FUN_1001cc23c(local_288);
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

