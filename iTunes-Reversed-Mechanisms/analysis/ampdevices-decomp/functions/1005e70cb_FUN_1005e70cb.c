// name: FUN_1005e70cb
// address: 1005e70cb

undefined8 FUN_1005e70cb(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "recoveryProductTypeID != 0";
LAB_1005e71d8:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      uVar3 = 0x64a;
      lVar4 = 0xc;
      do {
        if ((*(int *)("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar4 + 0x2c) == 1) &&
           (*(int *)("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar4 + 0x24) == param_1)) {
          param_2[9] = param_1;
          uVar1 = *(undefined4 *)((long)&DAT_10075c120 + lVar4);
          *param_2 = *(undefined4 *)("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar4 + 0x28)
          ;
          param_2[1] = uVar1;
          *(undefined8 *)(param_2 + 0x14) = 0xffffffffffffffff;
          uVar3 = 0;
        }
        lVar4 = lVar4 + 0x18;
      } while (lVar4 != 0x192c);
      goto LAB_1005e719d;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "deviceUpdaterFamilyInfo != nullptr";
      goto LAB_1005e71d8;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1005e719d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

