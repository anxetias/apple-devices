// name: FUN_10033666b
// address: 10033666b

int FUN_10033666b(long param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **local_78;
  code *local_70;
  long local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x6ad9) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->setupComplete";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x167d8) != 0) || (iVar3 = FUN_10034c280(param_1), iVar3 == 0))
  goto LAB_1003366c4;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_44 = *(char **)(param_1 + 0x152c8);
    local_48 = 0x8420102;
    __os_log_impl(0x100000000,uVar5,1,"airtraffic> writing sync operations for device %{public}@",
                  &local_48,0xc);
  }
  iVar4 = FUN_1004dccf5(param_1,"");
  if (iVar4 == -0x80) goto LAB_1003366c4;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1003366c4;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x167dc) = 0;
  local_78 = &PTR_FUN_100854778;
  local_70 = FUN_10034c361;
  local_68 = param_1;
  local_58 = &local_78;
  iVar4 = FUN_1001b1a89(&local_78,"WriteAirTrafficSyncOperationsFiber",param_1 + 0x167d8,0);
  if (local_58 == &local_78) {
    lVar6 = 0x20;
LAB_100336843:
    (**(code **)((long)*local_58 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_100336843;
  }
  if (iVar4 != -0x80) {
    if (iVar4 == 0) goto LAB_1003366c4;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_1003366c4;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  FUN_1004dd69c(param_1,"");
LAB_1003366c4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

