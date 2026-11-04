// name: FUN_1005d24c1
// address: 1005d24c1

undefined8 FUN_1005d24c1(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (undefined8 *)FUN_1001c629e(0xb0,&DAT_100711c6e);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "artwork != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    *puVar2 = 0x161727477;
    *(undefined4 *)(puVar2 + 1) = param_2;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 9) = param_1;
    uVar3 = 0;
  }
  *param_3 = puVar2;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

