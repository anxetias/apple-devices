// name: FUN_10024209c
// address: 10024209c

void FUN_10024209c(long param_1,void *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_288;
  char *local_284;
  undefined2 local_27c;
  int local_27a;
  undefined4 local_258;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_1,0x8e0);
  *(undefined4 *)(param_1 + 0x18) = 0x46494c45;
  *(undefined1 *)(param_1 + 0x454) = 1;
  *(int *)(param_1 + 0x8a4) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(int *)(param_1 + 0x20) = param_3;
  if (param_2 != (void *)0x0) {
    _memcpy((void *)(param_1 + 0x484),param_2,0x420);
    if (param_3 == 0) {
      iVar2 = FUN_10017d477(param_2,&local_288,local_238);
      *(undefined4 *)(param_1 + 0x20) = local_258;
      *(undefined4 *)(param_1 + 0x8a4) = local_258;
    }
    else {
      iVar2 = FUN_10017d489(param_2,local_238);
    }
    if (iVar2 == -0x80) goto LAB_10024219f;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_288 = 0x8220202;
        local_284 = "Assertion failure";
        local_27c = 0x400;
        local_27a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_288,0x12);
      }
      goto LAB_10024219f;
    }
    FUN_1001e222d(local_238,param_1 + 0x24);
    uVar3 = FUN_1001e215a(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x8d8) = param_4;
LAB_10024219f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

