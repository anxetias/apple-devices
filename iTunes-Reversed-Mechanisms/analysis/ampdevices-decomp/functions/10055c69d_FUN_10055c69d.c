// name: FUN_10055c69d
// address: 10055c69d

void FUN_10055c69d(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_46;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10055ae0c();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "deviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x6df9) == '\0') {
    *(undefined1 *)(param_1 + 0x6df9) = 1;
    uVar4 = FUN_1001705fc(lVar3);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x6e10));
    *(undefined8 *)(param_1 + 0x6e10) = uVar4;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      pcVar6 = "refreshing";
      if (*(long *)(param_1 + 0x6e08) == 0) {
        pcVar6 = "creating";
      }
      iVar2 = _AMDeviceGetInterfaceType(*(undefined8 *)(param_1 + 0x6e10));
      pcVar5 = "UNKNOWN";
      if (iVar2 == 2) {
        pcVar5 = "WiFi";
      }
      local_5a = "USB";
      if (iVar2 != 1) {
        local_5a = pcVar5;
      }
      local_50 = *(undefined8 *)(param_1 + 0x6dc8);
      local_46 = *(undefined8 *)(param_1 + 0x6e10);
      local_68 = 0x8220402;
      local_5c = 0x822;
      local_52 = 0x842;
      local_48 = 0x800;
      local_64 = pcVar6;
      __os_log_impl(0x100000000,uVar4,1,
                    "support> %{public}s power assertion for %{public}s interface for device %{public}@ (%p)"
                    ,&local_68,0x2a);
    }
    uVar4 = FUN_10026394e(param_1);
    iVar2 = FUN_1005c664f(DAT_100756490,lVar3,&cf_AMDPowerAssertionTypeWirelessSync,
                          &cf_com_apple_iTunes,0,FUN_10055c930,uVar4);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_10055c860;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c = 0x400;
        local_5a = (char *)CONCAT44(local_5a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
    *(undefined1 *)(param_1 + 0x6df9) = 0;
    FUN_100264ec8(param_1);
  }
LAB_10055c860:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

