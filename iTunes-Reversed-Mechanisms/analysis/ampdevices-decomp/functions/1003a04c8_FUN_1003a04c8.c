// name: FUN_1003a04c8
// address: 1003a04c8

void FUN_1003a04c8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 local_6c;
  char *local_6a;
  long *local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = FUN_1001ee041();
  if (cVar4 != '\0') {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      local_6c = 0x822;
      local_6a = "JRIsCurrentThreadPreemptive() == false";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,1);
  }
  piVar1 = (int *)((long)param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) goto LAB_1003a0720;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      local_6c = 0x822;
      local_6a = "mNumTracks == 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10039ffa2(param_1);
  if (*(int *)((long)param_1 + 0x14) != 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      local_6c = 0x822;
      local_6a = "this->IsEmpty()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_78._0_4_ = 0x8567c0;
  local_78._4_4_ = 1;
  local_58 = &local_78;
  FUN_1003a0178(param_1,0,&local_78);
  if (local_58 == &local_78) {
    lVar6 = 0x20;
LAB_1003a05ba:
    (**(code **)(*local_58 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_58 != (long *)0x0) goto LAB_1003a05ba;
  }
  plVar2 = (long *)param_1[9];
  if (plVar2 != (long *)0x0) {
    if ((int)plVar2[0x10] != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1003a0717;
    }
    if ((int)param_1[2] == 1) {
      if ((long *)plVar2[0x36f] != param_1) {
        uVar5 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "trackData->unassignedAlbumInfo == this";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      plVar2[0x36f] = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x10))(plVar2,0x74647261,plVar2,param_1,0);
      FUN_100277ada(param_1);
    }
    switch((int)param_1[2]) {
    case 1:
    case 4:
      break;
    case 2:
      FUN_1001dcff5(plVar2 + 0x396,(int)param_1[0x20]);
      FUN_1001dcff5(plVar2 + 0x396,*(undefined4 *)((long)param_1 + 0x104));
      break;
    case 3:
      pvVar3 = (void *)param_1[0x20];
      if (pvVar3 != (void *)0x0) {
        FUN_1001b7a50(pvVar3);
        operator_delete(pvVar3);
      }
      pvVar3 = (void *)param_1[0x21];
      if (pvVar3 != (void *)0x0) {
        FUN_1001b7a50(pvVar3);
        operator_delete(pvVar3);
      }
      break;
    default:
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "false";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001de750(param_1 + 0x13);
  }
LAB_1003a0717:
  (**(code **)(*param_1 + 0x10))(param_1);
LAB_1003a0720:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

