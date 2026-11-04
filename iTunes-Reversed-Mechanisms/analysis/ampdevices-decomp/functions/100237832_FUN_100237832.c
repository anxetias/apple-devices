// name: FUN_100237832
// address: 100237832

void FUN_100237832(long param_1,void *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  double dVar13;
  undefined1 local_100 [16];
  long local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 *local_d8;
  long local_d0;
  void *local_c8;
  long local_c0;
  long local_b8 [4];
  long *local_98;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar11 = param_1 + 0x40;
  local_c8 = param_2;
  FUN_1001e9de0(lVar11);
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) {
    *(undefined4 *)(param_1 + 0xfc) = 3;
  }
  local_f0 = param_1 + 0xa8;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_1002188e4();
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar12 = *(undefined4 **)(param_1 + 0x88);
  if (puVar12 != *(undefined4 **)(param_1 + 0x90)) {
    local_e8 = (undefined8 *)(param_1 + 0xb8);
    local_e0 = (undefined8 *)(param_1 + 0x88);
    local_c0 = param_1 + 0x28;
    local_d8 = (undefined4 *)(param_1 + 0xf8);
    local_d0 = param_1 + 0xd8;
    do {
      if (*(double *)(puVar12 + 8) <= DAT_100701af0) {
LAB_100237935:
        *(undefined4 *)(param_1 + 0xa0) = *puVar12;
        FUN_100238d72(local_f0,*(undefined8 *)(puVar12 + 2),*(undefined8 *)(puVar12 + 4));
        uVar2 = puVar12[7];
        uVar3 = puVar12[8];
        uVar4 = puVar12[9];
        *(undefined4 *)local_e8 = puVar12[6];
        *(undefined4 *)((long)local_e8 + 4) = uVar2;
        *(undefined4 *)(local_e8 + 1) = uVar3;
        *(undefined4 *)((long)local_e8 + 0xc) = uVar4;
        *(undefined1 *)(local_e8 + 2) = *(undefined1 *)(puVar12 + 10);
        uVar7 = FUN_100238c4e(*(long *)(param_1 + 0x88) + 0x30,*(undefined8 *)(param_1 + 0x90));
        FUN_100238bea(local_e0,uVar7);
        FUN_1001e9eb9(lVar11);
        if ((*(uint *)(param_1 + 0xbc) & 1) == 0) {
          if ((*(uint *)(param_1 + 0xbc) & 0x10) == 0) {
            FUN_100238484(param_1,0);
          }
          else {
            FUN_1001b7a44(local_100);
            cVar5 = FUN_1001b8428(local_c0);
            if (cVar5 == '\0') {
              uVar7 = FUN_1001b83ae(local_c0);
              FUN_1001b7b04(local_b8,uVar7);
              FUN_1001bbcfe(local_100,local_b8);
              FUN_1001b7a50(local_b8);
            }
            FUN_1001b7b04(local_b8,"CCP Fiber");
            FUN_1001bbcfe(local_100,local_b8);
            FUN_1001b7a50(local_b8);
            if (*(long *)(param_1 + 0x10) == 0) {
LAB_100237dcb:
                    /* WARNING: Subroutine does not return */
              FUN_10013bd04();
            }
            lVar9 = *(long *)(param_1 + 8);
            lVar8 = std::__shared_weak_count::lock();
            if (lVar8 == 0) goto LAB_100237dcb;
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_4a = 0;
            local_98 = (long *)0x0;
            local_98 = operator_new(0x28);
            *local_98 = (long)&PTR_FUN_10083e7b8;
            local_98[1] = (long)FUN_100238168;
            local_98[2] = 0;
            local_98[3] = lVar9;
            local_98[4] = lVar8;
            uVar7 = FUN_1001b83ae(local_100);
            iVar6 = FUN_1001b1a89(local_b8,uVar7,local_d8,0);
            if (local_98 == local_b8) {
              lVar9 = 0x20;
LAB_100237c57:
              (**(code **)(*local_98 + lVar9))();
            }
            else {
              lVar9 = 0x28;
              if (local_98 != (long *)0x0) goto LAB_100237c57;
            }
            if (iVar6 == 0) {
              FUN_1001e944c(local_d0);
              *local_d8 = 0;
              FUN_1001e9460(local_d0);
            }
            else {
              uVar7 = FUN_100235e52();
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              if (cVar5 != '\0') {
                uVar10 = FUN_1001b83ae(local_c0);
                local_58 = 0x8220202;
                uStack_54 = (undefined4)uVar10;
                uStack_50 = (undefined4)((ulong)uVar10 >> 0x20);
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_impl(0x100000000,uVar7,0x10,
                              "**ERROR**: ITFiberCreate() failed! ccp:%{public}s status:%d ",
                              &local_58,0x12);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
            }
            FUN_1001b7a50(local_100);
          }
        }
        else {
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_100237dc4:
                    /* WARNING: Subroutine does not return */
            FUN_10013bd04();
          }
          lVar9 = *(long *)(param_1 + 8);
          lVar8 = std::__shared_weak_count::lock();
          if (lVar8 == 0) goto LAB_100237dc4;
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          local_98 = (long *)0x0;
          local_98 = operator_new(0x28);
          *local_98 = (long)&PTR_FUN_10083e918;
          local_98[1] = (long)FUN_1002389a6;
          local_98[2] = 0;
          local_98[3] = lVar9;
          local_98[4] = lVar8;
          local_88 = 0;
          uStack_80 = 0;
          uStack_79 = 0;
          uStack_78 = 0;
          uStack_76 = 0;
          local_60 = (long *)0x0;
          local_70 = 0;
          uStack_68 = 0;
          uStack_77 = *(char *)(param_1 + 0xbc) < '\0';
          FUN_100237e8a(param_1,local_b8);
          if (local_60 != (long *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar9 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_98 == local_b8) {
            lVar9 = 0x20;
          }
          else {
            lVar9 = 0x28;
            if (local_98 == (long *)0x0) goto LAB_100237d03;
          }
          (**(code **)(*local_98 + lVar9))();
        }
LAB_100237d03:
        FUN_1001e9de0(lVar11);
        *(undefined4 *)(param_1 + 0xa0) = 0;
        FUN_1002188e4(local_f0);
        *local_e8 = 0;
        local_e8[1] = 0;
      }
      else {
        dVar13 = (double)FUN_1001ebd46();
        puVar12 = (undefined4 *)*local_e0;
        if (*(double *)(puVar12 + 8) <= dVar13 && dVar13 != *(double *)(puVar12 + 8))
        goto LAB_100237935;
        FUN_1001e9eb9(lVar11);
        FUN_1001ebe12((int)DAT_100717d30);
        FUN_1001e9de0(lVar11);
      }
      puVar12 = *(undefined4 **)(param_1 + 0x88);
    } while (puVar12 != *(undefined4 **)(param_1 + 0x90));
  }
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) {
    *(undefined4 *)(param_1 + 0xfc) = 1;
  }
  FUN_1001e9eb9(lVar11);
  if (local_c8 == (void *)0x0) goto LAB_100237da2;
  plVar1 = *(long **)((long)local_c8 + 0x30);
  if (plVar1 == (long *)((long)local_c8 + 0x10)) {
    lVar11 = 0x20;
LAB_100237d90:
    (**(code **)(*plVar1 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_100237d90;
  }
  operator_delete(local_c8);
LAB_100237da2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

