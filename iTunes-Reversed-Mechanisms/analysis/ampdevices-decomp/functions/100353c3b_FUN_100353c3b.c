// name: FUN_100353c3b
// address: 100353c3b

undefined8 FUN_100353c3b(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_90;
  undefined **local_88;
  undefined8 *local_80;
  long local_78;
  undefined4 local_70;
  undefined ***local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = 0;
  if (param_1 == 0) {
LAB_100353d89:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100353d89;
    }
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "TrackInfoIsValid(trackInfo)";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = FUN_100353ffd(param_1,param_2);
      uVar2 = local_90;
      if ((cVar1 == '\0') || (lVar3 = *(long *)(param_2 + 0x28), lVar3 == 0)) goto LAB_100353dd9;
      if (*(int *)(lVar3 + 0x10) != 1) {
        local_70 = FUN_1005d1c9c(param_2);
        local_88 = &PTR_FUN_100854918;
        local_80 = &local_90;
        local_78 = param_2;
        local_68 = &local_88;
        FUN_1003a0178(lVar3,1,&local_88);
        if (local_68 == &local_88) {
          lVar3 = 0x20;
        }
        else {
          lVar3 = 0x28;
          uVar2 = local_90;
          if (local_68 == (undefined ***)0x0) goto LAB_100353dd9;
        }
        (**(code **)((long)*local_68 + lVar3))();
        uVar2 = local_90;
        goto LAB_100353dd9;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "albumInfo->GetAlbumKind() != kAlbumKind_Unassigned";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        FUN_100476ac1(&local_48,param_2);
        local_54 = FUN_1001b83ae(&local_48);
        local_58 = 0x8220102;
        __os_log_impl(0x100000000,uVar2,1,
                      "artwork> attempting to find sparse artwork in unassigned album for track \"%{public}s\""
                      ,&local_58,0xc);
        FUN_1001b7a50(&local_48);
      }
    }
  }
  uVar2 = 0;
LAB_100353dd9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

