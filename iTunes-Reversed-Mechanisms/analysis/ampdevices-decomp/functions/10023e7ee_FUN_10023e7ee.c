// name: FUN_10023e7ee
// address: 10023e7ee

int FUN_10023e7ee(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "inDragRef != __null";
LAB_10023e97a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if ((param_5 != (long *)0x0 && param_4 != 0) && (*param_5 != 0)) {
      _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x78));
      iVar2 = _PasteboardGetItemIdentifier(*(undefined8 *)(param_1 + 0x78),param_2,&local_60);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_10023e9f0(param_1,local_60,param_3,param_4,param_5);
        }
        else {
          uVar3 = FUN_1001cc310();
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        }
      }
      goto LAB_10023e905;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "inDataPtr != __null && inDataSize != __null && *inDataSize != 0";
      goto LAB_10023e97a;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10023e905:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

