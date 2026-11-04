// name: FUN_10036873a
// address: 10036873a

long FUN_10036873a(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_70;
  long local_68;
  long *plStack_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  plStack_60 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
LAB_10036887e:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10036887e;
    }
    FUN_100203686(&local_68,param_1 + 0x2cb0);
    if (local_68 != 0) {
      iVar4 = FUN_1001d4041(*(undefined8 *)(local_68 + 0x68),"genius_config",0,1,"data",0,&local_70,
                            &local_48);
      lVar6 = CONCAT44(uStack_44,local_48);
      if ((local_70 != 0 && lVar6 != 0) && iVar4 == 0) {
        if (param_2 != (long *)0x0) {
          *param_2 = local_70;
        }
        if (param_3 != (undefined4 *)0x0) {
          iVar4 = FUN_1001d408a(*(undefined8 *)(local_68 + 0x68),"genius_config",0,1,"version",
                                &local_4c);
          if (iVar4 == 0) {
            *param_3 = local_4c;
          }
        }
        goto LAB_1003688a8;
      }
    }
    lVar6 = 0;
  }
LAB_1003688a8:
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

