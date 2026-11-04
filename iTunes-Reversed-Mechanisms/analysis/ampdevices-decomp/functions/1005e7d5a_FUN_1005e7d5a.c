// name: FUN_1005e7d5a
// address: 1005e7d5a

undefined8
FUN_1005e7d5a(long param_1,int param_2,long *param_3,long *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  long lVar2;
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
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  uVar6 = 0x4e2b;
  if (param_2 != 0) {
    for (lVar5 = *(long *)(param_1 + 0x60); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x6878)) {
      if (*(int *)(lVar5 + 0x6884) == param_2) {
        if (*(char *)(lVar5 + 4) == '\0') {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_4a = "device->isAppleMobileDevice";
            goto LAB_1005e7f8e;
          }
          goto LAB_1005e7e63;
        }
        lVar1 = *(long *)(lVar5 + 0x68a0);
        lVar2 = *(long *)(lVar5 + 0x68b0);
        if (1 < ((((uint)(*(long *)(lVar5 + 0x68a8) != 0) - (uint)(lVar1 == 0)) - (uint)(lVar2 == 0)
                 ) + 3) - (uint)(*(long *)(lVar5 + 0x6890) == 0)) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "(UInt32)(device->dfuDeviceRef != nullptr) + (UInt32)(device->recoveryDeviceRef != nullptr) + (UInt32)(device->restorableDeviceRef != nullptr) + (UInt32)(device->podRef != nullptr) <= 1"
            ;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar6 = 0x66a;
          break;
        }
        if (lVar2 == 0) {
          if (lVar1 == 0) {
            if (*(long *)(lVar5 + 0x68a8) == 0) {
              lVar5 = FUN_10055ae0c(*(long *)(lVar5 + 0x6890));
              if (lVar5 == 0) {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  local_4a = "mobileDeviceRef != nullptr";
                  goto LAB_1005e7f8e;
                }
                goto LAB_1005e7e63;
              }
              if (param_6 == (undefined8 *)0x0) goto LAB_1005e7e6c;
              uVar6 = FUN_1001705fc(lVar5);
              *param_6 = uVar6;
            }
            else {
              if (param_4 == (long *)0x0) goto LAB_1005e7e6c;
              lVar5 = FUN_1001705fc();
              *param_4 = lVar5;
            }
          }
          else {
            if (param_3 == (long *)0x0) {
LAB_1005e7e6c:
              uVar6 = 0xffffffce;
              break;
            }
            lVar5 = FUN_1001705fc(lVar1);
            *param_3 = lVar5;
          }
        }
        else if (param_5 == (undefined8 *)0x0) {
          iVar4 = _AMRestorableDeviceGetState(lVar2);
          if ((param_3 == (long *)0x0) || (iVar4 != 1)) {
            uVar6 = 0xffffffce;
            if ((param_4 == (long *)0x0) || (iVar4 != 2)) break;
            lVar5 = _AMRestorableDeviceCopyRecoveryModeDevice(*(undefined8 *)(lVar5 + 0x68b0));
            *param_4 = lVar5;
            if (lVar5 == 0) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_4a = "*outRecoveryDeviceRef != nullptr";
                goto LAB_1005e7f8e;
              }
              goto LAB_1005e7e63;
            }
          }
          else {
            lVar5 = _AMRestorableDeviceCopyDFUModeDevice(*(undefined8 *)(lVar5 + 0x68b0));
            *param_3 = lVar5;
            if (lVar5 == 0) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_4a = "*outDFUDeviceRef != nullptr";
LAB_1005e7f8e:
                local_4c = 0x822;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
LAB_1005e7e63:
              FUN_1001782e9(0,0);
              goto LAB_1005e7e6c;
            }
          }
        }
        else {
          uVar6 = FUN_1001705fc();
          *param_5 = uVar6;
        }
        uVar6 = 0;
        break;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

