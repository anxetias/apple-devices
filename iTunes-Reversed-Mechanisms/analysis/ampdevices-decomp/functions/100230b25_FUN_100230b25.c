// name: FUN_100230b25
// address: 100230b25

void FUN_100230b25(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_28 [8];
  
  uVar2 = FUN_10023046d();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_28[0] = 0;
    __os_log_impl(0x100000000,uVar2,0x10,"examineBook failed due to connection interruption",
                  local_28,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  return;
}

