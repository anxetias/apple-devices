// name: FUN_1005e9a8e
// address: 1005e9a8e

int FUN_1005e9a8e(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (undefined4 *)0x0;
  FUN_1005e9a2c();
  if (param_1 != 0x41704576) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "eventClass == kAppEventClassApplication";
LAB_1005e9c8e:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005e9b99:
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto switchD_1005e9b2b_caseD_5;
  }
  if (param_2 != 0x414d524e) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "eventKind == kMobileDeviceRestoreNotificationAppEventKind";
      goto LAB_1005e9c8e;
    }
    goto LAB_1005e9b99;
  }
  iVar2 = FUN_1001c0309(param_4,param_5,8,&local_50);
  if (iVar2 == -0x80) goto switchD_1005e9b2b_caseD_5;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto switchD_1005e9b2b_caseD_5;
  }
  if (local_50 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "notification != nullptr";
      goto LAB_1005e9c8e;
    }
    goto LAB_1005e9b99;
  }
  iVar2 = 0;
  switch(*local_50) {
  case 1:
    uVar3 = *(undefined8 *)(local_50 + 2);
    uVar5 = 0;
    break;
  case 2:
    uVar5 = *(undefined8 *)(local_50 + 2);
    uVar4 = 0;
    goto LAB_1005e9ce2;
  case 3:
    uVar5 = *(undefined8 *)(local_50 + 4);
    uVar3 = 0;
    break;
  case 4:
    uVar4 = *(undefined8 *)(local_50 + 4);
    uVar5 = 0;
LAB_1005e9ce2:
    uVar3 = 0;
LAB_1005e9ce4:
    iVar2 = 0;
    FUN_1005ea388(uVar5,uVar4,uVar3);
  default:
    goto switchD_1005e9b2b_caseD_5;
  case 6:
    uVar4 = *(undefined8 *)(local_50 + 6);
    uVar3 = 0;
    uVar5 = 0;
    goto LAB_1005e9cf8;
  case 7:
    uVar3 = *(undefined8 *)(local_50 + 6);
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_1005e9ce4;
  }
  uVar4 = 0;
LAB_1005e9cf8:
  iVar2 = 0;
  FUN_1005e9d24(uVar3,uVar5,uVar4);
switchD_1005e9b2b_caseD_5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

