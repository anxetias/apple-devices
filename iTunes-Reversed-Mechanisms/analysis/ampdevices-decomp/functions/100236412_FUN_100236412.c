// name: FUN_100236412
// address: 100236412

undefined8 FUN_100236412(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100235e52();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0);
  if (cVar1 != '\0') {
    local_34 = FUN_1001b83ae(param_1 + 0x28);
    local_38 = 0x8220102;
    __os_log_impl(0x100000000,uVar2,0,"Starting Shutdown of ccp:%{public}s",&local_38,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001e9de0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xfc) = 5;
  FUN_100238bea(param_1 + 0x88,*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_10023686e(param_1);
  }
  FUN_1001e9eb9(param_1 + 0x40);
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar2 = FUN_100235e52();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_34 = FUN_1001b83ae(param_1 + 0x28);
      local_2a = *(undefined8 *)(param_1 + 0xd0);
      local_38 = 0x8220202;
      local_2c = 0x800;
      __os_log_impl(0x100000000,uVar2,1,"deleting ccp:%{public}s thread %p",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001ecf9f(*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  uVar2 = FUN_100235e52();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0);
  if (cVar1 != '\0') {
    local_34 = FUN_1001b83ae(param_1 + 0x28);
    local_38 = 0x8220102;
    __os_log_impl(0x100000000,uVar2,0,"Completed Shutdown of ccp:%{public}s",&local_38,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

