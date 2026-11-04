// name: FUN_100399aa4
// address: 100399aa4

undefined4 FUN_100399aa4(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = 0xffffffef;
  if (*(int *)(param_1 + 0xaa8) == 0) {
    if (*(long *)(param_1 + 0x438) == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = _VVVDeletePod();
      if (iVar2 == 0) {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x458) = 0;
        *(undefined4 *)(param_1 + 0x460) = 0;
        *(undefined2 *)(param_1 + 0x466) = 0;
        *(undefined8 *)(param_1 + 0x448) = 0;
        *(undefined8 *)(param_1 + 0x438) = 0;
        *(undefined8 *)(param_1 + 0x440) = 0;
        FUN_1001b811c(param_1 + 0x668);
        *(undefined1 *)(param_1 + 0x678) = 0;
        ___bzero(param_1 + 0x680,0x420);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "result == eVVVUpdateSuccess";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = FUN_100399136(iVar2);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

