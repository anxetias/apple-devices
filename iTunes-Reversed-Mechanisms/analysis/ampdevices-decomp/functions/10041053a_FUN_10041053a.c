// name: FUN_10041053a
// address: 10041053a

void FUN_10041053a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005615da(local_48);
  cVar1 = FUN_1001b8428(local_48);
  if (cVar1 == '\0') {
    FUN_1001b7a5c(local_c8,param_1 + 0x38);
    FUN_1001b7a5c(local_b8,local_48);
    FUN_100410867(&local_38,local_c8,local_b8);
    FUN_1001b80b2(param_1 + 0x38,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_b8);
    FUN_1001b7a50(local_c8);
    FUN_1001b7a5c(local_a8,param_1 + 0x48);
    FUN_1001b7a5c(local_98,local_48);
    FUN_100410867(&local_38,local_a8,local_98);
    FUN_1001b80b2(param_1 + 0x48,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_98);
    FUN_1001b7a50(local_a8);
    FUN_1001b7a5c(local_88,param_1 + 0x58);
    FUN_1001b7a5c(local_78,local_48);
    FUN_100410867(&local_38,local_88,local_78);
    FUN_1001b80b2(param_1 + 0x58,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_88);
    FUN_1001b7a5c(local_68,param_1 + 0x68);
    FUN_1001b7a5c(local_58,local_48);
    FUN_100410867(&local_38,local_68,local_58);
    FUN_1001b80b2(param_1 + 0x68,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_68);
  }
  else {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "libraryPathITString.IsEmpty() == false";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  FUN_1001b7a50(local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

