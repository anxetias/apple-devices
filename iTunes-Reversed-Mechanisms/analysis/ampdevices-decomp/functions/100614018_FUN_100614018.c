// name: FUN_100614018
// address: 100614018

int FUN_100614018(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x353) == '\0') {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "handlerData->deviceInfo.supportsAlbumArtwork";
LAB_1006142f0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (*(char *)(*(long *)(param_1 + 0x20) + 0x2b0) == '\0') {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "context->prefs->devicePrefs.createArtworkThumbs";
      goto LAB_1006142f0;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x30) != 0) {
      iVar3 = FUN_100602bb3();
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          FUN_100602d40(param_1,0x6f707461,0);
          iVar3 = FUN_1004f2b0b(lVar1,1);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              iVar4 = *(int *)(*(long *)(lVar1 + 0x30) + 0x98) +
                      *(int *)(*(long *)(lVar1 + 0x30) + 0x9c);
              lVar5 = FUN_1002f930c();
              iVar9 = 0;
              if (lVar5 != 0) {
                iVar9 = 0;
                do {
                  lVar6 = FUN_100597c13(lVar5,*(undefined8 *)(lVar1 + 0x30));
                  if (((lVar6 != 0) && (iVar3 = FUN_1002b0559(lVar6,0x42), iVar3 == 0)) &&
                     ((lVar7 = FUN_1004e38dc(lVar5), lVar6 = lVar5, lVar7 == 0 ||
                      (((lVar6 = FUN_1005974ad(lVar7,0), lVar6 != 0 ||
                        (lVar6 = *(long *)(lVar7 + 0x58), lVar6 != 0)) &&
                       (iVar3 = FUN_1002b0559(lVar6,0x42), lVar6 = lVar7, iVar3 == 0)))))) {
                    FUN_100354b6d(lVar1,lVar5,lVar6,param_1 + 0x410);
                  }
                  iVar9 = iVar9 + 1;
                  iVar3 = FUN_1001ceb24(param_1 + 0x410,0x6f707461,iVar9,iVar4,0);
                  if (iVar3 != 0) {
                    if (iVar3 != -0x80) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    goto LAB_100614420;
                  }
                  lVar5 = FUN_1002f9451(lVar5);
                } while (lVar5 != 0);
              }
              lVar5 = FUN_100315ede(*(undefined8 *)(lVar1 + 0x30));
              iVar3 = 0;
              if (lVar5 != 0) {
                do {
                  iVar9 = iVar9 + 1;
                  lVar6 = FUN_10048b5ec(*(undefined8 *)(param_1 + 0x18),
                                        *(undefined8 *)(lVar5 + 0x60));
                  if (lVar6 != 0) {
                    FUN_100355d91(lVar1,lVar5,lVar6,param_1 + 0x410);
                  }
                  iVar3 = FUN_1001ceb24(param_1 + 0x410,0x6f707461,iVar9,iVar4,0);
                  if (iVar3 != 0) {
                    if (iVar3 != -0x80) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        goto LAB_1006143bf;
                      }
                    }
                    break;
                  }
                  lVar5 = FUN_100316031(lVar5);
                } while (lVar5 != 0);
              }
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                goto LAB_1006143bf;
              }
            }
          }
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1006143bf:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_100614420:
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar1 + 0x6750);
      if (lVar5 != 0) {
        FUN_100529664(lVar5,0,0);
      }
      *(undefined2 *)(lVar1 + 0x67bc) = 0;
      *(undefined4 *)(param_1 + 0x458) = 0;
      *(undefined8 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x468) = 0;
      goto LAB_10061445d;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "handlerData->trackData != nullptr";
      goto LAB_1006142f0;
    }
  }
  iVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10061445d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

