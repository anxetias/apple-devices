// name: FUN_10021134c
// address: 10021134c

void FUN_10021134c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  int local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "thisController != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100211696;
  }
  lVar6 = FUN_100166c1b(param_2,&cf_Status);
  uVar2 = FUN_100167d45(param_2,&cf_Progress,0xffffffff);
  local_64 = 0;
  iVar3 = FUN_100167d45(param_2,&cf_Operation,0);
  lVar7 = FUN_100166c1b(param_2,&cf_LastFailureLog);
  if (lVar7 != 0) {
    lVar8 = FUN_100166c1b(param_2,&cf_LastFailureType);
    if (lVar8 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be not NULL)";
        local_4c = 0x822;
        local_4a = "lastFailureLogTypeString";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_1002114b8;
    }
    lVar8 = _CFStringCompare(lVar8,&cf_RestoreTypeOTA,1);
    if (lVar8 == 0) {
      lVar8 = FUN_100166b7f(param_2,&cf_LastFailureInfo);
      if (lVar8 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be not NULL)";
          local_4c = 0x822;
          local_4a = "lastOTAUpdateFailureLogMetaDataDictionary";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 == '\0') goto LAB_1002114b8;
      }
      FUN_10017060f(*(undefined8 *)(param_3 + 0x2858));
      FUN_10017060f(*(undefined8 *)(param_3 + 0x2860));
      uVar9 = FUN_1001705fc(lVar7);
      *(undefined8 *)(param_3 + 0x2858) = uVar9;
      uVar9 = FUN_1001705fc(lVar8);
      *(undefined8 *)(param_3 + 0x2860) = uVar9;
    }
  }
LAB_1002114b8:
  if (lVar6 == 0) {
    bVar10 = false;
  }
  else {
    lVar7 = FUN_100173bb7(lVar6,&cf_Failed,1);
    local_64 = 0;
    if (lVar7 == 0) {
      lVar8 = FUN_10016690a(param_2,&cf_Error);
      if (lVar8 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "cfError != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        local_64 = 0x685;
        if (cVar1 == '\0') goto LAB_10021153f;
      }
      iVar4 = _AMRestorableGetIdentifyingErrorCode(lVar8);
      local_64 = iVar4;
      if (iVar4 == -4) {
        local_64 = 0x685;
      }
      if (iVar4 == 0) {
        local_64 = 0x685;
      }
    }
LAB_10021153f:
    lVar6 = FUN_100173bb7(lVar6,&cf_Successful,1);
    bVar10 = lVar6 == 0 || lVar7 == 0;
  }
  uVar9 = FUN_1001ebd46();
  iVar4 = FUN_1001e9de0(param_3 + 0x2110);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(undefined8 *)(param_3 + 0x2ac0) = uVar9;
      *(int *)(param_3 + 0x2ab8) = iVar3;
      uVar5 = 100;
      if (uVar2 < 100) {
        uVar5 = uVar2;
      }
      fVar11 = 0.0;
      if (-1 < (int)uVar2) {
        fVar11 = (float)(int)uVar5;
      }
      *(float *)(param_3 + 0x2abc) = fVar11;
      if (bVar10) {
        *(int *)(param_3 + 0x2acc) = local_64;
        *(undefined1 *)(param_3 + 0x2ac8) = 1;
        *(undefined1 *)(param_3 + 0x2ac9) = 0;
      }
      else if (iVar3 - 0xd3U < 2) {
        *(bool *)(param_3 + 0x2ac9) = iVar3 == 0xd3;
      }
      FUN_1001e9eb9(param_3 + 0x2110);
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100211696:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

