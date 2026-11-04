// name: FUN_1005d38c7
// address: 1005d38c7

undefined8 FUN_1005d38c7(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (undefined8 *)FUN_1001c6429(0x58);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "array != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    puVar2 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    *puVar2 = 0x161727461;
    *(undefined4 *)(puVar2 + 1) = param_2;
    lVar3 = FUN_100170720(DAT_1008c4d90,param_1,&DAT_10086f860);
    puVar2[9] = lVar3;
    uVar4 = 0;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "array->cfArray != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_1005d3cba(puVar2);
      uVar4 = 0xffffff94;
      puVar2 = (undefined8 *)0x0;
    }
  }
  *param_3 = puVar2;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

