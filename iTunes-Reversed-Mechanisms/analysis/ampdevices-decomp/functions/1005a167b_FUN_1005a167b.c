// name: FUN_1005a167b
// address: 1005a167b

int FUN_1005a167b(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_7c [5];
  undefined4 local_77;
  undefined4 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    cVar1 = FUN_100170633(param_2,&cf_Audible);
    if (cVar1 != '\0') {
      cVar1 = FUN_100167dd2(param_1,&cf_Type2,0);
      if (cVar1 != '\0') {
        FUN_10035d175(param_4,0x61613220);
      }
      cVar1 = FUN_100167dd2(param_1,&cf_Type3,0);
      if (cVar1 != '\0') {
        FUN_10035d175(param_4,0x61613320);
      }
      iVar2 = 0;
      cVar1 = FUN_100167dd2(param_1,&cf_Type4,0);
      if (cVar1 != '\0') {
        FUN_10035d175(param_4,0x61613420);
      }
      cVar1 = FUN_100167dd2(param_1,&cf_AAC,0);
      if (cVar1 != '\0') {
        FUN_10035d175(param_4,0x61617820);
      }
      goto LAB_1005a184a;
    }
  }
  FUN_1001c62d9(local_7c,0x24);
  local_6c = 0x473b8000;
  local_64 = 0xffffffffffffffff;
  local_5c = 0xffffffff;
  local_77 = 0x1010101;
  FUN_10059def0(param_1,&PTR_s_MinimumSampleRate_10086d030,0x10,local_7c);
  iVar2 = FUN_10035d560(local_7c,param_2,param_3);
  if (iVar2 != -0x80) {
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar2 != 0) goto LAB_1005a184a;
    }
    if (((param_3 == 0x69506164) || (param_3 == 0x69506f74)) || (param_3 == 0x6950686e)) {
      cVar1 = FUN_100171439(param_1,&cf_MaximumSampleRate);
      if (cVar1 == '\0') {
        local_6c = 0x7f7fffff;
      }
    }
    iVar2 = FUN_10035d2e6(local_7c,param_4);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_1005a184a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

