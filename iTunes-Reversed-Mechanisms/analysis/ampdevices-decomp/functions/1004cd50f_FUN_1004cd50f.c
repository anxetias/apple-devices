// name: FUN_1004cd50f
// address: 1004cd50f

int FUN_1004cd50f(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bfc00 == 0) {
    FUN_1001b7b04(&local_38,"AMPLibrary");
    iVar2 = FUN_1005faa34(&local_38,param_1,param_2,&DAT_1008bfc00);
    FUN_1001b7a50(&local_38);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar3 = DAT_1008c7d18;
      cVar1 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x4000100;
        local_34 = (char *)CONCAT44(local_34._4_4_,iVar2);
        __os_log_impl(0x100000000,uVar3,0x10,
                      "**ERROR**: AMPLibraryClient::Create*() failed! error:%d",&local_38,8);
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "sLibraryClient == nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x234f;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

