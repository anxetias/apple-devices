// name: FUN_1002d6b6a
// address: 1002d6b6a

void FUN_1002d6b6a(int param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "pod != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == 0x706d7377) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,1,"kPowerManagement_SystemWakeMessage",&local_48,2);
    }
    if ((*(char *)(param_5 + 0x40) != '\0') && (*(char *)(param_5 + 0x6db0) != '\0')) {
      FUN_100632897(*(undefined4 *)(param_5 + 0x6d68),3,0);
      *(undefined1 *)(param_5 + 0x6db0) = 0;
    }
  }
  else if (param_1 == 0x706d6c73) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,1,"kPowerManagement_SystemLateSleepMessage",&local_48,2);
    }
    *(undefined1 *)(param_5 + 0x6db1) = 0;
    if (*(char *)(param_5 + 0x40) != '\0') {
      if (*(char *)(param_5 + 0x36) == '\0') {
        if ((*(char *)(param_5 + 0x39) != '\0') && (*(char *)(param_5 + 0x43) == '\0')) {
          *(undefined1 *)(param_5 + 0x6db1) = 1;
        }
      }
      else if (((*(int *)(param_5 + 0x2c) == 0) && (*(char *)(param_5 + 0x39) != '\0')) &&
              (*(char *)(param_5 + 0x6db0) == '\0')) {
        iVar2 = FUN_10018a0cf(param_5 + 0x48);
        if (iVar2 == 0) {
          *(undefined1 *)(param_5 + 0x6db0) = 1;
        }
      }
    }
  }
  else if (param_1 == 0x706d6c72) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,1,"kPowerManagement_LateSleepRequestMessage",&local_48,2);
    }
    if (((*(char *)(param_5 + 0x40) != '\0') && (*(char *)(param_5 + 0x36) != '\0')) &&
       ((*(char *)(param_5 + 0x39) != '\0' && (*(char *)(param_5 + 0x6db0) == '\0')))) {
      if (*(int *)(param_5 + 0x28) == 0) {
        iVar2 = FUN_10018a0cf(param_5 + 0x48);
        if (iVar2 == 0) {
          *(undefined1 *)(param_5 + 0x6db0) = 1;
          *(undefined1 *)(param_5 + 0x36) = 0;
          goto LAB_1002d6d9e;
        }
      }
      *param_2 = 1;
    }
  }
LAB_1002d6d9e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

