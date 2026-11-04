// name: FUN_10013c7e0
// address: 10013c7e0

void FUN_10013c7e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  undefined1 *local_e8;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  long local_c8;
  long lStack_c0;
  undefined4 local_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  undefined1 local_69;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) == -1)) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar5 != '\0') {
      local_68[0]._0_2_ = 0;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "StoreMescalSessionCache has gone away while setting up a Mescal context.",
                    local_68,2);
    }
    goto LAB_10013caae;
  }
  local_69 = 0;
  pvVar7 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar7 != (void *)0x0) {
    FUN_100272bc0(pvVar7,0);
    *(undefined4 *)((long)pvVar7 + 0x30) = 1;
    *(undefined1 *)((long)pvVar7 + 0x34) = 0;
  }
  FUN_10013bf6e(&local_88,pvVar7);
  local_e0 = param_1 + 8;
  *(undefined4 *)(local_88 + 0x30) = 3;
  local_e8 = &local_69;
  local_d8 = &local_88;
  FUN_10012bc1e(local_68,param_2);
  FUN_1001a8c1c(&local_c8,&PTR_cf_sign_sap_version_10083a1f8);
  iVar6 = FUN_10013cba0(local_68,&local_c8,0);
  FUN_1001ab006(&local_c8);
  FUN_1001a8fac(local_68);
  if (iVar6 < 200) {
    *(undefined4 *)(local_88 + 0x30) = 2;
  }
  else {
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar6 = 0, *(int *)(param_1 + 0x18) == 1)) {
      iVar6 = 0xd2;
    }
    FUN_100273072(local_88,iVar6);
    FUN_10013cd08(&local_98);
    plVar1 = plStack_80;
    lVar4 = local_88;
    local_d0 = local_98;
    lVar8 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      LOCK();
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    local_b0 = local_88;
    plStack_a8 = plStack_80;
    local_88 = 0;
    plStack_80 = (long *)0x0;
    local_48 = (long *)0x0;
    local_c8 = lVar8;
    lStack_c0 = lVar3;
    local_b8 = uVar2;
    local_48 = operator_new(0x30);
    *local_48 = (long)&PTR_FUN_10083a3e0;
    local_48[1] = lVar8;
    local_48[2] = lVar3;
    local_c8 = 0;
    lStack_c0 = 0;
    *(undefined4 *)(local_48 + 3) = uVar2;
    local_48[4] = lVar4;
    local_48[5] = (long)plVar1;
    local_b0 = 0;
    plStack_a8 = (long *)0x0;
    FUN_10014415a(local_d0,local_68);
    if (local_48 == local_68) {
      lVar8 = 0x20;
LAB_10013ca31:
      (**(code **)(*local_48 + lVar8))();
    }
    else {
      lVar8 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10013ca31;
    }
    FUN_10014105c(local_98);
    local_69 = 1;
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_10013cc28(&local_e8);
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10013caae:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

