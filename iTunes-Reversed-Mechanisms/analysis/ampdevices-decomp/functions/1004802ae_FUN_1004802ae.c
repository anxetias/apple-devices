// name: FUN_1004802ae
// address: 1004802ae

ulong FUN_1004802ae(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    for (puVar2 = *(undefined8 **)(param_1 + 0x58); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (((puVar2[1] != 0) && (*(long *)(puVar2[1] + 0x10) != 0)) &&
         ((*(byte *)((long)puVar2 + 0x4a) & 0x10) != 0)) {
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
        goto LAB_10048031c;
      }
    }
    uVar4 = 0;
  }
LAB_10048031c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

