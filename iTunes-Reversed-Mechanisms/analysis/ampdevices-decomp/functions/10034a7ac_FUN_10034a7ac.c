// name: FUN_10034a7ac
// address: 10034a7ac

void FUN_10034a7ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de07b();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    pcVar4 = &cf___;
    if (param_3 != 0) {
      pcVar4 = (cfstringStruct *)0x0;
    }
    uVar3 = FUN_10032f3b4(param_3);
    FUN_100346d75(lVar2,1,param_2,4,pcVar4,0,0,uVar3,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

