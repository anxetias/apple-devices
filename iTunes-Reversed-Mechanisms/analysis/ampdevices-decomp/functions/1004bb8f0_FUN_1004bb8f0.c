// name: FUN_1004bb8f0
// address: 1004bb8f0

void FUN_1004bb8f0(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char local_6b;
  char local_6a;
  char local_69;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6a = '\0';
  local_69 = '\0';
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x6c656166)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "( ((inLeafInfo) != __null) && ((inLeafInfo)->magic == \'leaf\') )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004bb997;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (((*(uint *)(lVar5 + 0x124) & 0x200004) == 0 && (*(uint *)(lVar5 + 0x124) & 0xc62) != 0) &&
     (*(int *)(lVar5 + 0x120) == 0x73746f72)) {
    iVar3 = FUN_1004ad1f3(lVar5,0x3f,&local_68);
    if (iVar3 != 0) goto LAB_1004bb964;
    cVar2 = FUN_1001e4e7c("m4v",&local_68,1);
    if (cVar2 == '\0') goto LAB_1004bb964;
    lVar5 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar5 + 0x120) == 0x73746f72) {
      local_6b = '\0';
      FUN_1004abe13(lVar5,0x706c7764,&local_6b);
      if (local_6b != '\0') {
        FUN_1004abe13(*(undefined8 *)(param_1 + 0x18),0x6472646f,&local_6a);
        FUN_1004abe13(*(undefined8 *)(param_1 + 0x18),0x64726370,&local_69);
        if (local_69 == '\0' && local_6a == '\0') {
          lVar5 = *(long *)(param_1 + 0x18);
          goto LAB_1004bba83;
        }
        goto LAB_1004bba93;
      }
      goto LAB_1004bb964;
    }
LAB_1004bba83:
    if (*(int *)(lVar5 + 0x140) != 0x66696c65) goto LAB_1004bb964;
LAB_1004bba93:
    uVar1 = 1;
  }
  else {
LAB_1004bb964:
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x13e1) = uVar1;
  *(undefined1 *)(param_1 + 0x13e0) = 1;
LAB_1004bb997:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

