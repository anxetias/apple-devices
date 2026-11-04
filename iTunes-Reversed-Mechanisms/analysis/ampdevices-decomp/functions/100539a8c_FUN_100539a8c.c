// name: FUN_100539a8c
// address: 100539a8c

undefined8
FUN_100539a8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x45f;
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "activationDict != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else if (*(char *)(lVar3 + 0x3b2) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->deviceInfo.requiresActivation";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_100166b7f(param_2,&cf_activation_record);
    uVar5 = 0;
    cVar1 = FUN_100167dd2(param_2,&cf_unbrick,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_100167dd2(param_2,&cf_ack_received,0);
      cVar2 = FUN_100167dd2(param_2,&cf_show_settings,0);
      if (lVar4 != 0 || param_3 != 0) {
        FUN_10053ab4f(lVar3,lVar4,param_3,param_4,param_5);
      }
      if (((cVar2 != '\0' || cVar1 != '\0') && (*(undefined1 *)(lVar3 + 0x6af2) = 0, cVar1 != '\0'))
         && (*(long *)(lVar3 + 0x7168) != 0)) {
        FUN_1005bedad();
        *(undefined1 *)(lVar3 + 0x151fc) = 1;
      }
      if ((*(char *)(lVar3 + 0x386) != '\0') || (*(char *)(DAT_1008c76a0 + 0x1a91) != '\0')) {
        FUN_10050a6f5(lVar3,FUN_10053aff4);
      }
      uVar5 = 0;
    }
    else if (*(char *)(lVar3 + 0x6af2) != '\0') {
      FUN_10053ab4f(lVar3,lVar4,param_3,param_4,param_5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

