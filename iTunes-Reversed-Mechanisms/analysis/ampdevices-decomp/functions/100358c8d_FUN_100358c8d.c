// name: FUN_100358c8d
// address: 100358c8d

int FUN_100358c8d(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char local_6b8 [80];
  undefined1 local_668 [512];
  undefined1 local_468 [1056];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001cc3a4(0);
  iVar3 = FUN_100188aa6(param_1,local_468,1,0,0);
  if (iVar3 == 0) {
    iVar3 = FUN_10017d477(local_468,local_6b8,local_668);
    if (iVar3 == 0) {
      if (local_6b8[0] != '\0') {
        cVar2 = FUN_100358e4d(local_468,local_6b8,local_668);
        if (cVar2 == '\0') {
          if (*(char *)(param_2 + 0x24) == '\0') {
            uVar1 = *(undefined1 *)(param_2 + 0x27);
            *(undefined1 *)(param_2 + 0x27) = 0;
            iVar3 = FUN_10017fdd8(local_468,0x7fff,2,FUN_100359045,param_2);
            *(undefined1 *)(param_2 + 0x27) = uVar1;
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "false";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            iVar3 = -0x2b;
            FUN_1001782e9(0,0);
          }
          goto LAB_100358da9;
        }
      }
      iVar3 = FUN_1003590ea(local_468,local_6b8,local_668,param_2);
    }
  }
LAB_100358da9:
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

