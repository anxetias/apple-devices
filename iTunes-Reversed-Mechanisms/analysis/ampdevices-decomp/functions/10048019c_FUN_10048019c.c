// name: FUN_10048019c
// address: 10048019c

byte FUN_10048019c(uint param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar3 = 1;
  if (param_2 == 0) {
    bVar3 = 4;
    if (((param_1 & 0x200004) == 0) && (bVar3 = 1, (param_1 & 0x1821b1) == 0)) {
      if ((param_1 & 0xe42) == 0) {
        bVar5 = (param_1 & 0xc00008) != 0;
        bVar3 = bVar5 * '\b';
      }
      else {
        uVar4 = param_1 & 0x10000;
        bVar5 = (param_1 & 0x10000) == 0;
        if (!bVar5) {
          param_1 = 0;
        }
        bVar3 = (byte)(uVar4 >> 0xf) ^ 2;
      }
      if ((param_1 & 0x1065000) == 0 && (param_1 != 0 && !bVar5)) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = 
          "(inMediaKinds == kTrackInfoMediaKind_Unknown) || ((inMediaKinds & kTrackInfoMediaKind_ObsoleteDomain) != 0)"
          ;
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

