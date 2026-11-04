// name: FUN_10065fe59
// address: 10065fe59

void FUN_10065fe59(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 local_f08;
  ulong uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  code *local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined4 local_eb8;
  undefined8 local_eb4;
  undefined2 local_eac;
  int local_eaa;
  undefined4 local_e98;
  char *local_e94;
  undefined2 local_e8c;
  char *local_e8a;
  undefined1 local_a78 [512];
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  puVar6 = PTR_s_mountFileSharingVolumeForURL__10088ddd0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_mountFileSharingVolumeForURL__10088ddd0,*(undefined8 *)(param_1 + 0x20));
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,puVar6,
                       *(undefined8 *)(param_1 + 0x28));
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    puVar6 = PTR_s_makeFileSpec_fromURL_returningIn_10088ddd8;
    if (lVar4 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientConnection,
                         PTR_s_makeFileSpec_fromURL_returningIn_10088ddd8,&local_458,
                         *(undefined8 *)(param_1 + 0x20),0);
      lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (lVar4 == 0) {
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),
                           PTR_s_URLByDeletingLastPathComponent_10088dde0);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientConnection,puVar6,&local_878,uVar3,0);
        lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        if (lVar4 == 0) {
          uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(param_1 + 0x28),PTR_s_lastPathComponent_10088bf90);
          FUN_1001e115f(uVar3,local_a78);
          uStack_ed0 = 0;
          local_ec8 = 0;
          uStack_ec0 = 0;
          local_ee8 = 0;
          uStack_ee0 = 0;
          local_ef8 = 0;
          uStack_ef0 = 0;
          local_f08 = 0;
          uStack_f00 = 0;
          local_ed8 = FUN_100660477;
          uStack_ed0 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x30));
          uStack_f00 = uStack_f00 & 0xffffffffffffff;
          iVar2 = FUN_100182f9b(1,&local_458,&local_878,local_a78,&local_e98,&local_f08);
          if (iVar2 == 0) {
            uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,
                               PTR_s_attributesForFileSharingItem_wit_10088dde8,&local_e98,
                               *(undefined8 *)(param_1 + 0x28));
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            lVar4 = 0;
          }
          else {
            uVar3 = FUN_100642e20();
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_eb4 = *(undefined8 *)(param_1 + 0x20);
              local_eb8 = 0x8420202;
              local_eac = 0x400;
              local_eaa = iVar2;
              __os_log_impl(0x100000000,uVar3,0x10,"copy failed for %{public}@ (%d)",&local_eb8,0x12
                           );
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar3);
            uVar3 = 0;
            uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                              (PTR__OBJC_CLASS___NSError_10082c660,
                               PTR_s_errorWithCopyFileOSStatus_forFil_10088ddf0,iVar2,&local_458);
            lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uStack_ed0);
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar3,lVar4);
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        }
        else {
          uVar3 = FUN_1001cc310();
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_e98 = 0x8220202;
            local_e94 = "Assertion failure";
            local_e8c = 0x822;
            local_e8a = "error == nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_e98,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
          FUN_1001782e9(0,0);
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,lVar4);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_878 = 0x8220202;
          local_874 = "Assertion failure";
          local_86c = 0x822;
          local_86a = "error == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,lVar4);
      }
      puVar6 = PTR_s_unmountFileSharingVolumeForURL__10088dfc8;
      (*(code *)PTR__objc_msgSend_10082c770)
                (&objc::class_t::AMPDevicesClientConnection,
                 PTR_s_unmountFileSharingVolumeForURL__10088dfc8,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "error == nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,lVar4);
      puVar6 = PTR_s_unmountFileSharingVolumeForURL__10088dfc8;
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,puVar6,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "error == nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,lVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

