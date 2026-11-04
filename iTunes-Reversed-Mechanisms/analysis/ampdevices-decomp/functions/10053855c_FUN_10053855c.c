// name: FUN_10053855c
// address: 10053855c

undefined8 FUN_10053855c(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_48 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017393c(param_1,local_48,0x10,0x600);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "JRCFStringGetCString(deviceLocale, deviceLocaleCString, sizeof(deviceLocaleCString), kCFStringEncodingASCII)"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_1005382c5(local_48,&local_38,0x10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100172473(DAT_1008c4d90,&local_38,0x600);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

