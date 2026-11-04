// name: FUN_1005ede82
// address: 1005ede82

void FUN_1005ede82(long param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = *(undefined4 **)(param_1 + 0x60);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        local_4a = "device != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1005ee0f2:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (puVar2[0x1a2f] - 1 < 2) {
      uVar5 = puVar2[0x1a2e];
      if (puVar2[0x1a2f] == 1 && (uVar5 & 0xfffffffe) == 6) {
        if (param_2 == 0) {
          if (*(long *)(puVar2 + 0x1a28) == 0) {
            param_2 = 0x64c;
            if (*(long *)(puVar2 + 0x1a2a) != 0) goto LAB_1005edf13;
          }
          else {
            if (*(long *)(puVar2 + 0x1a2a) != 0) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4e = 0;
                uStack_4c = 0x822;
                local_4a = "device->recoveryDeviceRef == nullptr";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              uVar5 = puVar2[0x1a2e];
            }
            if (uVar5 == 7) {
              *(undefined8 *)(puVar2 + 0x1a2e) = 0;
              FUN_1005ee196(param_1,puVar2);
            }
            else {
              puVar2[0x1a2f] = 4;
              FUN_1005ee25a(puVar2[0x1a21],FUN_1005ee334,puVar2[0x1a21]);
            }
          }
          param_2 = 0;
        }
        else {
LAB_1005edf13:
          puVar2[0x1a2f] = 3;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        param_2 = 0x64f;
        if (cVar3 != '\0') {
          local_54 = puVar2[0x1a2e];
          local_58 = 0x4000200;
          uStack_50 = 0x400;
          uStack_4e = (undefined2)puVar2[0x1a2f];
          uStack_4c = (undefined2)((uint)puVar2[0x1a2f] >> 0x10);
          __os_log_impl(0x100000000,uVar6,0x10,
                        "ERROR: WTF wait complete callback called when device in phase %u, substate %u"
                        ,&local_58,0xe);
        }
      }
      iVar1 = puVar2[0x1a26];
      sVar4 = FUN_1004174a0(*puVar2,0x10db,0x10dc,0x10da,0,0,0,0,0,0);
      FUN_1005e73f0(&local_58,puVar2);
      FUN_100216f84((iVar1 == 1) + '\x01',(int)sVar4,0,param_2,&local_58,0);
      FUN_1001b7a50(&local_58);
      goto LAB_1005ee0f2;
    }
    puVar2 = *(undefined4 **)(puVar2 + 0x1a1e);
  } while( true );
}

