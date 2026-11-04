// name: FUN_1003541e0
// address: 1003541e0

undefined8 FUN_1003541e0(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_90;
  long local_88 [4];
  long *local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = 0;
  cVar1 = FUN_100353ffd(param_1,param_3);
  uVar3 = local_90;
  if ((((cVar1 != '\0') && (param_2 != 0)) && (*(long *)(param_1 + 0x66c0) != 0)) &&
     (lVar4 = *(long *)(param_2 + 0x28), lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x10) == 1) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "albumInfo->GetAlbumKind() != kAlbumKind_Unassigned";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        FUN_100476ac1(&local_48,param_2);
        local_54 = FUN_1001b83ae(&local_48);
        local_58 = 0x8220102;
        __os_log_impl(0x100000000,uVar3,1,
                      "artwork> attempting to find sparse artwork in unassigned album for track \"%{public}s\""
                      ,&local_58,0xc);
        FUN_1001b7a50(&local_48);
      }
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_1005d1c9c(param_3);
      local_68 = operator_new(0x28);
      *local_68 = (long)&PTR_FUN_100854898;
      local_68[1] = param_2;
      *(undefined4 *)(local_68 + 2) = uVar2;
      local_68[3] = (long)&local_90;
      local_68[4] = param_1;
      FUN_1003a0178(lVar4,1,local_88);
      if (local_68 == local_88) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        uVar3 = local_90;
        if (local_68 == (long *)0x0) goto LAB_100354364;
      }
      (**(code **)(*local_68 + lVar4))();
      uVar3 = local_90;
    }
  }
LAB_100354364:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

