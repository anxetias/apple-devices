// name: FUN_10053b52b
// address: 10053b52b

void FUN_10053b52b(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return;
    }
  }
  else {
    lVar2 = param_1[2];
    if ((*param_1 == 0) && ((int)param_1[1] == 0)) {
      *(undefined4 *)(param_1 + 1) = 0xe8000027;
    }
    *(undefined1 *)(lVar2 + 0x6af4) = 0;
    uVar4 = FUN_1001c156e();
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
    uVar5 = FUN_1001705fc(*param_1);
    FUN_1001c6987(uVar4,0x69706173,uVar1,uVar5,(long)(int)param_1[1]);
    FUN_10019c939(param_1[3]);
    FUN_1004e1e68(param_1[2]);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      operator_delete(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

