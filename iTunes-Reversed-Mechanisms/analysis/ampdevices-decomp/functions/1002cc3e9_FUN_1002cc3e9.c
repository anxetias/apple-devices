// name: FUN_1002cc3e9
// address: 1002cc3e9

int FUN_1002cc3e9(void *param_1,CC_LONG param_2,uchar *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_a8 [108];
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _CC_SHA1_Init((CC_SHA1_CTX *)local_a8);
  if ((iVar2 == 1) && (iVar2 = _CC_SHA1_Update((CC_SHA1_CTX *)local_a8,param_1,param_2), iVar2 == 1)
     ) {
    iVar2 = _CC_SHA1_Final(param_3,(CC_SHA1_CTX *)local_a8);
    iVar3 = 1;
    if (iVar2 == 1) goto LAB_1002cc47d;
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_a8._96_4_ = 0x8220202;
    local_a8._100_8_ = "Assertion failure";
    local_3c = 0x822;
    local_3a = "result == 1";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_a8 + 0x60,0x16);
  }
  FUN_1001782e9(0,0);
  iVar3 = iVar2;
LAB_1002cc47d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

