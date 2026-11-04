// name: FUN_1005889cf
// address: 1005889cf

undefined8 FUN_1005889cf(int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined8 local_8a;
  undefined1 local_78 [32];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  if (param_1 != param_2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "magic == expectedMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = FUN_1001e3312(param_2,&local_58);
    uVar3 = FUN_1001e3312(param_1,local_78);
    FUN_1005881c4("ERROR: Magic mismatch: expected \'%{public}s\', found \'%{public}s\'",uVar2,uVar3
                 );
    uVar3 = FUN_100588160();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar2 = 0x1b5a;
    if (cVar1 != '\0') {
      uVar4 = FUN_1001e3312(param_2,&local_58);
      local_8a = FUN_1001e3312(param_1,local_78);
      local_98 = 0x8220202;
      local_8c = 0x822;
      local_94 = uVar4;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "ERROR: Magic mismatch: expected \'%{public}s\', found \'%{public}s\'",&local_98
                    ,0x16);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

