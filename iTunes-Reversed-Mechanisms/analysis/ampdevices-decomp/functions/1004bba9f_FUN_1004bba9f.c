// name: FUN_1004bba9f
// address: 1004bba9f

void FUN_1004bba9f(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "DownloadItem_IsValid(downloadItem)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004bbc06;
  }
  cVar1 = FUN_1001c19cd();
  if (cVar1 != '\0') goto LAB_1004bbbfe;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inItem != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  cVar1 = FUN_1004aa626(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "DownloadItem_IsValid(inItem)";
LAB_1004bbd91:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1004bbbf5:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "inItem->downloadManager != __null";
        goto LAB_1004bbd91;
      }
      goto LAB_1004bbbf5;
    }
    if (*(char *)(param_1 + 0x778) != '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "( (inItem)->isContainer == false )";
        goto LAB_1004bbd91;
      }
      goto LAB_1004bbbf5;
    }
    if (*(char *)(param_1 + 0x1b98) == '\0') {
      FUN_1004bb8f0(param_1 + 0x7b8);
    }
    if (*(char *)(param_1 + 0x1b99) != '\0') {
      lVar3 = FUN_100490af0(param_1 + 0xc0);
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 8) == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_2a = "trackInfo != __null";
            goto LAB_1004bbd91;
          }
        }
        else {
          lVar3 = FUN_1004add25(param_1 + 0xc0);
          if (lVar3 != 0) {
            if (*(char *)(param_1 + 0x1b9a) == '\0') {
              FUN_1004bc0d9(lVar3);
            }
            else {
              FUN_1004bbe6a(param_1,lVar3);
            }
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 != 0) && (*(char *)(lVar3 + 0x17) != '\0')) {
              FUN_1001c6987(lVar3 + 0x80,0x646d6963,param_1,0,0);
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 != 0) && (*(char *)(lVar3 + 0x17) != '\0')) {
                FUN_1001c6987(lVar3 + 0x80,0x646d6970,param_1,0,0);
              }
            }
            goto LAB_1004bbbfe;
          }
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_2a = "trackInstance != __null";
            goto LAB_1004bbd91;
          }
        }
        goto LAB_1004bbbf5;
      }
    }
  }
LAB_1004bbbfe:
  FUN_1004aa496(param_1);
LAB_1004bbc06:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

