// name: FUN_1005ba1c3
// address: 1005ba1c3

uint FUN_1005ba1c3(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40;
  int local_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = _AMDServiceConnectionSend(param_1,param_2,param_3);
      if ((int)uVar2 < 1) {
        if (((int)uVar2 < 0) &&
           (cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), uVar4 = uVar2,
           cVar1 != '\0')) {
          piVar3 = ___error();
          local_3e = *piVar3;
          local_48 = 0x4000200;
          local_40 = 0x400;
          local_44 = uVar2;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDServiceConnectionSend failed (%d / %d)",&local_48,0xe);
        }
        break;
      }
      param_2 = param_2 + (ulong)uVar2;
      uVar4 = uVar4 + uVar2;
      param_3 = param_3 - (ulong)uVar2;
    } while (param_3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

