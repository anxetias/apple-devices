// name: FUN_10023f13d
// address: 10023f13d

undefined8
FUN_10023f13d(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "dragRef != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = _PasteboardGetItemIdentifier(*(undefined8 *)(param_1 + 0x78),param_2,&local_58);
    if ((int)uVar2 == 0) {
      param_2 = CONCAT44(uStack_54,local_58);
    }
    else if ((int)uVar2 != -0x622b) goto LAB_10023f1e7;
    uVar2 = FUN_10023f259(param_1,param_2,param_3,param_4,param_5,param_6);
  }
LAB_10023f1e7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

