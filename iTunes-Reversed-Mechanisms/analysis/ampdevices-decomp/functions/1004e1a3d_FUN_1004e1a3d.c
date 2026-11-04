// name: FUN_1004e1a3d
// address: 1004e1a3d

void FUN_1004e1a3d(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_1004e1ad3:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004e1d3e;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_1004e1ad3;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    lVar4 = FUN_10017076e(uVar3);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_58 = 0x4000100;
      local_54 = (char *)CONCAT44(local_54._4_4_,(int)lVar4);
      __os_log_impl(0x100000000,uVar2,1,"backup> got %d backup(s)",&local_58,8);
    }
    if (lVar4 < 1) {
      local_60 = 0.0;
      cVar1 = '\x02';
    }
    else {
      local_60 = 0.0;
      lVar7 = 0;
      do {
        lVar5 = FUN_10016499b(uVar3,lVar7);
        if (lVar5 == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_4a = "backupDict != nullptr";
LAB_1004e1c9f:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
LAB_1004e1cc8:
          FUN_1001782e9(0,0);
        }
        else {
          lVar6 = FUN_100166c1b(lVar5,&cf_TargetIdentifier);
          if (lVar6 == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_4a = "targetIdentifier != nullptr";
              goto LAB_1004e1c9f;
            }
            goto LAB_1004e1cc8;
          }
          cVar1 = FUN_100170633(*(undefined8 *)(param_2 + 0x152c8),lVar6);
          if (cVar1 != '\0') {
            lVar5 = FUN_100166a07(lVar5,&cf_LastBackupDate);
            if (lVar5 == 0) {
              uVar2 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar2,0x10);
              if (cVar1 != '\0') {
                local_4a = "backupDate != nullptr";
                goto LAB_1004e1c9f;
              }
              goto LAB_1004e1cc8;
            }
            dVar8 = (double)FUN_1001711f6(lVar5);
            if (local_60 < dVar8) {
              local_60 = dVar8;
            }
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      cVar1 = '\x01';
    }
    if (*(char *)(param_2 + 0x6ae8) == cVar1) {
      if ((*(double *)(param_2 + 0x151e8) == local_60) &&
         (!NAN(*(double *)(param_2 + 0x151e8)) && !NAN(local_60))) goto LAB_1004e1d2e;
    }
    *(char *)(param_2 + 0x6ae8) = cVar1;
    *(double *)(param_2 + 0x151e8) = local_60;
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x69706269,*(undefined4 *)(param_2 + 0x28),0,0);
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "result->error == kAMDSuccess";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_1004e1d2e:
  FUN_10017060f(uVar3);
  FUN_1004e1e68(param_2);
LAB_1004e1d3e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

