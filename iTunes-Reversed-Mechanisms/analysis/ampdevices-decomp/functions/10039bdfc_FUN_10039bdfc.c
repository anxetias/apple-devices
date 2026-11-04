// name: FUN_10039bdfc
// address: 10039bdfc

undefined8 FUN_10039bdfc(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "updateRestoreActionDelegate != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = param_1 + 0x48;
    for (lVar5 = *(long *)(param_1 + 0x50); lVar5 != lVar1; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long **)(lVar5 + 0x10) == param_2) {
        if (lVar5 != lVar1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = 
            "std::find(mIPodSoftwareUpdateRestoreActionDelegateList.begin(), mIPodSoftwareUpdateRestoreActionDelegateList.end(), updateRestoreActionDelegate) == mIPodSoftwareUpdateRestoreActionDelegateList.end()"
            ;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10039bed0;
        }
        break;
      }
    }
    uVar3 = (**(code **)(*param_2 + 0x50))(param_2);
    lVar5 = FUN_10039c016(param_1,uVar3,0);
    if (lVar5 == 0) {
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      plVar6 = operator_new(0x18);
      plVar6[2] = (long)param_2;
      plVar6[1] = lVar1;
      lVar1 = *(long *)(param_1 + 0x48);
      *plVar6 = lVar1;
      *(long **)(lVar1 + 8) = plVar6;
      *(long **)(param_1 + 0x48) = plVar6;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      uVar4 = 1;
      goto LAB_10039bed2;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "FindUpdateRestoreActionDelegateByObjectID(updateRestoreActionDelegate->GetDeviceObjectID(), 0) == nullptr"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_10039bed0:
  uVar4 = 0;
LAB_10039bed2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

