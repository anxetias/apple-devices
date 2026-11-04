// name: FUN_1003e22ad
// address: 1003e22ad

/* WARNING: Type propagation algorithm not settling */

int FUN_1003e22ad(long *param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_48;
  uint local_3c [2];
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = 4;
  iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_48,local_3c,param_3);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_48 == 4) {
        iVar2 = 0;
        if (param_2 != (uint *)0x0) {
          *param_2 = local_3c[0] >> 0x18 | (local_3c[0] & 0xff0000) >> 8 |
                     (local_3c[0] & 0xff00) << 8 | local_3c[0] << 0x18;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3c[1] = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "count == 4";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_3c + 1,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x27;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3c[1] = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_3c + 1,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

