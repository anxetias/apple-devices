// name: FUN_1002287b5
// address: 1002287b5

long FUN_1002287b5(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001737e5(DAT_1008c4d90,0x200,param_1);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "signatureFileURL != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1001734f5(DAT_1008c4d90,".signature",0x600,
                          *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "signatureExtension != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar2);
      lVar2 = 0;
    }
    else {
      FUN_10017415e(lVar2,lVar3);
    }
  }
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

