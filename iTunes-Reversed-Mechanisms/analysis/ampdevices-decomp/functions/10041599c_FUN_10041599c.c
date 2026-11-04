// name: FUN_10041599c
// address: 10041599c

/* WARNING: Removing unreachable block (ram,0x000100415aba) */

int FUN_10041599c(long param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "dbConnectionData != nullptr";
LAB_100415b3b:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != (uint *)0x0) {
      uVar6 = *param_2;
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (param_3 == (uint *)0x0) {
        local_5c = 0;
      }
      else {
        uVar1 = *param_3;
        local_5c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
      iVar4 = FUN_100070b70(param_2,uVar6,1);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (iVar4 == 0) {
        iVar4 = FUN_100033270(*puVar2,param_2,uVar6,param_3,local_5c,1,param_5);
      }
      goto LAB_100415af1;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "pSinfAtomHeader1 != nullptr";
      goto LAB_100415b3b;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_100415af1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

