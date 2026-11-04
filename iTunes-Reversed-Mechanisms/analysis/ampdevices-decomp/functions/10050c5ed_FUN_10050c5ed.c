// name: FUN_10050c5ed
// address: 10050c5ed

undefined1 FUN_10050c5ed(undefined8 param_1,int param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10018ea7c();
  if (cVar1 == '\0') {
LAB_10050c730:
    cVar1 = FUN_100266a70(param_1);
    if (cVar1 != '\0') {
      uVar7 = FUN_10039a28c();
      cVar1 = FUN_1002d6e80(uVar7,1);
      if (cVar1 != '\0') goto LAB_10050c752;
    }
    uVar3 = 1;
  }
  else {
    lVar5 = FUN_10026647d(param_1);
    plVar8 = (long *)(param_3 + 0x80);
    plVar6 = plVar8;
    do {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) break;
    } while (plVar6[1] != lVar5);
    cVar1 = FUN_1001ebbad();
    if (param_2 == 0x706f6472) {
      FUN_1004e3dbc(param_3,lVar5);
      goto LAB_10050c730;
    }
    if (param_2 != 0x706f6461) goto LAB_10050c730;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_1001c629e(0x228,&DAT_100711c6e);
      if (plVar6 == (long *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0x7638;
          local_88 = 0x1007d;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10050c730;
      }
      plVar6[1] = lVar5;
      lVar5 = FUN_10026394e(param_1);
      plVar6[2] = lVar5;
      plVar9 = (long *)*plVar8;
      if (*plVar6 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0x4952;
          local_88 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        plVar8 = plVar9;
      }
      *plVar6 = 0;
      *plVar8 = (long)plVar6;
    }
    bVar4 = *(byte *)(plVar6 + 3);
    if ((bVar4 & 0xfd) == 0) {
      if (cVar1 != '\0') {
        cVar1 = FUN_10050ca68(plVar6);
        if (cVar1 != '\0') {
          *(undefined1 *)(plVar6 + 3) = 1;
          goto LAB_10050c730;
        }
        *(undefined1 *)(plVar6 + 3) = 3;
        uVar7 = FUN_10026394e(plVar6[2]);
        local_98._0_4_ = 0x85f3c0;
        local_98._4_4_ = 1;
        local_90 = 0x50cf91;
        uStack_8c = 1;
        uStack_8a = 0;
        local_88 = (undefined6)uVar7;
        uStack_82 = (undefined2)((ulong)uVar7 >> 0x30);
        local_68 = 0;
        uStack_60 = 0;
        uStack_59 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (long *)0x0;
        local_78 = &local_98;
        FUN_10017869a(&local_98);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar8 = local_40 + 1;
          lVar5 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 == &local_98) {
          lVar5 = 0x20;
LAB_10050c84c:
          (**(code **)(*local_78 + lVar5))();
        }
        else {
          lVar5 = 0x28;
          if (local_78 != (long *)0x0) goto LAB_10050c84c;
        }
        bVar4 = *(byte *)(plVar6 + 3);
        goto LAB_10050c856;
      }
      *(undefined1 *)(plVar6 + 3) = 2;
    }
    else {
LAB_10050c856:
      if (bVar4 == 1) goto LAB_10050c730;
    }
LAB_10050c752:
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

