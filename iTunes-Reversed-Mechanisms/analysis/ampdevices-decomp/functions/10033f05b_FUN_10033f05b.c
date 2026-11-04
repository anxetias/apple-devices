// name: FUN_10033f05b
// address: 10033f05b

void FUN_10033f05b(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  undefined2 local_36;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_10034bb06(param_2,&cf_ErrorCode);
  iVar3 = FUN_100169779(uVar4,0);
  FUN_10033470c(param_1,iVar3 == 2 | 8,iVar3);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_44 = *(undefined8 *)(param_1 + 0x152c8);
    local_48 = 0x8420102;
    __os_log_impl(0x100000000,uVar4,1,
                  "airtraffic> aborting sync for device %{public}@ due to sync failure",&local_48,
                  0xc);
  }
  FUN_1004e2d0e(param_1,0);
  FUN_10034b96f(param_1);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x152c8);
    local_34 = FUN_10032f390(iVar3);
    local_48 = 0x8420302;
    local_3c = 0x400;
    local_36 = 0x822;
    local_44 = uVar1;
    local_3a = iVar3;
    __os_log_impl(0x100000000,uVar4,1,
                  "airtraffic> sync failed for device %{public}@ due to error %d (%{public}s)",
                  &local_48,0x1c);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

