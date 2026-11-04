// name: FUN_10056df1e
// address: 10056df1e

int FUN_10056df1e(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (ulong)*(uint *)(param_1 + 4);
  if (uVar4 + 0x10 != param_2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inObjectSize == (inString->dataSize + sizeof( *inString ))";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = (ulong)*(uint *)(param_1 + 4);
  }
  iVar2 = FUN_1001dd1c1(param_4,param_1 + 0x10,uVar4,*(undefined4 *)(param_1 + 8),param_5);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

