// name: FUN_1006373b4
// address: 1006373b4

void FUN_1006373b4(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_4;
  plVar2 = (long *)param_4[1];
  plVar3 = (long *)param_4[2];
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_58 = 0x4000100;
    local_54 = (char *)CONCAT44(local_54._4_4_,param_2);
    __os_log_impl(0x100000000,uVar6,1,"taskStatus = %d",&local_58,8);
  }
  if (param_2 != 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "taskStatus == kSCSITaskStatus_GOOD";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  iVar5 = (**(code **)(*plVar2 + 0x48))(plVar2);
  if (iVar5 != 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "err == 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  _IODestroyPlugInInterface(uVar1);
  FUN_1001c64c1(param_4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

