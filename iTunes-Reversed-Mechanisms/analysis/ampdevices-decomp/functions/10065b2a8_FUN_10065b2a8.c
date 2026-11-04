// name: FUN_10065b2a8
// address: 10065b2a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065b2a8(long param_1,undefined4 param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  uint local_84;
  byte local_80;
  byte local_7f;
  byte local_7e;
  byte local_7d;
  int local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_7c = 0;
  plVar2 = (long *)(*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_softwareUpdateRestoreDelegateFor_10088dcb8,param_2);
  if (plVar2 == (long *)0x0) {
    if (local_7c == 0) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "status != noErr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
      goto LAB_10065b489;
    }
  }
  else {
    local_7d = (byte)*(uint *)(param_1 + 0x30);
    local_84 = (*(uint *)(param_1 + 0x30) & 0xff | (uint)(local_7d >> 1) << 8 |
                (uint)(local_7d >> 2) << 0x10 | (uint)(local_7d >> 3) << 0x18) &
               (uint)_DAT_100718e10;
    local_80 = local_7d >> 4 & 1;
    local_7f = local_7d >> 5 & 1;
    local_7e = local_7d >> 6 & 1;
    local_7d = local_7d >> 7;
    local_78 = &PTR_FUN_100871c80;
    local_70 = param_2;
    local_58 = &local_78;
    local_7c = (**(code **)(*plVar2 + 0x18))(plVar2,&local_84,&local_78);
    if (local_58 == &local_78) {
      lVar6 = 0x20;
LAB_10065b3eb:
      (**(code **)((long)*local_58 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (local_58 != (undefined ***)0x0) goto LAB_10065b3eb;
    }
    if (local_7c != 0) {
      uVar3 = FUN_100642e20();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
        pcVar5 = (char *)_objc_retainAutoreleasedReturnValue(uVar4);
        local_48 = 0x8420202;
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,local_7c);
        local_44 = pcVar5;
        __os_log_impl(0x100000000,uVar3,0x10,
                      "failed to start software update for device %{public}@ (%d)",&local_48,0x12);
        (*(code *)PTR__objc_release_10082c7b0)(pcVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
LAB_10065b489:
    if (local_7c == 0) {
      uVar3 = 0;
      goto LAB_10065b4b7;
    }
  }
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
LAB_10065b4b7:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

