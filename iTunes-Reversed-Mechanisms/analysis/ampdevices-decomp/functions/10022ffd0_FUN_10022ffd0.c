// name: FUN_10022ffd0
// address: 10022ffd0

undefined4 FUN_10022ffd0(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_40 = FUN_10016ff43(0,param_1);
  if (local_40 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "fileURL != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffd5;
    goto LAB_1002300d1;
  }
  uStack_60 = FUN_100170716(0,&local_40,1,PTR__kCFTypeArrayCallBacks_10082e130);
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  if (param_2 == 0) {
LAB_10023004b:
    uVar2 = _LSOpenFromURLSpec(&local_68,0);
    lVar4 = local_68;
  }
  else {
    local_68 = FUN_10016ff43(0,param_2);
    if (local_68 != 0) goto LAB_10023004b;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "launchParams.appURL";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffd5;
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(uStack_60);
  FUN_10017060f(local_40);
LAB_1002300d1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

