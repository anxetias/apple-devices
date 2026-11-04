// name: FUN_100214a86
// address: 100214a86

ulong FUN_100214a86(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x21ac) != 0) {
    uVar3 = FUN_1005e9a2c();
    iVar2 = FUN_1005e7d5a(uVar3,*(undefined4 *)(param_1 + 0x21ac),0,0,&local_40,0);
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (iVar2 != 0) goto LAB_100214b14;
    if (*(char *)(param_1 + 0x2857) == '\x01') {
      iVar2 = _AMRestorableDeviceGetState(local_40);
      if (iVar2 != 1) {
        if (iVar2 != 0) goto LAB_100214b14;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure (expected to be true)";
          local_2c = 0x822;
          local_2a = "restorableDeviceState != kAMRestorableDeviceStateUnknown";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_100214b14;
      }
    }
  }
  uVar4 = 0;
LAB_100214b14:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

