// name: FUN_10014c776
// address: 10014c776

void FUN_10014c776(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  uint local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = _NSClassFromString(&cf_AMSBiometrics);
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_deviceState_10088bb68);
  uVar2 = FUN_10014c4fc();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0);
  if (cVar1 != '\0') {
    local_38 = 0x4020100;
    local_34 = (uint)(lVar3 == 1);
    __os_log_impl(0x100000000,uVar2,0,"TouchID enabled state set to %{public}d",&local_38,8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  *(bool *)(param_1 + 0x10) = lVar3 == 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

