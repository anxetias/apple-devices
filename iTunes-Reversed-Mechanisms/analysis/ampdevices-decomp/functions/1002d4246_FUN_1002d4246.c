// name: FUN_1002d4246
// address: 1002d4246

undefined8 FUN_1002d4246(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100634ebc(*(ulong *)(param_1 + 0x18) | 0xa270002000000);
  uVar4 = 0xffffffdd;
  if (iVar2 != 0) {
    do {
      iVar3 = _IOObjectConformsTo(iVar2,"IOMedia");
      if (iVar3 != 0) {
        if (DAT_1008c5d78 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "sDASession != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar5 = _DADiskCreateFromIOMedia
                          (*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,DAT_1008c5d78,iVar2);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "disk != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          _DADiskEject(lVar5,0,0,0);
        }
        FUN_10017060f(lVar5);
        _IOObjectRelease(iVar2);
        uVar4 = 0;
        goto LAB_1002d4381;
      }
      local_58 = 0;
      iVar3 = _IORegistryEntryGetChildEntry(iVar2,"IOService",&local_58);
      _IOObjectRelease(iVar2);
      if (iVar3 != 0) {
        if (local_58 != 0) {
          _IOObjectRelease(local_58);
        }
        break;
      }
      iVar2 = local_58;
    } while (local_58 != 0);
    uVar4 = 0xffffffdd;
  }
LAB_1002d4381:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

