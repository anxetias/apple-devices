// name: FUN_1002eb77e
// address: 1002eb77e

undefined8 FUN_1002eb77e(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "arrayCollections != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    if (param_2 != 0) {
      local_60 = 0;
      FUN_10016bec9(&local_58,*param_1);
      iVar2 = _AMSGetCollectionsForDataClassName(CONCAT44(uStack_54,local_58),param_2,&local_60);
      FUN_10016d588(&local_58);
      if (iVar2 == 0) {
        if (local_60 != 0) {
          lVar4 = FUN_10017076e();
          uVar3 = FUN_100170720(DAT_1008c4d90,lVar4,PTR__kCFTypeArrayCallBacks_10082e130);
          *param_3 = uVar3;
          if (0 < lVar4) {
            lVar7 = 0;
            do {
              lVar5 = FUN_10016499b(local_60,lVar7);
              if (lVar5 == 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "dictGroup != nullptr";
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                      PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                uVar6 = FUN_100166c1b(lVar5,&cf_AMSCollectionName);
                FUN_1001714de(uVar3,&cf_AMSCollectionName,uVar6);
                uVar6 = FUN_100166c1b(lVar5,&cf_AMSCollectionDisplayName);
                FUN_1001714de(uVar3,&cf_AMSCollectionDisplayName,uVar6);
                uVar6 = FUN_1001668a7(lVar5,&cf_AMSCollectionReadOnly);
                FUN_1001714de(uVar3,&cf_AMSCollectionReadOnly,uVar6);
                uVar6 = FUN_1001668a7(lVar5,&cf_AMSCollectionFiltered);
                FUN_1001714de(uVar3,&cf_AMSCollectionFiltered,uVar6);
                FUN_1001709a5(*param_3,uVar3);
                FUN_10017060f(uVar3);
              }
              lVar7 = lVar7 + 1;
            } while (lVar4 != lVar7);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "status == AMSStatus_OK";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8420202;
          uStack_54 = (undefined4)param_2;
          uStack_50 = (undefined4)((ulong)param_2 >> 0x20);
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_impl(0x100000000,uVar3,0x10,
                        "AMSGetCollectionsForDataClassName for %{public}@ failed (%d)",&local_58,
                        0x12);
        }
      }
      FUN_10017060f(local_60);
      uVar3 = 0;
      goto LAB_1002eba72;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "className != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = 0xffffffce;
LAB_1002eba72:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

