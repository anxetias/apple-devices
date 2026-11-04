// name: deleteItemAtURL:withReply:
// address: 100660c12

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::deleteItemAtURL_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char local_4c8 [80];
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar4 = (char *)(*(code *)PTR__objc_retain_10082c7b8)(param_3);
  lVar5 = (*(code *)puVar1)(param_4);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_mountFileSharingVolumeForURL__10088ddd0,pcVar4);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (lVar7 == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_makeFileSpec_fromURL_returningIn_10088ddd8,&local_478,pcVar4,local_4c8)
    ;
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (lVar7 == 0) {
      if (local_4c8[0] == '\0') {
        iVar3 = FUN_100184b54(&local_478);
      }
      else {
        iVar3 = FUN_100182d59(&local_478,1);
      }
      if (iVar3 == 0) {
        lVar7 = 0;
      }
      else {
        uVar6 = FUN_100642e20();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8420202;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          local_54 = pcVar4;
          __os_log_impl(0x100000000,uVar6,0x10,"delete failed for %{public}@ (%d)",&local_58,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar3);
        lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      }
      (**(code **)(lVar5 + 0x10))(lVar5,lVar7);
    }
    else {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "error == nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      (**(code **)(lVar5 + 0x10))(lVar5,lVar7);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_unmountFileSharingVolumeForURL__10088dfc8,pcVar4);
  }
  else {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "error == nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    (**(code **)(lVar5 + 0x10))(lVar5,lVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(pcVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

