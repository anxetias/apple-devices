// name: FUN_10038b674
// address: 10038b674

int FUN_10038b674(long param_1,long param_2,long param_3,undefined4 param_4,void *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char local_d58 [3];
  char local_d55;
  undefined1 local_d08 [72];
  undefined8 local_cc0;
  void *local_cb8;
  undefined1 local_cb0 [16];
  undefined4 local_ca0;
  int local_c9c;
  undefined1 local_c98 [512];
  undefined1 local_a98 [512];
  undefined1 local_898 [1056];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_cb8 = param_5;
  local_ca0 = param_4;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "fileParent != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != 0) {
      if (DAT_1008be030 != '\0') goto LAB_10038b6d8;
      iVar3 = FUN_1001c0f9c();
      if (iVar3 == -0x80) goto LAB_10038b7f7;
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_10038b7f7;
      }
      if (DAT_1008be030 == '\0') {
        iVar3 = FUN_1001e9c3e(&DAT_1008be038);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            DAT_1008be030 = '\x01';
            FUN_1001c0fad();
            FUN_1001c0fbe(FUN_10038bf15,0,0,0,0);
            goto LAB_10038b6d8;
          }
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        FUN_1001c0fad();
        goto LAB_10038b7f7;
      }
      FUN_1001c0fad();
LAB_10038b6d8:
      FUN_100238ca8(local_cb0,&DAT_1008be038);
      local_c9c = FUN_10017ecc9(param_2,param_3,local_898,local_d58);
      if (local_c9c == 0) {
        if (local_d58[0] == '\0') {
          if (local_d55 == '\0') {
            iVar3 = FUN_10017cc65(local_898,0x64617461,3,&local_cc0);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                FUN_10017cdfb(local_cc0);
                goto LAB_10038b717;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                goto LAB_10038ba4c;
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "fileInfo.isLocked == false";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            iVar3 = -0x2d;
            FUN_1001782e9(0,0);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "fileInfo.isDirectory == false";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar3 = -0x516;
          FUN_1001782e9(0,0);
        }
      }
      else {
LAB_10038b717:
        for (lVar4 = FUN_100495ce0(param_1); lVar4 != 0; lVar4 = FUN_100495d97(lVar4)) {
          lVar1 = lVar4 + 0x490;
          cVar2 = FUN_100161f0e(lVar1);
          if (cVar2 != '\0') {
            FUN_100160cb6(lVar1,*(undefined8 *)(lVar4 + 0x488));
            FUN_10016013b(lVar1);
            *(undefined8 *)(lVar4 + 0x488) = 0;
            FUN_1001c62d9(lVar4 + 0x68,0x420);
          }
        }
        FUN_1001e04f5("Image DB Temp",local_a98);
        FUN_1001e04f5("tmp",local_c98);
        FUN_10053600d(param_2,local_a98,local_c98);
        iVar3 = FUN_1001891ea(param_2,local_a98,local_478);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar3 = FUN_10015fff1(local_478,local_d08,0x20000);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                iVar3 = FUN_10038bf26(param_1,local_ca0,local_d08);
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                FUN_10016013b(local_d08);
                if (iVar3 != 0) {
                  FUN_100182d4d(local_478);
                  FUN_1001c62d9(param_1 + 4000,0x420);
                  *(undefined1 *)(param_1 + 5) = 0;
                  goto LAB_10038bbae;
                }
                FUN_100189139(local_478,0x70707);
                if (local_c9c == 0) {
                  iVar3 = FUN_100189700(local_898,local_478);
                  if (iVar3 != 0) {
                    FUN_100182d4d(local_898);
                    goto LAB_10038bcb8;
                  }
                  FUN_100182d4d(local_478);
                }
                else {
LAB_10038bcb8:
                  FUN_1001894bc(local_478,param_3,local_898);
                }
                _memcpy((void *)(param_1 + 4000),local_898,0x420);
                *(undefined1 *)(param_1 + 5) = 1;
                iVar3 = 0;
                if (local_cb8 != (void *)0x0) {
                  _memcpy(local_cb8,local_898,0x420);
                }
                goto LAB_10038bbae;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            FUN_100182d4d(local_478);
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_10038ba4c:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
LAB_10038bbae:
      FUN_10015a142(local_cb0);
      goto LAB_10038b7f7;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "fileName != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_10038b7f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

