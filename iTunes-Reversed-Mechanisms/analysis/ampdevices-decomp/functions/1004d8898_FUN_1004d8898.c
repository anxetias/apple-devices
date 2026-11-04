// name: FUN_1004d8898
// address: 1004d8898

void FUN_1004d8898(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_38;
  long local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  if (lVar3 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8400102;
      local_34 = lVar3;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "devicesAgentDidEndSoftwareUpdateRestoreForDeviceWithIdentifier: %@",
                          &local_38,0xc);
    }
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(lVar3,PTR_s_code_10088bb40);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

