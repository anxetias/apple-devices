// name: FUN_10035f712
// address: 10035f712

char * FUN_10035f712(uint param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 < 0x43) {
    pcVar2 = &DAT_1007453b8 + *(int *)(&DAT_1007453b8 + (ulong)param_1 * 4);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "(unsigned) canAcceptStatus < (sizeof(sCanAcceptStatusStrings) / sizeof(sCanAcceptStatusStrings[0]))"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    pcVar2 = "UNKNOWN";
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

