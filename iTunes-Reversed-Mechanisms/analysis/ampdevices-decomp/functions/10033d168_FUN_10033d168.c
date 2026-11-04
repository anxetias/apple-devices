// name: FUN_10033d168
// address: 10033d168

/* WARNING: Type propagation algorithm not settling */

void FUN_10033d168(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != 0) {
    iVar2 = FUN_1001dd8b2(param_3,param_4,&local_58,local_4c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if ((long)local_4c[0] != 0) {
          if (param_5 == 0x100) {
            lVar3 = FUN_1001734b1(DAT_1008c4d90,local_58,(ulong)(long)local_4c[0] >> 1);
          }
          else if (param_5 == 0x8000100) {
            lVar3 = FUN_100173ab4();
          }
          else {
            lVar3 = FUN_100170dc5();
          }
          if (lVar3 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4c[1] = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "value != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_4c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_100171502(param_1,param_2,lVar3);
            FUN_10017060f(lVar3);
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_4c[1] = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

