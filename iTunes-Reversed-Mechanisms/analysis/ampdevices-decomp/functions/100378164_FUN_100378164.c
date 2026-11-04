// name: FUN_100378164
// address: 100378164

undefined8 FUN_100378164(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_10036d859();
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffdd;
    goto LAB_1003782ca;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      FUN_1001e1c39(lVar4 + 0x434,param_3);
    }
    lVar5 = 0;
    iVar2 = 0;
  }
  else {
    FUN_1001c62d9(param_2,0x498);
    FUN_10037897b(lVar4,param_2,param_3);
    iVar2 = FUN_100378a7c(lVar4,param_2 + 0x468);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 0;
        lVar5 = FUN_10036d2f1(lVar4,0);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "afcConnection != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          lVar5 = 0;
          FUN_1001782e9(0,0);
          iVar2 = -0x17ffbfe9;
        }
        else {
          iVar3 = _AFCConnectionGetFSBlockSize(lVar5);
          *(int *)(param_2 + 0x490) = iVar3;
          if (iVar3 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "volumeInfo->maxIOSize != 0";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            iVar2 = 0;
            FUN_1001782e9(0,0);
            *(undefined4 *)(param_2 + 0x490) = 0x200000;
          }
        }
        goto LAB_1003782b2;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    lVar5 = 0;
  }
LAB_1003782b2:
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar4);
  uVar6 = FUN_10036db97(iVar2);
LAB_1003782ca:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

