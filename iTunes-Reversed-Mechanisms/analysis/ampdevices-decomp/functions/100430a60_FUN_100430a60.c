// name: FUN_100430a60
// address: 100430a60

void FUN_100430a60(long param_1,char param_2,char param_3,char param_4,char param_5,char param_6)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 local_48;
  char *local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x33c) != '\0') && (*(char *)(param_1 + 0x14cd8) != '\0')) {
    bVar3 = true;
    if ((*(char *)(param_1 + 0x151de) != param_2) ||
       (((*(char *)(param_1 + 0x151e0) != param_4 || (*(char *)(param_1 + 0x151e1) != param_5)) ||
        (bVar3 = *(char *)(param_1 + 0x151df) != param_3, param_6 != '\0' || bVar3)))) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        local_44 = "NOT ";
        if (bVar3) {
          local_44 = "";
        }
        local_48 = 0x8220102;
        __os_log_impl(0x100000000,uVar1,2,
                      "sync> aborting sync due to photo sync mode change, %{public}sactually changing"
                      ,&local_48,0xc);
      }
      FUN_1004e2d0e(param_1,1);
    }
    *(char *)(param_1 + 0x151de) = param_2;
    *(char *)(param_1 + 0x151e0) = param_4;
    *(char *)(param_1 + 0x151e1) = param_5;
    *(char *)(param_1 + 0x151df) = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

