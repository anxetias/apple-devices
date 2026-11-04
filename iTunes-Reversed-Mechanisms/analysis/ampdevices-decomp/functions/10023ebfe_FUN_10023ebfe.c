// name: FUN_10023ebfe
// address: 10023ebfe

undefined8
FUN_10023ebfe(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "dragRef != __null";
LAB_10023ed32:
      local_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if ((param_5 != (long *)0x0 && param_4 != 0) && (*param_5 != 0)) {
      uVar2 = _PasteboardGetItemIdentifier(*(undefined8 *)(param_1 + 0x78),param_2,&local_48);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_10023ed5e(param_1,CONCAT44(uStack_44,local_48),param_3,param_4,param_5);
      }
      goto LAB_10023ecf1;
    }
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "data != __null && dataSize != __null && *dataSize != 0";
      goto LAB_10023ed32;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10023ecf1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

