// name: FUN_1002ebf50
// address: 1002ebf50

int FUN_1002ebf50(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar4 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
    iVar2 = -0x32;
    if (cVar1 == '\0') goto LAB_1002ec04c;
    local_28 = local_28 & 0xffff0000;
    pcVar3 = "ch> **ERROR** AMPLEntireLibraryCommandDataProcessor - no dict";
    uVar5 = 2;
  }
  else {
    FUN_1001a7a9e(local_38);
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_38);
    FUN_1001a8fac(local_38);
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_1002ec04c;
    }
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar4 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar1 == '\0') goto LAB_1002ec04c;
    local_28 = 0x4000100;
    pcVar3 = "**ERROR** ProcessDBDataIfPresent returned err %d";
    uVar5 = 8;
    local_24 = iVar2;
  }
  __os_log_impl(0x100000000,uVar4,0x10,pcVar3,&local_28,uVar5);
LAB_1002ec04c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

