// name: FUN_100503928
// address: 100503928

void FUN_100503928(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  char *local_4e;
  undefined2 local_46;
  char *local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_10017076e();
  if (param_2 == (char *)0x0) {
LAB_100503a4a:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto LAB_100503a9c;
    local_58 = 0x4000100;
    pcVar3 = "backup> got %d backup(s)";
    uVar5 = 8;
  }
  else {
    if (param_3 == (char *)0x0 || *param_2 == '\0') {
      if (*param_2 == '\0') goto LAB_100503a4a;
    }
    else if (*param_3 != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') goto LAB_100503a9c;
      local_58 = 0x4000302;
      local_50 = 0x822;
      local_46 = 0x822;
      pcVar3 = 
      "backup> got %d backup(s) for product type \"%{public}s\", product version \"%{public}s\"";
      uVar5 = 0x1c;
      local_4e = param_2;
      local_44 = param_3;
      goto LAB_100503a97;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto LAB_100503a9c;
    local_58 = 0x4000202;
    local_50 = 0x822;
    pcVar3 = "backup> got %d backup(s) for product type \"%{public}s\"";
    uVar5 = 0x12;
    local_4e = param_2;
  }
LAB_100503a97:
  local_54 = uVar2;
  __os_log_impl(0x100000000,uVar4,1,pcVar3,&local_58,uVar5);
LAB_100503a9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

