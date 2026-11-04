// name: FUN_100667e19
// address: 100667e19

void FUN_100667e19(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar5 = FUN_100642e20();
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_processName_10088daf8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_processID_10088de18);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_clientID_10088d1b8);
    local_4e = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_code_10088bb40);
    local_68 = 0x8420402;
    local_5c = 0x400;
    local_56 = 0x400;
    local_50 = 0x800;
    local_64 = uVar6;
    local_5a = uVar2;
    local_54 = uVar3;
    __os_log_impl(0x100000000,uVar5,0x10,"UI target check failed: %{public}@ [%u:%u] (error %ld)",
                  &local_68,0x22);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

