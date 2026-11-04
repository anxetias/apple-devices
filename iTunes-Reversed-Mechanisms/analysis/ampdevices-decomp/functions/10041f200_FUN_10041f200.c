// name: FUN_10041f200
// address: 10041f200

int FUN_10041f200(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 local_80 [8];
  long *local_78;
  undefined1 local_70 [8];
  long *local_68;
  char *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = *(int *)(param_1 + 0x1304);
  if ((iVar3 == 1) || (iVar3 == 6)) {
    *(int *)(param_1 + 0x1300) = iVar3;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_60 = (char *)FUN_1001b83ae(param_1 + 0x60);
      cVar2 = FUN_1001df957("setting","",0);
      local_4a = "in";
      if (cVar2 == '\0') {
        local_4a = "setting";
      }
      local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
      local_58 = 0x8200302;
      local_54 = local_60;
      local_4c = 0x820;
      local_42 = 0x820;
      __os_log_impl(0x100000000,uVar5,1,"\"%s\" %s state %s",&local_58,0x20);
    }
    *(undefined4 *)(param_1 + 0x1304) = 0;
    if (*(int *)(param_1 + 0x1300) == 1) {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x1354) == '\x01') {
        bVar6 = *(byte *)(param_1 + 0x1355) ^ 1;
      }
      iVar3 = FUN_10041c30c(param_1,param_1 + 0xaa0,param_1 + 0xa80,bVar6,
                            *(undefined1 *)(param_1 + 0x1356));
      if (iVar3 != 0) goto LAB_10041f416;
      plVar4 = (long *)FUN_10039a28c();
      if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_80);
      iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_80,0);
    }
    else {
      if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_70);
      iVar3 = FUN_100419d7e(param_1,0,param_2 ^ 1,0,local_70,param_3);
      local_78 = local_68;
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mNextState == kRestoring || mNextState == kRestoringWaitingForDownload";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x234f;
  }
LAB_10041f416:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

