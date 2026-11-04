// name: FUN_1002583e0
// address: 1002583e0

void FUN_1002583e0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long *local_b0;
  undefined **local_a8;
  int local_a0;
  undefined ***local_88;
  undefined **local_78;
  int local_70;
  undefined ***local_58;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 2;
      uStack_47 = 2;
      uStack_46 = 0x22;
      uStack_45 = 8;
      uStack_44 = 0x90;
      uStack_43 = 10;
      uStack_42 = 0x7a;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100258768;
  }
  if (*param_1 != 0x75646170) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 2;
      uStack_47 = 2;
      uStack_46 = 0x22;
      uStack_45 = 8;
      uStack_44 = 0x90;
      uStack_43 = 10;
      uStack_42 = 0x7a;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "params->magic == ((OSType) \'udap\')";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100258768;
  }
  if (*(long *)(param_1 + 4) == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 2;
      uStack_47 = 2;
      uStack_46 = 0x22;
      uStack_45 = 8;
      uStack_44 = 0x90;
      uStack_43 = 10;
      uStack_42 = 0x7a;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "params->evaluationResultRef != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = FUN_1004de449(param_1[1]);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_48 = 2;
        uStack_47 = 2;
        uStack_46 = 0x22;
        uStack_45 = 8;
        uStack_44 = 0x90;
        uStack_43 = 10;
        uStack_42 = 0x7a;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar1 = param_1[1];
      *(undefined4 *)(lVar5 + 0x15800) = 0;
      iVar4 = FUN_100425478(*(undefined4 *)(lVar5 + 0x28),(long)param_1 + 10,
                            *(undefined8 *)(param_1 + 4),&local_b0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          if (*(char *)((long)param_1 + 9) == '\0') {
            uStack_47 = 0;
            uStack_45 = 1;
            uStack_44 = 1;
            uStack_42 = 0;
            local_48 = **(int **)(param_1 + 4) != 3;
            uStack_46 = (char)param_1[2] != '\0';
            uStack_43 = (undefined1)(*(int **)(param_1 + 4))[4];
            pppuVar8 = &local_78;
            local_78 = &PTR_FUN_10083ede0;
            local_70 = iVar1;
            local_58 = pppuVar8;
            (**(code **)(*local_b0 + 0x18))(local_b0,&local_48,pppuVar8);
            pppuVar7 = local_58;
          }
          else {
            pppuVar8 = &local_a8;
            local_a8 = &PTR_FUN_10083ede0;
            local_a0 = iVar1;
            local_88 = pppuVar8;
            (**(code **)(*local_b0 + 0x28))(local_b0,(char)param_1[2] != '\0',pppuVar8);
            pppuVar7 = local_88;
          }
          if (pppuVar7 == pppuVar8) {
            lVar5 = 0x20;
LAB_1002586c7:
            (**(code **)((long)*pppuVar7 + lVar5))();
          }
          else {
            lVar5 = 0x28;
            if (pppuVar7 != (undefined ***)0x0) goto LAB_1002586c7;
          }
          FUN_1001ceee0(local_b0);
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_48 = 2;
            uStack_47 = 2;
            uStack_46 = 0x22;
            uStack_45 = 8;
            uStack_44 = 0x90;
            uStack_43 = 10;
            uStack_42 = 0x7a;
            uStack_40 = 1;
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 4);
  if (pvVar2 != (void *)0x0) {
    FUN_100249fee((long)pvVar2 + 0x988);
    FUN_100249fca((long)pvVar2 + 0x978);
    FUN_100249fee((long)pvVar2 + 0x548);
    FUN_100249fca((long)pvVar2 + 0x538);
    FUN_100249fee((long)pvVar2 + 0x108);
    FUN_100249fca((long)pvVar2 + 0xf8);
    FUN_10024f3ba((long)pvVar2 + 0xb0);
    FUN_10024f3ba((long)pvVar2 + 0x68);
    FUN_10024f3ba((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  FUN_10039c7eb(0);
LAB_100258768:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

