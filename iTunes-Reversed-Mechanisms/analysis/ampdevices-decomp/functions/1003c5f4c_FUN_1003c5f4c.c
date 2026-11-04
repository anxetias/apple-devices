// name: FUN_1003c5f4c
// address: 1003c5f4c

undefined4 FUN_1003c5f4c(int *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_668);
  FUN_1001b7a44(local_678);
  if (param_1 == (int *)0x0) {
LAB_1003c6163:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "PlaylistIsValid(playlist)";
LAB_1003c6232:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003c6163;
    }
    if (param_2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_22a = "oldDeviceName != nullptr";
        goto LAB_1003c6232;
      }
    }
    else {
      if (param_3 != 0) {
        FUN_100486d8f(&local_238,param_1);
        FUN_1001b80b2(local_668,&local_238);
        FUN_1001b7a50(&local_238);
        FUN_1001bb41a(local_668,local_438);
        FUN_1001c334a(local_658,0x23280029);
        FUN_1001b8dfc(local_648,param_2);
        FUN_1001bbec4(&local_238,local_658,local_648);
        FUN_1001b80b2(local_678,&local_238);
        FUN_1001b7a50(&local_238);
        FUN_1001b7a50(local_648);
        FUN_1001b7a50(local_658);
        FUN_1001bb41a(local_678,local_638);
        uVar2 = 0;
        cVar1 = FUN_1001e3edc(local_438,local_638,0);
        if (cVar1 != '\0') {
          FUN_1001c334a(local_658,0x23280029);
          FUN_1001b8dfc(local_648,param_3);
          FUN_1001bbec4(&local_238,local_658,local_648);
          FUN_1001b80b2(local_668,&local_238);
          FUN_1001b7a50(&local_238);
          FUN_1001b7a50(local_648);
          FUN_1001b7a50(local_658);
          FUN_1001bb41a(local_668,&local_238);
          uVar2 = FUN_10048fb22(param_1,&local_238,0);
        }
        goto LAB_1003c6266;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_22a = "newDeviceName != nullptr";
        goto LAB_1003c6232;
      }
    }
  }
  uVar2 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_1003c6266:
  FUN_1001b7a50(local_678);
  FUN_1001b7a50(local_668);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

