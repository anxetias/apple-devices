// name: FUN_10046d4c4
// address: 10046d4c4

void FUN_10046d4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  undefined4 local_48;
  undefined8 local_44;
  long local_30;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar4 = (*(code *)puVar1)(param_3);
  if (lVar3 != 0) {
    IVar5 = NSData::dataWithContentsOfURL_
                      ((ID)PTR__OBJC_CLASS___NSData_10082df80,PTR_s_dataWithContentsOfURL__10088d360
                       ,lVar3);
    lVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    if (lVar6 != 0) {
      FUN_1001a790a(&local_48,lVar6);
      FUN_1001a7b1c(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30,&local_48);
      FUN_1001a85d4(&local_48);
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  }
  if (lVar4 != 0) {
    cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar2 != '\0') {
      local_44 = **(undefined8 **)(param_1 + 0x28);
      local_48 = 0x8420102;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"%{public}s: (%{public}s)"
                          ,&local_48,0xc);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

