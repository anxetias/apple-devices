// name: copyRootMediaGroup:fromMediaSource:resultRootMediaGroup:forceUpdate:progressInfo:
// address: 100451d5d

/* Function Stack Size: 0x30 bytes */

int MediaLibraryObserver::
    copyRootMediaGroup_fromMediaSource_resultRootMediaGroup_forceUpdate_progressInfo_
              (ID param_1,SEL param_2,int param_3,ID param_4,ID *param_5,bool param_6,
              ProgressInfo *param_7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  double local_88;
  ID local_80;
  undefined **local_78;
  int local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = *(ID *)(param_1 + 0x18);
  if ((local_80 != 0 & ((byte)param_6 ^ 1)) == 0) {
    local_78 = &PTR_FUN_100859a48;
    local_70 = param_3;
    local_58 = &local_78;
    iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_100700af8,param_1,PTR_s_waitForProperty_onObject_withTim_10088d280,
                       &cf_rootMediaGroup,param_4,&local_78,param_7,&local_80);
    if (local_58 == &local_78) {
      lVar4 = 0x20;
LAB_100451e37:
      (**(code **)((long)*local_58 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_58 != (undefined ***)0x0) goto LAB_100451e37;
    }
    if (iVar3 == 0xffffff80) goto LAB_100451fd6;
    if (iVar3 != 0) {
      if (iVar3 == 0x6b8) goto LAB_100451fd6;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      if (iVar3 != 0) goto LAB_100451fd6;
    }
    if (local_80 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "rootMediaGroup != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar3 = 0;
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_100451fd6;
    }
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_lock_10088d288);
    (*(code *)PTR__objc_retain_10082c7b8)(local_80);
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x18));
    }
    *(ID *)(param_1 + 0x18) = local_80;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_attributes_10088d2b0);
    lVar4 = FUN_1001705fc(uVar5);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "attributesDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar6 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      cVar2 = FUN_100166a6a(lVar4,&cf_modificationDate,&local_88);
      if (cVar2 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "JRCFDictionaryGetAbsoluteTime(attributesDictionary, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"modificationDate\" \"\")), &libraryModificationDateAbsoluteTime)"
          ;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10017060f(lVar4);
      uVar7 = -(ulong)(0.0 < local_88 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
      uVar6 = (undefined4)
              (long)(double)(~uVar7 & DAT_100700458 |
                            (ulong)(local_88 +
                                   *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) &
                            uVar7);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    (*(code *)PTR__objc_retain_10082c7b8)(local_80);
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_unlock_10088d290);
  }
  else {
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_lock_10088d288);
    local_80 = *(ID *)(param_1 + 0x18);
    (*(code *)PTR__objc_retain_10082c7b8)();
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),PTR_s_unlock_10088d290);
  }
  iVar3 = 0;
LAB_100451fd6:
  *param_5 = local_80;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

