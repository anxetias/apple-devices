// name: FUN_10014d369
// address: 10014d369

void FUN_10014d369(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_38;
  long local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = FUN_10014c4fc();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar3 == 0) {
    cVar2 = _os_log_type_enabled(uVar4,0);
    if (cVar2 == '\0') goto LAB_10014d416;
    local_38 = local_38 & 0xffff0000;
    pcVar5 = "Enabled TouchID for user.";
    uVar6 = 0;
    uVar7 = 2;
  }
  else {
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_10014d416;
    local_38 = 0x8420102;
    pcVar5 = "Error enabling TouchID for user. Error: %{public}@";
    uVar6 = 0x10;
    uVar7 = 0xc;
    local_34 = lVar3;
  }
  __os_log_impl(0x100000000,uVar4,uVar6,pcVar5,&local_38,uVar7);
LAB_10014d416:
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

