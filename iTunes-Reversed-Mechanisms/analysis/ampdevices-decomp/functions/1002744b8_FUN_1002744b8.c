// name: FUN_1002744b8
// address: 1002744b8

int FUN_1002744b8(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  long local_78;
  long *local_70;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_64 = *(int *)(*(long *)(param_3 + 0x78) + 0x28);
  if (local_64 == 0) {
    for (lVar7 = FUN_100273cfb(param_1); lVar7 != 0; lVar7 = FUN_100273e3a(lVar7)) {
      if (((*(int *)(lVar7 + 0x10) == 4) && (*(int *)(lVar7 + 0xc0) == 0)) &&
         (*(int *)(lVar7 + 0x100) == *(int *)(*(long *)(param_3 + 0x78) + 0xc))) {
        lVar7 = FUN_1003a0291(lVar7);
        *param_4 = lVar7;
        iVar4 = 0;
        goto LAB_100274827;
      }
    }
    uVar5 = *(undefined4 *)(*(long *)(param_3 + 0x78) + 0xc);
    uVar3 = FUN_100474865(param_3);
    iVar6 = FUN_100273a26(param_1,0,uVar5,0,uVar3,param_4);
    iVar4 = 0;
    if (iVar6 != 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      iVar4 = iVar6;
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    goto LAB_100274827;
  }
  lVar7 = param_2 + 0x2070;
  local_98 = param_2;
  local_5c = local_64;
  FUN_1001dccc7(lVar7);
  iVar4 = FUN_10047de81(param_3,&local_a8,&local_60);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      if (local_60 != 0) {
        local_90 = lVar7;
        local_70 = param_4;
        if (local_98 != param_1) {
          FUN_1001dccc7(param_1 + 0x2070);
        }
        local_78 = param_1;
        lVar7 = FUN_100273cfb(param_1);
        local_80 = param_3;
        if (lVar7 == 0) {
LAB_1002748b3:
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          do {
            if (*(int *)(lVar7 + 0x10) == 4) {
              if ((*(long *)(lVar7 + 0xb8) == 0) || (*(int *)(lVar7 + 0xc0) == 0)) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "currAlbumInfo->HasAlbumName()";
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              iVar4 = FUN_1003a2c9c(lVar7,&local_a0,&local_88);
              if (iVar4 != -0x80) {
                if (iVar4 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  if (iVar4 != 0) goto LAB_10027465e;
                }
                iVar6 = local_60;
                uVar1 = local_a0;
                uVar8 = local_a8;
                if (*(int *)(lVar7 + 0x100) == *(int *)(*(long *)(param_3 + 0x78) + 0xc)) {
                  local_84 = local_88;
                  uVar5 = FUN_1003a3194();
                  param_3 = local_80;
                  cVar2 = FUN_1001e339d(uVar8,iVar6,uVar1,local_84,uVar5);
                  if (cVar2 != '\0') {
                    lVar7 = FUN_1003a0291(lVar7);
                    *local_70 = lVar7;
                    goto LAB_1002748b3;
                  }
                }
              }
            }
LAB_10027465e:
            lVar7 = FUN_100273e3a(lVar7);
          } while (lVar7 != 0);
        }
        FUN_1001dcd18(local_90);
        plVar9 = local_70;
        if (local_98 == local_78) {
          if (*local_70 != 0) goto LAB_100274827;
          iVar4 = FUN_1001dcecf(local_78 + 0x2070,local_5c);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_100274ad6;
            }
          }
        }
        else {
          lVar7 = local_78 + 0x2070;
          FUN_1001dcd18(lVar7);
          plVar9 = local_70;
          if (*local_70 != 0) goto LAB_100274827;
          iVar4 = FUN_1001de586(local_90,local_5c,lVar7,&local_64);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100274ad6:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        iVar4 = local_64;
        uVar5 = *(undefined4 *)(*(long *)(local_80 + 0x78) + 0xc);
        uVar3 = FUN_100474865();
        iVar4 = FUN_100273a26(local_78,iVar4,uVar5,0,uVar3,plVar9);
        if (iVar4 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        FUN_1003a2e0a(*plVar9,*(undefined8 *)(local_80 + 0x28));
        goto LAB_100274827;
      }
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "seriesNameLen != 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      iVar4 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_1001dcd18(lVar7);
LAB_100274827:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

