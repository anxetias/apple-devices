// name: FUN_1004bc991
// address: 1004bc991

undefined1 FUN_1004bc991(long param_1,undefined8 *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 local_880;
  undefined2 local_87c;
  undefined2 uStack_87a;
  undefined6 local_878;
  undefined2 uStack_872;
  undefined1 local_870 [1056];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x778) != '\0') ||
     (((*(int *)(param_1 + 0x140) == 0x66696c65 && (*(int *)(param_1 + 0x1304) != 0x636f7079)) &&
      (*(int *)(param_1 + 0x7d8) < 0)))) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_888 = 0x8220202;
        uStack_884 = 0x7a0a90;
        local_880 = 1;
        local_87c = 0x822;
        uStack_87a = 0x3a4e;
        local_878 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_888,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1004bcaba;
    }
    FUN_1001c62d9(&local_888,0x438);
    local_888 = (undefined4)param_1;
    uStack_884 = (undefined4)((ulong)param_1 >> 0x20);
    if (*(char *)(param_1 + 0x779) == '\0') {
      iVar2 = FUN_1004b056a(param_1,0,local_450);
    }
    else {
      iVar2 = FUN_1004b013c(*(undefined8 *)(param_1 + 0x38),0,local_450);
    }
    uVar4 = 0;
    if (iVar2 != 0) goto LAB_1004bcaba;
    FUN_10017fdd8(local_450,2,3,FUN_1004bd472,&local_888);
    if ((char)local_880 != '\0') {
      if (param_2 == (undefined8 *)0x0) {
        FUN_10017060f();
      }
      else {
        *param_2 = CONCAT26(uStack_872,local_878);
      }
      uVar4 = 1;
      if (param_3 != (void *)0x0) {
        _memcpy(param_3,local_870,0x420);
      }
      goto LAB_1004bcaba;
    }
  }
  uVar4 = 0;
LAB_1004bcaba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

