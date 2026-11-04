// name: FUN_100325516
// address: 100325516

undefined8
FUN_100325516(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,undefined1 *param_5,
             undefined1 *param_6)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mCollectionsToSync != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    lVar3 = FUN_10017076e();
    uVar5 = 0xffffffce;
    if (param_2 < lVar3 && 0 < lVar3) {
      lVar3 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar5 = 0;
      if (lVar3 != 0) {
        if (param_3 != (undefined8 *)0x0) {
          uVar4 = FUN_100166c1b(lVar3,&cf_AMSCollectionName);
          uVar4 = FUN_1001705fc(uVar4);
          *param_3 = uVar4;
        }
        if (param_4 != (undefined8 *)0x0) {
          uVar4 = FUN_100166c1b(lVar3,&cf_AMSCollectionDisplayName);
          uVar4 = FUN_1001705fc(uVar4);
          *param_4 = uVar4;
        }
        if (param_5 != (undefined1 *)0x0) {
          uVar1 = FUN_100167e61(lVar3,&cf_AMSCollectionReadOnly,0);
          *param_5 = uVar1;
        }
        if (param_6 != (undefined1 *)0x0) {
          uVar5 = 0;
          uVar1 = FUN_100167e61(lVar3,&cf_AMSCollectionFiltered,0);
          *param_6 = uVar1;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

