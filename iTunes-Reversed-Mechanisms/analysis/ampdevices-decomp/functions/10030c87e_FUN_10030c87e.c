// name: FUN_10030c87e
// address: 10030c87e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10030c87e(long param_1,long param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10030ca32:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "TrackDataIsValid(trackData)";
LAB_10030caf8:
      uStack_6c = 0x822;
      uStack_70 = 1;
      uStack_74 = 0x7a0a90;
      local_78 = 0x8220202;
      uStack_6a = SUB82(pcVar6,0);
      uStack_68 = (undefined2)((ulong)pcVar6 >> 0x10);
      uStack_66 = (undefined4)((ulong)pcVar6 >> 0x20);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7ab58c;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0xec03;
        uStack_68 = 0x7a;
        uStack_66 = 1;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10030ca32;
    }
    if ((*(byte *)(param_1 + 0x1bb3) & 0x20) == 0) {
      if (param_2 != 0) {
        if (*(long *)(param_1 + 0x2ca0) == 0) {
          local_78 = (undefined4)_DAT_100743970;
          uStack_74 = (undefined4)((ulong)_DAT_100743970 >> 0x20);
          uStack_70 = (undefined4)_UNK_100743978;
          uStack_6c = (undefined2)((ulong)_UNK_100743978 >> 0x20);
          uStack_6a = (undefined2)((ulong)_UNK_100743978 >> 0x30);
          uStack_68 = 0xe7e6;
          uStack_66 = 0x1007b;
          uStack_62 = 0;
          local_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          iVar3 = FUN_1001ec886(&local_78,(undefined8 *)(param_1 + 0x2ca0));
          if (iVar3 == -0x80) goto LAB_10030cb2c;
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_98 = 0x8220202;
              local_94 = "Assertion failure";
              local_8c = 0x400;
              local_8a = iVar3;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_98,0x12);
            }
            goto LAB_10030cb2c;
          }
        }
        lVar5 = FUN_1001c6429(0x80);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            uStack_70 = 1;
            uStack_6c = 0x822;
            uStack_6a = 0xe7fa;
            uStack_68 = 0x7b;
            uStack_66 = 1;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = -0x6c;
          goto LAB_10030cb2c;
        }
        *(code **)(lVar5 + 0x40) = FUN_10030ceb2;
        *(undefined8 *)(lVar5 + 0x48) = param_3;
        *(long *)(lVar5 + 0x58) = param_2;
        *(undefined4 *)(lVar5 + 0x60) = 1;
        if (param_4 == 0) {
LAB_10030c973:
          iVar2 = FUN_1001ecf95(*(undefined8 *)(param_1 + 0x2ca0),lVar5);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              if (param_4 != 0) {
                iVar2 = FUN_1001e9afc(lVar5 + 100);
                if (iVar2 != -0x80) {
                  if (iVar2 == 0) {
                    iVar3 = FUN_1001e9bb5(lVar5 + 100);
                    if ((iVar3 != -0x80) && (iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_78 = 0x8220202;
                        uStack_74 = 0x7a0a90;
                        uStack_70 = 1;
                        uStack_6c = 0x400;
                        uStack_6a = (undefined2)iVar3;
                        uStack_68 = (undefined2)((uint)iVar3 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            &local_78,0x12);
                      }
                    }
                    iVar2 = *(int *)(lVar5 + 0x60);
                    if (iVar2 == 1) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_78 = 0x8220202;
                        uStack_74 = 0x7a0a90;
                        uStack_70 = 1;
                        uStack_6c = 0x822;
                        uStack_6a = 0x48a4;
                        uStack_68 = 0x7a;
                        uStack_66 = 1;
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                            &local_78,0x16);
                      }
                      FUN_1001782e9(0,0);
                      iVar2 = 1;
                    }
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar1 != '\0') {
                      uStack_6a = (undefined2)iVar2;
                      uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
                      goto LAB_10030ce00;
                    }
                  }
                }
                goto LAB_10030ccdc;
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_78 = 0x8220202;
                uStack_74 = 0x7a0a90;
                uStack_70 = 1;
                uStack_6c = 0x400;
                uStack_6a = (undefined2)iVar2;
                uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_78,0x12)
                ;
              }
            }
            iVar3 = 0;
            if ((iVar2 == 0 & (param_4 ^ 1)) != 0) goto LAB_10030cb2c;
          }
        }
        else {
          iVar2 = FUN_1001e96d3(lVar5 + 100,0,0);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) goto LAB_10030c973;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_10030ccdc;
            uStack_6a = (undefined2)iVar2;
            uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10030ce00:
            uStack_6c = 0x400;
            uStack_70 = 1;
            uStack_74 = 0x7a0a90;
            local_78 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_78,0x12);
          }
        }
LAB_10030ccdc:
        FUN_1001c64c1(lVar5);
        iVar3 = iVar2;
        goto LAB_10030cb2c;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        pcVar6 = "taskProc != nullptr";
        goto LAB_10030caf8;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        pcVar6 = "trackData->deletingTrackData == false";
        goto LAB_10030caf8;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10030cb2c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

