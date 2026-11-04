// name: FUN_1005fe9ec
// address: 1005fe9ec

undefined8 FUN_1005fe9ec(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  long local_118;
  long *local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  long lStack_f0;
  undefined8 *local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  undefined8 uStack_c0;
  cfstringStruct local_b8;
  undefined1 local_98 [12];
  int local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined6 uStack_62;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0xffffff80;
  if ((char)param_1[0x1b] != '\0') goto LAB_1005ff555;
  if (param_1[0x1e] == 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_78._0_2_ = 0x202;
      local_78._2_2_ = 0x822;
      local_78._4_4_ = 0x7a0a90;
      local_70 = 1;
      uStack_6e = 0;
      uStack_6c = 0x822;
      uStack_6a = 0x42c6;
      uStack_68 = 0x7f;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
    goto LAB_1005ff555;
  }
  FUN_1001a7a9e(local_88,*param_2 + 0x60);
  lVar8 = FUN_1001a8fea(local_88);
  if (lVar8 != 0) {
    lVar8 = param_1[0x14];
    FUN_1001a7a9e(local_128,local_88);
    FUN_1005b3772(&local_e8,lVar8,0,local_128);
    FUN_1001a8fac(local_128);
    if (local_e8 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_78._0_2_ = 0x202;
        local_78._2_2_ = 0x822;
        local_78._4_4_ = 0x7a168c;
        local_70 = 1;
        uStack_6e = 0;
        uStack_6c = 0x822;
        uStack_6a = 0x42e0;
        uStack_68 = 0x7f;
        uStack_66 = 1;
        uStack_64 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      cVar5 = FUN_1001782e9(0,0);
      if (cVar5 != '\0') goto LAB_1005feac9;
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar7 = DAT_1008c7d18;
      cVar5 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar5 != '\0') {
        local_78._0_2_ = 0;
        __os_log_impl(0x100000000,uVar7,0x10,
                      "**ERROR**: AMPLFetchChangesDataProcessor::Create() failed!",&local_78,2);
      }
    }
    else {
LAB_1005feac9:
      local_f8 = 0;
      lStack_f0 = 0;
      local_b8.field2_0x10 = (undefined *)&cf_change_count;
      FUN_1001a7b90(&local_78);
      cVar5 = FUN_1001a9738(local_88,&local_78,&local_b8);
      local_8c = 0;
      if (cVar5 != '\0') {
        local_8c = (int)local_b8.field0_0x0;
      }
      FUN_1001ab240(&local_78);
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar7 = DAT_1008c7d18;
      cVar5 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar5 != '\0') {
        local_78._0_2_ = 0x200;
        local_78._2_2_ = 0x400;
        local_78._4_4_ = local_8c;
        local_70 = 0x400;
        uStack_6e = (undefined2)*(undefined4 *)(*param_2 + 0x5c);
        uStack_6c = (undefined2)((uint)*(undefined4 *)(*param_2 + 0x5c) >> 0x10);
        __os_log_impl(0x100000000,uVar7,0,
                      "Starting applying %d changes from library at revision: %u.",&local_78,0xe);
      }
      *(undefined1 *)((long)param_1 + 0x9d) = 1;
      *(undefined4 *)(local_e8 + 0x16) = *(undefined4 *)(*param_2 + 0x5c);
      local_118 = *(long *)(param_1[0x1e] + 0x80);
      local_110 = *(long **)(param_1[0x1e] + 0x88);
      if (local_110 != (long *)0x0) {
        LOCK();
        local_110[1] = local_110[1] + 1;
        UNLOCK();
      }
      if (local_118 != 0) {
        local_148 = *(undefined4 *)(local_118 + 0x48);
        uStack_144 = *(undefined4 *)(local_118 + 0x4c);
        uStack_140 = *(undefined4 *)(local_118 + 0x50);
        uStack_13c = *(undefined4 *)(local_118 + 0x54);
        if (*(long *)(local_118 + 0x50) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(local_118 + 0x50) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        FUN_100203686(local_e8 + 9,&local_148);
        plVar1 = (long *)CONCAT44(uStack_13c,uStack_140);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar8 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar8 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_1004d972a(param_1[0x1e]);
      FUN_100313e0b(param_1[0x14]);
      local_f8 = _mach_approximate_time();
      uVar3 = *(ulong *)(param_1[0x14] + 0x1bb0);
      *(ulong *)(param_1[0x14] + 0x1bb0) = uVar3 | 0x1000000000000;
      (**(code **)*local_e8)();
      *(ulong *)(param_1[0x14] + 0x1bb0) =
           *(ulong *)(param_1[0x14] + 0x1bb0) & 0xfffeffffffffffff | uVar3 & 0x1000000000000;
      FUN_1002773d4(param_1[0x14]);
      FUN_1004cf6d4(param_1[0x14]);
      local_b8.field2_0x10 = (undefined *)&cf_nextSequenceID;
      FUN_1001a7b90(&local_78);
      cVar5 = FUN_1001a9000(local_88,&local_78);
      FUN_1001ab240(&local_78);
      if (cVar5 != '\0') {
        local_b8.field2_0x10 = (undefined *)&cf_nextSequenceID;
        FUN_1001a7b90(&local_78);
        cVar5 = FUN_1001a9738(local_88,&local_78,&local_b8);
        iVar12 = 0;
        if (cVar5 != '\0') {
          iVar12 = (int)local_b8.field0_0x0;
        }
        *(int *)(param_1[0x14] + 0x8c) = iVar12;
        FUN_1001ab240(&local_78);
      }
      lStack_f0 = _mach_approximate_time();
      FUN_1003860fc(param_1 + 0x16);
      local_b8.field2_0x10 = (undefined *)&cf_syncedCloudEditCommandIDs;
      FUN_1001a7b90(&local_78);
      cVar5 = FUN_1001a9000(local_88,&local_78);
      FUN_1001ab240(&local_78);
      if (cVar5 != '\0') {
        local_c8 = &cf_syncedCloudEditCommandIDs;
        FUN_1001a7b90(&local_b8.field2_0x10);
        local_138 = 0;
        uStack_130 = 0;
        FUN_10032f0f2(&local_138);
        FUN_10032f0f2(&local_78);
        cVar5 = FUN_100329434(local_88,&local_b8.field2_0x10,&local_78);
        puVar13 = &local_138;
        if (cVar5 != '\0') {
          puVar13 = &local_78;
        }
        FUN_1001a7a9e(&local_b8,puVar13);
        FUN_1001a7a94(&local_78);
        FUN_1001a7a94(&local_138);
        FUN_1001ab240(&local_b8.field2_0x10);
        if (CONCAT44(local_b8.field0_0x0._4_4_,(int)local_b8.field0_0x0) != 0) {
          local_78._0_2_ = SUB82(&local_b8,0);
          local_78._2_2_ = (undefined2)((ulong)&local_b8 >> 0x10);
          local_78._4_4_ = (int)((ulong)&local_b8 >> 0x20);
          local_70 = 0;
          uStack_6e = 0;
          uStack_6c = 0;
          uStack_6a = 0;
          FUN_1001aa318(&uStack_68);
          local_b8.field3_0x18 = FUN_1001a7bfa(&local_b8);
          local_b8.field2_0x10 = (undefined *)&local_b8;
          FUN_1001aa318(local_98);
          pcVar11 = (cfstringStruct *)
                    CONCAT44(local_78._4_4_,CONCAT22(local_78._2_2_,(undefined2)local_78));
          lVar8 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,local_70)));
          while ((pcVar11 != (cfstringStruct *)local_b8.field2_0x10 ||
                 (lVar8 != local_b8.field3_0x18))) {
            FUN_1005b7934(&local_c8);
            FUN_1001aaadc(&uStack_68,&local_c8);
            FUN_1001aae6c(&local_c8);
            uVar7 = FUN_1001aaeaa(&uStack_68,0);
            local_c8 = (cfstringStruct *)0x0;
            uStack_c0 = 0;
            FUN_10032f0f2();
            (**(code **)(*param_1 + 0x88))(param_1,uVar7,5,0,0,&local_c8);
            FUN_1001a7a94(&local_c8);
            pcVar11 = (cfstringStruct *)
                      CONCAT44(local_78._4_4_,CONCAT22(local_78._2_2_,(undefined2)local_78));
            lVar8 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,local_70))) + 1;
            local_70 = (undefined2)lVar8;
            uStack_6e = (undefined2)((ulong)lVar8 >> 0x10);
            uStack_6c = (undefined2)((ulong)lVar8 >> 0x20);
            uStack_6a = (undefined2)((ulong)lVar8 >> 0x30);
          }
          FUN_1001aae6c(local_98);
          FUN_1001aae6c(&uStack_68);
        }
        FUN_1001a7a94(&local_b8);
      }
      FUN_1002fbbfc(param_1[0x14]);
      FUN_1004d993e(param_1[0x1e]);
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar7 = DAT_1008c7d18;
      cVar5 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar5 != '\0') {
        local_108 = FUN_1001cc0ac(lStack_f0 - local_f8);
        uVar3 = param_1[0x17];
        if (uVar3 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulong)param_1[0x18] / uVar3;
        }
        local_100 = FUN_1001cc0ac(uVar9);
        local_d0 = 0;
        local_d8 = 0;
        if (param_1[0x19] != -1) {
          local_d8 = FUN_1001cc0ac();
        }
        if (param_1[0x1a] != 0) {
          local_d0 = FUN_1001cc0ac();
        }
        local_78._0_2_ = 0x600;
        local_78._2_2_ = 0x400;
        local_78._4_4_ = local_8c;
        local_70 = 0x800;
        uStack_6e = (undefined2)local_108;
        uStack_6c = (undefined2)((ulong)local_108 >> 0x10);
        uStack_6a = (undefined2)((ulong)local_108 >> 0x20);
        uStack_68 = (undefined2)((ulong)local_108 >> 0x30);
        uStack_66 = 0x800;
        uStack_64 = (undefined2)uVar3;
        uStack_62 = (undefined6)(uVar3 >> 0x10);
        local_5c = 0x800;
        local_5a = local_100;
        local_52 = 0x800;
        local_50 = local_d8;
        local_48 = 0x800;
        local_46 = local_d0;
        __os_log_impl(0x100000000,uVar7,0,
                      "Applied %d changes from library took %f seconds. Stats:%llu Avg:%.5f Min:%.5f Max:%.5f"
                      ,&local_78,0x3a);
      }
      local_b8.field2_0x10 = (undefined *)&cf_enableCML;
      FUN_1001a7b90(&local_78);
      cVar5 = FUN_1001a9000(local_88,&local_78);
      FUN_1001ab240(&local_78);
      if (cVar5 == '\0') {
        local_b8.field2_0x10 = (undefined *)&cf_disableCML;
        FUN_1001a7b90(&local_78);
        cVar5 = FUN_1001a9000(local_88,&local_78);
        FUN_1001ab240(&local_78);
        if (cVar5 == '\0') {
          cVar5 = '\0';
        }
        else {
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x634d5355,0,0,0);
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar7 = DAT_1008c7d18;
          cVar5 = '\0';
          cVar6 = _os_log_type_enabled(DAT_1008c7d18,0);
          if (cVar6 != '\0') {
            pcVar10 = "icml> Sent cloud music library service unloaded message.";
            cVar5 = '\0';
            goto LAB_1005ff23b;
          }
        }
      }
      else {
        uVar7 = FUN_1001c156e();
        FUN_1001c6987(uVar7,0x634d534c,0,0,0);
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar7 = DAT_1008c7d18;
        cVar6 = _os_log_type_enabled(DAT_1008c7d18,0);
        cVar5 = '\x01';
        if (cVar6 != '\0') {
          pcVar10 = "icml> Sent cloud music library service loaded message.";
LAB_1005ff23b:
          local_78._0_2_ = 0;
          __os_log_impl(0x100000000,uVar7,0,pcVar10,&local_78,2);
        }
      }
      local_b8.field2_0x10 = (undefined *)&cf_enablePurchases;
      FUN_1001a7b90(&local_78);
      cVar6 = FUN_1001a9000(local_88,&local_78);
      FUN_1001ab240(&local_78);
      if (cVar6 == '\0') {
        local_b8.field2_0x10 = (undefined *)&cf_disablePurchases;
        FUN_1001a7b90(&local_78);
        cVar6 = FUN_1001a9000(local_88,&local_78);
        FUN_1001ab240(&local_78);
        if (cVar6 != '\0') {
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x63505355,0,0,0);
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar7 = DAT_1008c7d18;
          cVar6 = _os_log_type_enabled(DAT_1008c7d18,0);
          if (cVar6 != '\0') {
            pcVar10 = "sp> Sent store purchases service unloaded message.";
            goto LAB_1005ff374;
          }
        }
      }
      else {
        uVar7 = FUN_1001c156e();
        FUN_1001c6987(uVar7,0x6350534c,0,0,0);
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar7 = DAT_1008c7d18;
        cVar6 = _os_log_type_enabled(DAT_1008c7d18,0);
        cVar5 = '\x01';
        if (cVar6 != '\0') {
          pcVar10 = "sp> Sent store purchases service loaded message.";
LAB_1005ff374:
          local_78._0_2_ = 0;
          __os_log_impl(0x100000000,uVar7,0,pcVar10,&local_78,2);
        }
      }
      local_b8.field2_0x10 = (undefined *)&cf_cloudSyncComplete;
      FUN_1001a7b90(&local_78);
      cVar6 = FUN_1001a9000(local_88,&local_78);
      FUN_1001ab240(&local_78);
      if (cVar6 != '\0') {
        local_b8.field2_0x10 = (undefined *)&cf_cloudSyncComplete;
        FUN_1001a7b90(&local_78);
        cVar6 = FUN_1001a9738(local_88,&local_78,&local_b8);
        iVar12 = 0;
        if (cVar6 != '\0') {
          iVar12 = (int)local_b8.field0_0x0;
        }
        FUN_1001ab240(&local_78);
        uVar7 = FUN_1001c156e();
        FUN_1001c6987(uVar7,0x63444150,iVar12,cVar5,0);
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar7 = DAT_1008c7d18;
        cVar6 = _os_log_type_enabled(DAT_1008c7d18,0);
        if (cVar6 != '\0') {
          if (iVar12 - 1U < 4) {
            pcVar10 = &DAT_10075ec3c + *(int *)(&DAT_10075ec3c + (ulong)(iVar12 - 1U) * 4);
          }
          else {
            pcVar10 = "Unknown";
          }
          uStack_6a = 0x4e;
          if (cVar5 != '\0') {
            uStack_6a = 0x59;
          }
          local_78._0_2_ = 0x202;
          local_78._2_2_ = 0x822;
          local_78._4_4_ = (int)pcVar10;
          local_70 = (undefined2)((ulong)pcVar10 >> 0x20);
          uStack_6e = (undefined2)((ulong)pcVar10 >> 0x30);
          uStack_6c = 0x400;
          uStack_68 = 0;
          __os_log_impl(0x100000000,uVar7,0,
                        "cloud-daap> Sent daap-server loaded message. kind:%{public}s initial:%c",
                        &local_78,0x12);
        }
      }
      *(undefined1 *)((long)param_1 + 0x9d) = 0;
      if (local_110 != (long *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_1005fe7c4(param_1,*(undefined4 *)(*param_2 + 0x5c));
  pvVar4 = (void *)param_1[0x2f];
  if (pvVar4 != (void *)param_1[0x30]) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  FUN_1001a8fac(local_88);
  uVar7 = 0;
LAB_1005ff555:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

