// name: FUN_1006532ab
// address: 1006532ab

void FUN_1006532ab(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1005033e6(param_2,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),1);
  uVar4 = FUN_100642e20();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar3 == 0) {
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_58 = 0x8420102;
      local_54 = (undefined4)uVar5;
      uStack_50 = (undefined2)((ulong)uVar5 >> 0x20);
      uStack_4e = (undefined2)((ulong)uVar5 >> 0x30);
      __os_log_impl(0x100000000,uVar4,0x10,"failed to fetch backup list for device %{public}@",
                    &local_58,0xc);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffff);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar3 + 0x10))(lVar3,0,0x7fffffffffffffff,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    cVar1 = _os_log_type_enabled(uVar4,1);
    if (cVar1 != '\0') {
      uVar2 = FUN_10017076e(lVar3);
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_58 = 0x4000202;
      uStack_50 = 0x842;
      uStack_4e = (undefined2)uVar5;
      uStack_4c = (undefined6)((ulong)uVar5 >> 0x10);
      local_54 = uVar2;
      __os_log_impl(0x100000000,uVar4,1,"fetched %d backups for device %{public}@",&local_58,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar4 = FUN_1004de449(param_2);
    lVar6 = FUN_1004fe690(uVar4,lVar3);
    lVar7 = 0x7fffffffffffffff;
    if (lVar6 != -1) {
      lVar7 = lVar6;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar3,lVar7,0);
    (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

