// name: FUN_1005b3374
// address: 1005b3374

void FUN_1005b3374(long param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_50 = &cf_pscKind;
    FUN_1001a7b90(&local_48);
    lVar3 = lVar3 + 0x18;
    FUN_1003684b8(lVar3,&local_48);
    FUN_1001ab240(&local_48);
    FUN_1001a7b90(&local_50);
    FUN_1001aa318(&local_48);
    FUN_1001aad96(&local_48,(int)param_3);
    FUN_1001a9c84(lVar3,&local_50,&local_48);
    FUN_1001aae6c(&local_48);
    FUN_1001ab240(&local_50);
    local_50 = &cf_pscSendAppliedMsg;
    FUN_1001a7b90(&local_48,&local_50);
    FUN_1001a9d34(lVar3,&local_48,param_4);
    FUN_1001ab240(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

