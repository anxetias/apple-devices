// name: FUN_100624d6c
// address: 100624d6c

undefined8 FUN_100624d6c(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *param_2;
  if (((*(byte *)(lVar3 + 0xc6) & 4) != 0) && ((*(uint *)(lVar3 + 0xc2) >> 8 & 1) == 0)) {
    *(uint *)(lVar3 + 0xc2) = *(uint *)(lVar3 + 0xc2) | 0x100;
    lVar3 = *(long *)(lVar3 + 0x58);
    cVar1 = *(char *)(lVar3 + 0x45);
    if (cVar1 == '\x01') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "albumTrackInstance->permLocationStatus != kTrackPermLocationStatus_Invalid";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      cVar1 = *(char *)(lVar3 + 0x45);
    }
    if (cVar1 == '\0') {
      lVar3 = FUN_1004eb21f(**(undefined8 **)(param_1 + 8),lVar3,
                            *(undefined1 *)(*(long *)(**(long **)(param_1 + 0x10) + 0x20) + 0x2b0),0
                            ,0,0,0,0,0);
      **(long **)(param_1 + 0x18) = **(long **)(param_1 + 0x18) + lVar3;
      **(long **)(param_1 + 0x20) = **(long **)(param_1 + 0x20) + lVar3;
    }
    **(undefined1 **)(param_1 + 0x28) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

