// name: FUN_10041bf60
// address: 10041bf60

void FUN_10041bf60(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar2 = (long *)FUN_10039a28c();
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
  cVar1 = FUN_10039c194(uVar3,param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "CIPodIPhoneUpdaterManager::GetInstance()->GetUpdateRestoreActionDelegateListManager()->UnregisterDelegate(this)"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

