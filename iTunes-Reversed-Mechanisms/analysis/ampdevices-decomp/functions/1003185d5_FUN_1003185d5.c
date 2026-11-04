// name: FUN_1003185d5
// address: 1003185d5

undefined8 FUN_1003185d5(undefined8 param_1,char param_2,long param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xe97b;
      uStack_68 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_3,400);
    FUN_1001c62d9(&local_78,0x38);
    local_78 = CONCAT31(local_78._1_3_,param_4);
    local_70 = (undefined4)param_3;
    uStack_6c = (undefined2)((ulong)param_3 >> 0x20);
    uStack_6a = (undefined2)((ulong)param_3 >> 0x30);
    uVar2 = 0x74646465;
    if (param_2 == '\0') {
      uVar2 = 0x74646476;
    }
    uVar2 = FUN_1002f7c7e(param_1,uVar2,&local_78);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

