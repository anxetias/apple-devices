// name: FUN_10033cd53
// address: 10033cd53

undefined4 FUN_10033cd53(undefined8 param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  undefined7 uVar6;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar7;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_10017076e();
  uVar6 = (undefined7)((ulong)lVar2 >> 8);
  if (lVar2 < 1) {
    local_5c = (undefined4)CONCAT71(uVar6,1);
  }
  else {
    uVar7 = lVar2 + 1;
    local_5c = (undefined4)CONCAT71(uVar6,1);
    do {
      lVar2 = uVar7 - 2;
      lVar3 = FUN_10016499b(param_1,lVar2);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_4a = "operation != nullptr";
LAB_10033cf9e:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_10033ced9:
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = FUN_100171475(lVar3,&cf_pid);
        cVar1 = FUN_100170633(uVar4,param_2);
        if (cVar1 != '\0') {
          pcVar5 = (char *)FUN_100166c1b(lVar3,&cf_operation);
          if (pcVar5 == (char *)0x0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4a = "operationKind != nullptr";
              goto LAB_10033cf9e;
            }
            goto LAB_10033ced9;
          }
          cVar1 = FUN_100170633(pcVar5,&cf_insert_playlist);
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(pcVar5,&cf_update_playlist);
            if (cVar1 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,2);
              if (cVar1 != '\0') {
                local_58 = 0x8420202;
                local_4c = 0x842;
                local_54 = pcVar5;
                local_4a = param_2;
                __os_log_impl(0x100000000,uVar4,2,
                              "airtraffic> removing %{public}@ operation for persistent id %{public}@"
                              ,&local_58,0x16);
              }
              FUN_100170bed(param_1,lVar2);
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,2);
            if (cVar1 != '\0') {
              local_58 = 0x8420202;
              local_4c = 0x842;
              local_54 = pcVar5;
              local_4a = param_2;
              __os_log_impl(0x100000000,uVar4,2,
                            "airtraffic> removing %{public}@ operation for persistent id %{public}@"
                            ,&local_58,0x16);
            }
            FUN_100170bed(param_1,lVar2);
            local_5c = 0;
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

