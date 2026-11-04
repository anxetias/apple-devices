// name: FUN_10061cbaa
// address: 10061cbaa

void FUN_10061cbaa(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  long local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_2;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (lVar1 == 0) {
    if (cVar3 == '\0') goto LAB_10061cc78;
    local_44 = **(undefined8 **)(param_1 + 0x10);
    local_48 = 0x8000100;
    pcVar4 = "sync> reauthorization successful for account %llu";
    uVar5 = 0xc;
  }
  else {
    if (cVar3 == '\0') goto LAB_10061cc78;
    local_44 = **(undefined8 **)(param_1 + 0x10);
    local_3a = *param_2;
    local_48 = 0x8000202;
    local_3c = 0x842;
    pcVar4 = "sync> reauthorization failed for account %llu: %{public}@";
    uVar5 = 0x16;
  }
  __os_log_impl(0x100000000,uVar2,1,pcVar4,&local_48,uVar5);
LAB_10061cc78:
  FUN_1001e9809(*(undefined8 *)(param_1 + 8));
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

