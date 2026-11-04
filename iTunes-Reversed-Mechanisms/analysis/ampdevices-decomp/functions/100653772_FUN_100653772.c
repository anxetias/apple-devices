// name: FUN_100653772
// address: 100653772

void FUN_100653772(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_38;
  undefined4 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100503780(0,0,1);
  uVar3 = FUN_100642e20();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar2 == 0) {
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,0x10,"failed to create all backups list",&local_38,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffff);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (**(code **)(lVar2 + 0x10))(lVar2,0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  else {
    cVar1 = _os_log_type_enabled(uVar3,1);
    if (cVar1 != '\0') {
      local_34 = FUN_10017076e(lVar2);
      local_38 = 0x4000100;
      __os_log_impl(0x100000000,uVar3,1,"fetched %d backups",&local_38,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2,0);
    (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

