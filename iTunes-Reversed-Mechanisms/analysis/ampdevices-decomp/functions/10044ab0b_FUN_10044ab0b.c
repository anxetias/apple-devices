// name: FUN_10044ab0b
// address: 10044ab0b

undefined8 FUN_10044ab0b(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      pcVar5 = "trackInfo != nullptr";
LAB_10044ac49:
      uStack_3c = 0x822;
      uStack_44 = "Assertion failure";
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar5,0);
      uStack_38 = (undefined6)((ulong)pcVar5 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      cVar2 = FUN_10044acc3();
      if (cVar2 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = "Assertion failure";
          uStack_3c = 0x822;
          uStack_3a = 0xf1cb;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar3 = FUN_10041545e();
      lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
      uVar4 = FUN_1003b77e0(uVar3,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),&local_48
                           );
      if ((int)uVar4 == 0) {
        *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 0x20;
        *(undefined4 *)(param_2 + 0xd0c) = local_48;
        *(undefined4 *)(param_2 + 0xd10) = (undefined4)uStack_44;
        *(undefined4 *)(param_2 + 0xd14) = uStack_44._4_4_;
        *(uint *)(param_2 + 0xd18) = CONCAT22(uStack_3a,uStack_3c);
        uVar4 = 0;
      }
      goto LAB_10044ac06;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      pcVar5 = "itTrackInfoPriv != nullptr";
      goto LAB_10044ac49;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_10044ac06:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

