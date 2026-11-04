// name: FUN_10023f480
// address: 10023f480

undefined8 FUN_10023f480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  if (param_4 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "outDataSize != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_4 = 0;
    uVar2 = _PasteboardCopyItemFlavorData(*(undefined8 *)(param_1 + 0x78),param_2,param_3,&local_40)
    ;
    if ((int)uVar2 == 0) {
      uVar2 = _CFDataGetLength(local_40);
      *param_4 = uVar2;
      FUN_10017060f(local_40);
      uVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

