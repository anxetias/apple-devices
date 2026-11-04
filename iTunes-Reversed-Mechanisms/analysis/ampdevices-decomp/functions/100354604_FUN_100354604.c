// name: FUN_100354604
// address: 100354604

/* WARNING: Type propagation algorithm not settling */

int FUN_100354604(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long local_68;
  undefined1 local_60 [20];
  int local_4c [2];
  undefined8 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c[0] = 0;
  if (param_2 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      local_30 = 1;
      uStack_2c = 0x822;
      uStack_2a = 0xd8a6;
      uStack_28 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1003548a6;
  }
  *param_2 = 0;
  FUN_10024220c(&local_38,param_1,0,0,local_4c);
  plVar3 = (long *)CONCAT44(uStack_34,local_38);
  if (plVar3 == (long *)0x0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar4 != '\0') {
      FUN_10017d520(local_60,param_1);
      local_44 = FUN_1001b83ae(local_60);
      local_4c[1] = 0x8220102;
      __os_log_impl(0x100000000,uVar6,1,"artwork> failed to find handler for file \"%{public}s\"",
                    local_4c + 1,0xc);
      FUN_1001b7a50(local_60);
    }
    local_4c[0] = 0x232d;
  }
  else {
    local_68 = 0;
    local_4c[0] = (**(code **)(*plVar3 + 0x28))(plVar3,0x104,&local_68,0,0);
    if ((local_68 == 0 || local_4c[0] != 0) || (iVar5 = FUN_1005d3a5b(), iVar5 < 1)) {
      if (local_4c[0] == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          FUN_10017d520(local_60,param_1);
          local_44 = FUN_1001b83ae(local_60);
          pcVar8 = "artwork> no artwork for file \"%{public}s\"";
          goto LAB_100354841;
        }
        goto LAB_10035485d;
      }
    }
    else {
      uVar6 = FUN_1005d3da4(local_68,0);
      uVar6 = FUN_1005d3229(uVar6,0x40000000);
      lVar7 = FUN_1001705fc(uVar6);
      *param_2 = lVar7;
      if (lVar7 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          FUN_10017d520(local_60,param_1);
          local_44 = FUN_1001b83ae(local_60);
          pcVar8 = "artwork> failed to get artwork data for file \"%{public}s\"";
LAB_100354841:
          local_4c[1] = 0x8220102;
          __os_log_impl(0x100000000,uVar6,1,pcVar8,local_4c + 1,0xc);
          FUN_1001b7a50(local_60);
        }
LAB_10035485d:
        local_4c[0] = 0x232d;
      }
    }
    if (local_68 != 0) {
      piVar1 = (int *)(local_68 + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1005d3cba();
      }
    }
  }
  iVar5 = local_4c[0];
  plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1003548a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

