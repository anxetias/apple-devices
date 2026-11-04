// name: FUN_100230ba2
// address: 100230ba2

void FUN_100230ba2(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  long local_30;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = (*(code *)puVar1)(param_3);
  if (lVar3 == 0) {
    uVar5 = FUN_10023046d();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8420102;
      local_44 = uVar4;
      __os_log_impl(0x100000000,uVar5,0x10,"examineBook failed: %{public}@",&local_48,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  else {
    uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(lVar3);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar5;
  }
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

