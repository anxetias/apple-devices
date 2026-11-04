// name: renameItemAtURL:to:withReply:
// address: 1006607e9

/* Function Stack Size: 0x28 bytes */

void AMPDevicesClientConnection::renameItemAtURL_to_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_898;
  undefined8 local_894;
  undefined2 local_88c;
  int local_88a;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  lVar6 = (*(code *)puVar1)(param_5);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_mountFileSharingVolumeForURL__10088ddd0,uVar4);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  if (lVar8 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_makeFileSpec_fromURL_returningIn_10088ddd8,&local_458,uVar4,0);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (lVar8 == 0) {
      FUN_1001bdca6(&local_898,uVar5);
      iVar3 = FUN_100189572(&local_458,&local_898,&local_878);
      FUN_1001b7a50(&local_898);
      if (iVar3 == 0) {
        lVar8 = 0;
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientConnection,
                           PTR_s_attributesForFileSharingItem_wit_10088dde8,&local_878,uVar4);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      }
      else {
        uVar7 = FUN_100642e20();
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_898 = 0x8420202;
          local_88c = 0x400;
          local_894 = uVar4;
          local_88a = iVar3;
          __os_log_impl(0x100000000,uVar7,0x10,"rename failed for %{public}@ (%d)",&local_898,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        uVar7 = 0;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar3);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar9);
      }
      (**(code **)(lVar6 + 0x10))(lVar6,uVar7,lVar8);
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    }
    else {
      uVar7 = FUN_1001cc310();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_878 = 0x8220202;
        local_874 = "Assertion failure";
        local_86c = 0x822;
        local_86a = "error == nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      FUN_1001782e9(0,0);
      (**(code **)(lVar6 + 0x10))(lVar6,0,lVar8);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_unmountFileSharingVolumeForURL__10088dfc8,uVar4);
  }
  else {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "error == nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    FUN_1001782e9(0,0);
    (**(code **)(lVar6 + 0x10))(lVar6,0,lVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar8);
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

