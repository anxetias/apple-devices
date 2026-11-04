// name: FUN_1002e3f13
// address: 1002e3f13

ulong FUN_1002e3f13(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_R14;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid( inTrackInfo )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,1);
    unaff_R14 = 0;
    goto LAB_1002e3fe4;
  }
  uVar2 = FUN_100480d3e(param_1,PTR_cf_cloud_album_artwork_token_100844b18);
  FUN_1001aaef6(&local_38,uVar2);
  if (CONCAT44(uStack_34,local_38) == 0) {
LAB_1002e3f72:
    uVar2 = FUN_100480d3e(param_1,PTR_cf_cloud_album_artwork_url_100844b20);
    FUN_1001aaef6(&local_40,uVar2);
    if (local_40 == 0) {
LAB_1002e3fa5:
      unaff_R14 = 0;
    }
    else {
      lVar3 = FUN_1001ab132(&local_40);
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
      if (lVar3 == 0) goto LAB_1002e3fa5;
    }
    FUN_1001ab006(&local_40);
  }
  else {
    lVar3 = FUN_1001ab132(&local_38);
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
    if (lVar3 == 0) goto LAB_1002e3f72;
  }
  FUN_1001ab006(&local_38);
LAB_1002e3fe4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return unaff_R14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

