// name: FUN_10051e99a
// address: 10051e99a

void FUN_10051e99a(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_70;
  undefined **local_68 [4];
  undefined ***local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10051ea64:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10051eb04;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7ab58c;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10051ea64;
  }
  iVar2 = FUN_100425478(*(undefined4 *)(param_1 + 0x28),0,0,&local_70);
  if (iVar2 == -0x80) goto LAB_10051eb04;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x400;
      local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
    goto LAB_10051eb04;
  }
  local_38 = 0x1010100;
  uStack_34 = 0x100;
  local_68[0] = &PTR_FUN_100868250;
  local_48 = local_68;
  (**(code **)(*local_70 + 0x18))(local_70,&local_38,local_68);
  if (local_48 == local_68) {
    lVar4 = 0x20;
LAB_10051eaee:
    (**(code **)((long)*local_48 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_10051eaee;
  }
  FUN_1001ceee0(local_70);
  FUN_10039c7eb(0);
LAB_10051eb04:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

