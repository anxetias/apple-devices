// name: FUN_1003703a4
// address: 1003703a4

void FUN_1003703a4(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e9de0(&DAT_1008bde18);
  if (DAT_1008bde60 == (code *)0x0) goto LAB_1003704c9;
  if (param_2 == 0x61666364) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,2);
    if (cVar1 != '\0') {
      iVar2 = _AMDeviceGetInterfaceType(param_1);
      pcVar4 = "UNKNOWN";
      if (iVar2 == 2) {
        pcVar4 = "WiFi";
      }
      pcVar5 = "USB";
      if (iVar2 != 1) {
        pcVar5 = pcVar4;
      }
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_60,uVar3);
      local_4a = local_60;
      pcVar4 = 
      "sending kAFCDeviceDetachedMessage for %{public}s interface for device %{public}@ (%p)";
      local_54 = pcVar5;
LAB_100370578:
      local_42 = 0x800;
      local_4c = 0x842;
      local_58 = 0x8220302;
      local_40 = param_1;
      __os_log_debug_impl(0x100000000,PTR___os_log_default_10082cb88,2,pcVar4,&local_58,0x20);
      FUN_1001ab006(&local_60);
    }
  }
  else if (param_2 == 0x61666361) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,2);
    if (cVar1 != '\0') {
      iVar2 = _AMDeviceGetInterfaceType(param_1);
      pcVar4 = "UNKNOWN";
      if (iVar2 == 2) {
        pcVar4 = "WiFi";
      }
      pcVar5 = "USB";
      if (iVar2 != 1) {
        pcVar5 = pcVar4;
      }
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_60,uVar3);
      local_4a = local_60;
      pcVar4 = 
      "sending kAFCDeviceAttachedMessage for %{public}s interface for device %{public}@ (%p)";
      local_54 = pcVar5;
      goto LAB_100370578;
    }
  }
  (*DAT_1008bde60)(param_2,param_1,param_3,DAT_1008bde68);
LAB_1003704c9:
  FUN_1001e9eb9(&DAT_1008bde18);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

