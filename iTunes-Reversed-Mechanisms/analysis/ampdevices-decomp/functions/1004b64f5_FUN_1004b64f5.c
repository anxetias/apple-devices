// name: FUN_1004b64f5
// address: 1004b64f5

void FUN_1004b64f5(int param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_4;
  if (lVar1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "inItem != __null";
LAB_1004b67a3:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004b668d:
    uVar5 = 0;
LAB_1004b6691:
    FUN_1001782e9(0,uVar5);
  }
  else {
    if (*(int *)(lVar1 + 0x10) != 0x646e6974) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "inItem->magic == \'dnit\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar5 = 1;
      goto LAB_1004b6691;
    }
    if ((*(char *)(lVar1 + 0x778) != '\0') || (*(int *)(lVar1 + 0x1304) != 0x68747470)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_3a = 
        "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
        ;
        goto LAB_1004b67a3;
      }
      goto LAB_1004b668d;
    }
    if (param_1 < 0x65727220) {
      if (param_1 == 0x636f6e73) {
        if (*(long *)(lVar1 + 0x1308) != 0) {
          uVar4 = FUN_10019aa5a(*(undefined8 *)(lVar1 + 0x1338));
          *(undefined4 *)(lVar1 + 0x1368) = uVar4;
          FUN_10017060f(*(undefined8 *)(lVar1 + 0x1310));
          *(undefined8 *)(lVar1 + 0x1310) = 0;
          FUN_100198282(*(undefined8 *)(lVar1 + 0x1308),*(undefined4 *)(lVar1 + 0x1368),
                        lVar1 + 0x1310);
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            FUN_1001705fc(*(undefined8 *)(lVar1 + 0x1310));
            return;
          }
          goto LAB_1004b6980;
        }
      }
      else if (param_1 == 0x64617461) {
        if (*(int *)(lVar1 + 0x1358) - 200U < 100) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            FUN_1004b7959(lVar1 + 0x7b8,param_2,(ulong)param_3 & 0xffffffff,1);
            return;
          }
          goto LAB_1004b6980;
        }
      }
      else if (param_1 == 0x646f6e65) {
        FUN_1004b906d(lVar1);
        return;
      }
    }
    else if (param_1 < 0x6e657272) {
      if (param_1 == 0x65727220) {
        *(int *)(lVar1 + 0x170) = (int)param_2;
      }
      else if (param_1 == 0x68656472) {
        *(undefined4 *)(lVar1 + 0x1358) = *(undefined4 *)(param_2 + 8);
        FUN_1004b3311(lVar1);
        iVar3 = FUN_100199e8f(*(undefined8 *)(lVar1 + 0x1338),lVar1 + 0x1340);
        *(bool *)(lVar1 + 0x1344) = iVar3 == 0;
        if (99 < *(int *)(param_2 + 8) - 200U) {
          if ((*(int *)(param_2 + 8) == 0x1a0) &&
             (((*(char *)(lVar1 + 0x778) != '\0' ||
               (((*(int *)(lVar1 + 0x140) == 0x66696c65 && (*(int *)(lVar1 + 0x1304) != 0x636f7079))
                && (*(int *)(lVar1 + 0x7d8) < 0)))) && (0 < *(long *)(lVar1 + 7000))))) {
            cVar2 = FUN_1004aa626(lVar1);
            if (cVar2 != '\0') {
              *(undefined1 *)(lVar1 + 0x210) = 2;
            }
            *(undefined8 *)(lVar1 + 7000) = 0;
            *(undefined8 *)(lVar1 + 0x1b78) = 0;
            *(undefined8 *)(lVar1 + 0x200) = 0;
            (**(code **)(**(long **)(lVar1 + 0x1258) + 0x108))(*(long **)(lVar1 + 0x1258),0);
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
              FUN_1004ad108(lVar1);
              return;
            }
          }
          else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            FUN_1004b76ff(lVar1,param_2);
            return;
          }
          goto LAB_1004b6980;
        }
        FUN_10017060f(*(undefined8 *)(lVar1 + 0x1318));
        *(undefined8 *)(lVar1 + 0x1318) = 0;
        FUN_100199fbe(*(undefined8 *)(lVar1 + 0x1338),lVar1 + 0x1318);
        uVar4 = FUN_1004b6a03(lVar1,param_2);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = uVar4;
        }
      }
    }
    else if (param_1 == 0x6e657272) {
      *(int *)(lVar1 + 0x174) = (int)param_2;
    }
    else if (param_1 == 0x72646972) {
      FUN_1004b6985(lVar1,param_2,param_3);
      return;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1004b6980:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

