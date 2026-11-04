// name: FUN_100203d65
// address: 100203d65

void FUN_100203d65(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined2 local_48;
  undefined2 uStack_46;
  int iStack_44;
  undefined2 local_40;
  undefined8 local_3e;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001ee7b6(2000);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_48 = 0;
    __os_log_impl(0x100000000,uVar1,1,"restore> calling erase",&local_48,2);
  }
  FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 8));
  iVar3 = _AMSEraseDevice(CONCAT44(iStack_44,CONCAT22(uStack_46,local_48)),FUN_100203f52,param_1);
  FUN_10016d588(&local_48);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_48 = 0;
    __os_log_impl(0x100000000,uVar1,1,"restore> returned from erase",&local_48,2);
  }
  if (iVar3 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_3e = *(undefined8 *)(param_1 + 8);
      local_48 = 0x202;
      uStack_46 = 0x400;
      local_40 = 0x842;
      iStack_44 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,"AMSEraseDevice failed (%d) for device %{public}@",
                    &local_48,0x12);
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_100204093(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

