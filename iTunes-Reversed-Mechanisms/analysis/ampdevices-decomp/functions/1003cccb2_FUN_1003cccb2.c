// name: FUN_1003cccb2
// address: 1003cccb2

int FUN_1003cccb2(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x822;
      local_45a = "ringtoneAssetPath != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1003ccf01;
  }
  lVar3 = 0;
  iVar2 = FUN_1001888ba(param_1 + 0x159c8,"Ringtones.plist",&local_468,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_10016aa24(DAT_1008c4d90,&local_468,1,0);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "ringtonesFileDict != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        lVar3 = 0;
      }
      else {
        lVar4 = FUN_100166b7f(lVar3,&cf_Ringtones);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_3a = "ringtonesDict != nullptr";
LAB_1003cd0b7:
            local_3c = 0x822;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
        }
        else {
          cVar1 = FUN_100171439(lVar4,param_2);
          if (cVar1 != '\0') {
            FUN_100171552(lVar4,param_2);
            lVar4 = FUN_100171426(lVar4);
            if (lVar4 < 1) {
              iVar2 = FUN_100182d4d(&local_468);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_1003ccfe6;
                }
              }
            }
            else {
              iVar2 = FUN_10016a60e(lVar3,param_1 + 0x159c8,"Ringtones.plist",0,0,100,0);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1003ccfe6:
                  local_3c = 0x400;
                  local_44 = "Assertion failure";
                  local_48 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
            }
            goto LAB_1003ccef9;
          }
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_3a = "JRCFDictionaryContainsKey(ringtonesDict, ringtoneAssetPath)";
            goto LAB_1003cd0b7;
          }
        }
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x2b;
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      lVar3 = 0;
    }
  }
LAB_1003ccef9:
  FUN_10017060f(lVar3);
LAB_1003ccf01:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

