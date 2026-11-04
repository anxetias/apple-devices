// name: FUN_1005e666c
// address: 1005e666c

long FUN_1005e666c(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) goto LAB_1005e6721;
  if ((*(ushort *)(param_1 + 0x5c) & 2) != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) & 0xfffd;
    FUN_1001c334a(&local_48,0x7f0006);
    cVar1 = FUN_1005e65cc(param_1,&local_48);
    FUN_1001b7a50(&local_48);
    if (cVar1 == '\0') {
      FUN_1001b7b04(&local_48,"Various Artists");
      cVar1 = FUN_1005e65cc(param_1,&local_48);
      FUN_1001b7a50(&local_48);
      if (cVar1 != '\0') goto LAB_1005e6704;
      lVar3 = FUN_1005e401a(param_1);
      if ((lVar3 != 0) && (puVar5 = *(undefined8 **)(lVar3 + 0x58), puVar5 != (undefined8 *)0x0)) {
        while (lVar3 = *(long *)(puVar5[2] + 0x48), lVar3 == 0) {
          if ((puVar5[1] == 0) || (*(long *)(puVar5[1] + 0x10) == 0)) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "TrackInstanceIsValid(inTrackInstance)";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1005e670a;
          }
          puVar5 = (undefined8 *)*puVar5;
          while (puVar5 == (undefined8 *)0x0) {
            lVar3 = FUN_1005e3e6c();
            if (lVar3 == 0) goto LAB_1005e670a;
            puVar5 = *(undefined8 **)(lVar3 + 0x58);
          }
        }
        goto LAB_1005e6706;
      }
    }
    else {
LAB_1005e6704:
      lVar3 = 0;
LAB_1005e6706:
      *(long *)(param_1 + 0x48) = lVar3;
    }
LAB_1005e670a:
    if (*(long *)(param_1 + 0x48) != lVar2) {
      FUN_1005e5e26(param_1,8);
    }
  }
  lVar2 = *(long *)(param_1 + 0x48);
LAB_1005e6721:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

