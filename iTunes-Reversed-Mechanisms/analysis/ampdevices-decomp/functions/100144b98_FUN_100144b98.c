// name: FUN_100144b98
// address: 100144b98

undefined8 FUN_100144b98(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = (**(code **)(*param_2 + 0xa8))(param_2);
  if (cVar1 == '\0') {
LAB_100144c79:
    cVar1 = FUN_100154092(*param_4);
    if (cVar1 != '\0') {
      uVar3 = FUN_100135270();
      cVar1 = _os_log_type_enabled(uVar3,1);
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0xd0))(local_68,param_2);
        local_54 = FUN_1001b83ae(local_68);
        local_4a = (undefined4)param_2[0x31];
        local_58 = 0x8220202;
        local_4c = 0x400;
        __os_log_impl(0x100000000,uVar3,1,
                      "storereq> %{public}s(%d). Response includes action to follow.",&local_58,0x12
                     );
        FUN_1001b7a50(local_68);
      }
      bVar2 = FUN_100144562(param_2,param_4);
      if ((bVar2 & *param_3 == 0) == 1) {
        FUN_10014f388(&local_58,0x1db9);
        FUN_1001b7b04(local_68,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001b7b04(local_78,"Protocol action handled. Issuing request cancellation.");
        FUN_1001aa6a0(param_1,local_68,0x1d51,local_78,&local_58);
        FUN_1001b7a50(local_78);
        FUN_1001b7a50(local_68);
        FUN_1001a8fac(&local_58);
        goto LAB_100144d92;
      }
    }
  }
  else {
    cVar1 = FUN_100153f5a(*param_4);
    if (cVar1 == '\0') goto LAB_100144c79;
    uVar3 = FUN_100135270();
    cVar1 = _os_log_type_enabled(uVar3,1);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xd0))(local_68,param_2);
      local_54 = FUN_1001b83ae(local_68);
      local_4a = (undefined4)param_2[0x31];
      local_58 = 0x8220202;
      local_4c = 0x400;
      __os_log_impl(0x100000000,uVar3,1,
                    "storereq> %{public}s(%d). Response includes dialog and is allowed to show UI.",
                    &local_58,0x12);
      FUN_1001b7a50(local_68);
    }
    FUN_100144736(param_2,param_3,param_4);
  }
  FUN_1001a8c1c(param_1,param_3);
LAB_100144d92:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

