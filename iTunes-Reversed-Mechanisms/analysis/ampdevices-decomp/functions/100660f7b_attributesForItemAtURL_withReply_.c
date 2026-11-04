// name: attributesForItemAtURL:withReply:
// address: 100660f7b

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::attributesForItemAtURL_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
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
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  lVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_mountFileSharingVolumeForURL__10088ddd0,uVar3);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (lVar6 == 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_makeFileSpec_fromURL_returningIn_10088ddd8,&local_478,uVar3,0);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    if (lVar6 == 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientConnection,
                         PTR_s_attributesForFileSharingItem_wit_10088dde8,&local_478,uVar3);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (**(code **)(lVar4 + 0x10))(lVar4,uVar5,0);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    else {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "error == nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
      (**(code **)(lVar4 + 0x10))(lVar4,0,lVar6);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_unmountFileSharingVolumeForURL__10088dfc8,uVar3);
  }
  else {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "error == nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    (**(code **)(lVar4 + 0x10))(lVar4,0,lVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

