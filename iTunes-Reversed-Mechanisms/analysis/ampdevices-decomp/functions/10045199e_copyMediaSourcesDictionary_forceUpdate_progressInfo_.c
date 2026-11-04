// name: copyMediaSourcesDictionary:forceUpdate:progressInfo:
// address: 10045199e

/* Function Stack Size: 0x24 bytes */

int MediaLibraryObserver::copyMediaSourcesDictionary_forceUpdate_progressInfo_
              (ID param_1,SEL param_2,ID *param_3,bool param_4,ProgressInfo *param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  char *local_90;
  undefined **local_88 [4];
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = *(char **)(param_1 + 0x10);
  if ((local_90 != (char *)0x0 & ((byte)param_4 ^ 1)) == 0) {
    IVar4 = getMediaLibrary(param_1,PTR_s_getMediaLibrary_10088d278);
    local_88[0] = &PTR_FUN_1008599b8;
    local_68 = local_88;
    iVar3 = (*(code *)puVar1)(DAT_100700af8,param_1,PTR_s_waitForProperty_onObject_withTim_10088d280
                              ,&cf_mediaSources,IVar4,local_88,param_5,&local_90);
    if (local_68 == local_88) {
      lVar5 = 0x20;
LAB_100451a92:
      (**(code **)((long)*local_68 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_68 != (undefined ***)0x0) goto LAB_100451a92;
    }
    if (iVar3 == 0xffffff80) goto LAB_100451c4d;
    if (iVar3 != 0) {
      if (iVar3 == 0x6b8) goto LAB_100451c4d;
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar3 != 0) goto LAB_100451c4d;
    }
    if (local_90 == (char *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "dictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar3 = 0;
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_100451c4d;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_58 = 0x8420102;
      local_54 = local_90;
      __os_log_impl(0x100000000,uVar6,2,"sync> got mediaSources %{public}@",&local_58,0xc);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_lock_10088d288);
    (*(code *)PTR__objc_retain_10082c7b8)(local_90);
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x10));
    }
    (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x28));
    puVar1 = PTR_s_objectForKey__10088be28;
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_90,PTR_s_objectForKey__10088be28,&cf_com_apple_Photos);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_10082c7b8)(lVar5);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_attributes_10088d2b0);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar1,&cf_libraryUuid);
      uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
      (*(code *)PTR__objc_release_10082c7b0)(lVar5);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(char **)(param_1 + 0x10) = local_90;
    (*(code *)PTR__objc_retain_10082c7b8)(local_90);
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_unlock_10088d290);
  }
  else {
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_lock_10088d288);
    local_90 = *(char **)(param_1 + 0x10);
    (*(code *)PTR__objc_retain_10082c7b8)();
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),PTR_s_unlock_10088d290);
  }
  iVar3 = 0;
LAB_100451c4d:
  *param_3 = (ID)local_90;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

