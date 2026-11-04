// name: FUN_10028043c
// address: 10028043c

long * FUN_10028043c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  uStack_60 = (long *)0x0;
  std::mutex::lock();
  if (*param_3 == 0) {
    uVar10 = FUN_1001cc310();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6f46;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    FUN_1001782e9(0,0);
    plVar13 = param_1;
  }
  else {
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
    plVar13 = (long *)(param_2 + 0x68);
    puVar9 = (undefined8 *)FUN_1002859d0(plVar13,param_3);
    puVar14 = (undefined8 *)(param_2 + 0x70);
    if (puVar9 != puVar14) {
      FUN_100203686(&local_68,puVar9 + 5);
      *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + 1;
    }
    if (local_68 == 0) {
      uVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                         (*(undefined8 *)(param_2 + 0x60),PTR_s_objectForKey__10088be28,*param_3);
      lVar11 = _objc_retainAutoreleasedReturnValue(uVar10);
      if (lVar11 == 0) {
        if (puVar9 != puVar14) {
          FUN_100285a3c(plVar13,puVar9);
        }
      }
      else {
        FUN_1001b4e36((int)DAT_100700458,&local_58,lVar11,0);
        uVar7 = uStack_50;
        uVar6 = uStack_54;
        uVar5 = local_58;
        plVar3 = uStack_60;
        uVar4 = CONCAT22(uStack_4a,uStack_4c);
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_68 = CONCAT44(uVar6,uVar5);
        uStack_60 = (long *)CONCAT44(uVar4,uVar7);
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
        if (local_68 != 0) {
          puVar9 = puVar14;
          puVar12 = (undefined8 *)*puVar14;
          while (puVar12 != (undefined8 *)0x0) {
            cVar8 = FUN_1001ab0ae(param_3,puVar12 + 4);
            puVar14 = puVar12;
            if (cVar8 < '\0') {
              puVar9 = puVar12;
              puVar12 = (undefined8 *)*puVar12;
            }
            else {
              cVar8 = FUN_1001ab0ae(puVar12 + 4,param_3);
              if (-1 < cVar8) {
                puVar12 = (undefined8 *)*puVar9;
                if (puVar12 != (undefined8 *)0x0) goto LAB_100280684;
                break;
              }
              puVar9 = puVar12 + 1;
              puVar12 = (undefined8 *)puVar12[1];
            }
          }
          puVar12 = operator_new(0x38);
          FUN_1001a8c1c(puVar12 + 4,param_3);
          puVar12[5] = 0;
          puVar12[6] = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = puVar14;
          *puVar9 = puVar12;
          puVar14 = puVar12;
          if (*(long *)*plVar13 != 0) {
            *plVar13 = *(long *)*plVar13;
            puVar14 = (undefined8 *)*puVar9;
          }
          FUN_1001ad344(*(undefined8 *)(param_2 + 0x70),puVar14);
          *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 1;
LAB_100280684:
          FUN_100203686(puVar12 + 5,&local_68);
        }
        *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + 1;
      }
      (*(code *)PTR__objc_release_10082c7b0)(lVar11);
    }
    *param_1 = local_68;
    param_1[1] = (long)uStack_60;
    plVar13 = &local_68;
  }
  *plVar13 = 0;
  plVar13[1] = 0;
  std::mutex::unlock();
  if (uStack_60 != (long *)0x0) {
    LOCK();
    plVar13 = uStack_60 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_60 + 0x10))(uStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

