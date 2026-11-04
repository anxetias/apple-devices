// name: FUN_10056747a
// address: 10056747a

int FUN_10056747a(uint param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_70;
  int local_68;
  uint local_64;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_64 = param_1;
  lVar5 = FUN_1001b83ae(param_4);
  local_60 = FUN_1001b83f0(param_4);
  lVar6 = FUN_100499456(param_3);
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "stringCache != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_10056775e;
  }
  cVar2 = FUN_1001b8428(param_4);
  if (cVar2 != '\0') {
    if ((local_64 >> 10 & 1) == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "PhotoImportOptions::UsePhotosApp(importOptions)";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x2b;
    }
    else {
      if (*(int *)(param_3 + 0x44) != 0) {
        FUN_1001dcff5(lVar6);
        *(undefined4 *)(param_3 + 0x44) = 0;
      }
      if (*(int *)(param_3 + 0x478) != 0) {
        FUN_1001dcff5(lVar6);
        *(undefined4 *)(param_3 + 0x478) = 0;
      }
      *(undefined1 *)(param_3 + 0x53) = 3;
      cVar2 = FUN_10058f82f(param_3);
      if (cVar2 == '\0') {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "IsCloudITImageInstance(instance)";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined1 *)(*(long *)(*(long *)(param_3 + 8) + 0x10) + 0x1429) = 1;
      iVar3 = 0;
    }
    goto LAB_10056775e;
  }
  uVar8 = FUN_1001b83f0(param_2);
  if ((uVar8 < local_60) && (cVar2 = FUN_1001ba114(param_4,param_2,0x1b1), cVar2 != '\0')) {
    lVar9 = FUN_1001b83f0(param_2);
    lVar5 = lVar5 + lVar9;
    lVar9 = FUN_1001b83f0(param_2);
    local_60 = local_60 - lVar9;
  }
  if (((*(int *)(param_3 + 0x44) == 0) || (*(int *)(param_3 + 0x478) == 0)) ||
     (iVar3 = FUN_1001dd8b2(lVar6,*(int *)(param_3 + 0x478),&local_70,&local_68), iVar3 == -0x80)) {
LAB_100567684:
    bVar1 = false;
  }
  else {
    if (iVar3 != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_100567684;
    }
    if (local_60 != (long)local_68) goto LAB_100567684;
    cVar2 = FUN_1001c5630(local_70,lVar5,local_60);
    bVar1 = true;
    if (cVar2 == '\0') goto LAB_100567684;
  }
  iVar3 = FUN_1001ddddc(lVar6,lVar5,local_60,param_3 + 0x478);
  if (iVar3 == -0x80) goto LAB_10056775e;
  if (iVar3 == 0) {
    iVar4 = 0;
    iVar3 = 0;
    if (bVar1) goto LAB_10056775e;
    FUN_1001dcff5(lVar6,*(undefined4 *)(param_3 + 0x44));
    *(undefined4 *)(param_3 + 0x44) = 0;
    *(undefined1 *)(param_3 + 0x53) = 0;
    iVar3 = iVar4;
    if ((((local_64 & 0x40) != 0) || (iVar4 = FUN_10058ed73(param_3), iVar4 == -0x80)) ||
       (iVar4 == 0)) goto LAB_10056775e;
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') goto LAB_10056775e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
    iVar3 = 0;
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') goto LAB_10056775e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_10056775e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

