// name: FUN_1001cf857
// address: 1001cf857

int FUN_1001cf857(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined1 local_90 [8];
  char local_88;
  undefined8 local_78;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001cf3f5();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar5 = 0;
      do {
        iVar2 = FUN_1001cf495(param_1,uVar5,local_90);
        if (iVar2 != 0) goto LAB_1001cf954;
        iVar2 = FUN_1001cf9b2(param_2,param_1,local_90,uVar5);
        uVar3 = local_78;
        if ((iVar2 == 0) && (local_88 != '\0')) {
          FUN_10028593a(local_68,param_2);
          iVar2 = FUN_1001cf857(uVar3,local_68);
          if (local_48 == local_68) {
            lVar4 = 0x20;
          }
          else {
            lVar4 = 0x28;
            if (local_48 == (long *)0x0) goto LAB_1001cf93f;
          }
          (**(code **)(*local_48 + lVar4))();
        }
LAB_1001cf93f:
        if (iVar2 != 0) goto LAB_1001cf954;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x10));
    }
    iVar2 = 0;
LAB_1001cf954:
    FUN_1001cf778(param_1);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0474(iVar2,uVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

