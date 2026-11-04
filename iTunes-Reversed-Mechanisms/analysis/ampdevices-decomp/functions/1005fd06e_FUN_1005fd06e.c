// name: FUN_1005fd06e
// address: 1005fd06e

void FUN_1005fd06e(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40;
  uint local_3e;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100238ca8(&local_48,param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0xa8);
  FUN_10015a142(&local_48);
  if (uVar1 < param_2) {
    iVar3 = FUN_1005fd1ce(param_1,param_2,0);
    if (iVar3 != 0) goto LAB_1005fd17c;
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar5 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar2 == '\0') goto LAB_1005fd17c;
    local_48 = 0x4000100;
    pcVar4 = "amplc> Fetching changes due to Library revision change. newRevision:%u";
    uVar6 = 8;
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar5 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar2 == '\0') goto LAB_1005fd17c;
    local_48 = 0x4000200;
    local_40 = 0x400;
    pcVar4 = "amplc> Ignoring Library revision change. newRevision:%u revision:%u";
    uVar6 = 0xe;
    local_3e = uVar1;
  }
  local_44 = param_2;
  __os_log_impl(0x100000000,uVar5,1,pcVar4,&local_48,uVar6);
LAB_1005fd17c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

