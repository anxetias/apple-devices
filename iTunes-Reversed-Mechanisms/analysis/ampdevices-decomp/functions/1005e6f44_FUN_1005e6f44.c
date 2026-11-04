// name: FUN_1005e6f44
// address: 1005e6f44

ulong FUN_1005e6f44(int param_1,short param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x5ac) {
    lVar2 = 8;
    do {
      if (((*(uint *)((long)&DAT_10075c120 + lVar2) & 0xfffffffe) == 2) &&
         (*(short *)("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar2 + 0x2a) == param_2)) {
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
        goto LAB_1005e6fb9;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0x1928);
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "vendorID == USB_VENDOR_ID_APPLE";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
LAB_1005e6fb9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

