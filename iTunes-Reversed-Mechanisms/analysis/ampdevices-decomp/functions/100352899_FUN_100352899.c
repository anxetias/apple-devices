// name: FUN_100352899
// address: 100352899

undefined8 FUN_100352899(undefined2 *param_1,undefined4 param_2,long *param_3)

{
  undefined2 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001c6429(0xb18);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "columnSet != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    *(undefined8 *)(lVar3 + 8) = 0x163736574;
    *(undefined4 *)(lVar3 + 0x10) = param_2;
    uVar1 = *param_1;
    *(undefined2 *)(lVar3 + 0x14) = uVar1;
    uVar4 = 0;
    bVar5 = (byte)uVar1;
    if (bVar5 < 4) {
      bVar5 = 0;
    }
    *(byte *)(lVar3 + 0x14) = bVar5;
    *(undefined4 *)(lVar3 + 0x18) = 1;
  }
  *param_3 = lVar3;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

