// name: FUN_10041bb58
// address: 10041bb58

int FUN_10041bb58(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e0;
  undefined4 local_6d8;
  char *local_6d4;
  undefined2 local_6cc;
  char *local_6ca;
  undefined2 local_6c2;
  undefined8 local_6c0;
  undefined1 local_6b8 [1656];
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -0x80;
  if (*(int *)(param_1 + 0x80) == 0) goto LAB_10041be02;
  cVar1 = FUN_1005b7c7f();
  if (cVar1 == '\0') goto LAB_10041be02;
  cVar1 = FUN_1005e7022(*(undefined4 *)(param_1 + 0x4c4));
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x1352) != '\0')) goto LAB_10041be02;
  FUN_10041c242(local_6b8,param_1,2,0);
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  lVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
  bVar8 = local_40 != 0;
  local_40 = lVar3;
  if (bVar8) {
    _CFRelease();
  }
  *(undefined1 *)(param_1 + 0x1352) = 1;
  plVar4 = (long *)FUN_10039a28c();
  iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,local_6b8,&local_6e0);
  if (iVar2 != -0x80) {
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_6d8 = 0x8220202;
        local_6d4 = "Assertion failure";
        local_6cc = 0x400;
        local_6ca = (char *)CONCAT44(local_6ca._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_6d8,0x12);
      }
      if (iVar2 != 0) goto LAB_10041bdf9;
    }
    plVar4 = (long *)FUN_10039a28c();
    iVar2 = (**(code **)(*plVar4 + 8))(plVar4,local_6e0);
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_6d8 = 0x8220202;
          local_6d4 = "Assertion failure";
          local_6cc = 0x400;
          local_6ca = (char *)CONCAT44(local_6ca._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_6d8,0x12);
        }
        if (iVar2 != 0) goto LAB_10041bdf9;
      }
      *(undefined4 *)(param_1 + 0x1300) = 0xd;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        pcVar6 = (char *)FUN_1001b83ae(param_1 + 0x60);
        cVar1 = FUN_1001df957("setting","",0);
        pcVar7 = "in";
        if (cVar1 == '\0') {
          pcVar7 = "setting";
        }
        local_6c0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
        local_6d8 = 0x8200302;
        local_6cc = 0x820;
        local_6c2 = 0x820;
        local_6d4 = pcVar6;
        local_6ca = pcVar7;
        __os_log_impl(0x100000000,uVar5,1,"\"%s\" %s state %s",&local_6d8,0x20);
      }
      plVar4 = (long *)FUN_10039a28c();
      local_6f8 = 0;
      uStack_6f0 = 0;
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_6f8,2);
      FUN_100205d70(&local_6f8);
      if (iVar2 != -0x80) {
        if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_6d8 = 0x8220202;
            local_6d4 = "Assertion failure";
            local_6cc = 0x400;
            local_6ca = (char *)CONCAT44(local_6ca._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_6d8,0x12);
          }
          if (iVar2 != 0) goto LAB_10041bdf9;
        }
        plVar4 = (long *)FUN_10039a28c();
        uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
        lVar3 = FUN_10039c016(uVar5,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84))
        ;
        iVar2 = 0;
        if (lVar3 == 0) {
          plVar4 = (long *)FUN_10039a28c();
          uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
          FUN_10039bdfc(uVar5,param_1);
        }
      }
    }
  }
LAB_10041bdf9:
  FUN_10026340c(&local_40);
LAB_10041be02:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

