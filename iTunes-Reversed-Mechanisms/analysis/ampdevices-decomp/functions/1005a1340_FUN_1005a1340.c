// name: FUN_1005a1340
// address: 1005a1340

undefined1 FUN_1005a1340(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_78 [64];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017393c(param_1,local_78,0x40,0x600);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "JRCFStringGetCString(string, tempCString, sizeof(tempCString), kCFStringEncodingASCII)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1001e2b4f(local_78,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

