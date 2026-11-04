// name: FUN_100240e5e
// address: 100240e5e

undefined1 FUN_100240e5e(uint *param_1,int param_2,long *param_3,int *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_78;
  long *plStack_70;
  int *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (undefined8 *)0x0;
  local_68 = param_4;
  if (param_3 != (long *)0x0) {
    FUN_1002188e4(param_3);
  }
  cVar4 = FUN_1002404ba(param_1);
  if (cVar4 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      pcVar7 = "ValidateFindParams(inFindParams, true)";
LAB_1002410fa:
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      uStack_4c = 0x822;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar7,0);
      uStack_48 = (undefined6)((ulong)pcVar7 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100240ef1:
    uVar9 = 0;
LAB_100240ef3:
    FUN_1001782e9(0,0);
  }
  else {
    puVar8 = DAT_1008c7680;
    if ((byte)param_1[1] == 0) {
LAB_100240f45:
      puVar8 = (undefined8 *)0x0;
LAB_100240f4d:
      if (param_2 == 2) {
        uVar10 = 5;
      }
      else {
        uVar9 = 0;
        iVar11 = 0;
        if (param_2 != 4) goto LAB_100240f02;
        uVar10 = 10;
      }
      iVar11 = 0;
      if ((uVar10 & *param_1) == 0) {
        uVar9 = 0;
        goto LAB_100240f02;
      }
      if (puVar8 == (undefined8 *)0x0) {
        iVar5 = FUN_10043a9f3(uVar10 & *param_1,param_1[6],param_1 + 8,param_1[0x232],
                              *(undefined8 *)(param_1 + 0x234),(char)param_1[0x236],param_1[0x22f],
                              &local_60);
        if (iVar5 != 0) {
          uVar9 = 0;
          iVar11 = iVar5;
          goto LAB_100240f02;
        }
        puVar8 = local_60;
        if (local_60 == (undefined8 *)0x0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            pcVar7 = "pluginData != __null";
            goto LAB_1002410fa;
          }
          goto LAB_100240ef1;
        }
      }
      uVar9 = *(undefined1 *)(puVar8 + 0x18);
      if (param_3 == (long *)0x0) goto LAB_100240f02;
      FUN_10049cabe(&local_78,param_1);
      local_58 = (undefined4)local_78;
      uStack_54 = (undefined4)((ulong)local_78 >> 0x20);
      uStack_50 = SUB84(plStack_70,0);
      uStack_4c = (undefined2)((ulong)plStack_70 >> 0x20);
      uStack_4a = (undefined2)((ulong)plStack_70 >> 0x30);
      local_78 = 0;
      plStack_70 = (long *)0x0;
      FUN_100217418(param_3,&local_58);
      plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_70 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_70 + 1;
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (*param_3 != 0) goto LAB_100240f02;
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2cdb;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      goto LAB_100240ef3;
    }
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      local_60 = puVar8;
      if (*(uint *)(puVar8 + 0x18) == (uint)(byte)param_1[1]) goto LAB_100240f4d;
    }
    local_60 = (undefined8 *)0x0;
    uVar9 = 0;
    if (*(char *)((long)param_1 + 5) == '\0') goto LAB_100240f45;
  }
  iVar11 = -0x32;
LAB_100240f02:
  if (local_68 != (int *)0x0) {
    *local_68 = iVar11;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

