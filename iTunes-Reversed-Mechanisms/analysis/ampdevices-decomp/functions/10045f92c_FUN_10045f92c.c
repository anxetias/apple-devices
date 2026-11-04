// name: FUN_10045f92c
// address: 10045f92c

int FUN_10045f92c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_4d0 [16];
  undefined4 *local_4c0;
  undefined8 local_4b8;
  undefined4 *local_4b0;
  undefined1 local_4a8 [16];
  long local_498;
  long local_490;
  undefined8 local_488;
  long local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_4a8);
  if (param_3 == (undefined4 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "outGUID != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    iVar5 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_10045fd3d;
  }
  local_4b8 = param_2;
  local_4b0 = param_3;
  FUN_100238ca8(local_4d0,param_1 + 0x428);
  if (*(char *)(param_1 + 0x420) == '\0') {
    *(undefined1 *)(param_1 + 0x420) = 1;
    local_488 = 0;
    if (*(long *)(param_1 + 0x488) == 0) {
      local_498 = FUN_100165ffd(DAT_1008c4d90,param_1,"LivePhotoGUIDCacheMac",&local_478,0,
                                &local_488);
      if (local_498 == 0) {
        iVar6 = FUN_10016925a(local_488);
        local_480 = 0;
        if (((iVar6 != -0x80) && (iVar6 != -0x2b)) && (iVar6 != 0)) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          local_480 = 0;
        }
      }
      else {
        lVar7 = FUN_100197bcc(DAT_1008c4d90);
        if (lVar7 == 0) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "data != nullptr";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          local_480 = 0;
          iVar6 = -0x6c;
        }
        else {
          pcVar9 = (char *)FUN_100170f3b(lVar7);
          lVar10 = FUN_100170ef7(lVar7);
          local_480 = lVar7;
          if (0 < lVar10) {
            local_490 = param_1 + 0x470;
            pcVar13 = pcVar9 + lVar10;
            pcVar11 = pcVar9;
            do {
              pcVar12 = pcVar11;
              if (*pcVar9 == '\0') {
                if (((long)pcVar9 - (long)pcVar11 < 1) ||
                   (pcVar12 = pcVar9 + 0x11, pcVar13 < pcVar12)) {
                  FUN_100460696(local_490);
                  iVar5 = FUN_100182d4d(&local_478);
                  iVar6 = -0xd0;
                  if ((iVar5 != -0x80) && (iVar5 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_10045fccb;
                }
                FUN_1001b8110(&local_58,pcVar11,(long)pcVar9 - (long)pcVar11,0x8000100);
                local_4c0 = &local_58;
                lVar7 = FUN_1004600c2(local_490,&local_58,&local_4c0);
                uVar1 = *(undefined4 *)(pcVar9 + 5);
                uVar2 = *(undefined4 *)(pcVar9 + 9);
                uVar3 = *(undefined4 *)(pcVar9 + 0xd);
                *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(pcVar9 + 1);
                *(undefined4 *)(lVar7 + 0x24) = uVar1;
                *(undefined4 *)(lVar7 + 0x28) = uVar2;
                *(undefined4 *)(lVar7 + 0x2c) = uVar3;
                FUN_1001b7a50(&local_58);
                pcVar9 = pcVar9 + 0x10;
              }
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar12;
            } while (pcVar9 < pcVar13);
          }
          iVar6 = 0;
        }
      }
LAB_10045fccb:
      FUN_10017060f(local_480);
      FUN_10017060f(local_488);
      FUN_10017060f(local_498);
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mMap.size() == 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar6 = -0x32;
      FUN_1001782e9(0,0);
    }
    iVar5 = iVar6;
    if (iVar6 == -0xd0) {
      iVar5 = 0;
    }
    if (iVar6 == -0x2b) {
      iVar5 = 0;
    }
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_10045f99b;
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 == '\0') goto LAB_10045fd31;
      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
LAB_10045fe88:
      local_46c = 0x400;
      local_474 = "Assertion failure";
      local_478 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
  }
  else {
LAB_10045f99b:
    iVar5 = FUN_10017dca4(local_4b8,local_4a8);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        lVar7 = FUN_1004117e4(param_1 + 0x470,local_4a8);
        if (lVar7 == 0) {
          iVar5 = -0x2b;
        }
        else {
          uVar1 = *(undefined4 *)(lVar7 + 0x24);
          uVar2 = *(undefined4 *)(lVar7 + 0x28);
          uVar3 = *(undefined4 *)(lVar7 + 0x2c);
          *local_4b0 = *(undefined4 *)(lVar7 + 0x20);
          local_4b0[1] = uVar1;
          local_4b0[2] = uVar2;
          local_4b0[3] = uVar3;
          iVar5 = 0;
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
          goto LAB_10045fe88;
        }
      }
    }
  }
LAB_10045fd31:
  FUN_10015a142(local_4d0);
LAB_10045fd3d:
  FUN_1001b7a50(local_4a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

