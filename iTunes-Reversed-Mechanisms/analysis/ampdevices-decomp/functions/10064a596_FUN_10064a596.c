// name: FUN_10064a596
// address: 10064a596

void FUN_10064a596(long param_1,ulong param_2)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *local_66c8;
  long local_66c0;
  undefined4 local_66b8;
  undefined8 local_66b4;
  undefined2 local_66ac;
  int local_66aa;
  undefined1 local_6698 [26200];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10064a5ae;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  uVar10 = param_2 & 0xffffffff;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a5db;
  local_66c0 = param_1;
  ___bzero(local_6698,0x6660);
  local_66c8 = (void *)0x0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a5eb;
  lVar6 = FUN_1005e9a2c();
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 != 0 && (int)param_2 != 0) {
    do {
      if (*(int *)(lVar6 + 0x6884) == (int)param_2) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7cd;
        uVar7 = FUN_1005e9a2c();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7e4;
        iVar4 = FUN_1005e7a82(uVar7,uVar10,local_6698);
        if (iVar4 != 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7f4;
          uVar7 = FUN_100642e20();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7fc;
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a80c;
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            uVar8 = *(undefined8 *)(local_66c0 + 0x20);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a828;
            uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_deviceIdentifier_10088ca18);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a830;
            uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
            local_66b8 = 0x8420202;
            local_66ac = 0x400;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a871;
            local_66b4 = uVar8;
            local_66aa = iVar4;
            __os_log_impl(0x100000000,uVar7,0x10,"failed to get info for device %{public}@ (%d)",
                          &local_66b8,0x12);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a87a;
            (*(code *)PTR__objc_release_10082c7b0)(uVar8);
          }
          goto LAB_10064a87a;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a97f;
        uVar7 = _objc_alloc(PTR__OBJC_CLASS___AMPDeviceInfo_10082b9b0);
        uVar8 = 0;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a99e;
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar7,PTR_s_initWithIPodDeviceInfo__10088db40,local_6698);
        uVar9 = 0;
        goto LAB_10064a8b0;
      }
      lVar6 = *(long *)(lVar6 + 0x6878);
    } while (lVar6 != 0);
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a62f;
  iVar4 = FUN_1005027ed(uVar10,local_6698);
  if (iVar4 == 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a6e2;
    uVar7 = _objc_alloc(PTR__OBJC_CLASS___AMPDeviceInfo_10082b9b0);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a701;
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar7,PTR_s_initWithIPodDeviceInfo__10088db40,local_6698);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a71b;
    iVar4 = FUN_100432267(uVar10,&local_66c8);
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a91f;
      uVar8 = _objc_alloc(PTR__OBJC_CLASS___AMPDeviceSyncPrefs_10082b9c8);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a93e;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar8,PTR_s_initWithIPodPrefs__10088db48,local_66c8);
      pvVar2 = local_66c8;
      if (local_66c8 != (void *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a955;
        FUN_10022ad5e(local_66c8);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a95d;
        operator_delete(pvVar2);
      }
      uVar8 = 0;
      goto LAB_10064a8b0;
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a72e;
    uVar8 = FUN_100642e20();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a736;
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a746;
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      uVar9 = *(undefined8 *)(local_66c0 + 0x20);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a762;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_deviceIdentifier_10088ca18);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a76a;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      local_66b8 = 0x8420202;
      local_66ac = 0x400;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7ab;
      local_66b4 = uVar9;
      local_66aa = iVar4;
      __os_log_impl(0x100000000,uVar8,0x10,"failed to get prefs for device %{public}@ (%d)",
                    &local_66b8,0x12);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7b4;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a7bd;
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a63f;
    uVar7 = FUN_100642e20();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a647;
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a657;
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      uVar8 = *(undefined8 *)(local_66c0 + 0x20);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a677;
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_deviceIdentifier_10088ca18);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a67f;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_66b8 = 0x8420202;
      local_66ac = 0x400;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a6c0;
      local_66b4 = uVar8;
      local_66aa = iVar4;
      __os_log_impl(0x100000000,uVar7,0x10,"failed to get info for device %{public}@ (%d)",
                    &local_66b8,0x12);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a6c9;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    }
  }
LAB_10064a87a:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a883;
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar9 = 0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8a2;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar4);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8aa;
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = 0;
LAB_10064a8b0:
  lVar6 = *(long *)(local_66c0 + 0x28);
  pcVar1 = *(code **)(lVar6 + 0x10);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8c7;
  (*pcVar1)(lVar6,uVar7,uVar9,uVar8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8d0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8d9;
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10064a8e2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_10064a9ad;
  ___stack_chk_fail();
}

