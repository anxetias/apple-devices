// name: FUN_100625128
// address: 100625128

undefined8 FUN_100625128(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002188e4(param_3);
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inPersistentID != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,
                          "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_48,0x16
                         );
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    lVar2 = FUN_1002b8060(param_1 + 0x48,param_2);
    if (lVar2 == 0) {
      uVar3 = 0x2365;
    }
    else {
      FUN_100203686(param_3,lVar2 + 0x18);
      uVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

