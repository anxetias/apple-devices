// name: FUN_1004cd69c
// address: 1004cd69c

int FUN_1004cd69c(int param_1,undefined8 *param_2,void *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined2 local_2bc;
  char *local_2ba;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar7 = 0;
  if (param_1 < 0x696e6974) {
    if (param_1 == 0x41707052) goto LAB_1004cd8a9;
    if (param_1 == 0x636c7220) {
      if (param_3 != (void *)0x0) {
        do {
          lVar3 = *(long *)((long)param_3 + 0x18);
          if (lVar3 == 0) {
            iVar7 = 0;
            break;
          }
          uVar9 = *(undefined8 *)(lVar3 + 8);
          pcVar4 = *(code **)(lVar3 + 0x10);
          ___bzero(&local_2bc,0x278);
          local_2c8 = 10;
          uStack_2c4 = 9;
          uStack_2c0 = 0x284;
          iVar7 = (*pcVar4)(uVar9,0x756e7267,&local_2c8);
        } while (iVar7 == 0);
        if (DAT_1008bfc00 != 0) {
          FUN_1005fc496();
          plVar5 = DAT_1008bfc08;
          DAT_1008bfc00 = 0;
          DAT_1008bfc08 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        operator_delete(param_3);
      }
      goto LAB_1004cd8a9;
    }
    if (param_1 == 0x69646c65) goto LAB_1004cd8a9;
  }
  else {
    if (0x766d6e73 < param_1) {
      if (param_1 == 0x766d6e74) {
        uVar9 = *param_2;
        uVar2 = *(undefined4 *)(param_2 + 2);
        uVar10 = 0x7464766d;
      }
      else {
        if (param_1 != 0x76756e6d) goto LAB_1004cd75a;
        uVar2 = *(undefined4 *)param_2;
        uVar10 = 0x74647675;
        uVar9 = 0;
      }
      iVar7 = 0;
      FUN_1004cd923(param_3,uVar10,uVar9,uVar2);
      goto LAB_1004cd8a9;
    }
    if (param_1 == 0x696e6974) {
      puVar8 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar8 == (undefined4 *)0x0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_2c8 = 0x8220202;
          uStack_2c4 = 0x7a0a90;
          uStack_2c0 = 1;
          local_2bc = 0x822;
          local_2ba = "pluginData != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_2c8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar7 = -0x6c;
      }
      else {
        *puVar8 = 0x6c686c72;
        iVar7 = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 10) = 0;
        uVar9 = param_2[2];
        *(undefined8 *)(puVar8 + 2) = param_2[1];
        *(undefined8 *)(puVar8 + 4) = uVar9;
        *(undefined4 *)(param_2 + 3) = 0xc;
        *(undefined4 **)((long)param_2 + 0x1c) = puVar8;
      }
      goto LAB_1004cd8a9;
    }
    if (param_1 == 0x70727174) {
      iVar7 = 0;
      if (param_3 != (void *)0x0) {
        for (puVar11 = *(undefined8 **)((long)param_3 + 0x18); puVar11 != (undefined8 *)0x0;
            puVar11 = (undefined8 *)*puVar11) {
          if (puVar11[4] != 0) {
            FUN_100315cf3();
          }
        }
      }
      goto LAB_1004cd8a9;
    }
  }
LAB_1004cd75a:
  iVar7 = -4;
LAB_1004cd8a9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

