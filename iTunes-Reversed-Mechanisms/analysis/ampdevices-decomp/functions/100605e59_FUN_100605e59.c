// name: FUN_100605e59
// address: 100605e59

byte FUN_100605e59(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(sourceTrackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    bVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = FUN_1002b1255(param_1,0);
    bVar7 = 0;
    if ((uVar4 & 0x1004000) == 0) {
      cVar2 = FUN_1002b5fcc(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_1002bdac0(param_1,0,param_4,1,1);
        bVar7 = 1;
        if (cVar2 != '\0') goto LAB_100605ee7;
        cVar2 = FUN_1002bd244(*(undefined8 *)(param_1 + 8));
        if (cVar2 != '\0') goto LAB_100605ee7;
        uVar3 = FUN_1002b1255(param_1,0);
        if (((((uVar3 >> 0x16 & 1) != 0) &&
             (pbVar1 = *(byte **)(param_1 + 0x10), (*pbVar1 & 8) != 0)) &&
            ((*(long *)(param_1 + 8) != 0 &&
             ((*(long *)(*(long *)(param_1 + 8) + 0x10) != 0 && (*(long *)(pbVar1 + 0x38) != 0))))))
           && (*(long *)(pbVar1 + 0xa8) != 0)) {
          local_58 = local_58 & 0xffffff00;
          lVar6 = FUN_1006061f2(param_1,param_2,param_3,1);
          if (lVar6 == 0) {
            bVar7 = (byte)local_58;
            goto LAB_100605ee7;
          }
        }
      }
      bVar7 = 0;
    }
  }
LAB_100605ee7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

