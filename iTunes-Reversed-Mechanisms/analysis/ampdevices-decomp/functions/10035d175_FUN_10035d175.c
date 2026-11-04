// name: FUN_10035d175
// address: 10035d175

void FUN_10035d175(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "codecList != nullptr";
LAB_10035d2b9:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = FUN_10035cf53(param_1,param_2);
      if (lVar2 == 0) {
        FUN_1001c62d9(&local_58,0x24);
        local_4a._0_6_ = CONCAT42(0x473b8000,(undefined2)local_4a);
        local_40 = 0xffffffffffffffff;
        local_38 = 0xffffffff;
        local_54._0_5_ = CONCAT41(0x1010101,(undefined1)local_54);
        if (((param_2 == 0x61616320) || (param_2 == 0x68616163)) || (param_2 == 0x616c6163)) {
          local_54 = (char *)CONCAT71(local_54._1_7_,1);
        }
        local_58 = param_2;
        FUN_10035d2e6(&local_58,param_1);
      }
      goto LAB_10035d27a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "codecType != kUnknownDeviceAudioCodecType";
      goto LAB_10035d2b9;
    }
  }
  FUN_1001782e9(0,0);
LAB_10035d27a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

