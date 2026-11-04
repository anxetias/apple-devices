// name: FUN_100571256
// address: 100571256

uint FUN_100571256(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_60 [24];
  undefined8 local_48;
  ulong local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x746b6864,param_2,0,local_60);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x70))(param_1,local_48);
    if (local_40 < 0x10) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = 
        "(foundAtomInfo.atomDataSize >= __builtin_offsetof(TrackHeader, trackID) + sizeof(SInt32))";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      uVar4 = *(uint *)(lVar2 + 0xc);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

