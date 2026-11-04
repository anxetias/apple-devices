// name: FUN_100334d9c
// address: 100334d9c

void FUN_100334d9c(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(uint *)(param_1 + 2) & param_2) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar5 = 1;
    if (((*(uint *)(param_1 + 2) & param_3) != 0) &&
       (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_1 + 0x14))) {
      lVar1 = param_1[5];
      lVar3 = FUN_10017076e(lVar1);
      uVar5 = 2;
      if (0 < lVar3) {
        uVar6 = lVar3 + 1;
        do {
          uVar4 = FUN_10016499b(lVar1,uVar6 - 2);
          lVar3 = FUN_100166c1b(uVar4,&cf_operation);
          if (lVar3 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "operationKind != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            cVar2 = FUN_100170633(lVar3,&cf_upload_track);
            if (cVar2 == '\0') {
              FUN_100170bed(lVar1,uVar6 - 2);
            }
          }
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
        uVar5 = 2;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar5;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      if ((ulong)*(uint *)(param_1 + 4) < 4) {
        local_54 = (&PTR_s_ATSyncNoSync_100854868)[*(uint *)(param_1 + 4)];
      }
      else {
        local_54 = "UNKNOWN";
      }
      local_4a = (char *)param_1[1];
      local_40 = *(undefined8 *)(*param_1 + 0x152c8);
      local_58 = 0x8220302;
      local_4c = 0x842;
      local_42 = 0x842;
      __os_log_impl(0x100000000,uVar4,1,
                    "airtraffic> performing %{public}s for dataclass %{public}@ for device %{public}@"
                    ,&local_58,0x20);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

