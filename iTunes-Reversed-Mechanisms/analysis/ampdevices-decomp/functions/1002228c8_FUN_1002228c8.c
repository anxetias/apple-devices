// name: FUN_1002228c8
// address: 1002228c8

ulong FUN_1002228c8(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "fileSpec != nullptr";
LAB_1002229ef:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 - 1U < 2) {
      pcVar5 = "Restore.plist";
      if (param_2 == 1) {
        pcVar5 = "Info.plist";
      }
      lVar2 = FUN_10022117b(param_1,pcVar5,0);
      if (lVar2 == 0 && param_2 == 2) {
        lVar2 = FUN_10022117b(param_1,"BuildManifest.plist",0);
      }
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_10017060f(lVar2);
        uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),1);
      }
      goto LAB_1002229ac;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(deviceSoftwareType == kDeviceSoftwareTypeUpdate) || (deviceSoftwareType == kDeviceSoftwareTypeRestore)"
      ;
      goto LAB_1002229ef;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1002229ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

