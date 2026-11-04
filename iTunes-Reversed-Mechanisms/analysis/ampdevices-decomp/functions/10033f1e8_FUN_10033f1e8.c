// name: FUN_10033f1e8
// address: 10033f1e8

void FUN_10033f1e8(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined4 local_48;
  long local_44;
  undefined2 local_3c;
  double local_3a;
  undefined2 local_32;
  double local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0x166d4) == 5) || (*(int *)(param_1 + 0x166d4) == 2)) {
    uVar2 = FUN_10034bb06(param_2,&cf_OverallProgress);
    dVar4 = (double)FUN_1001697fe(0,uVar2);
    if (((DAT_100701af0 < dVar4) && (dVar4 <= DAT_100700458)) && (*(long *)(param_1 + 0x6750) != 0))
    {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_100528f93();
        return;
      }
      goto LAB_10033f399;
    }
  }
  else {
    lVar3 = FUN_1003400ee(param_2,&cf_CurrentAsset);
    if (lVar3 != 0) {
      uVar2 = FUN_10034bb06(param_2,&cf_AssetProgress);
      dVar4 = (double)FUN_1001697fe(0,uVar2);
      uVar2 = FUN_10034bb06(param_2,&cf_OverallProgress);
      dVar5 = (double)FUN_1001697fe(0,uVar2);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_3a = dVar4 * DAT_10070f3a8;
        local_30 = dVar5 * DAT_10070f3a8;
        local_48 = 0x8420302;
        local_3c = 0x800;
        local_32 = 0x800;
        local_44 = lVar3;
        __os_log_impl(0x100000000,uVar2,1,
                      "airtraffic> asset identifier \"%{public}@\", asset progress = %.2f%%, overall progress = %.2f%%"
                      ,&local_48,0x20,dVar4);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_10033f399:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

