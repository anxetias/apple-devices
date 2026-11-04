// name: FUN_100257ca7
// address: 100257ca7

undefined4 FUN_100257ca7(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "userDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = FUN_1004de449(param_1);
    lVar5 = FUN_100501f71(uVar4);
    if (lVar5 != 0) {
      FUN_10016826a(lVar3,&cf_deviceIdentifier,lVar5,0);
      FUN_1001b7a44(&local_58);
      uVar4 = FUN_100416f20(param_2,0x10cc00ff);
      FUN_1001b7eb0(local_88,uVar4);
      uVar4 = FUN_100416f20(param_2,0x10cc00dc);
      FUN_1001b7eb0(local_68,uVar4);
      FUN_1001bbec4(local_78,local_68,param_3);
      uVar4 = FUN_100560850(param_1);
      uVar2 = FUN_10021a205(&local_58,local_88,&DAT_1008c5370,local_78,0x6973756e,0x6973756e,0,uVar4
                            ,lVar3);
      FUN_10025b2ae(uVar4);
      FUN_1001b7a50(local_78);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_88);
      FUN_1001b7a50(&local_58);
      goto LAB_100257e37;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceIdentifier != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar5 = 0;
  uVar2 = 0;
LAB_100257e37:
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

