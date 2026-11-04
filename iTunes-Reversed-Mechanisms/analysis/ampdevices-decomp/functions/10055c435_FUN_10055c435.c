// name: FUN_10055c435
// address: 10055c435

void FUN_10055c435(long param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(char *)(param_1 + 0x6df8) = param_2;
  if (*(char *)(param_1 + 0x6df7) == '\0') {
    if (*(long *)(param_1 + 0x6e00) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_44 = "false";
        if (param_2 != '\0') {
          local_44 = "true";
        }
        local_48 = 0x8220102;
        __os_log_impl(0x100000000,uVar1,1,"airtraffic> sending PowerAssertion %{public}s",&local_48,
                      0xc);
      }
      puVar4 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
      if (param_2 != '\0') {
        puVar4 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
      }
      _ATHostConnectionSendPowerAssertion(*(undefined8 *)(param_1 + 0x6e00),*puVar4);
    }
  }
  else if (param_2 == '\0') {
    if (*(long *)(param_1 + 0x6e08) != 0) {
      FUN_100172ddf(*(undefined8 *)(param_1 + 0x6e18));
      FUN_10017060f(*(undefined8 *)(param_1 + 0x6e18));
      *(undefined8 *)(param_1 + 0x6e18) = 0;
      FUN_10017060f(*(undefined8 *)(param_1 + 0x6e08));
      *(undefined8 *)(param_1 + 0x6e08) = 0;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        iVar3 = _AMDeviceGetInterfaceType(*(undefined8 *)(param_1 + 0x6e10));
        pcVar5 = "UNKNOWN";
        if (iVar3 == 2) {
          pcVar5 = "WiFi";
        }
        local_44 = "USB";
        if (iVar3 != 1) {
          local_44 = pcVar5;
        }
        local_3a = *(undefined8 *)(param_1 + 0x6dc8);
        local_30 = *(undefined8 *)(param_1 + 0x6e10);
        local_48 = 0x8220302;
        local_3c = 0x842;
        local_32 = 0x800;
        __os_log_impl(0x100000000,uVar1,1,
                      "support> released power assertion for %{public}s interface for device %{public}@ (%p)"
                      ,&local_48,0x20);
      }
      FUN_10017060f(*(undefined8 *)(param_1 + 0x6e10));
      *(undefined8 *)(param_1 + 0x6e10) = 0;
    }
  }
  else if (*(long *)(param_1 + 0x6e08) == 0) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      FUN_10055c69d(param_1);
      return;
    }
    goto LAB_10055c698;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_10055c698:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

