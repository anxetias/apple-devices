// name: FUN_10056d781
// address: 10056d781

int FUN_10056d781(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_d8 [3];
  uint local_cc;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10056a2be(param_1,local_d8,0x60);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_d8[0] == 0x616d7373) {
        if (local_cc == 0) {
          iVar2 = 0;
        }
        else {
          uVar5 = 0;
          do {
            iVar2 = FUN_10056ec13(param_1,&local_58);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  puVar4 = &local_78;
                  local_78 = 0x8220202;
                  local_74 = "Assertion failure";
                  local_6c = 0x400;
                  local_6a = iVar2;
                  goto LAB_10056d87b;
                }
              }
              break;
            }
            iVar2 = FUN_10056dc49(param_1,param_2,CONCAT22(uStack_4a,local_4c),
                                  local_54._4_4_ - (int)local_54);
            if (iVar2 != 0) break;
            uVar5 = uVar5 + 1;
            iVar2 = 0;
          } while (uVar5 < local_cc);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          uStack_4a = 0x8d59;
          uStack_48 = 0x7e;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        puVar4 = &local_58;
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        uStack_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056d87b:
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

