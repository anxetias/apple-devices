// name: FUN_1005eead8
// address: 1005eead8

void FUN_1005eead8(long param_1,int param_2)

{
  undefined4 *puVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint local_c0;
  short local_ba;
  undefined4 local_b8;
  char *local_b4;
  undefined2 local_ac;
  int local_aa;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  char *local_8a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_98 = 0x8220202;
        local_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8e = 0;
        uStack_8c = 0x822;
        local_8a = "device != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1005eec6a:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    iVar6 = puVar1[0x1a2f];
    if (iVar6 - 1U < 2) {
      local_ba = FUN_1004174a0(*puVar1,0x10db,0x10dc,0x10da,0,0,0,0,0,0);
      iVar4 = puVar1[0x1a2e];
      if (iVar6 != 1 || 1 < iVar4 - 9U) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar6 = 0x658;
        if (cVar3 != '\0') {
          local_94 = puVar1[0x1a2e];
          local_98 = 0x4000200;
          uStack_90 = 0x400;
          uStack_8e = (undefined2)puVar1[0x1a2f];
          uStack_8c = (undefined2)((uint)puVar1[0x1a2f] >> 0x10);
          __os_log_impl(0x100000000,uVar5,0x10,
                        "ERROR: iBoot wait complete callback called when device in phase %u, substate %u"
                        ,&local_98,0xe);
        }
        goto LAB_1005eec2a;
      }
      if (param_2 == 0) {
        if (*(long *)(puVar1 + 0x1a2a) == 0) {
          param_2 = 0x659;
          if (*(long *)(puVar1 + 0x1a28) != 0) goto LAB_1005eeba5;
          iVar6 = 0;
        }
        else {
          if (*(long *)(puVar1 + 0x1a28) != 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_98 = 0x8220202;
              local_94 = 0x7a0a90;
              uStack_90 = 1;
              uStack_8e = 0;
              uStack_8c = 0x822;
              local_8a = "device->dfuDeviceRef == nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
            }
            FUN_1001782e9(0,0);
            iVar4 = puVar1[0x1a2e];
          }
          iVar6 = 0;
          if (iVar4 == 10) {
LAB_1005eed53:
            *(undefined8 *)(puVar1 + 0x1a2e) = 0x10000000b;
            FUN_1005ee25a(puVar1[0x1a21],FUN_1005ef378,puVar1[0x1a21]);
          }
          else if (iVar4 == 9) {
            FUN_1005eef21(&local_98,puVar1);
            param_2 = FUN_1005eef5b(&local_98,puVar1,&local_c0,&local_ba);
            if (param_2 != -0x80) {
              if (param_2 == 0) {
                if (local_c0 < (uint)puVar1[0xbf]) {
                  if (*(char *)((long)puVar1 + 0x68c5) == '\x01') {
                    puVar1[0x1a30] = local_c0;
                  }
                  FUN_100249ea6(&local_98);
                  goto LAB_1005eed53;
                }
                *(undefined8 *)(puVar1 + 0x1a2e) = 0;
                FUN_1005ee196(param_1,puVar1);
                FUN_100249ea6(&local_98);
                goto LAB_1005eec2a;
              }
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_b8 = 0x8220202;
                local_b4 = "Assertion failure";
                local_ac = 0x400;
                local_aa = param_2;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_b8,0x12)
                ;
              }
            }
            FUN_100249ea6(&local_98);
            goto LAB_1005eeba5;
          }
        }
      }
      else {
LAB_1005eeba5:
        puVar1[0x1a2f] = 3;
        iVar6 = param_2;
      }
LAB_1005eec2a:
      sVar2 = local_ba;
      FUN_1005e73f0(&local_98,puVar1);
      FUN_100216f84(2,(int)sVar2,0,iVar6,&local_98,0);
      FUN_1001b7a50(&local_98);
      goto LAB_1005eec6a;
    }
    puVar1 = *(undefined4 **)(puVar1 + 0x1a1e);
  } while( true );
}

