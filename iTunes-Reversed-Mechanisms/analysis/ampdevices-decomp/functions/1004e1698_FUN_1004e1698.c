// name: FUN_1004e1698
// address: 1004e1698

void FUN_1004e1698(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x35a) == '\0') {
    *(undefined1 *)(param_1 + 0x6ae8) = 2;
    *(undefined8 *)(param_1 + 0x151e8) = 0;
  }
  else {
    FUN_1004e17a4(param_1);
    uVar3 = FUN_1004e1958(param_1 + 0x106,param_1 + 0x66);
    iVar2 = FUN_1005c67a3(uVar3,FUN_1004e1a3d,param_1);
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "status == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_1004e1e68(param_1);
    }
    FUN_10017060f(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

