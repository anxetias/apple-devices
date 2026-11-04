// name: FUN_1005fb73c
// address: 1005fb73c

uint FUN_1005fb73c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  cfstringStruct *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  long *local_a0;
  undefined1 local_98 [16];
  cfstringStruct *local_88 [2];
  uint local_74;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  cfstringStruct **local_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68._0_2_ = 0x202;
      local_68._2_2_ = 0x822;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x40ff;
      uStack_58 = 0x1007f;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x234f;
    goto LAB_1005fbc66;
  }
  FUN_100238ca8(local_c0,param_1 + 0x38);
  if ((*(char *)(param_1 + 0x80) == '\n') || (*(char *)(param_1 + 0x80) == '\x03')) {
    local_70 = (undefined8 *)0x0;
    local_70 = (undefined8 *)FUN_1001c629e(0x20,&DAT_100711c6e);
    if (local_70 == (undefined8 *)0x0) {
      local_70 = (undefined8 *)0x0;
      uVar3 = 0xffffff94;
LAB_1005fb8f8:
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
    }
    else {
      *local_70 = 0;
      *(undefined4 *)(local_70 + 1) = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      uVar3 = FUN_1001e8dd6(local_70,1,0);
      if (uVar3 == 0) {
        local_74 = 0;
        FUN_10032f0f2(local_b0);
        *(undefined1 *)(param_1 + 0x80) = 4;
        local_48 = operator_new(0x28);
        local_a0 = (long *)(param_1 + 0x100);
        *local_48 = (long)&PTR_FUN_100870810;
        local_48[1] = (long)&local_70;
        local_48[2] = (long)&local_74;
        local_48[3] = (long)local_b0;
        local_48[4] = param_4;
        FUN_10060077c(&local_68);
        if (local_48 == &local_68) {
          lVar5 = 0x20;
LAB_1005fba26:
          (**(code **)(*local_48 + lVar5))();
        }
        else {
          lVar5 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_1005fba26;
        }
        FUN_1001ceb24(param_2,0x6370726d,0,0xffffffffffffffff,0);
        FUN_10044d994(param_1,param_3);
        while( true ) {
          FUN_100395b14(&local_68,local_c0);
          uVar3 = FUN_1001e91e4(local_70,0x1e848);
          FUN_100179644(&local_68);
          cVar2 = FUN_1001c19cd();
          if (cVar2 != '\0') break;
          if (uVar3 != 0x3c) {
            if (uVar3 == 0) {
              FUN_1001e9460(local_70);
              if (DAT_1008c7d20 != -1) {
                _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
              }
              uVar4 = DAT_1008c7d18;
              cVar2 = _os_log_type_enabled(DAT_1008c7d18,0);
              uVar3 = local_74;
              if (cVar2 != '\0') {
                local_68._0_2_ = 0x100;
                local_68._2_2_ = 0x400;
                local_68._4_4_ = local_74;
                __os_log_impl(0x100000000,uVar4,0,
                              "amplc> get library domain info complete. status:%d",&local_68,8);
                uVar3 = local_74;
              }
              goto LAB_1005fbbc5;
            }
            if (DAT_1008c7d20 != -1) {
              _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
            }
            uVar4 = DAT_1008c7d18;
            cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
            if (cVar2 == '\0') goto LAB_1005fbbc5;
            local_68._0_2_ = 0x100;
            local_68._2_2_ = 0x400;
            pcVar6 = "**ERROR**: WaitForLockedCompletionTimedMicros(mCompletion) failed! error:%d";
            uVar7 = 8;
            local_68._4_4_ = uVar3;
            goto LAB_1005fbbc0;
          }
          FUN_1001ceb24(param_2,0x7570726d,0,0xffffffffffffffff,0);
        }
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar4 = DAT_1008c7d18;
        cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        uVar3 = 0xffffff80;
        if (cVar2 != '\0') {
          local_68._0_2_ = 0;
          pcVar6 = 
          "**WARNING**: Application quit detected aborting the get of the domain info from the library."
          ;
          uVar7 = 2;
LAB_1005fbbc0:
          __os_log_impl(0x100000000,uVar4,0x10,pcVar6,&local_68,uVar7);
        }
LAB_1005fbbc5:
        FUN_1001ceb24(param_2,0x6470726d,0,0xffffffffffffffff,0);
        FUN_1001e9587(local_70);
        if (local_70 != (undefined8 *)0x0) {
          operator_delete(local_70);
        }
        local_70 = (undefined8 *)0x0;
        plVar1 = *(long **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = 0;
        if (plVar1 == local_a0) {
          lVar5 = 0x20;
LAB_1005fbc23:
          (**(code **)(*plVar1 + lVar5))();
        }
        else {
          lVar5 = 0x28;
          if (plVar1 != (long *)0x0) goto LAB_1005fbc23;
        }
        plVar1 = (long *)(param_1 + 0x88);
        FUN_1001a7ad8(plVar1,local_b0);
        uVar8 = 10;
        if (uVar3 == 0) {
          if (*plVar1 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_68._0_2_ = 0x202;
              local_68._2_2_ = 0x822;
              local_68._4_4_ = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x822;
              uStack_5a = 0x420a;
              uStack_58 = 0x1007f;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            uVar3 = 0x234f;
            FUN_1001782e9(0,0);
          }
          else {
            FUN_10032f0f2(local_98);
            local_88[0] = &cf_opened_PIDs;
            FUN_1001a7b90(&local_68,local_88);
            cVar2 = FUN_1001a9164(plVar1,&local_68,local_98);
            FUN_1001ab240(&local_68);
            if (cVar2 == '\0') {
              if (DAT_1008c7d20 != -1) {
                _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
              }
              uVar4 = DAT_1008c7d18;
              cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
              uVar3 = 0x234f;
              if (cVar2 != '\0') {
                local_68._0_2_ = 0;
                __os_log_impl(0x100000000,uVar4,0x10,
                              "**ERROR**: OpenedPIDKey dictionary not found in OpenDomainsInfo dictionary!"
                              ,&local_68,2);
              }
            }
            else {
              local_88[0] = (cfstringStruct *)((ulong)local_88[0] & 0xffffffffffffff00);
              uVar4 = *(undefined8 *)(param_1 + 0xa0);
              local_68._0_2_ = 0x960;
              local_68._2_2_ = 0x87;
              local_68._4_4_ = 1;
              uStack_60 = (undefined4)uVar4;
              uStack_5c = (undefined2)((ulong)uVar4 >> 0x20);
              uStack_5a = (undefined2)((ulong)uVar4 >> 0x30);
              uStack_58 = CONCAT31(uStack_58._1_3_,*(undefined1 *)(param_1 + 0x34));
              uStack_54 = (undefined2)*(undefined4 *)(param_1 + 0x30);
              uStack_52 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
              local_50 = local_88;
              local_48 = &local_68;
              FUN_1001a96bc(local_98,&local_68);
              if (local_48 == &local_68) {
                lVar5 = 0x20;
LAB_1005fbdd6:
                (**(code **)(*local_48 + lVar5))();
              }
              else {
                lVar5 = 0x28;
                if (local_48 != (long *)0x0) goto LAB_1005fbdd6;
              }
              uVar3 = 0;
            }
            FUN_10032f0f2(local_88);
            local_c8 = &cf_library_prefs;
            FUN_1001a7b90(&local_68,&local_c8);
            cVar2 = FUN_1001a9164(plVar1,&local_68,local_88);
            FUN_1001ab240(&local_68);
            if (cVar2 == '\0') {
              if (DAT_1008c7d20 != -1) {
                _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
              }
              uVar4 = DAT_1008c7d18;
              cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
              uVar3 = 0x234f;
              if (cVar2 != '\0') {
                local_68._0_2_ = 0;
                __os_log_impl(0x100000000,uVar4,0x10,
                              "**ERROR**: LibraryPrefsKey dictionary not found in OpenDomainsInfo dictionary!"
                              ,&local_68,2);
              }
            }
            else {
              local_c8 = (cfstringStruct *)((ulong)local_c8 & 0xffffffffffffff00);
              local_68._0_2_ = 0x9e0;
              local_68._2_2_ = 0x87;
              local_68._4_4_ = 1;
              uStack_60 = SUB84(&local_c8,0);
              uStack_5c = (undefined2)((ulong)&local_c8 >> 0x20);
              uStack_5a = (undefined2)((ulong)&local_c8 >> 0x30);
              uStack_58 = (undefined4)param_1;
              uStack_54 = (undefined2)((ulong)param_1 >> 0x20);
              uStack_52 = (undefined2)((ulong)param_1 >> 0x30);
              local_48 = &local_68;
              FUN_1001a96bc(local_88,&local_68);
              if (local_48 == &local_68) {
                lVar5 = 0x20;
              }
              else {
                lVar5 = 0x28;
                if (local_48 == (long *)0x0) goto LAB_1005fbed3;
              }
              (**(code **)(*local_48 + lVar5))();
            }
LAB_1005fbed3:
            FUN_1001a8fac(local_88);
            FUN_1001a8fac(local_98);
            if (uVar3 == 0) {
              uVar3 = 0;
              uVar8 = 5;
              goto LAB_1005fbc47;
            }
          }
          uVar8 = 10;
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar4 = DAT_1008c7d18;
          cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
          if (cVar2 != '\0') {
            local_68._0_2_ = 0x100;
            local_68._2_2_ = 0x400;
            local_68._4_4_ = uVar3;
            __os_log_impl(0x100000000,uVar4,0x10,
                          "**ERROR**: SetDatabaseIDsForDomains() failed! error:%d",&local_68,8);
          }
        }
LAB_1005fbc47:
        *(undefined1 *)(param_1 + 0x80) = uVar8;
        FUN_1001a8fac(local_b0);
        goto LAB_1005fbc5a;
      }
      if (local_70 != (undefined8 *)0x0) {
        operator_delete(local_70);
      }
      local_70 = (undefined8 *)0x0;
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar4 = DAT_1008c7d18;
      cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar2 != '\0') {
        local_68._0_2_ = 0x100;
        local_68._2_2_ = 0x400;
        local_68._4_4_ = uVar3;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "**ERROR**: CreateLockedCompletion(ioCompletion) failed! status=%d",&local_68,
                      8);
        goto LAB_1005fb8f8;
      }
    }
    uVar4 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar2 != '\0') {
      pcVar6 = "**ERROR**: SetupLockedCompletion() failed! status:%d";
      local_68._4_4_ = uVar3;
      goto LAB_1005fb942;
    }
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar4 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    uVar3 = 0x234f;
    if (cVar2 != '\0') {
      local_68._4_4_ = (uint)*(byte *)(param_1 + 0x80);
      pcVar6 = "**ERROR**: Invalid state for StartFetchingDomainInfo! state:%d";
LAB_1005fb942:
      local_68._2_2_ = 0x400;
      local_68._0_2_ = 0x100;
      __os_log_impl(0x100000000,uVar4,0x10,pcVar6,&local_68,8);
    }
  }
LAB_1005fbc5a:
  FUN_10015a142(local_c0);
LAB_1005fbc66:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

