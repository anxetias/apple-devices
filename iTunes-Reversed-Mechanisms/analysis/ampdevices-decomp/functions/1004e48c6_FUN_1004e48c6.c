// name: FUN_1004e48c6
// address: 1004e48c6

int FUN_1004e48c6(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined2 local_62;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004e49fa:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0xd2b2;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = "Assertion failure (expected to be true)";
        uStack_4c = 0x822;
        uStack_4a = 0xd710;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004e49fa;
    }
    iVar2 = -0x23;
    if (*(char *)(param_1 + 0x6ad7) != '\0') {
      cVar1 = FUN_10017cbd0(param_1 + 0x6b40);
      if (cVar1 != '\0') {
        iVar2 = FUN_100189f61(param_1 + 0x6b40,&local_58);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x153a0) = local_58;
          *(undefined4 *)(param_1 + 0x153a4) = (undefined4)uStack_54;
          *(undefined4 *)(param_1 + 0x153a8) = uStack_54._4_4_;
          *(uint *)(param_1 + 0x153ac) = CONCAT22(uStack_4a,uStack_4c);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_74 = *(undefined8 *)(param_1 + 0x153a0);
            local_6a = *(undefined8 *)(param_1 + 0x153a8);
            local_60 = *(undefined8 *)(param_1 + 0x153b0);
            local_78 = 0x8000300;
            local_6c = 0x800;
            local_62 = 0x800;
            __os_log_impl(0x100000000,uVar3,1,
                          "stats> totalDiskBytes = %llu, freeDiskBytes = %llu (reservedDiskBytes = %llu)"
                          ,&local_78,0x20);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

