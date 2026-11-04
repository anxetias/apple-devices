// name: FUN_100648983
// address: 100648983

void FUN_100648983(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  plVar4 = (long *)(*(code *)PTR__objc_msgSend_10082c770)
                             (*(undefined8 *)(param_1 + 0x20),PTR_s_pendingRequestQueue_10088dae0);
  lVar8 = *plVar4;
  if (lVar8 != plVar4[1]) {
    if (*(long *)(lVar8 + 8) != *(long *)(param_1 + 0x30)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),
                       PTR_s_objectIDForDevice_onlyBootedOSMo_10088dac0,
                       *(undefined8 *)(param_1 + 0x28),1,0);
    if ((iVar2 == 0) || (lVar5 = FUN_1004de449(iVar2), lVar5 == 0)) {
      bVar9 = false;
    }
    else if (*(char *)(lVar5 + 0x6ad9) == '\0') {
      bVar9 = true;
    }
    else {
      bVar9 = *(int *)(lVar5 + 0x6b08) != 0;
    }
    lVar5 = FUN_100669bb8(lVar8 + 0x18,plVar4[1],lVar8);
    lVar8 = plVar4[1];
    while (lVar8 != lVar5) {
      lVar8 = lVar8 + -0x18;
      FUN_100648c92(lVar8);
    }
    plVar4[1] = lVar5;
    if (bVar9) {
      uVar6 = FUN_100642e20();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar1 = _os_log_type_enabled(uVar6,1);
      if (cVar1 != '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        local_48 = 0x8420102;
        local_44 = uVar7;
        __os_log_impl(0x100000000,uVar6,1,"device %{public}@ setup is pending; requeueing request",
                      &local_48,0xc);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      (*(code *)PTR__objc_msgSend_10082c770)
                (DAT_10070f3d0,*(undefined8 *)(param_1 + 0x20),
                 PTR_s_enqueueRequestBlock_forDevice_wi_10088dae8,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
      goto LAB_100648bcc;
    }
  }
  uVar6 = FUN_100642e20();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar1 = _os_log_type_enabled(uVar6,0x10);
  if (cVar1 != '\0') {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_48 = 0x8420102;
    local_44 = uVar7;
    __os_log_impl(0x100000000,uVar6,0x10,"client connection timed out waiting for device %{public}@"
                  ,&local_48,0xc);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (**(code **)(lVar8 + 0x10))(lVar8,uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
LAB_100648bcc:
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

