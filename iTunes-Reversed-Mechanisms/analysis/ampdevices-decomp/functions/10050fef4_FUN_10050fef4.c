// name: FUN_10050fef4
// address: 10050fef4

void FUN_10050fef4(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1001893a7(param_1 + 0x75e0,"ShowRegistration");
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (iVar3 == 0) {
    if (cVar2 == '\0') goto LAB_10050ffaa;
    local_28 = local_28 & 0xffff0000;
    pcVar4 = "setup> deleted ShowRegistration file";
    uVar5 = 2;
  }
  else {
    if (cVar2 == '\0') goto LAB_10050ffaa;
    local_28 = 0x4000100;
    pcVar4 = "setup> failed to delete ShowRegistration file (%d)";
    uVar5 = 8;
    local_24 = iVar3;
  }
  __os_log_impl(0x100000000,uVar1,1,pcVar4,&local_28,uVar5);
LAB_10050ffaa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

