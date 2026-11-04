// name: FUN_1005e42f6
// address: 1005e42f6

void FUN_1005e42f6(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar5 = *(long *)(param_1 + 0x40), lVar5 == 0)) {
LAB_1005e441e:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "artistInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_1005396f9(&DAT_1008c7b19,&DAT_10075bfd8,0);
    cVar1 = FUN_10053941c(param_2,uVar3);
    if (cVar1 != '\0') {
      uVar3 = *(undefined8 *)(lVar5 + 8);
      uVar2 = FUN_1005e4b52(lVar5);
      cVar1 = FUN_1004cfafa(uVar3,uVar2);
      if (cVar1 != '\0') {
        FUN_1005e44d8(param_1);
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 == 0) goto LAB_1005e441e;
      }
    }
    FUN_1001c62d9(&local_58,0x20);
    FUN_1005389ba(&local_58,0xb);
    uVar3 = FUN_1005396f9(&DAT_1008c7af8,&DAT_10075bfc0,0);
    FUN_100538877(local_78,uVar3);
    cVar1 = FUN_10053941c(param_2,&local_58);
    if (cVar1 != '\0') {
      FUN_100350de0(lVar5);
    }
    cVar1 = FUN_10053941c(param_2,local_78);
    if (cVar1 != '\0') {
      uVar3 = *(undefined8 *)(lVar5 + 8);
      uVar2 = FUN_1005e4b52(lVar5);
      cVar1 = FUN_1004cfafa(uVar3,uVar2);
      if (cVar1 == '\0') {
        *(byte *)(lVar5 + 0x5c) = *(byte *)(lVar5 + 0x5c) | 0x40;
      }
      else {
        lVar4 = FUN_1005e3fda(lVar5);
        if (lVar4 == param_1) {
          FUN_1005e36b2(lVar5,param_2);
        }
      }
    }
    FUN_1001c62d9(local_98,0x20);
    FUN_1005389ba(local_98,0x5a);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

