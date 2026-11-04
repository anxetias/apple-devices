// name: FUN_1005ef55a
// address: 1005ef55a

void FUN_1005ef55a(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  uint uStack_88;
  undefined2 uStack_84;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = *(undefined4 **)(param_1 + 0x60);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8e = 0;
        uStack_8c = 0x822;
        uStack_8a = 0xf686;
        uStack_88 = 0x1007a;
        uStack_84 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1005ef88b:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    iVar2 = puVar3[0x1a2f];
    if (iVar2 - 1U < 2) {
      sVar5 = FUN_1004174a0(*puVar3,0x10db,0x10dc,0x10da,0,0,0,0,0,0);
      if ((iVar2 == 1) && (puVar3[0x1a2e] == 0xb)) {
        if (param_2 == 0) {
          if (*(long *)(puVar3 + 0x1a28) == 0) {
            param_2 = 0;
            if (*(long *)(puVar3 + 0x1a2a) != 0) {
              puVar3[0xbe] = puVar3[0xbf];
              puVar3[0x1a30] = 0;
              FUN_1005eda55(puVar3);
              *(undefined8 *)(puVar3 + 0x1a2e) = 0;
              FUN_1005ee196(param_1,puVar3);
            }
          }
          else {
            if (*(long *)(puVar3 + 0x1a2a) != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_98 = 0x8220202;
                uStack_94 = 0x7a0a90;
                uStack_90 = 1;
                uStack_8e = 0;
                uStack_8c = 0x822;
                uStack_8a = 0x25e0;
                uStack_88 = 0x1007f;
                uStack_84 = 0;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            if (puVar3[0x1a30] == 0) {
              param_2 = 0x65b;
              goto LAB_1005ef61a;
            }
            *(undefined8 *)(puVar3 + 0x1a2e) = 0x100000007;
            uStack_88 = puVar3[0x1a21];
            local_98 = 0x852528;
            uStack_94 = 1;
            uStack_90 = 0xf948;
            uStack_8e = 0x5e;
            uStack_8c = 1;
            uStack_8a = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_40 = (long *)0x0;
            uStack_60 = 0;
            uStack_59 = 0;
            local_68 = (ulong)uStack_88 << 0x20;
            local_78 = (long *)&local_98;
            FUN_10017869a(&local_98);
            if (local_40 != (long *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar7 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_78 == (long *)&local_98) {
              lVar7 = 0x20;
LAB_1005ef84a:
              (**(code **)(*local_78 + lVar7))();
            }
            else {
              lVar7 = 0x28;
              if (local_78 != (long *)0x0) goto LAB_1005ef84a;
            }
            param_2 = 0;
          }
        }
        else {
LAB_1005ef61a:
          puVar3[0x1a2f] = 3;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        param_2 = 0x65a;
        if (cVar4 != '\0') {
          uStack_94 = puVar3[0x1a2e];
          local_98 = 0x4000200;
          uStack_90 = 0x400;
          uStack_8e = (undefined2)puVar3[0x1a2f];
          uStack_8c = (undefined2)((uint)puVar3[0x1a2f] >> 0x10);
          __os_log_impl(0x100000000,uVar6,0x10,
                        "ERROR: Reboot wait complete callback called when device in phase %u, substate %u"
                        ,&local_98,0xe);
        }
      }
      FUN_1005e73f0(&local_98,puVar3);
      FUN_100216f84(2,(int)sVar5,0,param_2,&local_98,0);
      FUN_1001b7a50(&local_98);
      goto LAB_1005ef88b;
    }
    puVar3 = *(undefined4 **)(puVar3 + 0x1a1e);
  } while( true );
}

