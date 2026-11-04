// name: FUN_1005b9af6
// address: 1005b9af6

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_1005b9af6(long param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  uint local_5c [3];
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "connection != __null";
LAB_1005b9eaa:
      uStack_4c = 0x822;
      uStack_4e = 0;
      uStack_50 = 1;
      local_5c[2] = 0x7a0a90;
      local_5c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar5 = FUN_10016aaf8(DAT_1008c4d90,param_2,0);
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_4a = "requestData != __null";
LAB_1005b9ef8:
          uStack_4e = 0;
          uStack_50 = 1;
          local_5c[2] = 0x7a0a90;
          uStack_4c = 0x822;
          local_5c[1] = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
LAB_1005b9d0b:
        lVar7 = 0;
LAB_1005b9d0e:
        FUN_1001782e9(0,0);
        puVar10 = (undefined1 *)0xffffff94;
        goto LAB_1005b9e50;
      }
      uVar6 = FUN_100170f3b(lVar5);
      uVar2 = FUN_100170ef7(lVar5);
      local_5c[0] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar3 = FUN_1005ba1c3(param_1,local_5c,4);
      if (uVar3 != 4) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_5c[1] = 0x8220202;
          local_5c[2] = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          local_4a = "result == sizeof(networkLength)";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        puVar10 = (undefined1 *)0xffffffec;
        if (cVar1 != '\0') {
          local_5c[1] = 0x4000100;
          local_5c[2] = uVar3;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDServiceConnectionSendBuffer failed (%d)",local_5c + 1,8);
        }
        lVar7 = 0;
        goto LAB_1005b9e50;
      }
      uVar3 = FUN_1005ba1c3(param_1,uVar6,uVar2);
      if (uVar3 == uVar2) {
        uVar2 = FUN_1005ba2a3(param_1,local_5c,4);
        if (uVar2 != 4) {
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          puVar10 = (undefined1 *)0xffffffed;
          if (cVar1 != '\0') {
            local_5c[1] = 0x4000200;
            uStack_50 = 0x400;
            uStack_4e = 4;
            uStack_4c = 0;
            pcVar9 = "AMDServiceConnectionReceiveBuffer returned %d, expected %u";
            uVar6 = 0xe;
            local_5c[2] = uVar2;
            goto LAB_1005b9e27;
          }
          goto LAB_1005b9e4d;
        }
        uVar2 = local_5c[0] >> 0x18 | (local_5c[0] & 0xff0000) >> 8;
        uVar3 = uVar2 | (local_5c[0] & 0xff00) << 8 | local_5c[0] << 0x18;
        if (0x1ffffff < uVar3) {
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          puVar10 = (undefined1 *)0xffffffff;
          if (cVar1 != '\0') {
            pcVar9 = "AMDServiceConnectionReceiveBuffer returned unexpected response length %u";
            local_5c[2] = uVar3;
            goto LAB_1005b9dbf;
          }
          goto LAB_1005b9e4d;
        }
        lVar7 = FUN_100170ea9(DAT_1008c4d90,uVar3);
        if (lVar7 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_4a = "responseData != __null";
            goto LAB_1005b9ef8;
          }
          goto LAB_1005b9d0b;
        }
        FUN_10017103d(lVar7,uVar3);
        lVar8 = FUN_100170f7f(lVar7);
        if (lVar8 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_5c[1] = 0x8220202;
            local_5c[2] = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            local_4a = "responseBuffer != __null";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16)
            ;
          }
          goto LAB_1005b9d0e;
        }
        uVar4 = FUN_1005ba2a3(param_1,lVar8,uVar3);
        if ((int)uVar4 < 1 || uVar4 != uVar3) {
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          puVar10 = (undefined1 *)0xffffffed;
          if (cVar1 != '\0') {
            local_5c[1] = 0x4000200;
            uStack_50 = 0x400;
            uStack_4e = (undefined2)uVar2;
            uStack_4c = (undefined2)(uVar3 >> 0x10);
            local_5c[2] = uVar4;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDServiceConnectionReceiveBuffer returned %d, expected %u",
                                local_5c + 1,0xe);
          }
        }
        else {
          puVar10 = (undefined1 *)0x0;
          if (param_4 != (long *)0x0) {
            lVar8 = _CFDictionaryGetTypeID();
            if (lVar8 == param_3) {
              lVar8 = FUN_10016a9bd(DAT_1008c4d90,lVar7,0,0);
            }
            else {
              lVar8 = _CFArrayGetTypeID();
              if (lVar8 != param_3) {
                lVar8 = _CFDataGetTypeID();
                if (lVar8 == param_3) {
                  lVar8 = FUN_1001705fc(lVar7);
                  *param_4 = lVar8;
                }
                else {
                  puVar10 = (undefined1 *)0xffffffce;
                }
                goto LAB_1005b9e50;
              }
              lVar8 = FUN_10016a887(DAT_1008c4d90,lVar7,0,0);
            }
            puVar10 = (undefined1 *)0x0;
            *param_4 = lVar8;
            if (lVar8 == 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_5c[1] = 0x8220202;
                local_5c[2] = 0x7a0a90;
                uStack_50 = 1;
                uStack_4e = 0;
                uStack_4c = 0x822;
                local_4a = "*response != __null";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              puVar10 = &DAT_ffffff30;
            }
          }
        }
      }
      else {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        puVar10 = (undefined1 *)0xffffffec;
        if (cVar1 != '\0') {
          pcVar9 = "AMDServiceConnectionSendBuffer failed (%d)";
          local_5c[2] = uVar3;
LAB_1005b9dbf:
          local_5c[1] = 0x4000100;
          uVar6 = 8;
LAB_1005b9e27:
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar9,local_5c + 1,
                              uVar6);
        }
LAB_1005b9e4d:
        lVar7 = 0;
      }
LAB_1005b9e50:
      FUN_10017060f(lVar7);
      FUN_10017060f(lVar5);
      goto LAB_1005b9e60;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "request != __null";
      goto LAB_1005b9eaa;
    }
  }
  FUN_1001782e9(0,0);
  puVar10 = (undefined1 *)0xffffffce;
LAB_1005b9e60:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

