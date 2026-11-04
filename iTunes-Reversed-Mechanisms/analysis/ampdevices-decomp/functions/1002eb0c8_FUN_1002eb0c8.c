// name: FUN_1002eb0c8
// address: 1002eb0c8

undefined8 FUN_1002eb0c8(undefined8 *param_1,char param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    if (((*(byte *)(param_1 + 9) & 1) == 0) || (*(char *)((long)param_1 + 0x55) != '\0')) {
      if (param_2 != '\0') goto LAB_1002eb124;
    }
    else {
      *(undefined1 *)(plVar1 + 9) = 0;
      uVar2 = 1;
      if (param_2 != '\0') {
LAB_1002eb124:
        uVar2 = 0;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar5);
    }
  }
  plVar1 = (long *)param_1[5];
  if (plVar1 != (long *)0x0) {
    if (((*(byte *)(param_1 + 9) & 2) == 0) || (*(char *)((long)param_1 + 0x55) != '\0')) {
      if (param_2 != '\0') goto LAB_1002eb150;
    }
    else {
      *(undefined1 *)(plVar1 + 9) = 0;
      uVar2 = 1;
      if (param_2 != '\0') {
LAB_1002eb150:
        uVar2 = 0;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar5);
    }
  }
  plVar1 = (long *)param_1[6];
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 9) & 4) == 0) {
      if (param_2 == '\0') goto LAB_1002eb18d;
LAB_1002eb17f:
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(plVar1 + 9) = 0;
      uVar2 = 1;
      if (param_2 != '\0') goto LAB_1002eb17f;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar5);
  }
LAB_1002eb18d:
  plVar1 = (long *)param_1[7];
  if (plVar1 != (long *)0x0) {
    if (((*(byte *)(param_1 + 9) & 0x10) == 0) || (*(char *)((long)param_1 + 0x55) != '\0')) {
      if (param_2 != '\0') goto LAB_1002eb1ab;
    }
    else {
      *(undefined1 *)(plVar1 + 9) = 0;
      uVar2 = 1;
      if (param_2 != '\0') {
LAB_1002eb1ab:
        uVar2 = 0;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar5);
    }
  }
  cVar3 = FUN_1001ee041();
  if (cVar3 == '\0') {
    FUN_10016bec9(&local_48,*param_1);
    iVar4 = FUN_1005c67f7(CONCAT44(iStack_44,local_48),uVar5,FUN_1002eb46c,
                          *(undefined4 *)(param_1 + 1));
    FUN_10016d588(&local_48);
    if (iVar4 == 0) goto LAB_1002eb314;
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 == '\0') goto LAB_1002eb314;
    pcVar7 = "AMSSetDataClassInfoForTargetAsync failed (%d)";
    iStack_44 = iVar4;
  }
  else {
    FUN_10016bec9(&local_48,*param_1);
    iVar4 = _AMSSetDataClassInfoForTarget(CONCAT44(iStack_44,local_48),uVar5);
    FUN_10016d588(&local_48);
    if (iVar4 == 0) goto LAB_1002eb314;
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 == '\0') goto LAB_1002eb314;
    pcVar7 = "AMSSetDataClassInfoForTarget failed (%d)";
    iStack_44 = iVar4;
  }
  local_48 = 0x4000100;
  __os_log_impl(0x100000000,uVar6,0x10,pcVar7,&local_48,8);
LAB_1002eb314:
  FUN_10017060f(uVar5);
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

