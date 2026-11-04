// name: FUN_1002a2ec6
// address: 1002a2ec6

int FUN_1002a2ec6(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -0x2b;
  if (*(char *)(param_1 + 0xd6) == '\x01') {
    lVar3 = FUN_1004993ef(param_1,7,0,1);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be not NULL)";
        local_3c = 0x822;
        local_3a = "sourceIrisVideoInstance";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_1002a2f8a;
    }
    iVar2 = FUN_10049980b(lVar3,param_2,0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
  }
LAB_1002a2f8a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

