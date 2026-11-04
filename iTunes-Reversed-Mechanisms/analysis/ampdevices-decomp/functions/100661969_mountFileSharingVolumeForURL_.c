// name: mountFileSharingVolumeForURL:
// address: 100661969

/* Function Stack Size: 0x18 bytes */

ID AMPDevicesClientConnection::mountFileSharingVolumeForURL_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 unaff_R12;
  undefined4 local_478;
  undefined8 local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isAFCURL_10088ddb8);
  if (cVar1 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_deviceIdentifier_10088ca18);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_appIdentifier_10088ddc0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    lVar6 = FUN_1005b8e71(uVar4);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "deviceRef != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      FUN_1001782e9(0,0);
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0x2365);
      unaff_R12 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      goto LAB_100661b4a;
    }
    iVar2 = FUN_10036c8bb(lVar6,uVar5,&local_458);
    if (iVar2 != 0) {
      uVar7 = FUN_100642e20();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8420202;
        local_46c = 0x400;
        local_474 = uVar5;
        local_46a = iVar2;
        __os_log_impl(0x100000000,uVar7,0x10,"failed to start file sharing for %{public}@ (%d)",
                      &local_478,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         iVar2);
      unaff_R12 = _objc_retainAutoreleasedReturnValue(uVar7);
    }
    FUN_10017060f(lVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    if (iVar2 != 0) goto LAB_100661b4a;
  }
  unaff_R12 = 0;
LAB_100661b4a:
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar8 = _objc_autoreleaseReturnValue(unaff_R12);
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

