// name: FUN_1004e4608
// address: 1004e4608

void FUN_1004e4608(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  undefined2 local_32;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x389) == '\0') goto LAB_1004e478c;
  if (*(long *)(param_1 + 0x16658) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "handlerData->sql != nullptr";
LAB_1004e4867:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_3a = *(char **)(param_1 + 0x16650);
      local_44 = *(char **)(param_1 + 0x16658);
      local_30 = *(undefined4 *)(param_1 + 0x16668);
      local_48 = 0x8000300;
      local_3c = 0x800;
      local_32 = 0x400;
      __os_log_impl(0x100000000,uVar3,1,"genius sync>  close %p  %p  rc: %u",&local_48,0x1c);
    }
    if (*(int *)(param_1 + 0x16668) != 0) {
      iVar2 = *(int *)(param_1 + 0x16668) + -1;
      *(int *)(param_1 + 0x16668) = iVar2;
      if (iVar2 == 0) {
        bVar4 = false;
        FUN_100626be2(*(undefined8 *)(param_1 + 0x16658),0);
        if (*(char *)(param_1 + 0x6afd) != '\0') {
          *(undefined1 *)(param_1 + 0x6afd) = 0;
          if ((*(int *)(param_1 + 0x284) == 0xf) && (*(char *)(param_1 + 0x5b) == '\n')) {
            bVar4 = *(char *)(param_1 + 0x5a) == '\0';
          }
          else {
            bVar4 = false;
          }
        }
        if (*(char *)(param_1 + 0x1666c) == '\x01') {
          *(undefined1 *)(param_1 + 0x1666c) = 0;
        }
        else if (!bVar4) goto LAB_1004e478c;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_44 = *(char **)(*(long *)(param_1 + 0x16638) + 8);
          local_48 = 0x8220102;
          __os_log_impl(0x100000000,uVar3,1,"genius sync>  deleting \"%{public}s\"",&local_48,0xc);
        }
        FUN_1001893a7(param_1 + 0x16218,*(undefined8 *)(*(long *)(param_1 + 0x16638) + 8));
      }
      goto LAB_1004e478c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "handlerData->sqlOpenCount > 0";
      goto LAB_1004e4867;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004e478c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

