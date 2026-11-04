// name: FUN_100324b14
// address: 100324b14

void FUN_100324b14(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != 0) && (lVar2 = FUN_10017076e(param_2), 0 < lVar2)) {
    lVar2 = FUN_10017076e(param_2);
    uVar3 = FUN_100170720(DAT_1008c4d90,lVar2,PTR__kCFTypeArrayCallBacks_10082e130);
    *param_3 = uVar3;
    if (0 < lVar2) {
      lVar6 = 0;
      do {
        lVar4 = FUN_10016499b(param_2,lVar6);
        if (lVar4 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dictGroup != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          uVar5 = FUN_100166c1b(lVar4,&cf_AMSCollectionName);
          FUN_1001714de(uVar3,&cf_AMSCollectionName,uVar5);
          uVar5 = FUN_100166c1b(lVar4,&cf_AMSCollectionDisplayName);
          FUN_1001714de(uVar3,&cf_AMSCollectionDisplayName,uVar5);
          uVar5 = FUN_1001668a7(lVar4,&cf_AMSCollectionReadOnly);
          FUN_1001714de(uVar3,&cf_AMSCollectionReadOnly,uVar5);
          uVar5 = FUN_1001668a7(lVar4,&cf_AMSCollectionFiltered);
          FUN_1001714de(uVar3,&cf_AMSCollectionFiltered,uVar5);
          FUN_1001709a5(*param_3,uVar3);
          FUN_10017060f(uVar3);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

