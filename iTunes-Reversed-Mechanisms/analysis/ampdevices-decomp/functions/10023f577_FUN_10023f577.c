// name: FUN_10023f577
// address: 10023f577

int FUN_10023f577(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "inDragRef != nullptr";
LAB_10023f6e0:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      iVar2 = _PasteboardGetItemIdentifier(*(undefined8 *)(param_1 + 0x78),param_2,&local_50);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_10023f480(param_1,local_50,param_3,param_4);
        }
        else {
          uVar3 = FUN_1001cc310();
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        }
      }
      goto LAB_10023f66d;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "outDataSize != nullptr";
      goto LAB_10023f6e0;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10023f66d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

