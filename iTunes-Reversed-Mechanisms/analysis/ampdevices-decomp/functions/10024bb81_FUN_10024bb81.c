// name: FUN_10024bb81
// address: 10024bb81

undefined8 FUN_10024bb81(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_60;
  undefined8 local_58;
  char local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_60,0x18);
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "iccidString != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10024bc2b;
  }
  lVar2 = FUN_1005f4d4c(&cf_MobileDeviceCarriers,0x6950686e);
  if (lVar2 == 0) {
LAB_10024bbf9:
    uVar3 = 0;
  }
  else {
    local_60 = param_1;
    FUN_1001714c2(lVar2,FUN_10025a6e8,&local_60);
    if (local_50 != '\x01') goto LAB_10024bbf9;
    FUN_1001705fc(local_58);
    uVar3 = local_58;
  }
  FUN_10017060f(lVar2);
LAB_10024bc2b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

