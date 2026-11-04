// name: FUN_1005f1788
// address: 1005f1788

void FUN_1005f1788(int param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  FUN_1001b7a44(local_58);
  puVar3 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != (undefined4 *)0x0 && param_1 != 0) {
    do {
      if (puVar3[0x1a21] == param_1) {
        if ((*(long *)(puVar3 + 0x1a24) == 0) || (*(char *)((long)puVar3 + 0x4ee) != '\0')) {
          uVar5 = *puVar3;
          iVar4 = 0x10cc0133;
          if (param_2 == '\0') {
            iVar4 = 0x10cc0132 - (uint)(puVar3[0xba] == 0);
          }
        }
        else {
          uVar5 = *puVar3;
          iVar4 = 0x10cc0130;
        }
        uVar2 = FUN_100416f20(uVar5,iVar4);
        FUN_1001b81f2(local_58,uVar2);
        FUN_1005e73f0(&local_48,puVar3);
        FUN_1004508b1(local_58,&local_48);
        FUN_1001b7a50(&local_48);
        goto LAB_1005f1875;
      }
      puVar3 = *(undefined4 **)(puVar3 + 0x1a1e);
    } while (puVar3 != (undefined4 *)0x0);
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005f1875:
  FUN_1001b7a50(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

