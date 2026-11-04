// name: FUN_100530ca4
// address: 100530ca4

int FUN_100530ca4(long *param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 local_90 [8];
  code *local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  ulong local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "inSourceDataHandler != __null";
LAB_100530f72:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*param_2 != 0) {
      local_88 = param_3;
      iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_68);
      lVar4 = 0;
      if ((iVar3 == 0) && (0 < (long)local_68)) {
        lVar4 = FUN_1001c63e1(0x100000);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "buffer != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = -0x6c;
          lVar4 = 0;
        }
        else {
          local_80 = param_1;
          if ((long)local_68 < 1) {
            iVar3 = 0;
          }
          else {
            lVar7 = 0;
            uVar8 = local_68;
            local_78 = param_2;
            local_70 = param_4;
            local_60 = lVar4;
            do {
              lVar4 = local_60;
              uVar6 = 0x100000;
              if (uVar8 < 0x100000) {
                uVar6 = uVar8;
              }
              iVar3 = (**(code **)(*(long *)*local_80 + 0x90))
                                ((long *)*local_80,lVar7,local_60,uVar6,1,local_90);
              if (iVar3 != 0) {
                lVar4 = local_60;
                if (iVar3 != -0x80) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  lVar4 = local_60;
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_100531041:
                    local_4c = 0x400;
                    local_54 = "Assertion failure";
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                    lVar4 = local_60;
                  }
                }
                break;
              }
              iVar3 = (**(code **)(*(long *)*local_78 + 0x98))
                                ((long *)*local_78,lVar7,lVar4,uVar6,1,local_90);
              uVar8 = uVar8 - uVar6;
              if ((local_88 != (code *)0x0) &&
                 (iVar3 = (*local_88)((int)(((float)(long)(local_68 - uVar8) * DAT_10070bcf0) /
                                           (float)(long)local_68) & 0xffff,local_70), iVar3 != 0)) {
                lVar4 = local_60;
                if (iVar3 != -0x80) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  lVar4 = local_60;
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100531041;
                  }
                }
                break;
              }
              lVar7 = lVar7 + uVar6;
              lVar4 = local_60;
            } while (0 < (long)uVar8);
          }
        }
      }
      goto LAB_100530e83;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "inDestDataHandler != __null";
      goto LAB_100530f72;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
  lVar4 = 0;
LAB_100530e83:
  FUN_1001c64c1(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

