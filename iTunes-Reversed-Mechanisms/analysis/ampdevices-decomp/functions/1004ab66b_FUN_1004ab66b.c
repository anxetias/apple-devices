// name: FUN_1004ab66b
// address: 1004ab66b

int FUN_1004ab66b(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_668 [512];
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
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x822;
      local_45a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x1f49;
    goto LAB_1004ab920;
  }
  if ((param_2 == '\0') && (lVar3 = *(long *)(param_1 + 0x218), lVar3 != 0)) {
LAB_1004ab798:
    cVar1 = FUN_1004aa626(param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "DownloadItem_IsValid(inItem)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = 0x1f49;
    }
    else {
      iVar2 = FUN_1004b013c(param_1,1,&local_468);
      if (iVar2 == 0) {
        FUN_1001e04f5("Info.plist",local_668);
        iVar2 = FUN_10016a4ce(lVar3,&local_468,local_668,0,1,100,0);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_1004abd68;
          }
        }
      }
      else {
        if (iVar2 == -0x80) {
LAB_1004ab7d0:
          iVar2 = -0x80;
          goto LAB_1004ab920;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1004abd68:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      if (iVar2 == -0x22) {
        iVar2 = -0x22;
        if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x144) & 0x40) == 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x5ca) = 1;
        }
      }
      else if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1004ab920;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_1004ab920;
    local_45a = (char *)CONCAT44(local_45a._4_4_,iVar2);
  }
  else {
    cVar1 = FUN_1004aa626(param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        local_45a = "DownloadItem_IsValid(inItem)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = 0x1f49;
    }
    else {
      lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          local_45a = "dictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_10017060f(0);
        iVar2 = -0x6c;
      }
      else {
        if (*(char *)(param_1 + 0x778) != '\0') {
          FUN_100168b0b(lVar3,&cf_is_container,1,1);
          FUN_100168746(lVar3,&cf_num_items,(long)*(int *)(param_1 + 0x7a0),0);
LAB_1004ab720:
          if (*(code **)(param_1 + 0x88) != (code *)0x0) {
            (**(code **)(param_1 + 0x88))(param_1,0x72666164,lVar3,0,param_1 + 0x90);
          }
LAB_1004ab742:
          FUN_10017060f(*(undefined8 *)(param_1 + 0x218));
          *(long *)(param_1 + 0x218) = lVar3;
          goto LAB_1004ab798;
        }
        iVar2 = FUN_1004aa912(param_1,&local_468);
        if (iVar2 == 0) {
          iVar2 = FUN_10017d477(&local_468,0,local_668);
          if (iVar2 == -0x80) {
            FUN_10017060f(lVar3);
            goto LAB_1004ab7d0;
          }
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
            FUN_10017060f(lVar3);
            if (iVar2 != 0) goto LAB_1004ab903;
            lVar3 = 0;
            goto LAB_1004ab742;
          }
          FUN_100168550(lVar3,&cf_download_file_name,local_668,0);
          if (*(long *)(param_1 + 0x1b60) != -1) {
            FUN_100168746(lVar3,&cf_size,*(long *)(param_1 + 0x1b60),0);
          }
          FUN_100168746(lVar3,&cf_bytes_read,*(undefined8 *)(param_1 + 0x12f0),0);
          if (((*(byte *)(param_1 + 0x7df) & 0x40) == 0) ||
             (iVar2 = FUN_1004b0638(param_1,lVar3), iVar2 == 0)) {
            FUN_1004b08cf(param_1 + 0x1bc0,lVar3);
            if (*(char *)(param_1 + 0x1ce) != '\0') {
              FUN_100168b0b(lVar3,&cf_dpm,1,1);
            }
            goto LAB_1004ab720;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_1004abdaf;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1004abdaf:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        FUN_10017060f(lVar3);
      }
    }
LAB_1004ab903:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_1004ab920;
    local_45a = (char *)CONCAT44(local_45a._4_4_,iVar2);
  }
  local_45c = 0x400;
  local_464 = "Assertion failure";
  local_468 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_468,0x12);
LAB_1004ab920:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

