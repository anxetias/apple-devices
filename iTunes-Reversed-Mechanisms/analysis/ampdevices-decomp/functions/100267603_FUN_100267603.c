// name: FUN_100267603
// address: 100267603

int FUN_100267603(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "clientRef != nullptr";
LAB_10026790d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 != 0) {
      if (DAT_1008a2e80 == (undefined8 *)0x0) {
        DAT_1008a2e80 = (undefined8 *)FUN_1001c629e(0x38,&DAT_100711c6e);
        if (DAT_1008a2e80 == (undefined8 *)0x0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_4a = "sSupportContext != nullptr";
            goto LAB_1002679f2;
          }
          goto LAB_100267881;
        }
        *(undefined1 *)(DAT_1008a2e80 + 6) = 1;
        iVar4 = FUN_1002d3670();
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            iVar4 = FUN_10055b16f();
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                *(undefined1 *)(DAT_1008a2e80 + 6) = 0;
                goto LAB_100267652;
              }
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100267a4b;
              }
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100267a4b:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        lVar5 = 0;
      }
      else {
LAB_100267652:
        lVar5 = FUN_1001c629e(0x20,&DAT_100711c6e);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_4a = "client != nullptr";
LAB_1002679f2:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
LAB_100267881:
          lVar5 = 0;
          FUN_1001782e9(0,0);
          iVar4 = -0x6c;
        }
        else {
          *(undefined4 *)(lVar5 + 8) = 0x636c6965;
          *(long *)(lVar5 + 0x10) = param_1;
          *(undefined8 *)(lVar5 + 0x18) = param_2;
          if (DAT_1008a2e80 == (undefined8 *)0x0) {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "sSupportContext != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar4 = -0x6c;
            goto LAB_10026795a;
          }
          FUN_1001ea897(lVar5,DAT_1008a2e80 + 3);
          puVar2 = (undefined8 *)*DAT_1008a2e80;
          while (puVar2 != (undefined8 *)0x0) {
            FUN_10026394e(puVar2);
            if (*(char *)((long)puVar2 + 0x34) != '\0') {
              uVar6 = 0x72617761;
              if (*(char *)((long)puVar2 + 0x9de) == '\0') {
                FUN_10026473a(puVar2,0x706f6461,0,lVar5);
                uVar6 = 0x706f646d;
                if (*(char *)((long)puVar2 + 0x36) != '\0') goto LAB_1002676e5;
              }
              else {
LAB_1002676e5:
                FUN_10026473a(puVar2,uVar6,0,lVar5);
              }
              FUN_100264854(puVar2);
            }
            puVar1 = (undefined8 *)*puVar2;
            FUN_100264ec8(puVar2);
            puVar2 = puVar1;
          }
          iVar4 = 0;
        }
      }
      *param_3 = lVar5;
      goto LAB_10026795a;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "callbackProc != nullptr";
      goto LAB_10026790d;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_10026795a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

